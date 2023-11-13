function [p, f, g, h, k, L] = class2mod(a, e, i, w, O, theta)
%CLASS2MOD Transforms the classical equinoctial orbital elements to the
%modified ones.
%   Where:
%       p       = semiparameter
%       a       = semimajor axis
%       e       = orbital eccentricity
%       i       = orbital inclination
%       w       = argument of perigee
%       O       = right ascension of the ascending node
%       theta   = true anomaly
%       L       = true longitude
    p = a*(1-e^2);
    f = e*cos(w+O);
    g = e*sin(w+O);
    h = tan(i/2)*cos(O);
    k = tan(i/2)*sin(O);
    L = O+w+theta;
end