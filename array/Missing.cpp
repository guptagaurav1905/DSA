#include<iostream>
using namespace std ;

int Missing_Number (int n , int arr[])
{
       int sum ;
        sum = (n*(n+1))/2;

    for(int j=0; j<n-1 ; j++)
    {
        sum = sum-arr[j];
    }
    return sum ;
}


int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;
   int array[15];
   for (int i = 0 ; i<n-1; i++)
    {
        cin >> array[i];
    }
  int x =  Missing_Number (n , array);
   cout << x;

}
