#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    cin>>n;
    char ch='A';
    while(row<=n)
    {
        int col=1;
        while(col<=n)
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