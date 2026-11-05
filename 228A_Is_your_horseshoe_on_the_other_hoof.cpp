#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,count = 0;
    cin >> a >> b >> c >> d;

    if (b!= a){
        count ++;
    }
        
     if(c !=a && c!= b){
        count ++;
    }
     if (d != a && d != b && d != c){
        count++;
    }
    cout << 4-(count+1);
    return 0;
}