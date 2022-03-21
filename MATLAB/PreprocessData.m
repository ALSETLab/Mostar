%% Pre process the simulation data from Dymola

y=[];
data = unique(data,'rows');

t=0
for x = 1:length(data-1)
if (mod(data(x,1),0.005)==0)&&(data(x,1)~=data(x+1,1))
 y = [y;data(x,:)];
 t=t+0.005;
end
end
% %P=out(:,2);Q=out(:,3);data=out(:,4);t=out(:,1);
 t=y(:,1);P=y(:,2);Q=y(:,3);Efd=y(:,4);Ifd=y(:,5);w=y(:,6);V=y(:,7);VPSS = y(:,8); Vtn = y(:,9); Pn = y(:,10);
 t=t(1:901);P=P(1:901);Q=Q(1:901);Efd=Efd(1:901);Ifd=Ifd(1:901);VPSS=VPSS(1:901);V=V(1:901);w=w(1:901);
 Vt=V;time=t;