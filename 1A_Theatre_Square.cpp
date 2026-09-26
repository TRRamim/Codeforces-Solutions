#include <iostream>
using namespace std;

int main(){
    long long m,n,a,x,y;
    cin >> n >> m >> a;;

    x = (n+a-1)/a;
    y = (m+a-1)/a;

    cout << x*y <<endl;

    return 0;

}

