#include <iostream>

using namespace std;

void fibonnaci_series () {
    static int f_series_1 = 0;
    static int f_series_2 = 1;
    static int sum = 0;
    int fb_limit, random;
    cout << "Enter the fb_limit:\t"<<endl;
    cin >> fb_limit;

    while (sum < fb_limit){
      cout<<"Value of sum: "<<f_series_1;
      sum = f_series_1 + f_series_2;
      f_series_1 = f_series_2;
      f_series_2 = sum;
      std::getchar();
    }
}


int main()
{
    fibonnaci_series();
    return 0;
}
