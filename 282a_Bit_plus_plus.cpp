#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x=0;
    while (n--){
        string st ;
        cin >> st ;

        if (st[1] == '+'){
            x++;
        }
        else {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}