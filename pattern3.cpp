#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
/*  1
    1 2 
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/    
void pattern3(int n)
{
	int i;
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=row;col++)
		{
             cout<<col<<" ";
			
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	pattern3(n);
	return 0;
}
