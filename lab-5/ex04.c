#include<stdio.h>
int main(){
    int num[10],even=0,odd=0;
    for(int i=0;i<10;i++){
        printf("Enter value %d:",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++){
        if(num[i]%2==0){
        even=even+1;
        }
        
        if(num[i]%2!=0){
            odd=odd+1;
        }
    
    }

        printf("Even number:%d\n",even);
        printf("Odd number:%d\n",odd);
}