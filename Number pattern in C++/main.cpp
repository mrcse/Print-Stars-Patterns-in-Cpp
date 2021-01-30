#include <iostream>
int main()
{
    int i=1;
    while(i<=5)  //loop repeatition 5 times
    {
        int j=1;
        while(j<=i)  //nested loop to print numbers
        {
          std::cout<<j*j<<"\t";   //j*j means square of number
          j++;   //increment j
        }
      std::cout<<"\n";
      i++;   //increment i
    }
    return 0;
}
