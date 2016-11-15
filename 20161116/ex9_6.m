clear; clc; clf;
%x=-pi:0.01:pi;
x=linspace(-pi, pi);
plot(x, sin(x), x, cos(x))

figure
plot(x/pi, sin(x), x/pi, cos(x))

figure
x=linspace(-1, 1);
plot(x, sin(x*pi), x, cos(x*pi))
