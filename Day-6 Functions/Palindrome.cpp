#include <iostream>
using namespace std;
void pali(int num){       //Function to check Palindrome
    int rem,rev=0,num_cp;
    num_cp=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==num_cp){  //Palindrome
        cout << "Given number is Palindrome"; 
    }
    else{  //not Palindrome
        cout << "Given number is not Palindrome";
    }

}
int main(){
int num;
cout << "Given a number:"; 
cin >> num;
pali(num);
    return 0;
}
