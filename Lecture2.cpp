#include <iostream>
using namespace std;

int maxi(int a, int b){
    if(a>b) return a;
    return b;
}
int maxi(int a, int b, int c){
    if(a>b){
        if(a>c) return a;
        return c;
    }
    else{
        if(b>c) return b;
        return c;
    }
}

int maxi(int a, int b, int c, int d){
    int max = maxi(a,b,c);
    return maxi(max,d);
}

int main()
{
    
    cout<<maxi(3,2)<<endl;
    cout<<maxi(3,2,6)<<endl;
    cout<<maxi(3,2,9,8)<<endl;
    return 0;
}
