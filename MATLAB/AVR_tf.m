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

%%

s = tf('s');

trans = 1/(Tr*s+1);
LL1 = (Tc1*s+1)/(Tb1*s+1);
LL2 = (Tc2*s+1)/(Tb2*s+1);
lag = 1/(T1*s+1);

tot = lag*trans*LL1*LL2*Kr; %V to summing junction with Ifd

a = tot.numerator{1,1};
b = tot.denominator{1,1};

ifd = -Kc*lag;

c = ifd.numerator{1,1};
d = ifd.denominator{1,1};

num = {a,c};
den = {b,d};

sys = tf(num,den);
bode(sys(1))
[A,B,C,D] = tf2ss(cell2mat(num),cell2mat(den))
state_space = ss(A,B,C,D)
figure;
bode(state_space)
%%

A = [-Tb1/Tc1   0   0   0;
    0   -Tb2/Tc2    0   0;
    0   0   0   0;
    0   0   0   1/Tr;];
B = [0  0;
     0  0;
     0 -Kc/T1;
     -1/Tr 0];
C = [0  0   1   1];
D = [-0.625 0];

AVR_ss = ss(A,B,C,D);
bode(AVR_ss,'b');
figure(2)
bode(sys(2))