% load dslin
% 
% A = ABCD(1:5,1:5);
% B = ABCD(1:5,6:8);
% C = ABCD(6:8,1:5);
% D = ABCD(6:8,6:8);
% 
% 
% 
% sys_RaPId = ss(A,B,C,D);

%%
Ts = 0.005
load generator_simulation

load exc_r_I2

r1 = 0*r(1:1501);
r2 = 0*r(1502:3002);
r3 = 0*r(3003:4503);
load gen_ss_RaPId 
load gen_ss_Mostar

Efd = Efd+r1; P = P+r2; Q = Q+r3;

%x0 = [0 -15 0.943511 0.9601 0.0720776]';
x0 = [0 -15 0.943511 0.9601 0];
%sys_RaPId = sys_true;
%sys_RaPId = ss(A,B,C,D);
% Efd1=Efd-mean(Efd(1:40))+r1;
% P1=P-mean(P(1:40))+r2;
% Q1=Q-mean(Q(1:40))+r3;
sim('Mostar')
pause(2)
%% inputs


Efd=Efd-mean(Efd(1:40));
P=P-mean(P(1:40));
Q=Q-mean(Q(1:40));
%% outputs
%Vt_sim = Vt.data(:,1); w_sim =output.data(:,3); Ifd_sim =  output.data(:,2);
Vt_sim = Vt.data; w_sim=w.data; Ifd_sim =XadIfd.data;
Vt_rapid = Vt1.data; w_rapid=w1.data; Ifd_rapid =XadIfd1.data;

Vt_sim=Vt_sim-mean(Vt_sim(1:40));
Ifd_sim=Ifd_sim-mean(Ifd_sim(1:40));
speed_sim = w_sim-mean(w_sim(1:40));

Vt_rapid=Vt_rapid-mean(Vt_rapid(1:40));
Ifd_rapid=Ifd_rapid-mean(Ifd_rapid(1:40));
speed_rapid = w_rapid-mean(w_rapid(1:40));

V = Vt_sim; Ifd = Ifd_sim; speed = speed_sim;

V=V-mean(V(1:40));
Ifd=Ifd-mean(Ifd(1:40));
speed = speed-mean(speed(1:40));

%% data and OE models

data=iddata([V,Ifd,speed],[Efd,P,Q],Ts);
 


%modelv=oe(data,[3*ones(3,3), 1*ones(3,3), zeros(3,3)]);
modelv=bj(data,[3*ones(3,3), 3*ones(3,1), 3*ones(3,1), 3*ones(3,3), zeros(3,3)]); 
%modelv=bj(data,[2*ones(2,3), 2*ones(2,1), 2*ones(2,1), 2*ones(2,3), ones(2,3)]);
opt = compareOptions('InitialCondition','e','InputOffset',[0;0;-0], 'OutputOffset',[0;-0;0]);
figure(1); bode(sys_mostar,'b',modelv,'r',sys_RaPId,'g'); legend('Mostar System','OE model','RaPId model');
  
figure(2); compare(data,sys_mostar,'b',modelv,'r',sys_RaPId,'g',opt);legend('Data','Mostar System','OE model','RaPId model');


[z,fit,ic] = compare(data, modelv);

%%



x = [Vt_sim,Ifd_sim,speed_sim];
y = [Vt_rapid,Ifd_rapid,speed_rapid];
z = z.y ;


fit_true_V =100*(1- norm(V-x(:,1))/norm(x(:,1)-mean(x(:,1))));
fit_true_Ifd =100*(1- norm(Ifd-x(:,2))/norm(x(:,2)-mean(x(:,2))));
fit_true_w =100*(1- norm(speed-x(:,3))/norm(x(:,3)-mean(x(:,3))));

fit_RaPId_V =100*(1- norm(V-y(:,1))/norm(y(:,1)-mean(y(:,1))));
fit_RaPId_Ifd =100*(1- norm(Ifd-y(:,2))/norm(y(:,2)-mean(y(:,2))));
fit_RaPId_w =100*(1- norm(speed-y(:,3))/norm(y(:,3)-mean(y(:,3))));

fit_OE_V =100*(1- norm(V-z(:,1))/norm(z(:,1)-mean(z(:,1))));
fit_OE_Ifd =100*(1- norm(Ifd-z(:,2))/norm(z(:,2)-mean(z(:,2))));
fit_OE_w =100*(1- norm(speed-z(:,3))/norm(z(:,3)-mean(z(:,3))));


figure(9);tiledlayout(3,1);
nexttile;
plot(t,V,'k',t,x(:,1),'b',t,z(:,1),'r',t,y(:,1),'g','LineWidth',1);ylabel('Voltage (p.u.)','FontSize',13); xlim([0 4]);
nexttile;
plot(t,Ifd,'k',t,x(:,2),'b',t,z(:,2),'r',t,y(:,2),'g','LineWidth',1);ylabel('Ifd (p.u.)','FontSize',13);legend('Data','Mostar System','OE model','RaPId model','FontSize',11); xlim([0 4]);
nexttile;
plot(t,speed,'k',t,x(:,3),'b',t,z(:,3),'r',t,y(:,3),'g','LineWidth',1);ylabel('Speed deviation (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); xlim([0 4]);

figure(10);tiledlayout(3,1);
nexttile;
plot(t,Efd,'LineWidth',1);ylabel('Field voltage (p.u.)','FontSize',13); xlim([0 4]);
nexttile;
plot(t,P,'LineWidth',1);ylabel('Active Power (p.u.)','FontSize',13);xlim([0 4]);
nexttile;
plot(t,Q,'LineWidth',1);ylabel('Reactive Power (p.u.)','FontSize',13);xlabel('Time (s)','FontSize',13); xlim([0 4]);