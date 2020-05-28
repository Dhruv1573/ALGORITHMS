	/*
		Author :- Dhruv Kumar
		Amity University jaipur

	*/
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
bool subsetSum(lint a[],lint n)
{
	lint sum=accumulate(a,a+n,0);
	bool dp[n+1][sum/2+1];
	for(int i=0;i<n+1;i++)
		dp[i][0]=true;
	for(int j=1;j<(sum/2)+1;j++)
		dp[0][j]=false;
	if(sum%2!=0)
		return false;
	else
	{
		for(int i=1;i<n+1;i++)
		{
			for(int j=1;j<(sum/2)+1;j++)
			{
				if(a[i-1]<=j)
					dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
				else
					dp[i][j]=dp[i][j];
			}
		}
		return dp[n][sum/2];
	}
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q,sum;
		string s;
		char c;
		cin>>n;
		lint a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(subsetSum(a,n))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
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