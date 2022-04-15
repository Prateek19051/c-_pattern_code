#include<iostream>
using namespace std;

int main()
{
    int row=1,n;
    cin>>n;
    int sum=1;
    while(row<=n)
    {
        //print space
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        //print sum
        int col=1;
        while(col<=row)
        {
            cout<<sum;
            sum++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
/* o/p for n=4
   1
  23
 456
78910
*/