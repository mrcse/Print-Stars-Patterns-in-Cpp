#include<iostream>
int main()
{
	for(int i=10;i>=1;i--) //to jump next line
    {
        for(int j=1;j<=i;j++)  //to print star in line
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n_______________________________________\n\n";
    for(int i=1;i<10;i++) //jump next line but i=1 means print one star in 1st line
    {
        for(int j=1;j<=i;j++)  // print stars
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n_______________________________________\n\n";
    for(int i=1; i<=10; i++)  //jump to next line
    {
      for(int j=10; j>=i; j--)  //print a triangle of spaces
        {
          std::cout<<" ";
        }
      for(int k=1; k<=(2*i-1); k++) //2*i-1 used for odd number of star
        {
          std::cout<<"*";
        }
      std::cout<<"\n";
    }
	return 0;
}
