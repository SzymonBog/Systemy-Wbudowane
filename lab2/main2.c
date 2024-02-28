#include <stdio.h>
#include <stdlib.h>
#define BIT_VALUE(value, noBit) (value >> noBit) & 1

int xor(seed){
        int x = BIT_VALUE(seed, 0) ^ BIT_VALUE(seed, 1) ^ BIT_VALUE(seed, 4) ^ BIT_VALUE(seed, 5);
        seed = (seed >> 1) + (x * 32);
}

int xor2(seed){
        int x = BIT_VALUE(seed, 0) ^ BIT_VALUE(seed, 3) ^ BIT_VALUE(seed, 4) ^ BIT_VALUE(seed, 5);
        seed = (seed >> 1) + (x * 32);
}

int main2()
{
    int seed = 1; //<= 63

    for(int i=0; i<64; i++){
        seed = xor(seed);
        printf("%d\n", seed);
    }

    printf("\n");

    for(int i=0; i<64; i++){
        seed = xor2(seed);
        printf("%d\n", seed);
    }

    return 0;
}
