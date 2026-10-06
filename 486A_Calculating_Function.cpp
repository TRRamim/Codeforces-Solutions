#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    if (n%2 ==0){
        n =n/2;
        cout << n <<endl;
    }
    else {
        n = -(n+1)/2;
        cout << n <<endl;
    }
    return 0;
}