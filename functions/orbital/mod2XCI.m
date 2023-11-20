function [x, y, z] = mod2XCI(p, f, g, h, k, L)
%MOD2XCI Translates modified equinoctial elements into a position vector.
%   Given the orbit parameters around an astronomical body, the output
%   vector provides the positions of the orbiting object in the
%   astronomical body's centred intertial frame (BCI).
    a2 = h.^2 - k.^2;
    s2 = 1 + h.^2 + k.^2;
    q = 1 + f.*cos(L) + g.*sin(L);
    r = p./q;

    x = r./s2 .* ( cos(L)+a2.*cos(L)+2*h.*k.*sin(L) );
    y = r./s2 .* ( sin(L)-a2.*sin(L)+2*h.*k.*cos(L) );
    z = 2*r./s2 .* ( h.*sin(L)-k.*cos(L) );
end