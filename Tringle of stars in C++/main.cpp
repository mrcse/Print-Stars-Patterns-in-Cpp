#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=10; i++)
    {
      for(int j=10; j>=i; j--)
        {
          cout<<" ";
        }
      for(int k=1; k<=(2*i-1); k++) //2*i-1 used for odd number of star
        {
          cout<<"*";
        }
      cout<<"\n";
    }
    return 0;
}
