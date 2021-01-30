#include <iostream>

using namespace std;

int main()
{
    for(int i=10; i>=1; i--)
    {
        for(int j=i;j<=10;j++)
        {
            cout<<" ";
        }
        for(int k=2*i-1; k>=1; k--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
