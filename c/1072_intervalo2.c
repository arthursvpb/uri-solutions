#include <stdio.h>
 
int main() {
 
    int x;
    scanf("%d", &x);
    
    int i, numero;
    int in = 0;
    int out = 0;
    
    for (i = 0; i < x; i++){
        scanf("%d", &numero);
        
        if ((10 <= numero) && (numero <= 20)){
            in++;
        }else{
            out++;
        }
    }
    
    // No URI precisamos colocar o \n no final do último printf também.
    printf("%d in\n", in);
    printf("%d out\n", out);
 
    return 0;
}