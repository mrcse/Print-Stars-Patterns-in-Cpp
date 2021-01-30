#include<iostream>
int main()
{
    int i=1;
    while( i<=5)  //repeat loop 5 times
    {
        int a=i,j=5;  //initialize the value of j and assign value i to a
        while(j>=i)   //to make a triangular shape
        {
            std::cout<<a<<"\t";   //print a=1
            a+=j;     //increment a by j to acquired answer
            j--;      //decrement j to finished the loop
        }
        std::cout<<"\n";  //  \n to jump new line
        i++;  //increment i
    }
    return 0;
}
