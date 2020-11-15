#include <stdio.h>
#include "myMath.h" 
int main (){
 double b;
printf("please insert a real number\n");
scanf("%lf",&b);
int a = (int)b;
double exptemp = Exponent(a);
double ans1= exptemp+power(b,3) -(2.0);
printf("the value of f(x)=e^x+x^3-2 at the point %lf is %0.4f \n " ,b,ans1);
double ans2= mul(b,3)+ mul(power(b,2),2);
printf ("the value of f(x)= 3x+2x^2  at the point %lf is %0.4f \n" , b, ans2);
double temp13 = power(mul(b,4),3);
double temp23 =5-mul(b,2);
double ans3=temp13/temp23;
printf("the value of f(x) = (4x^3)/5-2x at the point %lf is %0.4f \n" , b,ans3);
return 0 ;
}
