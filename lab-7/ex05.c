#include <stdio.h>

struct Time {
    int m;
    int s;
};

int main() {
    struct Time t[3];
    int total=0;
    int i;
    for(i=0;i<3;i++){
        printf("Time input (m:s):");
        scanf("%d:%d",&t[i].m,&t[i].s);
        total += t[i].m*60 + t[i].s;
    }
    printf("Total time elasped: %d second(s)\n",total);

    return 0;
}

