#include <stdio.h>

int main () {
    int a, b;
    int round=0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b) round=2;
    else if(b != 0) {
        while(1) {
            round++;
            b -= a;
            if(b <= 0) break;
        }
    }

    printf("%d", round);

    return(0);
}
