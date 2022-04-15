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
            cout<<sum<<" ";
            sum++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
/* o/p or n=4
   1 
  2 3 
 4 5 6 
7 8 9 10 
*/