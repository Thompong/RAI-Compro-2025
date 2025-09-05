#include<stdio.h>
#include<math.h>
int main(){
    struct Vector{
        float i,j;
        
    }s[2];
    int c;
    for(c=1;c<=2;c++){
        printf("Enter x%d:",c);
        scanf("%f",&s[c].i);
        printf("Enter y%d:",c);
        scanf("%f",&s[c].j);
    }
    float a,b;
    a = (s[2].i+s[1].i);
    b = (s[2].j+s[1].j);
    printf("Resultant vector is equvalence to %.1f i + %.1f",a,b);
}