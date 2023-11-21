function rad_force_vec = radiation_pressure(pos,area,ref)
%RADIATION_PRESSURE Calculates the force in N that the sun applies.
%   RADIATION_PRESSURE takes in the position of the satellite (m), its area
%   (m^2) and its reflectivity (from 0 to 1 with no units).
    sun_power = 3.852e26; % W
    c = 299792458; % m/s
    flux_at_pos = sun_power/(4*pi*norm(pos)^2); % W/m^2
    rad_force = (1+ref)*(flux_at_pos/c)*area; % N
    rad_force_vec = rad_force*pos/norm(pos); % N (vector)
end