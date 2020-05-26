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
#define endl "\n"
#define space " "
lint maxProfit_TopDown(lint a[],lint n,lint dp[])
{
	if(n==0)
		return 0;
	if(dp[n]!=-1)
		return dp[n];
	lint ans=0;
	for(int i=1;i<=n;i++)
	{
		lint netprofit=a[i]+maxProfit_TopDown(a,n-i,dp);
		ans=max(ans,netprofit);
	}
	return dp[n]=ans;
}
lint maxProfit_Bottom_Up(lint a[],lint n)
{
	lint dp[100]={0};
	for(int i=1;i<=n;i++)
	{
		lint ans=0;
		for(int j=1;j<=i;j++)
		{
			lint netprofit=a[j]+dp[i-j];
			ans=max(ans,netprofit);
		}
		dp[i]=ans;
	}
	return dp[n];
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q;
		string s;
		char c;
		cin>>n;
		lint a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		lint dp[100];
		for(int i=0;i<=n;i++)
			dp[i]=-1;
		cout<<maxProfit_Bottom_Up(a,n)<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	solve();
}