#include <iostream>
using namespace std;

int main(){
    int n,p,q;
    cin >> n;
    
    int count =0;
    while (n--){
        cin >> p >> q ;
        if(q-p >= 2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}