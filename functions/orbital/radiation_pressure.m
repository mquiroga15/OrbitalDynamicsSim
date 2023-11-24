function rad_force_vec = radiation_pressure(sat_prmt,jdate,area,ref)
%RADIATION_PRESSURE Calculates the force in N that the sun applies.
%   RADIATION_PRESSURE takes in the mod_param of the satellite in the
%   orbiting body's centred intertial frame, its area (m^2) and its
%   reflectivity (from 0 to 1 with no units).
% CHANGE DOC!! ^^^^
    sun_power = 3.852e26; % W
    c = 299792458; % m/s
    mu = 3.986004418e14; % m3 s-2. Earth's gravitational parameter

    earth_sun_pos = planetEphemeris(jdate,'Sun','Earth','432t','km')*1000;
    % [p, f, g, h, k, L] = unpack(sat_prmt(end,:));
    p = sat_prmt(1);
    f = sat_prmt(2);
    g = sat_prmt(3);
    h = sat_prmt(4);
    k = sat_prmt(5);
    L = sat_prmt(6);
    [x, y, z] = mod2XCI(p, f, g, h, k, L);
    sat_pos = [x, y, z]';
    [u, v, w] = mod2VCI(p, f, g, h, k, L, mu);
    sat_vel = [u, v, w]';
    pos = earth_sun_pos + sat_pos;
    flux_at_pos = sun_power/(4*pi*norm(pos)^2); % W/m^2
    rad_force = (1+ref)*(flux_at_pos/c)*area*1e2; % N
    rad_force_vec = rad_force*pos/norm(pos); % N (vector)
    rad_force_vec = CI2LVLH(rad_force_vec,sat_pos,sat_vel);
end