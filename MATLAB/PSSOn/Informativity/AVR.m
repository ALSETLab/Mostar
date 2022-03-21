%% Show that the AVR has informativity issues
%%
clear
close all

Ts=0.005;

%%
%load simulation_short %simulation data
load Xd_13013_noisy_dymola_changed %PMU data

%%
% Efd = (1.3177/Efd(1))*Efd;

%Ifd = 1.083*Iq;
Efd_plot = [time, Efd];
%%%%%% Definition of the model for the grey-box identification

odefun = 'AVR_greyest2';

%%%% RaPId parameters

    Tr0 = 0.01;
    Tc10 = 1.9432157800359;
    Tb10 = 20.00657894736842105;
    Tc20 = 0.02976406533575;
    Tb20 = 0.0057894736842105;
    Kr0 = 500;
    T10 = 0.00507894736842105;
    Kc0 = 0.997207818109294;



    parameters0 = {'Tr',Tr0;'Tc1',Tc10;'Tb1',Tb10;'Tc2',Tc20;'Tb2',Tb20;'Kr',Kr0;'T1',T10;'Kc',Kc0};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system

%%%%% Parameters that will be used for the initialization of the grey-box
%%%%% identification 


    Tr = 0.01;
    Tc1 = 2;
    Tb1 = 20;
    Tc2 = 0.02;
    Tb2 = 0.005;
    Kr = 500;
    T1 = 0.005;
    Kc = 0.95;
    Vrmax = 4.35;
    Vrmin = -3.825;
    Efd0 = 1.3468515;
    XadIfd = Ifd(1);
    Vinit = V(1);
    PSS= 0;
    VR0 = Efd0 + Kc*XadIfd;
    P_0 = P(1)*30e6;
    Q_0 = Q(1)*30e6;
    parameters = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Kr',Kr;'T1',T1;'Kc',Kc};

sys_MOSTAR = idgrey(odefun,parameters,fcn_type); %%%% system for the initialization of the grey-box identification


%%
t=time;
mdl = 'AVR_fmu';
out = sim(mdl);


Efd_edit = simout.data;

t=time(1:901);
time=time(1:901);
V=V(1:901);
Ifd = Ifd(1:901);
Efd = Efd(1:901);



%%
load avr_ss
Efd=lsim(sys_mostar,[Vt Ifd],t,'foh');


V_AVR = out.V.data;
V_AVR=V_AVR-mean(V_AVR(1:100));
Ifd=Ifd-mean(Ifd(1:100));
Efd=Efd-mean(Efd(1:100));
Efd_sim=Efd_sim-mean(Efd_sim(1:100));



% data=iddata(Efd,[V_AVR Ifd],Ts);
% modeloe=oe(data,[[5 5] [5 5] [0 0]]);
% figure(1); bode(sys_mostar,'b',modeloe,'r',sys_RaPId,'g'); legend('Mostar system','OE model','RaPId model');
%figure(2); compare(data,sys_2T1,'b');legend('Data','Mostar system');

fit_Efd =100*(1- norm(Efd_sim-Efd)/norm(Efd-mean(Efd)));

fit_Efd_val = sprintf('Model: %.2f %%',fit_Efd);


figure(3); plot(time, Efd,'color',[0,0,0],'LineWidth',1.5);
hold on
plot(time, Efd_sim,'--','LineWidth',1.5,'color','r'); xlabel('Time (s)','FontSize',14);ylabel('Field voltage, E_{fd} (p.u.)','FontSize',14);legend('Data (y1)',fit_Efd_val)



figure(10);tiledlayout(3,1);
nexttile;
plot(t,V,'LineWidth',1);ylabel('V_{AVR} (p.u.)','FontSize',13); xlabel('Time (s)','FontSize',13)
nexttile;
plot(t,VPSS,'LineWidth',1);ylabel('V_{PSS} (p.u.)','FontSize',13); xlabel('Time (s)','FontSize',13)
nexttile;
plot(t,Ifd,'LineWidth',1);ylabel('I_{fd} (p.u.)','FontSize',13); xlabel('Time (s)','FontSize',13)


figure(11);tiledlayout(3,1);
nexttile;
plot(t,Vt,'b','LineWidth',1);ylabel('V_{AVR} (p.u.)','FontSize',13); xlabel('Time (s)','FontSize',13)
nexttile;
plot(t,VPSS,'b','LineWidth',1);ylabel('V_{PSS} (p.u.)','FontSize',13); xlabel('Time (s)','FontSize',13)
nexttile;
plot(t,Ifd,'b','LineWidth',1);ylabel('I_{fd} (p.u.)','FontSize',13); xlabel('Time (s)','FontSize',13)
% %% Adding noise for informativity 
% load generator_Xd_13013
% load AVR_ss_changed_parameters
% load exc_r_I2
% 
% r = 0*r(1:3301);
% x0 = [0.0053728; 0.0053728; 1; 1.3432];
% 
% %%
% mdl = 'ST5B_Informativity';
% time=t; 
% Ifd_org = Ifd;
% Ifd = Ifd+r;
% out = sim(mdl);
% %%  
% t=t(1:901);
% V=V-mean(V(1:60));
% Ifd=Ifd-mean(Ifd(1:60));
% Ifd_org = Ifd_org - mean(Ifd_org(1:60));
% V=V(1:901);
% Ifd = Ifd(1:901);
% Ifd_org = Ifd_org(1:901);
% 
% 
% Efd_r = out.Efd.data;
% Efd_r = Efd_r(1:901);
% 
% Efd_r=Efd_r-mean(Efd_r(1:60));
% 
% data=iddata(Efd_r,[V Ifd],Ts);
%  
% modeloe_r=oe(data,[[5 5] [5 5] [0 0]]);
% 
% 
% %%
% 
% yoe=lsim(modeloe,[V Ifd],t);
% y_sys=lsim(sys_mostar,[V Ifd],t,x0);
% y_est=lsim(sys_RaPId,[V Ifd],t);
% 
% 
% figure(3); bode(sys_mostar,'b',modeloe_r,'r',sys_RaPId,'g'); legend('Mostar system','OE model','RaPId model');
% figure(4); compare(data,sys_MOSTAR,'b',x0);legend('Data','Mostar system','OE model','RaPId model');
% figure(5); plot(t,Ifd,t,Ifd_org,'LineWidth',1.5);legend('Excited Ifd signal','Ifd measurement');xlabel('Time (s)','FontSize',14);ylabel('Field current (I_{fd}, p.u.)','FontSize',14);
% 
% 
% 
% 
