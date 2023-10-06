
#include <iostream>
using namespace std; 
int main() {
    
   
int a;

cout<<"enter an integer:";

cin>>a;

switch(a){
    case 1:
    cout<<"the value of a is 1";
    break;
    
    case 2:
    cout<<"the value of a is 2";
    break;
    
    default:
    cout<<"default will be always printed";
    break;
}
    return 0;
}