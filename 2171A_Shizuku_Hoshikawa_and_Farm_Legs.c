#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int n;
        scanf("%d", &n);
        int count = 0;
        
        for(int v = 0; v <= n / 4; v++) {
            int remaining_legs = n - 4 * v;
            if(remaining_legs % 2 == 0) {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}