#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=10;i++)
    {
        for(int j=10;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(i==1 || k==1 || k==2*i-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(int i=9; i>=1;i--)
    {
        for(int j=i;j<=10;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(i==1 || k==1 || k==2*i-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
