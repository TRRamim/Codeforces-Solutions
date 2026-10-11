#include <iostream>
#include <string>
using namespace std;

int main(){
    int i;
    string n;
    cin >> n;
    int count = 1;

    for(i = 1; n[i]!= '\0'; i++){
        if(n[i] == n[i-1]){
            count++;
        }
        else {
            count = 1;
        }
        if ( count >=7){
            cout << "YES" <<endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}