#include <stdio.h>
#include "myMath.h" 
int main (){
 double b;
printf("please insert a real number\n");
scanf("%lf",&b);


double x = Exponent((int) b);
double y = power(b,3);
double z = add(x,y);
double ans1= sub(z ,(2.0));
printf("the value of f(x)=e^x+x^3-2 at the point %lf is %0.4f \n " ,b,ans1);
double ans2= add(mul(b,3), mul(power(b,2),2));
printf ("the value of f(x)= 3x+2x^2  at the point %lf is %0.4f \n" , b, ans2);
x = power(b,3);
x = mul(x,4);
x = div(x,5);
y = mul(b,2);
double ans3=sub(x,y);
printf("the value of f(x) = (4x^3)/5-2x at the point %lf is %0.4f \n" , b,ans3);
return 0 ;
}
