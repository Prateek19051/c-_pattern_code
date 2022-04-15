#include<iostream>
using namespace std;

int main()
{
    int n,row=1;
    cin>>n;
    while(row<=n)
    {
        //print space first
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        //print star
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}

/* o/p for n=4
   *
  **
 ***
****
*/