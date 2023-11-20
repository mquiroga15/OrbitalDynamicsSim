function [a, e, i, w, O, theta] = mod2class(p, f, g, h, k, L)
%MOD2CLASS Transforms the modified equinoctial orbital elements to the
%classical ones.
%   Where:
%       p       = semiparameter
%       a       = semimajor axis
%       e       = orbital eccentricity
%       i       = orbital inclination
%       w       = argument of perigee
%       O       = right ascension of the ascending node
%       theta   = true anomaly
%       L       = true longitude
    a = p/(1-f^2-g^2);
    e = sqrt(f^2+g^2);
    i = 2*atan(sqrt(h^2+k^2));
    w = atan(g/f)-atan(k/h);
    O = atan2(k,h);
    theta = L-O-w;
end