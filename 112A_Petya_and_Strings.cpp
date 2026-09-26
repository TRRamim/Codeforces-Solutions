#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string c1,c2;

    cin >> c1 >> c2;

    for( int i = 0; i<c1.length();i++){
        c1[i] = tolower(c1[i]);
        c2[i] = tolower(c2[i]);
    }

    if(c1<c2){
        cout << -1 << endl;
    }
    else if(c1>c2){
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}