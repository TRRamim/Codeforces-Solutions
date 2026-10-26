#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,y;
    cin >> y;
    y++;

    while (true){
        a = y/1000;
        b = (y/100)%10;
        c = (y/10)%10;
        d = y%10;

        if ( a != b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout << y;
            break;
        }
        y++;
    }
    return 0;
}