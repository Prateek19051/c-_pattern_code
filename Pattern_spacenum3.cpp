#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    cin>>n;
    while(row<=n)
    {
        //print space
        int space=1;
        while(space<row)
        {
            cout<<" ";
            space++;
        }
        //print value
        int col=row;
        while(col<=n)
        {
            cout<<col;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}

/* output for n=4
1234
 234
  34
   4 */