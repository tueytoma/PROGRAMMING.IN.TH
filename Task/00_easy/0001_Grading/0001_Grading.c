#include <stdio.h>

int main () {
    int point, mid, fin;

    scanf("%d", &point);
    scanf("%d", &mid);
    scanf("%d", &fin);

    int total = point + mid + fin;
    if(total >= 80) printf("A");
    else if(total >= 75) printf("B+");
    else if(total >= 70) printf("B");
    else if(total >= 65) printf("C+");
    else if(total >= 60) printf("C");
    else if(total >= 55) printf("D+");
    else if(total >= 50) printf("D");
    else printf("F");

    return(0);
}
