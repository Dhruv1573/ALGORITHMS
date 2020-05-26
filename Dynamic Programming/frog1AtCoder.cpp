#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define MAXN 100001
#define len length()
#define testcase(t) for(int i=0;i<t;i++)
lint dp[100001];

void solve()
{
	//lint t;
	//cin>>t;
	//testcase(t)
	//{
		lint n,k,q;
		string s;
		char c;
		cin>>n;
		lint a[n+1];
		for(int i=1;i<n+1;i++)
			cin>>a[i];
		//dp[1]=0;
		dp[0]=mod;
		//dp[1]
		for(int i=1;i<n+1;i++)
		{
			if(i==1)
				dp[i]=0;
			else
			{
				dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
			}
		}
		cout<<dp[n]<<endl;

	//}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	solve();
}