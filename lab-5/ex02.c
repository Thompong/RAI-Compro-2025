#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int size=9;
    printf("Original array:");
    for(int i=0;i<size;i++){
    printf("%d",arr[i]);
    if(i<8){
        printf(",");
        }
    }
    printf("\n");
    printf("Reversed Array:");
    for(int i=8;i>=0;i--){
        printf("%d,",arr[i]);
    }
}