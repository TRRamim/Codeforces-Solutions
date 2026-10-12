#include <iostream>
using namespace std;

int main(){
    int m,i,j,ans=0;

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            cin >> m;
            if (m == 1){
                ans= abs(i-2) +abs(j-2);
            }
        }
    }
    cout << ans << endl;
    return 0;
}