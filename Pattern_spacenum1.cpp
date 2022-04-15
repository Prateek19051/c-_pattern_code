#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    cin>>n;
    while(row<=n)
    {
        //printing space
        int space=1;
        while(space<row)
        {
            cout<<" ";
            space++;
        }
        //print star
        int col=1;
        while(col<=n-row+1)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
/* o/p for n=4
1111
 222
  33
   4
*/