load gen_ss

%% Set up GENSAL parameters
Xd=1.183;
R_a=0.017637/(10.5^2/30);
H=2.137;
Xpd=0.371;
%D=0;
Xq=0.62;
Xppd=0.215;
Xppq=0.241;
Tpd0=3.77;
Tppd0= 0.0552;
Tppq0=0.0823;
Xl=0.1;
S10 = 0.1;
S12 = 0.4;

%%

%% Saturation parameters
K1d=(Xpd - Xppd)*(Xd - Xpd)/(Xpd - Xl)^2;
K2d=(Xpd - Xl)*(Xppd - Xl)/(Xpd - Xppd);
K3d=(Xppd - Xl)/(Xpd - Xl);
K4d=(Xpd - Xppd)/(Xpd - Xl);

%%
[num,den] = ss2tf(A,B,C,D)

sys = ss(A,B,C,D)

bode(sys)