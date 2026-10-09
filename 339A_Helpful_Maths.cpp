#include <iostream>
using namespace std;

int main(){
    int i,j;
    string s;
    cin >> s;

    int arr[100], n = 0;
    for (i = 0; s[i] !='\0'; i++){
        if (s[i] != '+'){
            arr[n] =s[i] -'0';
            n++;
        }
    }
    for (i=0; i<n-1;i++){
        for (j= i+1;j<n;j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0;i<n;i++){
        cout << arr[i];

        if (i != n-1){
        cout << "+";
    }
    }
    
    return 0;
}