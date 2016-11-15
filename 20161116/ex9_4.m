clear;clc;
disp('====== ex9-4 1) ======')
for x=1:9, y(x)=x*6; , end, y
x=1; while x<10, y(x)=x*6;,x=x+1;, end, y

disp('====== ex9-4 2) ======')
x=[1:9];
y2 = x'*x
disp('====== ex9-4 3) ======')
d = input('단수를 입력하세요:');
[1:9]' * d
disp('====== ex9-4 4) ======')
for x=1:9
    fprintf('%d x %d = %d\n', d, x, y(x))
end