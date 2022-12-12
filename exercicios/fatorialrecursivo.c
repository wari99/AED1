#include <stdio.h>

int fatorial(int n){
    int f;
    if(n == 0 || n == 1){
        return 1;
    }
    f = fatorial(n - 1)*n;
    return f;
}

int main(){
    printf("%d", fatorial(5));
}


/*
fatorial(5) =  fatorial(4) * 5
fatorial(4) =  fatorial(3) * 4 * 5
fatorial(3) =  fatorial(2) * 3 * 4 * 5
fatorial(2) =  fatorial(1) * 2 * 3 * 4 * 5
fatorial(1) =  1 * 2 * 3 * 4 * 5
*/
