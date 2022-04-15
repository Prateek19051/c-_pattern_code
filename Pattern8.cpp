#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    cin>>n;
    while(row<=n)
    {
        int col=1;
        int toprint=row;
        while(col<=row)
        {
            cout<<toprint<<" ";
            toprint++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
