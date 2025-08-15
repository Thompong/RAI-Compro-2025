#include<stdio.h>
int main()
{
    int arr[10],s=1,l=0;
    for(int i =0;i<8;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    
    
    if(arr[i]<s){
            s=arr[i];
        }
    if(arr[i]>l){
            l=arr[i];
        }
        }
    
    printf("Smallest number:%d\n",s);
    printf("Largest number:%d\n",l);
}