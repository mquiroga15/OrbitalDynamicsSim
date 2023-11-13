function dot_mod_param = orbital_system(t, mod_param, mu, pert)
%ORBITAL_SYSTEM Short description here.
%   Detailed explanation goes here

    % assign individual parameters
    % -orbital elements
    p = mod_param(1);
    f = mod_param(2);
    g = mod_param(3);
    h = mod_param(4);
    k = mod_param(5);
    L = mod_param(6);
    % -additional elements
    a2 = h^2 - k^2;
    s2 = 1 + h^2 + k^2;
    q = 1 + f*cos(L) + g*sin(L);
    r = p./q;
    % time evolution
    pdot = 2*p/q * sqrt(p/mu) * pert(2);
    fdot = sqrt(p/mu) * ( pert(1)*sin(L) + ((q+1)*cos(L)+f)*pert(2)/q ...
        - (h*sin(L)-k*cos(L))*g*pert(3)/q );
    gdot = sqrt(p/mu) * ( -pert(1)*cos(L) + ((q+1)*sin(L)+g)*pert(2)/q ...
        + (h*sin(L)-k*cos(L))*g*pert(3)/q );
    hdot = sqrt(p/mu) * s2*pert(3)*cos(L)/2*q;
    kdot = sqrt(p/mu) * s2*pert(3)*sin(L)/2*q;
    Ldot = sqrt(p*mu) * (q/p)^2 + ...
        1/q * sqrt(p/mu)*(h*sin(L)-k*cos(L))*pert(3);

    dot_mod_param = [pdot fdot gdot hdot kdot Ldot]';
end