
#include<iostream>
using namespace std ;

int Trap_water(int n , int a[])
{
    int sum = 0;
    int start = a[0];
    int end = a[n-1];
    for (int i = 0 ; i<n-1; i++)
    {
        if(a[i+1] < start)
        {
            sum = sum + (start - a[i+1] );
                return sum;
        }

    }

}



int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;
   int array[15];
   for (int i = 0 ; i<n; i++)
    {
        cin >> array[i];
    }
  int x =  Trap_water (n , array);
   cout << x;

}
