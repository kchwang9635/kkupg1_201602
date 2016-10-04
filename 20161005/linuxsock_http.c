/* socket client */
#include<stdio.h>
#include<string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include<unistd.h>

int main()
{
    int client_socket = socket(AF_INET, SOCK_STREAM,0);
    if(client_socket < 0)
    {
        perror("socket create fail");
        return(1);
    }

    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(80);
    server_addr.sin_addr.s_addr = inet_addr("202.179.177.21"); // www.naver.com

    int rc = connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr));
    if(rc<0)
    {
        perror("connect fail");
        return 2;
    }

    char tosend[] = "GET / HTTP/1.1\nHOST:www.naver.com\n\n";
    char buff[4096];
    write(client_socket, tosend, strlen(tosend)+1); // +1==string 의 NULL을 포함시키기 위함
    printf("sizeof buff= %ld\n\n" , sizeof(buff));
    while(1)
    {
        memset(buff, 0, sizeof(buff));
        rc = read(client_socket, buff, sizeof(buff));
        printf("%s\n" , buff);
        if(rc==0) break;
    }

    close(client_socket);

    return 0;
}
