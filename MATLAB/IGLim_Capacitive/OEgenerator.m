% % %% Preprocess 
 y=[];
V = unique(V,'rows');

t=0
for x = 1:length(V-1)
if (mod(V(x,1),0.005)==0)&&(V(x,1)~=V(x+1,1))
 y = [y;V(x,:)];
 t=t+0.005;
end
end
% %P=out(:,2);Q=out(:,3);V=out(:,4);t=out(:,1);
 t=y(:,1);P=y(:,2);Q=y(:,3);Efd=y(:,4);Ifd=y(:,5);VPSS=y(:,6);V=y(:,7);w = y(:,8);
 t=t(1:901);P=P(1:901);Q=Q(1:901);Efd=Efd(1:901);Ifd=Ifd(1:901);VPSS=VPSS(1:901);V=V(1:901);w=w(1:901);
% save('generator_simulation.mat','P','Q','V','Efd','Ifd','t')
% y=y(1:1501,:);
% Efd_r = y(:,2);
% % Ifd_r = y(:,3);
% % Efd_r = y(:,4);
% % V_r = y(:,2);
% % P_r = y(:,5);
% % Q_r = y(:,6);
% % signal_in = [V_r,Ifd_r];
%  save('PQLim4_simulation_r.mat')
%%
load dslin
A =ABCD(1:5,1:5)
B = ABCD(1:5,6:7)
C = [ABCD(6:8,1:5)]
D=[0 0; 0 0; 0 0];
%D = ABCD(6:8,6)
save('gen_ss_RaPId.mat','A','B','C','D')
%% IGLim Capacitive
%%
clear
close all

Ts=0.005;

%% RaPId parameters
Xd=1.217;
R_a=0.0033415;
H=2.2969;
Xpd=0.36847;
%D=0;
Xq=0.6005;
Xppd=0.29965;
Xppq=0.21017;
Tpd0=3.7764;
Tppd0= 0.07985;
Tppq0=0.052457;
Xl=0.26714;
S10 = 0.1;
S12 = 0.4;
%%
load generator_simulation
load gen_ss_noP



sys_true = ss(A,B,C,D);
load gen_ss_noP_RaPId
sys_RaPId = ss(A,B,C,D);


% V=V(1:700);
% Efd=Efd(1:700);
% P=P(1:700);
% Q=Q(1:700);

 
V=V-mean(V(1:60));
Efd=Efd-mean(Efd(1:60));
P=P-mean(P(1:60));
Q=Q-mean(Q(1:60));


data=iddata([Q,V],[Efd],Ts);
 


%modelv=oe(data,[2*ones(3,1), 2*ones(3,1), ones(3,1)]);
modelv=oe(data,[2*ones(2,1), 2*ones(2,1), ones(2,1)]);  
figure(1); bode(sys_true,'b',modelv,'r',sys_RaPId,'g'); 
  
figure(2); compare(data,sys_true,'b',modelv,'r',sys_RaPId,'g');legend('Data','True System','OE model','RaPId model');
x = lsim(sys_true,Efd,t,'foh');
y = lsim(sys_RaPId,Efd,t,'foh');

fit_true_Q =100*(1- norm(Q-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_V =100*(1- norm(V-x(:,2))/norm(x(:,2)-mean(x(:,2))));

figure(3);tiledlayout(2,1);
nexttile;
plot(t,Q,t,x(:,1),t,y(:,1));legend('Data','True System','RaPId model');
nexttile;
plot(t,V,t,x(:,2),t,y(:,2))

%%
load generator_simulation
load gen_ss_P



sys_true = ss(A,B,C,D);
load gen_ss_P_RaPId
sys_RaPId = ss(A,B,C,D);



V=V-mean(V(1:60));
Efd=Efd-mean(Efd(1:60));
P=P-mean(P(1:60));
Q=Q-mean(Q(1:60));


data=iddata([P,Q,V],[Efd],Ts);
 


%modelv=oe(data,[2*ones(3,1), 2*ones(3,1), ones(3,1)]);
modelv=oe(data,[4*ones(3,1), 2*ones(3,1), zeros(3,1)]);  
figure(4); bode(sys_true,'b',modelv,'r',sys_RaPId,'g'); legend('Mostar System','OE model','RaPId model');
  
figure(5); compare(data,sys_true,'b',modelv,'r',sys_RaPId,'g');legend('Data','Mostar System','OE model','RaPId model');
x = lsim(sys_true,Efd,t,'foh');
y = lsim(sys_RaPId,Efd,t,'foh');
z = lsim(modelv,Efd,t,'foh');

fit_true_P =100*(1- norm(P-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_Q =100*(1- norm(Q-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_V =100*(1- norm(V-x(:,3))/norm(x(:,3)-mean(x(:,3))));

fit_RaPId_P =100*(1- norm(P-y(:,1))/norm(y(:,1)-mean(y(:,1))));
fit_RaPId_Q =100*(1- norm(Q-y(:,2))/norm(y(:,2)-mean(y(:,2))));
fit_RaPId_V =100*(1- norm(V-y(:,3))/norm(y(:,3)-mean(y(:,3))));

fit_OE_P =100*(1- norm(P-z(:,1))/norm(z(:,1)-mean(z(:,1))));
fit_OE_Q =100*(1- norm(Q-z(:,2))/norm(z(:,2)-mean(z(:,2))));
fit_OE_V =100*(1- norm(V-z(:,3))/norm(z(:,3)-mean(z(:,3))));


figure(6);tiledlayout(3,1);
nexttile;
plot(t,P,'k',t,x(:,1),'b',t,z(:,1),'r',t,y(:,1),'g','LineWidth',1);ylabel('Active Power (p.u.)','FontSize',13)
nexttile;
plot(t,Q,'k',t,x(:,2),'b',t,z(:,2),'r',t,y(:,2),'g','LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',13);legend('Data','Mostar System','OE model','RaPId model','FontSize',11);
nexttile;
plot(t,V,'k',t,x(:,3),'b',t,z(:,3),'r',t,y(:,3),'g','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13);

figure(7);tiledlayout(3,1);
nexttile;
plot(t,P,'k',t,x(:,1),'r','LineWidth',1);ylabel('Active Power (p.u.)','FontSize',16)
nexttile;
plot(t,Q,'k',t,x(:,2),'r','LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',16);legend('Data','Model','FontSize',16);
nexttile;
plot(t,V,'k',t,x(:,3),'r','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',16);xlabel('Time (s)','FontSize',16);


%%

load generator_simulation



sys_true = ss(A,B,C,D);
sys_RaPId = ss(A,B,C,D);



V=V-mean(V(1:60));
Efd=Efd-mean(Efd(1:60));
P=P-mean(P(1:60));
Q=Q-mean(Q(1:60));


data=iddata([V,Ifd],[P,Efd],Ts);
 


%modelv=oe(data,[2*ones(3,1), 2*ones(3,1), ones(3,1)]);
modelv=oe(data,[1*ones(2,2), 1*ones(2,2), ones(2,2)]);  
figure(7); bode(sys_true,'b',modelv,'r',sys_RaPId,'g'); legend('Mostar System','OE model','RaPId model');
  
figure(8); compare(data,sys_true,'b',modelv,'r',sys_RaPId,'g');legend('Data','Mostar System','OE model','RaPId model');
x = lsim(sys_true,[P,Efd],t,'foh');
y = lsim(sys_RaPId,[P,Efd],t,'foh');
z = lsim(modelv,[P,Efd],t,'foh');

fit_true_P =100*(1- norm(P-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_Q =100*(1- norm(Q-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_V =100*(1- norm(V-x(:,3))/norm(x(:,3)-mean(x(:,3))));

fit_RaPId_P =100*(1- norm(P-y(:,1))/norm(y(:,1)-mean(y(:,1))));
fit_RaPId_Q =100*(1- norm(Q-y(:,2))/norm(y(:,2)-mean(y(:,2))));
fit_RaPId_V =100*(1- norm(V-y(:,3))/norm(y(:,3)-mean(y(:,3))));

fit_OE_P =100*(1- norm(P-z(:,1))/norm(z(:,1)-mean(z(:,1))));
fit_OE_Q =100*(1- norm(Q-z(:,2))/norm(z(:,2)-mean(z(:,2))));
fit_OE_V =100*(1- norm(V-z(:,3))/norm(z(:,3)-mean(z(:,3))));


figure(9);tiledlayout(3,1);
nexttile;
plot(t,P,'k',t,x(:,1),'b',t,z(:,1),'r',t,y(:,1),'g','LineWidth',1);ylabel('Active Power (p.u.)','FontSize',13)
nexttile;
plot(t,Q,'k',t,x(:,2),'b',t,z(:,2),'r',t,y(:,2),'g','LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',13);legend('Data','Mostar System','OE model','RaPId model','FontSize',11);
nexttile;
plot(t,V,'k',t,x(:,3),'b',t,z(:,3),'r',t,y(:,3),'g','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13);