#include <iostream>
using namespace std;

int main(){
    int n,k,a[100];
    cin >> n >>k;
    
    int x =n;
    int i=0;
    while (x--){
        cin >> a[i];
        i++;
    }
    i=0;
    int count=0;
    

    while (i<n){
        if (a[i] >= a[k-1] && a[i] > 0){
            count++;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}