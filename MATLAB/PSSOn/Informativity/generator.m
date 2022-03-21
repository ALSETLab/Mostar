%% Validation of the generator
%%
clear
close all

Ts=0.005;

%%
%load PSS_ON_Generator_Validation
load Xppq_041
load generator_ss

V=Vt;
%Efd = Efd;

    % change in Xd by 10%
        % Xd = 1.183;
        % R_a= 0.0045;
        % H = 2.137;
        % D = 0;
        % Xpd = 0.365;
        % Xq = 0.63;
        % Xppd = 0.217;
        % Xppq = 0.239;
        % Tpd0 = 3.78;
        % Tppd0 = 0.0605;
        % Tppq0 = 0.0741;
        % Xl = 0.1;

Xd = 1.138; 
R_a= 0.0048;
H = 2.137;
D = 0;
Xpd = 0.371;
Xq = 0.62;
Xppd = 0.215;
Xppq = 0.482;
Tpd0 = 3.78;
Tppd0 = 0.0552;
Tppq0 = 0.0823;
Xl = 0.1;


K1d=(Xpd - Xppd)*(Xd - Xpd)/(Xpd - Xl)^2;
K2d=(Xpd - Xl)*(Xppd - Xl)/(Xpd - Xppd);
K3d=(Xppd - Xl)/(Xpd - Xl);
K4d=(Xpd - Xppd)/(Xpd - Xl);

Xad = (Xd -Xl);
XadIfd = Xad*Ifd;

V_0 = 1.01;
t=time;
sim('Mostar')
pause(2)
%% inputs
%Efd=Efd_Model;
Efd=Efd-mean(Efd(1:40));
P=P-mean(P(1:40));
Q=Q-mean(Q(1:40));
%% outputs
Vt_sim = Vt.signals.values; w_sim=speed.signals.values; Ifd_sim =XadIfd.signals.values;
%Vt_sim = Vt_degraded.signals.values; w_sim=speed_degraded.signals.values; Ifd_sim =XadIfd_degraded.signals.values;
Vt_ch = Vt_degraded.signals.values; w_ch=speed_degraded.signals.values; Ifd_ch =XadIfd_degraded.signals.values;
%Vt_ch = V; w_ch=w; Ifd_ch =Ifd;

Vt_sim=Vt_sim-mean(Vt_sim(1:40));
Ifd_sim=Ifd_sim-mean(Ifd_sim(1:40));
w_sim = w_sim-mean(w_sim(1:40));

Vt_ch=Vt_ch-mean(Vt_ch(1:40));
Ifd_ch=Ifd_ch-mean(Ifd_ch(1:40));
w_ch = w_ch-mean(w_ch(1:40));

ETERM=ETERM-mean(ETERM(1:40));
Ifd=Ifd-mean(Ifd(1:40));
w = w-mean(w(1:40));


%%



x = [Vt_sim,Ifd_sim,w_sim];
y = [Vt_ch,Ifd_ch,w_ch];



fit_true_V =100*(1- norm(ETERM-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_Ifd =100*(1- norm(Ifd-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_w =100*(1- norm(w-x(:,3))/norm(x(:,3)-mean(x(:,3))));

fit_ch_V =100*(1- norm(ETERM-y(:,1))/norm(y(:,1)-mean(y(:,1))));
fit_ch_Ifd =100*(1- norm(Ifd-y(:,2))/norm(y(:,2)-mean(y(:,2))));
fit_ch_w =100*(1- norm(w-y(:,3))/norm(y(:,3)-mean(y(:,3))));

fit_true_V_val = sprintf('Mostar system: %.2f %%',fit_true_V);
fit_true_Ifd_val = sprintf('Mostar system: %.2f %%',fit_true_Ifd);
fit_true_w_val = sprintf('Mostar system: %.2f %%',fit_true_w);

fit_ch_V_val = sprintf('Xd = 1.3013: %.2f %%',fit_ch_V);
fit_ch_Ifd_val = sprintf('Xd = 1.3013: %.2f %%',fit_ch_Ifd);
fit_ch_w_val = sprintf('Xd = 1.3013: %.2f %%',fit_ch_w);


% 
% figure(9);tiledlayout(3,1);
% nexttile;
% plot(t,ETERM,'k',t,Vt_sim,'b',t,Vt_ch,'r','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data (y1)',fit_true_V_val,fit_ch_V_val,'FontSize',11,'Location','southeast');
% nexttile;
% plot(t,Ifd,'k',t,Ifd_sim,'b',t,Ifd_ch,'r','LineWidth',1);ylabel('Ifd (p.u.)','FontSize',13); legend('Data (y1)',fit_true_Ifd_val,fit_ch_Ifd_val,'FontSize',11,'Location','southeast');
% nexttile;
% plot(t,w,'k',t,w_sim,'b',t,w_ch,'r','LineWidth',1);ylabel('Speed deviation (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); legend('Data (y1)',fit_true_w_val,fit_ch_w_val,'FontSize',11,'Location','southeast');

figure(9);tiledlayout(3,1);
nexttile;
plot(t,Efd,'b','LineWidth',1);ylabel('Field voltage (p.u.)','FontSize',13); xlim([0 4.5]);xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,P,'b','LineWidth',1);ylabel('Active Power (p.u.)','FontSize',13);xlim([0 4.5]);xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,Q,'b','LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); xlim([0 4.5]);

%% 

x = [Vt_sim,Ifd_sim,w_sim];
y = [Vt_ch,Ifd_ch,w_ch];



fit_true_V =100*(1- norm(Vt_ch-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_Ifd =100*(1- norm(Ifd_ch-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_w =100*(1- norm(w_ch-x(:,3))/norm(x(:,3)-mean(x(:,3))));



fit_true_V_val = sprintf('Model: %.2f %%',fit_true_V);
fit_true_Ifd_val = sprintf('Model: %.2f %%',fit_true_Ifd);
fit_true_w_val = sprintf('Model: %.2f %%',fit_true_w);



newcolors = [0 0 0
             1 0.14 0.14
             1.00 0.54 0.00
             0.47 0.25 0.80
             0.25 0.80 0.54];
         
colororder(newcolors)


figure(10);tiledlayout(3,1);
nexttile;
plot(t,Vt_ch,'-',t,Vt_sim,'--','LineWidth',1.5);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data',fit_true_V_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,Ifd_ch,'-',t,Ifd_sim,'--','LineWidth',1.5);ylabel('Ifd (p.u.)','FontSize',13); legend('Data',fit_true_Ifd_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,w_ch,'-',t,w_sim,'--','LineWidth',1.5);ylabel('Speed deviation (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); legend('Data',fit_true_w_val,'FontSize',11,'Location','southeast');

figure(11);tiledlayout(2,1);
nexttile;
plot(t,Vt_ch,'-',t,Vt_sim,'--','LineWidth',1.5);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data',fit_true_V_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,Ifd_ch,'-',t,Ifd_sim,'--','LineWidth',1.5);ylabel('Ifd (p.u.)','FontSize',13); legend('Data',fit_true_Ifd_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);

