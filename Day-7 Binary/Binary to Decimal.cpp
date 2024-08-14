#include <iostream>
using namespace std;
int bintodec(int num){
    int rem,x = 1,res=0;
    
    while(num > 0){
    rem = num%10;
    res += rem * x;
    x = x * 2;
    num = num/10;
}   
    return res;
}
int main(){
    int num;
    cout << "Give a Binary number:";
    cin >> num;
cout << "Binary to Decimal:" << bintodec(num);

    return 0;
}
