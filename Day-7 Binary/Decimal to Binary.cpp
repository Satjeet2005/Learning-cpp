#include <iostream>
using namespace std;
int dectobin(int num){
    int rem,div,res = 0,x=1;
    while(num > 0){
        rem = num%2;
        res += rem * x;
        x = x * 10;
        num = num/2;
    }
    return res;
}
int main(){
int num;
cout << "Give a Decimal number:";
cin >> num;
cout << "Decimal to Binary:" << dectobin(num);
    return 0;
}
