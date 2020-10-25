#include <cstdio>
#include <iostream>
using namespace std;

//최소공배수 LCM(Least Common Multiple)
int get_gcd(int a, int b){
    if (b > a){
        int r = a%b;
        a=b;
        b=r;
    }
     while (a%b != 0) {
        int c = a% b;
        a = b;
        b = c;
    }
    return b;
}
   
int main()
{       
    int z,a,b,gcd;
    cin >> z;
    for(int i=0; i<z; i++){
    int a, b;
    cin >> a>>b;
    gcd = (a*b)/get_gcd(a,b);
    cout <<gcd<<'\n';
    }
}
/*
3
1 45000
6 10
13 17

45000
30
221*/
