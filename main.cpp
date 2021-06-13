#include <iostream>

using namespace std;

int main()
{
    int n,m[10][10],i,j;
    cout<<"n=";
    cin>>n;
    for(i=0 ; i<n ; i++)
        for(j=0 ; j<n ; j++)
    {
        cout<<"m["<<i<<"]["<<j<<"]=";
        cin>>m[i][j];

    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
    for(i=0 ; i<n ; i++)
        cout<<m[i][0]<<" ";
    for(i=1 ; i<n ; i++)
        cout<<m[n-1][i]<<" ";
    for(i=n-2 ; i>=0 ; i--)
        cout<<m[i][n-1]<<" ";
    for(i=n-2 ; i>=1 ; i--)
        cout<<m[0][i]<<" ";

    return 0;
}
