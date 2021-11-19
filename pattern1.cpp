#include <bits/stdc++.h>
using namespace std;
#define l "\n"
/*   *
     **
     ***
     ****
     *****
*/    
     
void pattern1(int n)
{
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=row;col++)
		{
		   cout<<"*";
		}
		cout<<l;
	}
	
}





int main() {
	int n;
	cin>>n;
pattern1(n);

	return 0;
}
