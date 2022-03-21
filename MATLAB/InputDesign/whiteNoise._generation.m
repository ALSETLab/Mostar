clear all

%%
noise = 0.025*wgn(1501,3,0);
time = (0:0.005:7.5)';

r1 = [time,noise(:,1)];
r2 = [time,noise(:,2)];
r3 = [time,1e-4*noise(:,3)];

%%
save('noise.mat')