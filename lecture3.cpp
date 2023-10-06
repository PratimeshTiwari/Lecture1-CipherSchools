#include <iostream>
using namespace std;

// int power(int base, int power){
//     int num=1;
//     for (int i = 0; i < power; i++)
//     {
//         num*=base;
//     }
//     return num;
// }

int power(int base, int pow){
    if(pow==0) return 1;
    int smlAns = power(base, pow-1);
    return smlAns*base;
}
int main(){
    cout<<power(2,3);
    return 0;
}