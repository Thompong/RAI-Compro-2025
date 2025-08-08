#include<stdio.h>
int main()
{
    int count,sum=0,final;
    printf("Input final:");
    scanf("%d",&final);
    for(count-1;count<=final;count++){
        if(count%2-1)
        sum = sum+count;
    }
    printf("%d\n",sum);
return 0;
}