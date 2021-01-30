#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=15;i++)
    {
        for(int j=1;j<=15;j++)
        {
            if((j==1 || j==15)|| (i==1 || i==15) )
            {
                cout<<",";
            }
            else
                cout<<" ";
            if(i==j || j==15-i)
                cout<<" *
                ";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
