#include <iostream>
using namespace std;

int main(){
    int n,k,t,c=0;
    cin >> n>>k;

    t = 240-k;
    for (int i =1;i<=n;i++){
        t = t - i*5;
        if (t<0){
            break;
        }
        c++;
    }
    cout << c;
    return 0;
}