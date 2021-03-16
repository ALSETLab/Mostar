%% AVR parameters
Tr = 0.01;
Tc1 = 2;
Tb1 = 20;
Tc2 = 0.02;
Tb2 = 0.005;
Kr = 500;
T1 = 0.005;
Kc = 1;
Vrmax = 4.35;
Vrmin = -3.825;

%% AVR parameters - Capacitive
Tr = 0.01;
Tc1 = 1.49432157800359;
Tb1 = 20.00657894736842105;
Tc2 = 0.00362976406533575;
Tb2 = 0.00657894736842105;
Kr = 200;
T1 = 0.00657894736842105;
Kc = 0.3997207818109294;
Vrmax = 4.35;
Vrmin = -3.825;

%%

s = tf('s');

trans = 1/(Tr*s+1);
LL1 = (Tc1*s+1)/(Tb1*s+1);
LL2 = (Tc2*s+1)/(Tb2*s+1);
lag = (1)/(T1*s+1);

efd = lag*trans*LL1*LL2*Kr; %V to summing junction with Ifd

a = efd.numerator{1,1};
b = efd.denominator{1,1};

ifd = Kc*lag;

c = ifd.numerator{1,1};
d = ifd.denominator{1,1};

num = {a,c};
den = {b,d};

sys = tf(num,den);
bode(sys(1),'g')
[A,B,C,D] = tf2ss(a,b);
state_space_V = ss(A,B,C,D);

[A1,B1,C1,D1] = tf2ss(c,d);
state_space_Efd = ss(A1,B1,C1,D1);
% figure;
% bode(state_space)

%%

