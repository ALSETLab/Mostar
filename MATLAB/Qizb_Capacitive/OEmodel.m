% % % % %% Preprocess 
%  y=[];
% out = unique(out,'rows');
% 
% 
% for x = 1:length(out-1)
% if (mod(out(x,1),0.005)==0)&&(out(x,1)~=out(x+1,1))
%  y = [y;out(x,:)];
% 
% end
% end

% time = y(:,1);
% P = y(:,2);
% Q = y(:,3);
% Efd = y(:,4);
% Ifd = y(:,5);
% V = y(:,6);
% % % % 
% % %y=y(1:1501,:);
% % Efd_r = y(:,4);
% % Ifd_r = y(:,3);
% % % Efd_r = y(:,4);
% % V_r = y(:,2);
% % time = y(:,1);
% % % % % P_r = y(:,5);
% % % % % Q_r = y(:,6);
% % % signal_in = [V_r,Ifd_r];
% % save('Qizb_capacitive_simulation_r.mat','Efd_r','time','V_r','Ifd_r')
% % load exc_r
% % r=r(1:1201);
% % Ifd_r = Ifd+r;


%% Qizb Capacitive
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

    Tr = 0.009988;
    Tb1 = 2.134;
    Tc1 = 20.03;
    Tb2 = 0.02014;
    Tc2 = 0.00501;
    Kr = 493.43;
    Krbis=-493.43;
    T1 = 0.00506;
    Kc = 0.976;
    
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
 
%%
load Qizb_capacitive_simulation

t=time;   
V=V-mean(V(1:60));
Efd=Efd-mean(Efd(1:60));
Ifd=Ifd-mean(Ifd(1:60));



data=iddata(Efd,[V Ifd],Ts);
 
modelv=oe(data,[[3 3],[3 3],[0 0]]);
  
figure(1); bode(sys_true,'b',modelv,'r',sys_est,'g'); legend('Mostar system','OE model','RaPId model');
  
figure(2); compare(data,sys_true,'b',modelv,'r',sys_est,'g');legend('Data','Mostar System','OE model','RaPId model');
zpk(d2c(modelv))
zpk(sys_true)
figure(); plot(t, V, 'LineWidth',2);xlabel('Time (s)');ylabel('Voltage (p.u.)')
%%
load Qizb_capacitive_simulation_r
t=time;   
V_r=V_r-mean(V_r(1:60));
Efd_r=Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);

y =lsim(sys_true,[V_r Ifd_r],t,'foh');
z = lsim(sys_est,[V_r Ifd_r],t,'foh');
fit_true =100*(1- norm(Efd_r-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)));


model=oe(data_r,[[4 4],[4 4],[0 0]]);
  
figure(3); bode(sys_true,'b',model,'r',sys_est,'g'); legend('Mostar system','OE model','RaPId model');
figure(4); compare(data_r,sys_true,'b',model,'r',sys_est,'g');legend('Data','Mostar System','OE model','RaPId model');
  
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

figure(5); bode(sys_true,'b',model,'r',sys_est,'g',model_grey,'k');ylim([-3.825,4.35]);legend('Mostar system','OE model','RaPId model','Grey box model','FontSize',13);set(gca,'FontSize',13);xlabel('Frequency','FontSize',13);ylabel('Magnitude (dB); Phase (deg)','FontSize',13); title('Bode Diagram','FontSize',16)   
%figure(6); compare(data_r,sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('Data','True system','OE model','RaPId model','Grey box model');
figure(6); compare(data_r,model,'r');legend('Data','OE model'); 
%%
load Qizb_capacitive_simulink_r_ode8
t=time;   
V_r=V_r-mean(V_r(1:60));
Efd_r=Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);

y =lsim(sys_true,[V_r Ifd_r],t,'foh');
z = lsim(sys_est,[V_r Ifd_r],t,'foh');
fit_true =100*(1- norm(Efd_r-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)));


model=oe(data_r,[[5 5],[5 5],[0 0]]);
  
figure(7); bode(sys_true,'b',model,'r',sys_est,'g'); legend('Mostar system','OE model','RaPId model');
figure(8); compare(data_r,sys_true,'b',model,'r',sys_est,'g');legend('Data','Mostar System','OE model','RaPId model');
  
zpk(d2c(model))
zpk(sys_true)


%%
opt = greyestOptions;

opt.Display = 'on'; 
model_grey=greyest(data_r,sys_true,opt);




%%% The grey-box is a worst representation of the data than the OE model
   
Efdsimu=lsim(sys_true,[V_r,Ifd_r],t);

figure(9); bode(sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('Mostar system','OE model','RaPId model','Grey box model','FontSize',13);set(gca,'FontSize',13);xlabel('Frequency','FontSize',13);ylabel('Magnitude (dB); Phase (deg)','FontSize',13); title('Bode Diagram','FontSize',16)   
%   
figure(10); compare(data_r,sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('Data','Mostar system','OE model','RaPId model','Grey box model');


%% real measurements
load('Qizb_Capacitive.mat','Efd','Ifd','time')

load('Qizb_capacitive_simulation.mat','V')

t=time;   
V=V-mean(V(1:60));

Efd = 2.78*Efd;
Ifd = 2.78*Ifd;

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
    Tb1 = 2.03403079;
    Tc1 = 20.982718;
    Tb2 = 0.020138;
    Tc2 = 0.00501;
    Kr = 495.7373;
    Krbis=-500.7373;
    T1 = 0.00515;
    Kc = 01.0390;
   
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)


%%
y =lsim(sys_true,[V Ifd],t,'foh');
z =lsim(sys_est,[V Ifd],t,'foh');
a =lsim(model_grey,[V Ifd],t,'foh');

fit_true =100*(1- norm(Efd-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd-z)/norm(z-mean(z)));
fit_grey = 100*(1- norm(Efd-a)/norm(a-mean(a)));

figure(11); bode(sys_true,'b',model3,'r',sys_est,'g',model_grey,'k');legend('Mostar system','RaPId model','Grey box model');set(gca,'FontSize',13)
figure(12); plot(t,Efd,'r',t,y,'b',t,z,'g',t,a,'k');legend('Data','Mostar system','RaPId model','Grey box model');xlabel('Time (s)'); ylabel('Field voltage, Efd (p.u.)');set(gca,'FontSize',13)
