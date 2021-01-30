#include<iostream>
using namespace std;
int main()
{

	int rows, coloumn, i, space = 9;
 	for (i=1; i<=10; i++)
{
    	for (coloumn=1; coloumn<=space; coloumn++)
    		{
				cout<<" ";
			}

    space--;

	for (coloumn=1; coloumn<=2*i-1; coloumn++)
      cout<<"*";
	  cout<<"\n";
}
  	space = 1;

  	for (i=1; i<=9; i++)
{
	    for (coloumn=1; coloumn<=space; coloumn++)
	   		cout<<" ";

    space++;

    		for (coloumn=1 ; coloumn<=2*(10-i)-1; coloumn++)
      			cout<<"*";
 					cout<<"\n";
}
	return 0;
}
