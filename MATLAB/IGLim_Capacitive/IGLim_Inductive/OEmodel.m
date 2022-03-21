%% Preprocess 
y=[];
out = unique(out,'rows');
for x = 1:length(out)
if (mod(out(x,1),0.005)==0); 
 y = [y;out(x,:)];
end
end
y=y(1:1201,:);
Ifd_r = y(:,3);
Efd_r = y(:,4);
V_r = y(:,2);
P_r = y(:,5);
Q_r = y(:,6);
signal_in = [V_r,Ifd_r];
save('Inductive_simulation_r.mat')
%%
clear
close all

Ts=0.005;
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
  
%% parameters for tuned system
    Tr = 0.010499019;
    Tb1 = 1.9503186;
    Tc1 = 20.95836;
    Tb2 = 0.02010442;
    Tc2 = 0.0051994643;
    Kr = 300.3848;
    Krbis=-500;
    T1 = 0.00563033;
    Kc = 0.97507545;
    
sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
%%
load Inductive_simulation

t=time;   
V=V-mean(V(1:60));
Efd=Efd-mean(Efd(1:60));
Ifd=Ifd-mean(Ifd(1:60));
  
data=iddata(Efd,[V Ifd],Ts);
 
modelv=oe(data,[[3 3],[3 3],[0 0]]);
  
figure(1); bode(modelv,'r',sys_true,'b', sys_est,'g');
  
figure(2); compare(data,modelv,'r',sys_true,'b', sys_est,'g')
zpk(d2c(modelv))
zpk(sys_true)

%%
load Inductive_simulation_r
t=time;   
V_r=V_r-mean(V_r(1:60));
Efd_r=Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);
  
model=oe(data_r,[[3 3],[3 3],[1 1]]);
  
figure(3); bode(sys_true,'b',model,'k', sys_est,'g');
figure(4); compare(data_r,sys_true,'b',model,'k')
  
zpk(d2c(model))
zpk(sys_true)

%%
opt = greyestOptions;
opt.InitialState = 'zero';
opt.Display = 'on'; 
model_grey=greyest(data_r,sys_true,opt);



%%% The grey-box is a worst representation of the data than the OE model
   
Efdsimu=lsim(sys_true,[V_r,Ifd_r],t);

figure(5); bode(modelv,'r',sys_true,'b',model,'k',model_grey,'m');
%   
figure(6); compare(data_r,sys_true,'b',model,'k',model_grey,'m');