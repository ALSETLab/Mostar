%% Show that the AVR has informativity issues
%%
clear
close all

Ts=0.005;

%%
load simulation
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
    Kc = 1;
    Vrmax = 4.35;
    Vrmin = -3.825;
    Efd0 = Efd(1);
    XadIfd = Ifd(1);
    Vinit = V(1);
    PSS= 0;
    VR0 = Efd0 + Kc*XadIfd;
    P_0 = P(1)*30e6;
    Q_0 = Q(1)*30e6;
    parameters = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Kr',Kr;'T1',T1;'Kc',Kc};

sys_mostar = idgrey(odefun,parameters,fcn_type); %%%% system for the initialization of the grey-box identification


%%%%% Parameters that will be used for the initialization of the grey-box
%%%%% identification 


    Tr = 0.01;
    Tc1 = 2;
    Tb1 = 20;
    Tc2 = 0.02;
    Tb2 = 0.005;
    Kr = 500;
    T1 = 0.005;
    Kc = 1;
    Vrmax = 4.35;
    Vrmin = -3.825;
    Efd0 = Efd(1);
    XadIfd = Ifd(1);
    Vinit = V(1);
    PSS= 0;
    VR0 = Efd0 + Kc*XadIfd;
    P_0 = P(1)*30e6;
    Q_0 = Q(1)*30e6;
    parameters = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Kr',Kr;'T1',T1;'Kc',Kc};

sys_est = idgrey(odefun,parameters,fcn_type); %%%% system for the initialization of the grey-box identification



%%
t=time;
mdl = 'ST5B';
out = sim(mdl);


Efd_half = out.Efd.data;

t=time(1:901);
time=time(1:901);
V=V(1:901);
Ifd = Ifd(1:901);
Efd = Efd(1:901);



%%
load AVR_ss_changed_parameters
load simulation
Ts = 0.005;
t=time(1:901);
time=time(1:901);
V=V(1:901);
Ifd = Ifd(1:901);

V=V-mean(V(1:10));
Ifd=Ifd-mean(Ifd(1:10));
Efd=lsim(sys_mostar, [Ifd V], t);
Efd_half=lsim(sys_halfT1, [Ifd V], t);
Efd_double = lsim(sys_2Kc, [Ifd V], t);

data=iddata(Efd_half,[Ifd V],Ts);
 
modeloe=oe(data,[[5 5] [5 5] [0 0]]);
figure(1); plot(t,Efd, t,Efd_half, t,Efd_double);
%figure(1); bode(modeloe,'b',linsys1,'r'); legend('Mostar system','OE model','RaPId model');
figure(2); compare(data,sys_mostar, 'b');legend('Data','Mostar system');

