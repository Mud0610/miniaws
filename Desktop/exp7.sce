clc;
clear;
close;
theta_a_degrees = input ('Enter the value of acceptance angle in degree= ');
delta = input ("Enter Relative Difference");
theta_a_radian=(theta_a_degrees)*(%pi/180);
NA = sin(theta_a_radian);
disp("Numerical Aperture= ",NA);
n1 = (NA)/ (sqrt(2*delta));
disp( "n1 = ",n1);
n2= n1 - (delta*n1);
disp("n2 = ", n2);
fly_c = asin(n2/n1);
fly_c_degrees = (fly_c)* (180/%pi);
disp("Critical angle = ", fly_c_degrees)
