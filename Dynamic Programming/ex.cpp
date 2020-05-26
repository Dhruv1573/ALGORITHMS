#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define first f
#define second s
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define MAXN 100001
#define len length()
#define testcase(t) for(int i=0;i<t;i++)
void solve()
{
	int t;
	cin>>t;
	testcase(t)
	{
		lint n,k;
		string s;
		char c;
		cin>>n>>k;
		lint a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		lint max=INT_MIN,x=0,y=0;
		lint count=0;
		for(int i=0;i<n-k+1;i++)
		{
			count=0;
			for(int j=i+1;j<i+k-1;j++)
			{
				if(a[j]>a[j+1]&&a[j-1]<a[j] &&j!=i &&j!=(n-1))
					count++;
			}
			if(count>x)
			{
				x=count;
				y=i;
			//	y=count;
			}
		}
		cout<<x+1<<" "<<y+1<<endl;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	solve();
}