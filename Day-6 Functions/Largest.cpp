#include <iostream>
using namespace std;
void large(int num1,int num2,int num3){  // function to find largest of three no
    if((num1 > num2) && (num1 > num3)){
        cout << num1 << " is Largest";
    }
    else if((num2 > num3) && (num2 > num1)){
        cout << num2 << " is Largest";
    }
    else{

        cout << num3 << " is Largest";
    }
}
int main(){
int num1,num2,num3;
cout << "Given three numbers:"; 
cin >> num1 >> num2 >> num3;
large(num1,num2,num3);
    return 0;
}
