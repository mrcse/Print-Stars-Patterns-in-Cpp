#include <iostream>

using namespace std;

int main()
{
  // int u=1,i;
  // for(u=1;u<=10;u++)
  //   {
  //       for(i=1;i<=u;i++)
  //       {
  //           cout<<"*";

  //       }
  //       cout<<endl;
  //   }
  //   while(u<10)
  //   {   i=1;
  //       while(i<=u)
  //       {
  //           cout<<"#";

  //           i++;
  //       }
  //       cout<<endl;
  //       u++;
  //   }

   int i,j,k;
  for(i=1; i<=10; i++)
    {
      for(j=10; j>=i; j--)
        {
          cout<<" ";
        }
      for(k=1; k<=(2*i-1); k++) //2*i-1 used for odd number of star
        {
          cout<<"*";
        }
      cout<<"\n";
    }

    return 0;
}
