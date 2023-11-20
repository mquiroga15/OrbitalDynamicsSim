function [u, v, w] = mod2VCI(p, f, g, h, k, L, mu)
%MOD2VCI Summary of this function goes here
%   Detailed explanation goes here
    a2 = h.^2 - k.^2;
    s2 = 1 + h.^2 + k.^2;
    u = -1./s2 * sqrt(mu/p) * ( sin(L)+a2*sin(L)-2*h*k*cos(L)+g-2*f*h*k+a2*g);
    v = -1./s2 * sqrt(mu/p) * ( -cos(L)+a2*cos(L)+2*h*k*sin(L)-f+2*g*h*k+a2*f );
    w = 2/s2 * sqrt(mu/p) * ( h*cos(L)+k*sin(L)+f*h+g*k );
end