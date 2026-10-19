#include <iostream>
using namespace std;

int main(){
    int c=0,i;
    string n;

    cin >> n;

    for (i=0;i<n.size();i++){
        if (n[i] == '4' || n[i]== '7'){
            c++;
        }
    }
    if (c == 4|| c==7){
        cout <<"YES"<<endl;
    }
    else {
        cout << "NO" <<endl;
    }
    return 0;
}