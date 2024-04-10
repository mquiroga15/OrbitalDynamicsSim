function [sma,ecc,inc,RAAN,aop] = state2class(r, v)
%STATE2CLASS Transforms ICRF state vectors into classical orbital elements.

mu = 3.986004418e14; % m3 s-2
% Orbital momentum
h = cross(r, v);
% Eccentricity vector and eccentricity
eVec = cross(v, h) / mu - r/norm(r);
ecc = norm(eVec);
% RAAN pointing vector and RAAN
n = cross([0, 0, 1], h);
if n(2) >= 0
    RAAN = acos(n(1)/norm(n));
else
    RAAN = 2*pi - acos(n(1)/norm(n));
end
% Inclination
inc = acos(h(3)/norm(h));
% Argument of periapsis
if eVec(3) >= 0
    aop = acos( dot(n, eVec) / (norm(n)*norm(eVec)) );
else
    aop = 2*pi - cos( dot(n, eVec) / (norm(n)*norm(eVec)) );
end
% Semi-major axis
sma = 1 / ( 2/norm(r) - norm(v)^2/mu );