#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    char ch='A';
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}