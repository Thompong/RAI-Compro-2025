#include<stdio.h>
int main(){
    int num,n=1;
    int arr[10];
    for(int n=0;n<10;n++){
        printf("Enter the value %d here: ",n+1);
        scanf("%d",&arr[n]);
    }
    printf("Values in array are:");
    for(int n=0;n<10;n++){
        printf("%d",arr[n]);
        if(n<9){
            printf(",");
        }
        
    }
    printf("\n");

    


}