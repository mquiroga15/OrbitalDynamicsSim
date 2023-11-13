hold on

threshold = .5; % please change this as needed
% Obtain the limits of the axes
yp = get(gca,'Ylim');
xp = get(gca,'Xlim');
% Use the axes x and Y limits to find the co-ordinates for the patch
x1 = [ xp(1) xp(2) xp(2) xp(1)];
y1 = [ yp(1) yp(1) yp(2) yp(2)];
z1 = ones(1,numel(x1))* threshold;  % creates a 1x4 vector representing the Z coordinate values
p = patch(x1,y1,z1, 'w','HandleVisibility','off');
% Set the Face and edge transparency to 0.2 using the following properties
set(p,'facealpha',0.05)
set(p,'edgealpha',0.05)

hold off
clear threshold yp xp x1 y1 z1 p