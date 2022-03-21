%% Validation of the generator
%%
clear
close all

Ts=0.005;

%%
load Xd_13013_noisy_dymola_correct
% load exc_r_I2
% r=r*0.05;
% 
% 
% Efd = Efd + 2*r(1:901);
% P = P + 0.075*r(902:1802);
% Q = Q + 0.25*r(1803:2703);

%V=Vt;
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

Xd = 1.3013; 
R_a= 0.004799183673469388;
H = 2.137;
D = 0;
Xpd = 0.371;
Xq = 0.62;
Xppd = 0.215;
Xppq = 0.241;
Tpd0 = 3.78;
Tppd0 = 0.0552;
Tppq0 = 0.0823;
Xl = 0.1;

V_0 = 0.985;
t=time;
sim('Mostar')
pause(2)
%% inputs
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

ETERM=V-mean(V(1:40));
V=V-mean(V(1:40));
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

x0=10;
y0=10;
width=560;
height=730;
set(gcf,'position',[x0,y0,width,height])

figure(9);tiledlayout(3,1);
nexttile;
plot(t,Efd,'b','LineWidth',1);ylabel('Field voltage (p.u.)','FontSize',13); xlim([0 4.5]);xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,Pn,'b','LineWidth',1);ylabel('Active Power (p.u.)','FontSize',13);xlim([0 4.5]);xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,Q,'b','LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); xlim([0 4.5]);

%% 

x = [Vt_sim,Ifd_sim,w_sim];
y = [Vt_ch,Ifd_ch,w_ch];
z = [V, Ifd, w];


fit_true_V =100*(1- norm(Vt_sim-z(:,1))/norm(z(:,1)-mean(z(:,1))));
fit_true_Ifd =100*(1- norm(Ifd_sim-z(:,2))/norm(z(:,2)-mean(z(:,2))));
fit_true_w =100*(1- norm(w_sim-z(:,3))/norm(z(:,3)-mean(z(:,3))));



fit_true_V_val = sprintf('Model: %.2f %%',fit_true_V);
fit_true_Ifd_val = sprintf('Model: %.2f %%',fit_true_Ifd);
fit_true_w_val = sprintf('Model: %.2f %%',fit_true_w);

newcolors = [0 0 0
             1 0.14 0.14
             1.00 0.54 0.00
             0.47 0.25 0.80
             0.25 0.80 0.54];
         
colororder(newcolors)


x0=10;
y0=10;
width=560;
height=703;
set(gcf,'position',[x0,y0,width,height])

figure(10);tiledlayout(3,1);
nexttile;
plot(t,V,'-',t,Vt_sim,'--','LineWidth',1.5);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data',fit_true_V_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,Ifd,'-',t,Ifd_sim,'--','LineWidth',1.5);ylabel('Ifd (p.u.)','FontSize',13); legend('Data',fit_true_Ifd_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,w,'-',t,w_sim,'--','LineWidth',1.5);ylabel('Speed deviation (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); legend('Data',fit_true_w_val,'FontSize',11,'Location','southeast');

x0=10;
y0=10;
width=560;
height=703;
set(gcf,'position',[x0,y0,width,height])

figure(11);tiledlayout(2,1);
nexttile;
plot(t,V,'-',t,Vt_sim,'--','LineWidth',1.5);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data',fit_true_V_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,Ifd,'-',t,Ifd_sim,'--','LineWidth',1.5);ylabel('Ifd (p.u.)','FontSize',13); legend('Data',fit_true_Ifd_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);

x0=10;
y0=10;
width=560;
height=544;
set(gcf,'position',[x0,y0,width,height])



fit_true_V =100*(1- norm(Vt_sim-y(:,1))/norm(y(:,1)-mean(y(:,1))));
fit_true_Ifd =100*(1- norm(Ifd_sim-y(:,2))/norm(y(:,2)-mean(y(:,2))));
fit_true_w =100*(1- norm(w_sim-y(:,3))/norm(y(:,3)-mean(y(:,3))));



fit_true_V_val = sprintf('Model: %.2f %%',fit_true_V);
fit_true_Ifd_val = sprintf('Model: %.2f %%',fit_true_Ifd);
fit_true_w_val = sprintf('Model: %.2f %%',fit_true_w);



figure(12);tiledlayout(3,1);
nexttile;
plot(t,Vt_ch,'-',t,Vt_sim,'--','LineWidth',1.5);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data',fit_true_V_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,Ifd_ch,'-',t,Ifd_sim,'--','LineWidth',1.5);ylabel('Ifd (p.u.)','FontSize',13); legend('Data',fit_true_Ifd_val,'FontSize',11,'Location','southeast');xlabel('Time (s)','FontSize',13);
nexttile;
plot(t,w_ch,'-',t,w_sim,'--','LineWidth',1.5);ylabel('Speed deviation (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); legend('Data',fit_true_w_val,'FontSize',11,'Location','southeast');

x0=10;
y0=10;
width=560;
height=703;
set(gcf,'position',[x0,y0,width,height])

%% 
% load Xppq_ss
% 
% figure(15); bode(Xppq_0241,Xppq_0482,Xppq_01205); legend('Xppq = 0.241','Xppq = 0.482',' Xppq = 0.1205')
