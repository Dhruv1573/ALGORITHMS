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
lint numberofWays(lint n,lint dp[])
{
	if(n==1 ||n==0)
		return 1;	
	if(dp[n]!=-1)
		return dp[n];
	return dp[n]=((numberofWays(n-1,dp))%mod+((n-1)*numberofWays(n-2,dp))%mod)%mod;
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
		lint dp[101];
		for(int i=0;i<101;i++)
			dp[i]=-1;
		cout<<numberofWays(n,dp)<<endl;
		
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