#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,end;
    cout << "Give a Number:";
    cin >> num;
    for(int i=2;i<=num;i++){
        bool prime=true;
        end=sqrt(i);
        for(int j=2;j<=end;j++){
            if(i%j==0){
                prime=false;
                }
        }
        if(prime){
            cout << i << " ";}
    }
    return 0;
}