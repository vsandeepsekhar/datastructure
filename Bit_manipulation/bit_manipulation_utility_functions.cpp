#include <iostream>
#include<bitset>

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

void toggle_range(int N, int L, int R){
  int size = sizeof(int);
  int P = N;
  cout<<"Flip Number "<<std::bitset<32>(N)<<"from "<<L<<" to "<<R<<endl;
  cout<<"Given Number:            "<<std::bitset<32>(N)<<endl;
  while(L != (R-1)){
    if(L < R){
      cout<<"Invalid condition!"<<endl;
      break;
    }
    P = (P ^ (1<<L));
    L--;
  }
  cout<<"Number flipped from"<<L<<" to "<<R<<std::bitset<32>(P)<<endl;
}


int countones(int n){
  int size = sizeof(int);
  int count =0;
  int set =0;

  for(int i=0;i<size;i++){	
    set = (n & 1);
    if(set == 1){
      set =0;
      count++;
    }
    n = n>>1;
  }
  return count;
}

int countones_faster(int n){
   int p;
   p = n;
   int count =0;

   while(p != 0){
    p = p & (p-1);
    count ++;
   }

  return count;
}




int main()
{   //Flip Bit at nth position
    flip_bit(0x8000, 5);
    //Count number of 1s
    cout<<"Counting the number of Ones: "<<countones(9);
    //Count number of 1s Faster algorithm
    cout<<"Counting the number of Ones: "<<countones_faster(9);
    //Toggle Range
    int number = 21;
    toggle_range(21,4,1); //10101

    return 0;
}
