#include <iostream>
#include <string>

using namespace std;

int main(){
    int i,j;
    string s;
    cin >> s;
    int count = 0;
    for ( i=0; i<s.length(); i++){
        bool found = false;
        for (j=0; j<i; j++){
            if (s[i] == s[j]){
                found = true;
                break;
            }
        }
        if (found == false){
            count++;
        }
    }
    if(count %2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
}

















