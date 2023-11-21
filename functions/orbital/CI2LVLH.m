function vec_LVLH = CI2LVLH(vec_CI, pos, vel)
%CI2LVLH Transforms vectors from a planet's centred intertial frame to the
%satellite's LVLH frame.
%   All inputs must be given as column vectors. The output is also a column
%   vector.
    radial = pos/norm(pos);
    normal = cross(pos,vel)/norm(cross(pos,vel));
    tangential = cross(normal, radial);
    transform = [radial'; tangential'; normal'];
    vec_LVLH = transform*vec_CI;
end