clc; //Clear console
clear;//All previous variables clear
close;// All scilab Windows should be close

// Input of Acceptance angle
theta_a_degrees=input('Enter the value of Acceptance angle in degrees=')
theta_a_radians=(theta_a_degrees)*(%pi/180);

// Input of Relative refractive index
delta=input("Enter the value of Relative refractive index difference=")

// Output Numerical Aperture
NA=sin(theta_a_radians);
disp ('numerical aperture=',NA)

// Output core refractive
n1=(NA)/(sqrt(2*delta));
disp ('n1=',n1)

//Output cladding refractive
n2=n1-(delta*n1);
disp('n2=',n2)

//output critical angle
fiy_c=asin(n2/n1);
fiy_c_degrees=(fiy_c)*(180/%pi);
disp('critical angle in degrees=',fiy_c_degrees);
