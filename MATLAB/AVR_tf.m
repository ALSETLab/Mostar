%% AVR parameters
Tr = 0.01;
Tb1 = 2;
Tc1 = 20;
Tb2 = 0.02;
Tc2 = 0.005;
Kr = 500;
T1 = 0.005;
Kc = 1;
Vrmax = 4.35;
Vrmin = -3.825;
Efd0 = Efd(1);
XadIfd = Ifd(1);
Vinit = V(1);
PSS= 0;
VR0 = Efd0 + Kc*XadIfd;
%% AVR parameters - Capacitive
Tr = 0.01;
Tc1 = 1;
Tb1 = 10;
Tc2 = 0.1;
Tb2 = 0.1;
Kr = 500;
T1 = 0.005;
Kc = 1;
Vrmax = 4.35;
Vrmin = -3.825;
PSS= 0;
%%

s = tf('s');

Vref = (Efd0 + Kc*XadIfd)/Kr + Vinit;
trans = 1/(Tr*s+1);
LL1 = (Tb1*s+1)/(Tc1*s+1);
LL2 = (Tb2*s+1)/(Tc2*s+1);
lag = (1)/(T1*s+1);

efd = lag*(Vref-trans+PSS)*LL1*LL2*Kr; %V to summing junction with Ifd

a = efd.numerator{1,1};
b = efd.denominator{1,1};

ifd = Kc*lag;

c = ifd.numerator{1,1};
d = ifd.denominator{1,1};

num = {c,a};
den = {d,b};

sys = tf(num,den);
bode(sys,'r',linsys1,'b')
[A,B,C,D] = tf2ss(a,b);
state_space_V = ss(A,B,C,D);

[A1,B1,C1,D1] = tf2ss(c,d);
state_space_Efd = ss(A1,B1,C1,D1);
% figure;
% bode(state_space)

%%

