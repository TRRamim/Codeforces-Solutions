#include <iostream>
using namespace std;

int main(){
    int n,i=0;
    double p,sum=0;

    cin >> n;
    while (i<n){
        cin >> p;
        sum = sum + p;
        i++;
    }
    cout << sum/n << endl;
}