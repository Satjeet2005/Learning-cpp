#include <iostream>
using namespace std;
void next(char alpha){
    if(alpha == 'z'){    
        cout << "Next aplhabet is: a";  
    }
    else if(alpha == 'Z'){
        cout << "Next aplhabet is: A"; 
    }

    else{
    cout << "Next alphabet is: " << char(alpha+1);
    }
}

int main(){
char ch;
cout << "Give a character:"; 
cin >> ch;
next(ch);
    return 0;
}
