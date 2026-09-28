#include <stdio.h>

int main() {
    int g, c, l;
    scanf("%d %d %d", &g, &c, &l);
    
    int max = g;
    
    if (c > max) {
        max = c;
    }
    if (l > max) {
        max = l;
    }

    int min = g;
    if (c < min) {
        min = c;
    }
    if (l < min) {
        min = l;
    }
    
    if (max - min >= 10) {
        printf("check again");
    } 
    else {
       
        int median;
        if ((g >= c && g <= l) || (g >= l && g <= c)){
            median = g;
        }
        else if ((c >= g && c <= l) || (c >= l && c <= g)){
            median = c;
        }
        else{
            median = l;
        }

        printf("final %d", median);
    }

    return 0;
}
