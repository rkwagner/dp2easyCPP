#include<stdio.h>
#include <string.h>

int main(void){
  char input[80];
  puts("Which would you like to calculate?\n1)Force\n2)Mass\n3)Acceleration");
  puts("User input: ");
  fgets(input,sizeof input, stdin);
  if(input[0]=='1'){
    puts("Input Mass: ");
    double mass;
    scanf("%lf", &mass);
    puts("Input Acceleration: ");
    double acceleration;
    scanf("%lf", &acceleration);
    printf("Force=%lf*%lf=%lf\n",mass,acceleration,(mass * acceleration));
  }
  else if(input[0]=='2'){
    puts("Input Force: ");
    double force;
    scanf("%lf", &force);
    puts("Input Acceleration: ");
    double acceleration;
    scanf("%lf", &acceleration);
    printf("Mass=%lf/%lf=%lf\n",force,acceleration,(force / acceleration));
  }
  else if(input[0]=='3'){
    puts("Input Force: ");
    double force;
    scanf("%lf", &force);
    puts("Input Mass: ");
    double mass;
    scanf("%lf", &mass);
    printf("Mass=%lf/%lf=%lf\n",force,mass,(force / mass));
  }
  else{
    puts("User input invalid.");
  }
}
