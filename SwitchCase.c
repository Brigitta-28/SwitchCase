#include<stdio.h>
int main()
{
printf("Pick a number from 1 to 5 to know the price of listed food items:\n1.Sandwich\n2.Pasta\n3.Burger\n4.French Fries\n5.Pizza");
int choice=0
scanf("%d",&choice);

switch(choice)
{
case 1:printf("Sandwich,Rs 149\n"):break;
case 2:printf("Pasta,Rs 179\n"):break;
case 3:printf("Burger,Rs 129\n"):break;
case 4:printf("French Fries,Rs 99\n"):break;
case 5:printf("Pizza,Rs 239"):break;
default:printf("invalid choice");
}
