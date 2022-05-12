sim('MultiSine_Vt.slx')
t = Pout.time;
P = Pout.signals.values;
Q = Qout.signals.values;
V = Vt.signals.values;
w = speed.signals.values;
Efd = Efd_m.signals.values;
Ifd = XadIfd.signals.values;

signal_in = [P,Q,Efd];
signal = [V,Ifd,w];
t=time;

save('MS_25.mat','t','P','Q','V','w','Efd','Ifd','time','signal','signal_in')