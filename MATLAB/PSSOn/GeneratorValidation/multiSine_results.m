load XppdXppq_Sweep.mat


opt = bodeoptions('cstprefs');
opt.XLim={[10e-3 10e2]};


figure(1); bodeplot(Real,Xppd0_1075,opt)
legend('Xppd = 0.215','Xppd = 0.1075')

%% plot inputs
figure(2);
subplot(3,1,1);
plot(t,Pin.signals.values,'LineWidth',1);
xlabel('Time (s)','FontSize',12);ylabel('Active Power (p.u.)','FontSize',12);


subplot(3,1,2);
plot(t,Qin.signals.values,'LineWidth',1);
xlabel('Time (s)','FontSize',12);ylabel('Reactive Power (p.u.)','FontSize',12);

subplot(3,1,3);
plot(t,Efdin.signals.values,'LineWidth',1);
xlabel('Time (s)','FontSize',12);ylabel('Field Voltage (p.u.)','FontSize',12);

%% plot outputs
Vt = Vt.signals.values;
Vt_ch = Vt_degraded.signals.values;

Ifd = XadIfd.signals.values;
Ifd_ch = XadIfd_degraded.signals.values;

w = speed.signals.values;
w_ch = speed_degraded.signals.values;

x = [Vt,Ifd,w];

fit_true_V =100*(1- norm(Vt_ch-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_Ifd =100*(1- norm(Ifd_ch-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_w =100*(1- norm(w_ch-x(:,3))/norm(x(:,3)-mean(x(:,3))));



fit_true_V_val = sprintf('Model: %.2f %%',fit_true_V);
fit_true_Ifd_val = sprintf('Model: %.2f %%',fit_true_Ifd);
fit_true_w_val = sprintf('Model: %.2f %%',fit_true_w);


figure(3);tiledlayout(3,1);
nexttile;
plot(t,Vt,'k',t,Vt_ch,'r','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data (y1)',fit_true_V_val,'FontSize',11,'Location','southeast');
nexttile;
plot(t,Ifd,'k',t,Ifd_ch,'r','LineWidth',1);ylabel('Ifd (p.u.)','FontSize',13); legend('Data (y1)',fit_true_Ifd_val,'FontSize',11,'Location','southeast');
nexttile;
plot(t,w,'k',t,w_ch,'r','LineWidth',1);ylabel('Speed deviation (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); legend('Data (y1)',fit_true_w_val,'FontSize',11,'Location','southeast');