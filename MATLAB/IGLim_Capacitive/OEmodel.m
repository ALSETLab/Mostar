% % %% Preprocess 
 y=[];
out1 = unique(out1,'rows');

t=0
for x = 1:length(out1-1)
if (mod(out1(x,1),0.005)==0)&&(out1(x,1)~=out1(x+1,1))
 y = [y;out1(x,:)];
 t=t+0.005;
end
end
% 
% y=y(1:1501,:);
% Efd_r = y(:,2);
% % Ifd_r = y(:,3);
% % Efd_r = y(:,4);
% % V_r = y(:,2);
% % P_r = y(:,5);
% % Q_r = y(:,6);
% % signal_in = [V_r,Ifd_r];
%  save('PQLim4_simulation_r.mat')

%% IGLim Capacitive
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
    Tb1 = 2.03079;
    Tc1 = 19.982718;
    Tb2 = 0.020138;
    Tc2 = 0.0050471;
    Kr = 495.7373;
    Krbis=-495.7373;
    T1 = 0.005077;
    Kc = 01.0097390;
   
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
 
%%
load Capacitive_simulation

t=time;   
V=V-mean(V(1:60));
Efd=Efd-mean(Efd(1:60));
Ifd=Ifd-mean(Ifd(1:60));



data=iddata(Efd,[V Ifd],Ts);
 
z =lsim(sys_est,[V Ifd],t,'foh');
fit_rapid = 100*(1- norm(Efd-z)/norm(z-mean(z)))

modelv=oe(data,[[3 3],[3 3],[0 0]]);
  
figure(1); bode(sys_true,'b',modelv,'r',sys_est,'g'); legend('Mostar system','OE model','RaPId model','FontSize',13);set(gca,'FontSize',13)
  
figure(2); compare(data,sys_true,'b',modelv,'r',sys_est,'g');legend('Data','Mostar system','OE model','RaPId model','FontSize',13);set(gca,'FontSize',13)
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

figure(3); bode(sys_true,'b',modelv,'r',sys_est,'g',model_grey,'k');legend('Mostar system','OE model','RaPId model','Grey box model','FontSize',13);set(gca,'FontSize',13);xlabel('Frequency','FontSize',13);ylabel('Magnitude (dB); Phase (deg)','FontSize',13); title('Bode Diagram','FontSize',16)
%%
figure(4); compare(data,sys_true,'b',modelv,'r',sys_est,'g',model_grey,'k');legend('Data','Mostar system','OE model','RaPId model','Grey box model','FontSize',14);set(gca,'FontSize',14);xlabel('Time','FontSize',14);ylabel('Amplitude','FontSize',14)
%figure(4); compare(data,modelv,'r');legend('Data','OE model');

%%
load Capacitive_simulation_r
t=time;   
V_r=V_r-mean(V_r(1:60));
Efd_r=Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);

y =lsim(sys_true,[V_r Ifd_r],t,'foh');
z =lsim(sys_est,[V_r Ifd_r],t,'foh');

fit_true =100*(1- norm(Efd_r-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)));
  
model=oe(data_r,[[3 3],[3 3],[0 0]]);
  
figure(5); bode(sys_true,'b',model,'r',sys_est,'g'); legend('Mostar system','OE model','RaPId model');
%figure(6); compare(data_r,sys_true,'b',model,'r',sys_est,'g');legend('Data','True System','OE model','RaPId model');
 figure(6); compare(data_r,model,'r');legend('Data','OE model'); 
zpk(d2c(model))
zpk(sys_true)
%figure(); plot(t, V_r, 'LineWidth',2);xlabel('Time (s)');ylabel('Voltage (p.u.)')

%%
load Capacitive_simulink_r_ode8


t=time;   
V_r=V_r-mean(V_r(1:60));
Efd_r = out.Efd.data;
Efd_r = Efd_r-mean(Efd_r(1:60));
Ifd_r=Ifd_r-mean(Ifd_r(1:60));
data_r=iddata(Efd_r,[V_r Ifd_r],Ts);

y =lsim(sys_true,[V_r Ifd_r],t,'foh');
z =lsim(sys_est,[V_r Ifd_r],t,'foh');

fit_true =100*(1- norm(Efd_r-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)))

model2=oe(data_r,[[3 3],[3 3],[0 0]]);  

figure(7); bode(sys_true,'b',model,'r',sys_est,'g'); legend('Mostar system','OE model','RaPId model','FontSize',13);set(gca,'FontSize',13)
figure(8); compare(data_r,sys_true,'b',model,'r',sys_est,'g');legend('Data','Mostar system','OE model','RaPId model','FontSize',13);set(gca,'FontSize',13)
  
zpk(d2c(model))
zpk(sys_true)


%%
opt = greyestOptions;
opt.InitialState = 'zero';
opt.Display = 'on'; 
model_grey=greyest(data_r,sys_true,opt);



%%% The grey-box is a worst representation of the data than the OE model
   
z=lsim(model_grey,[V_r,Ifd_r],t,'foh');
fit_rapid = 100*(1- norm(Efd_r-z)/norm(z-mean(z)))
figure(9); bode(sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('Mostar system','OE model','RaPId model','Grey box model','FontSize',13);set(gca,'FontSize',13);xlabel('Frequency','FontSize',13);ylabel('Magnitude (dB); Phase (deg)','FontSize',13); title('Bode Diagram','FontSize',16)
%   
figure(10); compare(data_r,sys_true,'b',model,'r',sys_est,'g',model_grey,'k');legend('Data','Mostar system','OE model','RaPId model','Grey box model');

%% real measurements
load('AVR_IG_Capacitive.mat','Efd','Ifd','time')

load('Capacitive_simulation.mat','V')

Efd=2.78*Efd;
Ifd = 2.78*Ifd;


%%%% Estimated parameters

    Tr = 0.02063;
    Tb1 = 2.83079;
    Tc1 = 19.982718;
    Tb2 = 0.020138;
    Tc2 = 0.0050471;
    Kr = 495.7373;
    Krbis=-455.7373;
    T1 = 0.005077;
    Kc = 0.907390;
   
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)


t=time;   
V=V-mean(V(1:60));

Efd = (Efd-mean(Efd(1:60)));
Ifd=(Ifd-mean(Ifd(1:60)));
data=iddata(Efd,[V Ifd],Ts);

model3=oe(data,[[3 3],[3 3],[0 0]]); 

y =lsim(sys_true,[V Ifd],t,'foh');
z =lsim(sys_est,[V Ifd],t,'foh');
a =lsim(model_grey,[V Ifd],t,'foh');

fit_true =100*(1- norm(Efd-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd-z)/norm(z-mean(z)));
fit_grey = 100*(1- norm(Efd-a)/norm(a-mean(a)));

figure(11); bode(sys_true,'b',sys_est,'g',model_grey,'k');legend('Mostar system','RaPId model','Grey box model','FontSize',13);set(gca,'FontSize',13)
figure(12); plot(t,Efd,'r',t,y,'b',t,z,'g',t,a,'k');legend('Data','Mostar system','RaPId model','Grey box model','FontSize',13);xlabel('Time (s)'); ylabel('Field voltage, Efd (p.u.)');set(gca,'FontSize',13);xlim([0 4.5])
%%
opt = greyestOptions;
opt.InitialState = 'zero';
opt.Display = 'on'; 
model_grey=greyest(data,sys_true,opt);
%%
y =lsim(sys_true,[V Ifd],t,'foh');
z =lsim(sys_est,[V Ifd],t,'foh');
a =lsim(model_grey,[V Ifd],t,'foh');

fit_true =100*(1- norm(Efd-y)/norm(y-mean(y)));
fit_rapid = 100*(1- norm(Efd-z)/norm(z-mean(z)));
fit_grey = 100*(1- norm(Efd-a)/norm(a-mean(a)));
y=0.4*y;
z=0.4*z;
figure(11); bode(sys_true,'b',sys_est,'g',model_grey,'k');legend('Mostar system','RaPId model','Grey box model','FontSize',12);
figure(12); plot(t,Efd,'r',t,y,'b',t,z,'g',t,a,'k');legend('Data','Mostar system','RaPId model','Grey box model','FontSize',12);xlim([0 4.5])