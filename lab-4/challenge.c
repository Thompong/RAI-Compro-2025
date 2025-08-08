#include<stdio.h>
int main(){
    int balance=0,options,dp,wd;
    do{
        printf("======ATM MENU ======");
        printf("\n1.Check Balance\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Exit\n");
        printf("Choose an option:");
        scanf("%d",&options);
        if(options==1){
            printf("Your balance is:%d\n",balance);
        }
        else if (options==2){
            printf("Enter amount to deposit:");
            scanf("%d",&dp);
            balance += dp;
        }
        else if (options==3){
            printf("Enter amount to withdraw:");
            scanf("%d",&wd);
            balance -= wd;
            printf("Withdrawal successful.\n");
        }
        else if (options==4){
            printf("Thank you for using the ATM.\n");
        }
    }while(options !=4);


        

}