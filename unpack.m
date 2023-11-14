function [varargout] = unpack(x)
%UNPACK Summary of this function goes here
%   Detailed explanation goes here
    xcell = num2cell(x,1);
    for k = 1:nargout
        varargout{k} = xcell{k};
    end
end