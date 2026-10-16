#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int u=0,l=0,i;


    for (i=0;s[i]!='\0';i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            u++;
        }
        else {
            l++;
        }
    }
    if (u>l){
        for (i=0;s[i] != '\0';i++){
            if (s[i] >= 'a' && s[i] <='z'){
                s[i] = s[i] - 'a' + 'A';
            }
            
        }
    }
    else {
        for (i = 0;s[i] !='\0';i++){
            if (s[i] >='A' && s[i] <='Z'){
                s[i]= s[i] - 'A'+ 'a';
            }
                
        }
    }
    cout << s;
    return 0;
}