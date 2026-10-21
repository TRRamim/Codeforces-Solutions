#include <iostream>
using namespace std;

int main(){
    int k,n,w,ttl=0;
    cin >> k >> n >> w ;

    for (int i=1;i<=w;i++){
        ttl = ttl + k*i;
    }
    if (ttl>n){
        cout << ttl -n <<endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}