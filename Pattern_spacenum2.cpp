#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    cin>>n;
    while(row<=n)
    {
        //print space
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}

/* output for n=4
   1
  22
 333
4444 
*/