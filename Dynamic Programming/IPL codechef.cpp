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
void solve()
{
//	lint t;
//	cin>>t;
//	testcase(t)
//	{
		lint n,k,q;
		string s;
		char c;
		cin>>n;
		lint a[n];
		lint sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		lint dp[n];
		dp[0]=a[0];
		dp[1]=a[1];
		dp[2]=a[2];
		for(int i=3;i<n;i++)
		{
			dp[i]=min(dp[i-1],min(dp[i-2],dp[i-3]))+a[i];
		}
		lint ans=min(dp[n-1],min(dp[n-2],dp[n-3]));
		cout<<sum-ans<<endl;
//	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	solve();
}