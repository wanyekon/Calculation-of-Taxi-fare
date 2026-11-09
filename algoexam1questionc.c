#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 // This program calculates the taxi fare based on distance and time.
int main(void){
   int fee=50,distance,time,price;
printf("Enter distance in km: ");
scanf("%d", &distance);
if (distance <= 5) {
price= fee + distance*5;

} else {
 price=fee+ distance*8;
}
printf("ıf time is am , you enter '1'. If not , you enter '0': n/");
scanf("%d",&time);

if (time == 1) {
   price = price * 125/100;
} else {
price = price;
}

printf("You should pay %d ",price);
                                                                                                                                                                                                                 
return 0;
}