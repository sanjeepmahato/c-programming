#include<stdio.h>
#include<conio.h>

main(){
float s1,s2,s3,s4,s5,s6,s7,t,a,p;
printf("enter marks of seven subjects");
scanf("%f,%f,%f,%f,%f,%f,%f",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
t=s1+s2+s3+s4+s5+s6+s7;
a=(t/7);
p=(t/700)*100;
printf("\nTotal marks is %f",t);
printf("\nAverage is %f",a);
printf("\nPercentage is %f",p);
getch();

}


