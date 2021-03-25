#include <iostream>

using namespace std;

void flip_bit(int value, int pos){
    int r, n;
    n = pos;//Position where to flip the bit
    r= 0;
    int p = value;
    r = (p ^ (1<<n));
    printf("Value of P before Flip: %x\n",p);
    p = r;
    printf("Value of P after Flip: %x\n",p);
}

int main()
{   //Flip Bit at nth position
    flip_bit(0x8000, 5);

    return 0;
}
