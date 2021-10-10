#include<iostream>
using namespace std ;

int  Equilibrium (int a[] ,int n)
{

    if (n == 1)
    {
        return 0;
    }
    int Prev_sum = 0;
    int sum = 0;

     for(int j=0; j<=n-1 ; j++)
     {
         sum = sum + a[j];
     }
     int Ahead_sum = sum ;

    //  cout << sum <<'\n';
    //  cout << Ahead_sum;

     for(int i=1; i<=n-1 ; i++){
          Prev_sum +=  a[i-1];
          Ahead_sum = sum - a[i]-Prev_sum;
            //   cout<< "Psum " << Prev_sum <<'\n';
            //   cout<< "AheadSum " << Ahead_sum <<'\n';
          if(Prev_sum == Ahead_sum)
          {
              return i;
          }
     }
    //  return -1;
}




int main ()
{
     int n;
    cout << "Enter the array size : ";
    cin >> n;
   int array[15];
   for (int i = 0 ; i<=n-1; i++)
    {
        cin >> array[i]; // entry should be only 0 , 1, 2
    }
   int result = Equilibrium (array , n);
   cout << result;
}
