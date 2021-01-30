#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=5; i>=1; i--)
    {
        if(i%2==1)
            k=1;
        else
            k=i;
        for(j=1; j<=i; j++)
        {
            cout<<k<<"\t";
            if(i%2==1)
                k++;
            else
                k--;
        }
        cout<<endl;
    }
    return 0;
}
