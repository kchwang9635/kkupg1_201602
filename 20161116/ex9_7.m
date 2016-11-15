clear; clc; clf;
x=-pi:0.01:pi;

ysin = sin(x).^2;
ycos = cos(x);
for k=1:length(x)
    if x(k) < 0
        y(k) = ysin(k);
    else
        y(k) = ycos(k);
    end
end
plot(x, y)

figure

for k=1:length(x)
    if x(k) < 0
        y(k) = sin(x(k)).^2;
    else
        y(k) = cos(x(k));
    end
end

plot(x, y)

