#include <stdio.h>
#include <stdlib.h>


void intToBin(int bin)
{
    int mask = 0x8000;
    while(mask!=0){
        if((bin&mask)==0){
            printf("0");
        } else {
            printf("1");
        }
        mask = mask >> 1;
    }
    printf("\n");
}

int main()
{
    int bin = 0;

    int intToGray(unsigned int input) // byl char
    {
        return (input >> 1) ^ input;
    }

    while(bin<65536){
        //printf("\r");
        intToBin(bin);
        intToBin(intToGray(bin));
        bin = bin + 1;
        for(int i=0; i<147483647; i++){

        }
        system("cls");
    }

    return 0;
}
