function [varargout] = unpack(x)
%UNPACK Slices variables stored in matrix form.
%   Given a matrix A = [x1 x2 x3 ...], the function divides the individual
%   variables using the syntax [x1 x2 x3 ...] = unpack(A).
    xcell = num2cell(x,1);
    for k = 1:nargout
        varargout{k} = xcell{k};
    end
end