
clear
close all

load('Capacitive_simulation_r.mat');
load('Capacitive_simulation.mat'); Efd_r=Efd; Ifd_r=Ifd; V_r=V;
Ts=0.005;
t=time;

%%
 %%%%%% Definition of the model for the grey-box identification

odefun = 'AVR_greyest2';


%%%% True parameters

Tr = 0.01;
    Tb1 = 2;
    Tc1 = 20;
    Tb2 = 0.02;
    Tc2 = 0.005;
    Kr = 500;
    Krbis=-500;
    T1 = 0.005;
    Kc = 1;
    
  

parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_true = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
 Efdsimu=lsim(sys_true,[V_r,Ifd_r],t); 
    
Vrmax = 4.35;
    Vrmin = -3.825;

Efd0 = Efd_r(1);
    XadIfd = Ifd_r(1);
    Vinit = V_r(1);

VV_basis=(Efd0 + Kc*XadIfd)/Kr + Vinit;


Te=Ts;

    