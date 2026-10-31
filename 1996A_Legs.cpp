#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while (t--){
        cin >> n;
        if (n%4 == 0){
            cout << n/4 << endl;
        }
        else {
            cout << n/4 +1 << endl;
        }
    }
    return 0;
}