#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    cin>>n;
    while(row<=n)
    {
        //first half
        int col=1;
        while(col<=(n-row+1))
        {
            cout<<col;
            col++;
        }
        //second half star part
        col=1;
        while(col<=(row-1)*2)
        {
            cout<<"*";
            col++;
        }
        //third half
        col=n-row+1;
        while(col>=1)
        {
            cout<<col;
            col--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}

/* 
1234554321
1234**4321
123****321
12******21
1********1

*/