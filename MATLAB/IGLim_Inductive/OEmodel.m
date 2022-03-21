%% Preprocess 
y1=[];
out = unique(out,'rows');
for x = 1:length(out-1)
if (mod(out(x,1),0.005)==0)&&(out(x,1)~=out(x+1,1))
 y1 = [y1;out(x,:)];
end
end
% y=y(1:1201,:);
Ifd_r = y1(:,3);
Efd_r = y1(:,4);
V_r = y1(:,2);
time =y1(:,1);
% % P_r = y(:,5);
% % Q_r = y(:,6);
signal_in = [V_r,Ifd_r];
save('Inductive_simulation_r.mat','V_r','Ifd_r','Efd_r','time')
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
%%

%%%% Estimated parameters

    Tr = 0.01063;
    Tb1 = 2.09;
    Tc1 = 20.02718;
    Tb2 = 0.019997;
    Tc2 = 0.005061;
    Kr = 439.7373;
    Krbis=-439.7373;
    T1 = 0.0057;
    Kc = 1.08390;
    
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
 
%%
load Inductive_simulation

t=time;   
V=V-mean(V(1:60));
Efd=Efd-mean(Efd(1:60));
Ifd=Ifd-mean(Ifd(1:60));



data=iddata(Efd,[V Ifd],Ts);
 
modelv=oe(data,[[3 3],[3 3],[0 0]]);
  
figure(1); bode(sys_true,'b',modelv,'r',sys_est,'g'); legend('True system','OE model','RaPId model');
  
figure(2); compare(data,sys_true,'b',modelv,'r',sys_est,'g');legend('Data','True System','OE model','RaPId model');
zpk(d2c(modelv))
zpk(sys_true)
figure(); plot(t, V, 'LineWidth',2);xlabel('Time (s)');ylabel('Voltage (p.u.)')
%%
load Inductive_simulation_r
t=time;   
V_r=V_r-mean(V_r(1:60));
Efd_r=Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);
  
model=oe(data_r,[[3 3],[3 3],[1 1]]);
  
figure(3); bode(sys_true,'b',model,'r',sys_est,'g'); legend('True system','OE model','RaPId model');
figure(4); compare(data_r,sys_true,'b',model,'r',sys_est,'g');legend('Data','True System','OE model','RaPId model');
  
zpk(d2c(model))
zpk(sys_true)
figure(); plot(t, V_r, 'LineWidth',2);xlabel('Time (s)');ylabel('Voltage (p.u.)')
%%
opt = greyestOptions;
opt.InitialState = 'zero';
opt.Display = 'on'; 
model_grey=greyest(data_r,sys_true,opt);


%%% The grey-box is a worst representation of the data than the OE model
   
Efdsimu=lsim(sys_true,[V_r,Ifd_r],t);

figure(5); bode(sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('True system','OE model','Estimated model','Grey box model');
%   
figure(6); compare(data_r,sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('Data','True System','OE model','RaPId model','Grey box model');

%%
load Inductive_simulink_r_ode8
t=time;   
V_r=V_r-mean(V_r(1:60));
Efd_r=Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);

y =lsim(sys_true,[V_r Ifd_r],t,'foh');
z = lsim(sys_est,[V_r Ifd_r],t,'foh');
fit_true =100*(1- norm(Efd_r-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)));


model=oe(data_r,[[3 3],[3 3],[0 0]]);
  
figure(7); bode(sys_true,'b',model,'r',sys_est,'g'); legend('True system','OE model','RaPId model');
figure(8); compare(data_r,sys_true,'b',model,'r',sys_est,'g');legend('Data','True System','OE model','RaPId model');
  
zpk(d2c(model))
zpk(sys_true)
