#include<stdio.h>
int main(){
    int num,level;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Multiplication Table for %d:\n",num);
    for(int level = 1;level <=12;level++){
        printf ("%4d x %-2d = %-3d\n", num, level, num*level);
    }
}