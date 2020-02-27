#include <iostream>

using namespace std;

void fibonnaci_series(){
    static int f_series_1 = 0;
    static int f_series_2 = 1;
    static int sum = 0;
    int fb_limit;
    cout<<"Enter the fb_limit:\t"<<endl;
    cin<<fb_limit;
    //scanf("%d",&fb_limit);

    while (sum < fb_limit){
      //printf("Value of sum: %d",f_series_1);
      cout<<"Value of sum: %d"<<f_series_1;
      sum = f_series_1 + f_series_2;
      f_series_1 = f_series_2;
      f_series_2 = sum;
      getch();
    }
}


int main()
{
    fibonnaci_series();
    return 0;
}
