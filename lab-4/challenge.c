#include<stdio.h>
int main(){
    int balance,options,num;
    do{
        printf("======ATM MENU ======");
        printf("\n1.Check Balance\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Exit\n");
        printf("Choose an option:%d\n",options);
        scanf("%d",&options);
    
    }while(options ==1,2,3,4);

     if(options==1){
            printf("Your balance is:0");
        }
        else if (options==2){
            printf("Enter amount to deposit:");
            scanf("%d",&num);
        }
        else if (options==3){
            printf("Enter amount to withdraw:");
            scanf("%d",&num);
        }
        else if (options==4){
            printf("Exiting");
        }

}