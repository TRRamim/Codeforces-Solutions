#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans =0;

    for (int i=0; i<n; i++){
        int p,v,t;

        cin >> p >> v >> t;

        if(p+v+t >= 2){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}