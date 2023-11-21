function rad_force = radiation_pressure(x,y,z,area,ref)
%RADIATION_PRESSURE Calculates the force in N that the sun applies.
%   RADIATION_PRESSURE takes in the position of the satellite (m), its area
%   (m^2) and its reflectivity (from 0 to 1 with no units).
    sun_power = 3.852e26; % Watts
    c = 299792458;
    flux_at_pos = sun_power/(4*pi*norm([x, y, z])^2); % W/m^2
    rad_force = (1+ref)*(flux_at_pos/c)*area;
end