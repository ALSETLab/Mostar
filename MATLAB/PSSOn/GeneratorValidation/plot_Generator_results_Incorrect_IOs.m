%% Validation of the generator
%%
clc
clear
close all

Ts=0.005;

%%
load simulation_short
%%
t=time;
Xd = 1.183; 
R_a= 0.0045;
H = 2.137;
D = 0;
Xpd = 0.365;
Xq = 0.63;
Xppd = 0.217;
Xppq = 0.239;
Tpd0 = 3.78;
Tppd0 = 1.0605;
Tppq0 = 0.0741;
Xl = 0.1;


V_0 = 1;%0.997; %1.015
t=time;
sim('Generator_incorrect_IOs')
pause(2)
%% inputs

Efd=Efd-mean(Efd(1:40));

%% outputs


Vt_sim = Vt_sim.data; P_sim=P_sim.data; Q_sim =Q_sim.data;

Vt_ch = V; P_ch=P; Q_ch =Q;




Vt_sim=Vt_sim-mean(Vt_sim(1:40));
P_sim=P_sim-mean(P_sim(1:40));
Q_sim = Q_sim-mean(Q_sim(1:40));

Vt_ch=Vt_ch-mean(Vt_ch(1:40));
Q_ch=Q_ch-mean(Q_ch(1:40));
P_ch = P_ch-mean(P_ch(1:40));

ETERM=ETERM-mean(ETERM(1:40));
P=P-mean(P(1:40));
Q = Q-mean(Q(1:40));

%%
data=iddata([V,P,Q],[Efd],Ts);
%x = [Vt_sim,P_sim,Q_sim];
x = lsim(sys_mostar, Efd,t)

y = [Vt_ch,P_ch,Q_ch];



fit_true_V =100*(1- norm(V-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_P =100*(1- norm(P-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_Q =100*(1- norm(Q-x(:,3))/norm(x(:,3)-mean(x(:,3))));

fit_ch_V =100*(1- norm(V-y(:,1))/norm(y(:,1)-mean(y(:,1))));
fit_ch_P =100*(1- norm(P-y(:,2))/norm(y(:,2)-mean(y(:,2))));
fit_ch_Q =100*(1- norm(Q-y(:,3))/norm(y(:,3)-mean(y(:,3))));

fit_true_V_val = sprintf('Mostar system: %.2f %%',fit_true_V);
fit_true_P_val = sprintf('Mostar system: %.2f %%',fit_true_P);
fit_true_Q_val = sprintf('Mostar system: %.2f %%',fit_true_Q);

fit_ch_V_val = sprintf('Xd = 1.3013: %.2f %%',fit_ch_V);
fit_ch_P_val = sprintf('Xd = 1.3013: %.2f %%',fit_ch_P);
fit_ch_Q_val = sprintf('Xd = 1.3013: %.2f %%',fit_ch_Q);



figure(9);tiledlayout(3,1);
nexttile;
plot(t,Efd,'b','LineWidth',1);ylabel('Field voltage (p.u.)','FontSize',13); xlim([0 4.5]);
nexttile;
plot(t,P,'b','LineWidth',1);ylabel('Active Power (p.u.)','FontSize',13);xlim([0 4.5]);
nexttile;
plot(t,Q,'b','LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); xlim([0 4.5]);

%% 

x = [Vt_sim,P_sim,Q_sim];
y = [V,P,Q];



fit_true_V =100*(1- norm(Vt_ch-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_P =100*(1- norm(P_ch-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_Q =100*(1- norm(Q_ch-x(:,3))/norm(x(:,3)-mean(x(:,3))));



fit_true_V_val = sprintf('Model: %.2f %%',fit_true_V);
fit_true_P_val = sprintf('Model: %.2f %%',fit_true_P);
fit_true_Q_val = sprintf('Model: %.2f %%',fit_true_Q);




figure(10);tiledlayout(3,1);
nexttile;
plot(t,P_ch,'k',t,P_sim,'r','LineWidth',1);ylabel('Active Power, P_{elec} (p.u.)','FontSize',13); legend('Data',fit_true_P_val,fit_ch_P_val,'FontSize',11,'Location','southeast');
nexttile;
plot(t,Q_ch,'k',t,Q_sim,'r','LineWidth',1);ylabel('Reactive Power, Q (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); legend('Data',fit_true_Q_val,fit_ch_Q_val,'FontSize',11,'Location','southeast');
nexttile;
plot(t,Vt_ch,'k',t,Vt_sim,'r','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data',fit_true_V_val,fit_ch_V_val,'FontSize',11,'Location','southeast');

