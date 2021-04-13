
function [A,B,C,D]=AVR_greyest(Tr,Tc1,Tb1,Tc2,Tb2,Kr,T1,Kc,Ts)



% %% AVR parameters
% Tr = 0.01;
% Tc1 = 2;
% Tb1 = 20;
% Tc2 = 0.02;
% Tb2 = 0.005;
% Kr = 500;
% T1 = 0.005;
% Kc = 1;
% Vrmax = 4.35;
% Vrmin = -3.825;

% %% AVR parameters - Capacitive
% Tr = 0.01;
% Tc1 = 1.49432157800359;
% Tb1 = 20.00657894736842105;
% Tc2 = 0.00362976406533575;
% Tb2 = 0.00657894736842105;
% Kr = 200;
% T1 = 0.00657894736842105;
% Kc = 0.3997207818109294;
% Vrmax = 4.35;
% Vrmin = -3.825;

%%

s = tf('s');

trans = 1/(Tr*s+1);
LL1 = (Tc1*s+1)/(Tb1*s+1);
LL2 = (Tc2*s+1)/(Tb2*s+1);
lag = (1)/(T1*s+1);


K1=trans*LL1*LL2*Kr;
K2=lag;

sys=ssbal(ss(K2*[K1,-Kc]));


[A,B,C,D]=ssdata(sys);

end

%%

