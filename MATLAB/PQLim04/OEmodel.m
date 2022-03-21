% %% Preprocess 
% y=[];
% out = unique(out,'rows');
% for x = 1:length(out)
% if (mod(out(x,1),0.005)==0); 
%  y = [y;out(x,:)];
% end
% end
% Ifd_r = y(:,3);
% Efd_r = y(:,4);
% V_r = y(:,2);
% P_r = y(:,5);
% Q_r = y(:,6);
% signal_in = [V_r,Ifd_r];
% save('PQLim4_simulation_r.mat')

%% PQLIM04
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

    Tr = 0.0103;
    Tb1 = 2.09;
    Tc1 = 19.87;
    Tb2 = 0.0199;
    Tc2 = 0.00604;
    Kr = 504.324;
    Krbis=-504.324;
    T1 = 0.00507;
    Kc = 1.002;
    
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
 
%%
load PQLim4_simulation

t=time;   
V=V-mean(V(1:60));
Efd=Efd-mean(Efd(1:60));
Ifd=Ifd-mean(Ifd(1:60));



data=iddata(Efd,[V Ifd],Ts);
 
modelv=oe(data,[[3 3],[3 3],[0 0]]);
  
figure(1); bode(sys_true,'b',modelv,'r',sys_est,'g');legend('Mostar system','OE model','RaPId model','FontSize',13);set(gca,'FontSize',13);xlabel('Frequency','FontSize',13);ylabel('Magnitude (dB); Phase (deg)','FontSize',13); title('Bode Diagram','FontSize',16)

  
figure(2); compare(data,sys_true,'b',modelv,'r',sys_est,'g');legend('Data','Mostar System','OE model','RaPId model');
zpk(d2c(modelv))
zpk(sys_true)
figure(); plot(t, V, 'LineWidth',2);xlabel('Time (s)');ylabel('Voltage (p.u.)')
%%
opt = greyestOptions;
opt.InitialState = 'zero';
opt.Display = 'on'; 
model_grey=greyest(data,sys_true,opt);


%%% The grey-box is a worst representation of the data than the OE model
   
Efdsimu=lsim(sys_true,[V,Ifd],t);

figure(3); bode(sys_true,'b',modelv,'r',sys_est,'g',model_grey,'k');legend('True system','OE model','Estimated model','Grey box model');
%   
figure(4); compare(data,sys_true,'b',modelv,'r',sys_est,'g',model_grey,'k');legend('Data','True system','OE model','RaPId model','Grey box');
%%
load PQLim4_simulation_r
t=time;   
V_r=V_r-mean(V_r(1:60));
Efd_r=Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);

y =lsim(sys_true,[V_r Ifd_r],t,'foh');
z = lsim(sys_est,[V_r Ifd_r],t,'foh');
fit_true =100*(1- norm(Efd_r-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)));


model=oe(data_r,[[3 3],[3 3],[1 0]]);
  
figure(5); bode(sys_true,'b',model,'r',sys_est,'g'); legend('Mostar system','OE model','RaPId model');
%figure(6); compare(data_r,sys_true,'b',model,'r',sys_est,'g');legend('Data','True System','OE model','RaPId model');
 figure(6); compare(data_r,model,'r');legend('Data','OE model');  
zpk(d2c(model))
zpk(sys_true)
figure(); plot(t, V_r, 'LineWidth',2);xlabel('Time (s)');ylabel('Voltage (p.u.)')
%%
load PQLim4_simulink_r_ode8


t=time;   
V_r=V_r-mean(V_r(1:60));

Efd_r = Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);

y =lsim(sys_true,[V_r Ifd_r],t,'foh');
z =lsim(sys_est,[V_r Ifd_r],t,'foh');

fit_true =100*(1- norm(Efd_r-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)));

model2=oe(data_r,[[3 3],[3 3],[0 0]]);  

figure(7); bode(sys_true,'b',model2,'r',sys_est,'g'); legend('Mostar system','OE model','RaPId model');
figure(8); compare(data_r,sys_true,'b',model2,'r',sys_est,'g');legend('Data','True System','OE model','RaPId model');
  
zpk(d2c(model))
zpk(sys_true)

%%
opt = greyestOptions;
opt.InitialState = 'zero';
opt.Display = 'on'; 
model_grey=greyest(data_r,sys_true,opt);


%%% The grey-box is a worst representation of the data than the OE model
   
z=lsim(model_grey,[V_r,Ifd_r],t,'foh');
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)));
figure(9); bode(sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('Mostar system','OE model','RaPId model','Grey box model','FontSize',13);set(gca,'FontSize',13);xlabel('Frequency','FontSize',13);ylabel('Magnitude (dB); Phase (deg)','FontSize',13); title('Bode Diagram','FontSize',16)
%   
figure(10); compare(data_r,sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('Data','True system','OE model','RaPId model','Grey box');


%% real measurements
load('PQ_LIM_04.mat','Efd','Ifd','time')

load('PQLim4_simulation.mat','V')


%%%% Estimated parameters

    Tr = 0.0103;
    Tb1 = 2.09;
    Tc1 = 21.87;
    Tb2 = 0.0199;
    Tc2 = 0.00604;
    Kr = 504.324;
    Krbis=-494.324;
    T1 = 0.00507;
    Kc = 0.987002;
    
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)

Efd = 2.8394*Efd;
Ifd = 2.8394*Ifd;

t=time;   
V=V-mean(V(1:60));

Efd = (Efd-mean(Efd(1:60)));
Ifd=(Ifd-mean(Ifd(1:60)));
data=iddata(Efd,[V Ifd],Ts);

model3=oe(data,[[3 3],[3 3],[0 0]]); 

opt = greyestOptions;
opt.InitialState = 'zero';
opt.Display = 'on'; 
model_grey=greyest(data,sys_true,opt);
%%

%%%% Estimated parameters

    Tr = 0.0091063;
    Tb1 = 2.73403079;
    Tc1 = 16.043;
    Tb2 = 0.020138;
    Tc2 = 0.00501;
    Kr = 495.7373;
    Krbis=-480.33;
    T1 = 0.00515;
    Kc = 01.0390;
   
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)

y =lsim(sys_true,[V Ifd],t,'foh');
z =lsim(sys_est,[V Ifd],t,'foh');
a =lsim(model_grey,[V Ifd],t,'foh');

figure(11); bode(sys_true,'b',sys_est,'g',model_grey,'k');legend('Mostar system','RaPId model','Grey box model');set(gca,'FontSize',13)
figure(12); plot(t,Efd,'r',t,y,'b',t,z,'g',t,a,'k');legend('Data','Mostar system','RaPId model','Grey box model');xlabel('Time (s)'); ylabel('Field voltage, Efd (p.u.)');set(gca,'FontSize',13)
%%
y =lsim(sys_true,[V Ifd],t,'foh');
z =lsim(sys_est,[V Ifd],t,'foh');
a =lsim(model_grey,[V Ifd],t,'foh');

fit_true =100*(1- norm(Efd-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd-z)/norm(z-mean(z)));
fit_grey = 100*(1- norm(Efd-a)/norm(a-mean(a)));
y=0.4*y;
z=0.4*z;
figure(11); bode(sys_true,'b',sys_est,'g',model_grey,'k');legend('Mostar system','RaPId model','Grey box model');
figure(12); plot(t,Efd,t,y,t,z,t,a);legend('Data','Mostar system','RaPId model','Grey box model');