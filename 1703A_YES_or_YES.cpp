#include <iostream>
using namespace std;

int main(){
    int t;
    char a,b,c;

    cin >> t;
    while (t--){
        cin >> a>>b>>c;
        if ((a=='Y' || a=='y') && (b=='E' || b=='e') && (c=='S' || c=='s')){
            cout << "YES" <<endl;
        }
        else {
            cout <<"NO" << endl;
        }
    }
    return 0;
}