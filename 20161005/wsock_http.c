#include<stdio.h>
#include<string.h>
#include <winsock2.h>
#include <Ws2tcpip.h>
#pragma comment (lib, "Ws2_32.lib")
int main()
{
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);
    SOCKET client_socket = socket(AF_INET, SOCK_STREAM, 0);

    if (client_socket == INVALID_SOCKET)
    {
        perror("socket create fail");
        return(1);
    }

    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(80);
    inet_pton(AF_INET, "202.179.177.21", &server_addr.sin_addr); // www.naver.com

    /******************** connect*******************************/
    int rc = connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr));
    if (rc<0)
    {
        perror("connect fail");
        return 2;
    }

    /******************** send ********************************/
    char tosend[] = "GET / HTTP/1.1\nHOST:www.navrer.com\n\n";
    char buff[4096];
    // +1==string 의 NULL을 포함시키기 위함
    send(client_socket, tosend, strlen(tosend) + 1, 0);

    /******************** recv ********************************/
    while (1)
    {
        memset(buff, 0, sizeof(buff));
        rc = recv(client_socket, buff, sizeof(buff), 0);
        printf("%s\n", buff);
        if (rc == 0) break;
    }

    /******************** close *******************************/
    closesocket(client_socket);
    WSACleanup();

    system("pause");

    
    return 0;
}
