#include <stdio.h>

int main(void){
    int x, y, z, maior, inter, men;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z){
        maior = x;
    }else if(x > y && x < z){
        inter = x;
    }else if(x < y && x < z){
        men = x;
    }else if (x == y || x == z){
        if (x > z){
            men = z;
            inter = y;
            maior = x;
        }else{
            men = x;
            inter = y;
            maior = z;
        }
    }
   
    


    return 0;
}