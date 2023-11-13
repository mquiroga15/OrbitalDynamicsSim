function axisPlot(fig,col)
%AXISPLOT Creates visible axes at 0.
%   AXISPLOT(FIG,COL) plots lines of COL colour crossing the origin. It
%   applies this to the specified figure with FIG.
    figure(fig)
    xlim = get(gca, 'xlim');
    ylim = get(gca, 'ylim');
    zlim = get(gca, 'zlim');
    hold on
    lineType = [col, '--'];
    plot3(xlim, [1 1]*0, [1 1]*0, lineType,'HandleVisibility','off')
    plot3([1 1]*0, ylim, [1 1]*0, lineType,'HandleVisibility','off')
    plot3([1 1]*0, [1 1]*0, zlim, lineType,'HandleVisibility','off')  % Plot ‘zline’ At (zx,zy)
    hold off
end