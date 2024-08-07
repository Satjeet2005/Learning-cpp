#include <iostream>
using namespace std;
int main(){
    int n;
    bool val = true;
    cout << "Give Value of N:";
    cin >> n;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        // star
        for(int k=1;k<=n;k++){
            cout << "*";
        }
        // next line
        cout << endl;
    }
    return 0;
}
