#include<iostream>
using namespace std ;

void count(int arr[] , int n)
{
    int count_0 =0;
    int count_1 = 0;
    int count_2 = 0;

    for(int j=0; j<=n-1 ; j++)
    {
        if(arr[j] == 0)
        count_0 ++ ;
        else if(arr[j] == 1)
        count_1 ++ ;
        else
        count_2 ++;
    }
    for(int i=0; i<=count_0 ; i++)
    {
      arr[i] = 0;
    }
    for(int i=count_0; i< count_0+count_1 ; i++)
    {
      arr[i] = 1;
    }
    for(int i=count_0 +count_1; i<=n-1 ; i++)
    {
      arr[i] = 2;
    }
    for(int j=0; j<=n-1 ; j++)
    {
    cout << arr[j];
}

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

     count (array , n);
}
