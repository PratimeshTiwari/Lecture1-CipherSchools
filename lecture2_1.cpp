#include <iostream>
using namespace std;

void increment(int&a){
    // int&b=
    a++;
    return ; 
}
void decrement(int&b){
    // int&b=
    b--;
    return ; 
}
int main(){
    int i = 11;
    int j = 11;
    increment(i);
    decrement(j);
    cout<<i<<endl;
    cout<<j<<endl;
}