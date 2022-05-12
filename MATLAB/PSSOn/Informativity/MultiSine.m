load XppdXppq_Sweep

figure(1); bode(Real, Xppd0_1075, Xppd0_4)
%%

 Xd=1.1388;
    Ra=0.00486;
    H=2.08;
    Xpd=0.346;
    Dt=0;
    Xq=0.562;
    Xppd=0.264; %Xppd=0.215;
    Xppq=0.205;
    Tpd0=4.09;
    Tppd0= 1.02;
    Tppq0=0.0867;
    Xl=0.093;
    V_0=1.001;
    A_0=0;
    P_0= 0.6063;
    Q_0= 0.005;
    id_0 = 0.216891;
    iq_0 = 0.566201;
    psikd_0 = 0.96115;
    psippq_0 = 0.21459;
    Epq_0 = 1.01993;
    CoB = 3/10;
   
    param = [H,	Dt,	Tpd0,	Tppd0,	Tppq0,	Xd,	Ra,	Xppd,	Xpd,	Xl,	Xq,	Xppq]';
    

%%
% Adding sine inputs
P_sin = P + 0.5*sin(1550*time);
Q_sin = Q + 0.5*sin(1300*time); %0.21*sin(128*time)+ 0.1*sin(728*time) 
Efd_sin = Efd +  0*sin(1550*time);



G11_sim=lsim(dG11,P_sin,time);    %u = P, y = Vt
G12_sim=lsim(dG12,P_sin,time);    %u = P, y = Ifd
G13_sim=lsim(dG13,P_sin,time);    %u = P, y = w

G21_sim=lsim(dG21,Q_sin,time);    %u = Q, y = Vt
G22_sim=lsim(dG22,Q_sin,time);    %u = Q, y = Ifd
G23_sim=lsim(dG23,Q_sin,time);    %u = Q, y = w

G31_sim=lsim(dG31,Efd_sin,time);  %u = Efd, y = Vt 
G32_sim=lsim(dG32,Efd_sin,time);  %u = Efd, y = Ifd
G33_sim=lsim(dG33,Efd_sin,time);  %u = Efd, y = w


Psi_1 = G11_sim+G21_sim+G31_sim; %Vt
Psi_2 = G12_sim+G22_sim+G32_sim; %Ifd
Psi_3 = G13_sim+G23_sim+G33_sim; %w

Psi = [Psi_1, Psi_2, Psi_3];

 
P_err = 0.01; Q_err = 0.01; Efd_err = 0.01;
sigma_1 = (P_err)^2;
sigma_2 = (Q_err)^2;
sigma_3 = (Efd_err)^2;

sigma = [1/sigma_1, 0, 0;
         0, 1/sigma_2, 0;
         0, 0, 1/sigma_3;];


inv(sigma);
%P_theta = 1./(sum(Psi*inv(sigma)*Psi'))
N = 901;
P_theta = zeros(12,12);
for g=1:901
    psi1g = Psi_1(g,:)'; psi2g = Psi_2(g,:)'; psi3g = Psi_3(g,:)';
    Psig = [psi1g,psi2g,psi3g];
    P_theta = P_theta + Psig*(sigma)*Psig';
end 

P_theta;
res = inv(P_theta);
var = sqrt(diag(res))

var./param

aa = [ans(end-5),ans(end)]
figure(2); tiledlayout(3,1);
nexttile;
plot(time, P_sin)
nexttile;
plot(time, Q_sin);
nexttile;
plot(time, Efd_sin);

%% Simulate with multiSine

Vt_sim = Vt.signals.values; XadIfd_sim=XadIfd.signals.values; w_sim =speed.signals.values;

Vt_ch = Vt_degraded.signals.values; XadIfd_ch=XadIfd_degraded.signals.values; w_ch =speed_degraded.signals.values;

t= Vt.time;
x = [Vt_sim, XadIfd_sim, w_sim];


fit_true_V =100*(1- norm(Vt_ch-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_Ifd =100*(1- norm(XadIfd_ch-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_w =100*(1- norm(w_ch-x(:,3))/norm(x(:,3)-mean(x(:,3))));



fit_true_V_val = sprintf('Model: %.2f %%',fit_true_V);
fit_true_Ifd_val = sprintf('Model: %.2f %%',fit_true_Ifd);
fit_true_w_val = sprintf('Model: %.2f %%',fit_true_w);

figure(9);tiledlayout(3,1);
nexttile;
plot(t,Vt_ch,'k',t,x(:,1),'r','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data (y1)',fit_true_V_val,'FontSize',11,'Location','southeast');
nexttile;
plot(t,XadIfd_ch,'k',t,x(:,2),'r','LineWidth',1);ylabel('Ifd (p.u.)','FontSize',13); legend('Data (y1)',fit_true_Ifd_val,'FontSize',11,'Location','southeast');
nexttile;
plot(t,w_ch,'k',t,x(:,3),'r','LineWidth',1);ylabel('Speed deviation (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); legend('Data (y1)',fit_true_w_val,'FontSize',11,'Location','southeast');

figure(10);tiledlayout(3,1);
nexttile;
plot(t,Efdsin.signals.values,'LineWidth',1);ylabel('Field voltage (p.u.)','FontSize',13); xlim([0 4]);
nexttile;
plot(t,Psin.signals.values,'LineWidth',1);ylabel('Active Power (p.u.)','FontSize',13);xlim([0 4]);
nexttile;
plot(t,Qsin.signals.values,'LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); xlim([0 4]);

