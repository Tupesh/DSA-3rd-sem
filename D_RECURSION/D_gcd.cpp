#include <stdio.h>

int gcd(int a, int b){
    if (b%a==0){
        return(a);
    }
    return gcd(b,b%a);
}

int main(){
    printf("%d",gcd(4,6));
    return 0;
}