#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main()
{
int i;
struct student{
char name[100];
char surname[100];
int age;
float score;
} s[10];
for(i=1;i<=3;i++)
{
printf("Student[%d]\n",i);
printf("Enter your name:");
scanf("%s",s[i].name);
scanf("%s",s[i].surname);
printf("Enter your age:");
scanf("%d",&s[i].age);
printf("Enter your score:");
scanf("%f",&s[i].score);
}
for(i=1;i<=3;i++)
printf("student %d name is %s %s,age %d.\n",i,s[i].name,s[i].surname,s[i].age);

return 0;
}