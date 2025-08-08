#include<stdio.h>
int main()
{
    int i=0,num,sum=0;
    float avg;
    while(i<=9){
        i=i+1;
        printf("%d.Enter the number:",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    avg = sum/10;
    printf("Total sum is %d\n",sum);
    printf("Average is %.f\n",avg);
}