#include<iostream>
using namespace std ;
#include<vector>

vector<int> Leader (int a[] , int  n)
{
    vector<int> v;
    v.push_back(a[n-1]);
    int max = a[n-1];
     for (int j = n-2 ; j>=0; j--)
     {
       if (a[j] > max ){
           v.push_back(a[j]);
           max = a[j];
       }
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
   vector<int> result= Leader (array , n);
   for (int i = 0 ; i<=result.size(); i++)
   {
       cout << result[i];
   }

}
