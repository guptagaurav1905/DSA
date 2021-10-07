#include<iostream>
using namespace std;

bool isprime(int n)
{
    if(n==2 || n == 3)
    {
        return true;
    }


     if(n%2 == 0  || n%3 == 0)
     {
         return false ;
     }

     for(int i = 5 ; i*i<=n; i += 6)
     {
          if(n%i == 0 ||  n%(i+2) == 0)
              return false;
     }
     return true;
}

int main()
{
    int n ;
     cout << "Give the Number : ";
     cin >> n;

      for(int i=2; i<n ; i++)
      {
          if (isprime(i))
          {
              cout<<i << " ";
          }
      }

}
