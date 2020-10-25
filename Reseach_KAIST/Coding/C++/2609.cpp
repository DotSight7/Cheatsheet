#include <iostream>
#include <stdio.h>
#include <cstdio>
using namespace std;

int get_gcd(int a, int b){
    while(b !=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}

int get_lcm(int a, int b, int c){
    return a*b/c;
}

int main() {
    int a,b,gcd,lcm;
    scanf("%d %d",&a ,&b);
    
    gcd= get_gcd(a,b);
    lcm= get_lcm(a,b,gcd);

    printf("%d\n%d\n",gcd,lcm);

    return 0;
}
/*24 18
6
72*/
