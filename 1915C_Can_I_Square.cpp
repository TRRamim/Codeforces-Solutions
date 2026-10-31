#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        long long sum = 0,a;
        for (int i=0;i<n;i++){
            cin >> a;
            sum = sum +a;
        }
        long long x = sqrt(sum);
        if (x*x == sum){
            cout <<"YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
    return 0;
}