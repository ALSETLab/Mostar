%%
clc
clear all
close all
%%

%load generator_Xd_13013_H_2307_short
%load generator_Xd_13013_H_2307_short_out
load PSS_ON_sim

x = out;



fit_true_V =100*(1- norm(ETERM-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_Ifd =100*(1- norm(Ifd-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_w =100*(1- norm(w-x(:,3))/norm(x(:,3)-mean(x(:,3))));



fit_true_V_val = sprintf('Model: %.2f %%',fit_true_V);
fit_true_Ifd_val = sprintf('Model: %.2f %%',fit_true_Ifd);
fit_true_w_val = sprintf('Model: %.2f %%',fit_true_w);



figure(9);tiledlayout(3,1);
nexttile;
plot(t,ETERM,'k',t,x(:,1),'r','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',13);  legend('Data (y1)',fit_true_V_val,'FontSize',11,'Location','southeast');
nexttile;
plot(t,Ifd,'k',t,x(:,2),'r','LineWidth',1);ylabel('Ifd (p.u.)','FontSize',13); legend('Data (y1)',fit_true_Ifd_val,'FontSize',11,'Location','southeast');
nexttile;
plot(t,w,'k',t,x(:,3),'r','LineWidth',1);ylabel('Speed deviation (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); legend('Data (y1)',fit_true_w_val,'FontSize',11,'Location','southeast');

figure(10);tiledlayout(3,1);
nexttile;
plot(t,Efd,'LineWidth',1);ylabel('Field voltage (p.u.)','FontSize',13); xlim([0 4]);
nexttile;
plot(t,P,'LineWidth',1);ylabel('Active Power (p.u.)','FontSize',13);xlim([0 4]);
nexttile;
plot(t,Q,'LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); xlim([0 4]);
