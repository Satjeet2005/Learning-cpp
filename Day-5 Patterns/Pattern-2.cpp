#include <iostream>
using namespace std;
int main(){
    int n,val=1;
    
    cout << "Give Value of N:";
    cin >> n;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        //Printing Numbers
        if(i!=1){
        val=i;
        while(val!=1){
            cout << val;
            val--;
        }

        while(val!=i+1){
            cout << val;
            val++;
        }
        }
        else{
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
