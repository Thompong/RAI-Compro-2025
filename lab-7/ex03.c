#include<stdio.h>
#include<math.h>
int main(){
    struct coor{
        float x,y;
        
    }s[2];
    int i;
    for(i=1;i<=2;i++){
        printf("Enter x%d:",i);
        scanf("%f",&s[i].x);
        printf("Enter y%d:",i);
        scanf("%f",&s[i].y);
    }
    float d;
    d = sqrt(pow(s[2].x - s[1].x, 2) + pow(s[2].y - s[1].y, 2));
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.3f unit(s)",s[1].x,s[1].y,s[2].x,s[2].y,d);
}