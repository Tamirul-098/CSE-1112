#include<stdio.h>
int main()
{
    int unit;
      double bill=0;
    printf("enter your electricity bill : ");
    scanf("%d",&unit);
    if (unit>200){
    bill=bill+(unit-200)*10;
    unit=200;}
     if(unit>100){
        bill=bill+(unit-100)*7.5;
        unit=100;}
        bill=bill+unit*5;
printf("total bill = %.2f",bill);
        return 0;
}
