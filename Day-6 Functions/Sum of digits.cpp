#include <iostream>
using namespace std;
void sum(int num){    //function to do sum of digits
    int rem,sum=0;
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    } 
    cout << "Sum of digits:" << sum;
}
int main(){
int num;
cout << "Given a number:"; 
cin >> num;
sum(num);
    return 0;
}
