#include<iostream>
using namespace std;


int main()
{
    int n ;
    cout << "Give The Input : ";
    cin >> n;

    if (n < 0)
		return -1;

    int count = 0;
 while(n%5 == 0)
    {
      // cout << "Hello";
      n = n/5;
      count = count + n ;
}
cout << count;

    }

