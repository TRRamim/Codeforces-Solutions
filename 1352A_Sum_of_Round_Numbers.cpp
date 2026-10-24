#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;

    while (t--){
        cin >> n;

        int p = 1, c=0;
        int a[10];

        while (n>0){
            int d = n%10;

            if (d != 0){
                a[c] = d * p;
                c++;
            }
            n=n/10;
            p=p*10;
        }
        cout << c << endl;
        for (int i = c-1; i>=0; i--){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}