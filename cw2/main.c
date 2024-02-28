#include <stdio.h>
#include <stdlib.h>
#define LFSR_SIZE 7
#define LFSR_TAP 0x6D
unsigned char lfsr=0x01;

 unsigned char lfsr_random()
{
    unsigned char lsb=lfsr&1;
    lfsr>>=1;
    if(lsb)
    {
        lfsr^=LFSR_TAP;
    }
    return lfsr;
}
int main()
{int i;
for(i=0;i<10;i++)
{
 printf("%u\n",lfsr_random());
}
    return 0;
}
