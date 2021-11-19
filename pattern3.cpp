#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
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
