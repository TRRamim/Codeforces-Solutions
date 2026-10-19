#include <iostream>
using namespace std;

int main(){
    int i,n,c=0;
    string s;
    cin >> n;
    cin >> s;

    for (i=0;i<n;i++){
        if (s[i] == s[i-1]){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}