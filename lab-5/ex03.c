#include<stdio.h>
int main(){
    int total=0,mark[5],student=5,sum=0,max;
    for(int i=0;i<5;i++){
        printf("Enter the marks of student %d:",i+1);
        scanf("%d",&mark[i]);
    }
    for(int i =0;i<5;i++){
        sum+=mark[i];

    }
    for(int i=0;i<5;i++){
        if(mark[i]>max){
        max=mark[i];
        }
    }
    printf("Total Marks :%d\n",sum);
    printf("Highest Marks:%d\n",max);

}