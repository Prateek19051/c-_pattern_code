#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    cin>>n;
    while(row<=n)
    {
        int col=1;
        char ch='A'+row-1; // typecasting
        while(col<=n)
        {
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}