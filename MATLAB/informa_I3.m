
clear
close all

Ts=0.005;


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
    
 
%%% Lead/lag is modeled as (1 + Tb s) / (1 + Tc s) as in original file




parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_true = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)


%%%%%% Model with only V excitation

 
load('Capacitive_simulation.mat');

 
 t=time;   
 
 
 V=V-mean(V(1:60));
  Efd=Efd-mean(Efd(1:60));
  Ifd=Ifd-mean(Ifd(1:60));
 
 
  
  data=iddata(Efd,[V Ifd],Ts);
  
  modelv=oe(data,[[3 1],[3 1],[0 0]]);
  
  figure(1); bode(modelv,'r',sys_true,'b');
  
  figure(2); compare(data,modelv,'r',sys_true,'b')
  


%%%%% Data excited with V AND r


load('Capacitive_simulation_r.mat');


  
   V_r=V_r-mean(V_r(1));
  Efd_r=Efd_r-mean(Efd_r(1));
  Ifd_r=Ifd_r-mean(Ifd_r(1));

data_r=iddata(Efd_r,[V_r Ifd_r],Ts);
  
  model=oe(data_r,[[3 3],[3 3],[0 0]]);
  
  figure(3); bode(modelv,'r',sys_true,'b',model,'k');
  
  figure(4); compare(data_r,modelv,'r',sys_true,'b',model,'k')
  
  
  
  
 
opt = greyestOptions;
opt.InitialState = 'zero';
 opt.Display = 'on'; 
 model_grey=greyest(data_r,sys_true,opt);



%%% The grey-box is a worst representation of the data than the OE model
   
Efdsimu=lsim(sys_true,[V_r,Ifd_r],t);

figure(5); bode(modelv,'r',sys_true,'b',model,'k',model_grey,'m');
%   
figure(6); compare(data_r,modelv,'r',sys_true,'b',model,'k',model_grey,'m');



Vrmax = 4.35;
    Vrmin = -3.825;

Efd0 = Efd(1);
    XadIfd = Ifd(1);
    Vinit = V(1);

VV_basis=(Efd0 + Kc*XadIfd)/Kr + Vinit;


Te=Ts;

%%% You can then simulate the simulink model simulink_AVR where two models
%%% of the AVR are simulated (one witout and one with the anti windup
%%% nonlinearities
%%%%% As we see, there are some discrepancies between Efd_r and the
%%%%% simulated Efd as well as Efdsimu (see above). This is may be due to continuous-discrete conversions, initial conditions (the AVR
%%% has a high time-constant (100s). These differences could explain that
%%% sys_true does not explain so well the data (even if it is stange)
%%%%% However, we see that the anti windup do not play a
%%%%% role in the simulation. We can neglect them.

%%%% 


