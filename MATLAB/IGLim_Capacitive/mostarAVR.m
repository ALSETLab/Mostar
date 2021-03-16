
clear 
close all

Ts=0.005;
load AVR_IG_Capacitive
load AVR_ss
%load Generator_ss

sys.c=[0 0 1 0];

Gavr=sys;
t=time;



y=Efd-0.3388;
u=V-0.9744;

%  y(89)=y(92);
%  y(90)=y(92);
%  y(91)=y(92);


%y=y(1:500);
%u=u(1:500);


data=iddata(y,u,Ts);


model=oe(data,[2 2 0]);

figure(1)
compare(data,model);




figure(3)
bode(Gavr,'r',model,'sd',2)