#include<iostream>
using namespace std;

int main()
{
    int n,row=1;
    cin>>n;
    int ans=n*n;
    while(row<=n)
    {
        int col=1;
        while(col<=n);
        {
            cout<<ans<<" ";
            ans--;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}