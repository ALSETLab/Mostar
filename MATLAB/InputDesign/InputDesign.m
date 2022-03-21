clear all
close all
load noise
load AVR_model
Ts = 0.005;

t = r1(:,1);
r1(:,2) = 0*r1(:,2);
r2(:,2) = 0.1*r2(:,2);
r3(:,2) = 0*r3(:,2);

out = sim('System_v2.slx')
pause(1)
Ts = 0.005;
Psim = out.Pout.data;
Qsim = out.Qout.data;
Vt = out.Vt.data;
Ifd = out.Ifd.data;
w = out.w.data;
Efd = out.Efd.data;
VPSS = out.VPSS.data;



%%

%%%%%% Definition of the model for the grey-box identification

odefun = 'AVR_greyest2';

%%%% True parameters

    Tr = 0.01;
    Tb1 = 2;
    Tc1 = 20;
    Tb2 = 0.02;
    Tc2 = 0.005;
    Kr = 500;
    Krbis=-500;
    T1 = 0.005;
    Kc = 1;
    
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_true = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)
%%

%%%% Estimated parameters

    Tr = 0.01063;
    Tb1 = 2.03079;
    Tc1 = 19.982718;
    Tb2 = 0.020138;
    Tc2 = 0.0050471;
    Kr = 495.7373;
    Krbis=-495.7373;
    T1 = 0.005077;
    Kc = 01.0097390;
   
parameters0 = {'Tr',Tr;'Tc1',Tc1;'Tb1',Tb1;'Tc2',Tc2;'Tb2',Tb2;'Krbis',Krbis;'T1',T1;'Kc',Kc};

fcn_type = 'c';

sys_est = idgrey(odefun,parameters0,fcn_type); %%% True system (it is equivalent to your linearized model)


%%

AVR_data=iddata([Efd],[Vt Ifd],Ts);


model_AVR=oe(AVR_data,[[3 3], [3 3], [1 1]]);
figure(1);compare(AVR_data, sys_true,'b',sys_est,'g',model_AVR,'r')
figure(2);bode(sys_true,'b',sys_est,'g',model_AVR,'r')


x = lsim(sys_true,[Vt Ifd],t,'foh');
y = lsim(sys_est,[Vt Ifd],t,'foh');
z = lsim(model_AVR,[Vt Ifd],t,'foh');


plot(t, x(:,1))

% %% FFTs
% 
% y_sys=lsim(sys2,[r1(:,2) r2(:,2) r3(:,2)],time,'zoh');
% 
% Fs = 1/Ts;
% L = length(y_sys);
% FFT_sys = fft(y_sys); % FFT from estimated model output
% 
% 
% P2 = abs(FFT_sys/L);
% P1 = P2(1:L/2+1);
% P1(2:end-1) = 2*P1(2:end-1);
% 
% P_opt = sum(P2)/length(P2);
% 
% f = 2*pi*Fs*(1e-1:(L/2))/L;
% semilogx(f,P1) 
% title('Single-Sided Amplitude Spectrum of X(t)');xlim([1e-1 100]);
% xlabel('\omega (rad/sec)')
% ylabel('|P1(f)|')