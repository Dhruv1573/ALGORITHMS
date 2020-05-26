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
void subsequences(char *s,char *ans,int i,int j)
{
	//Base case
	if(s[i]=='\0')
	{
		ans[j]='\0';
		cout<<ans<<endl;
		return;
	}
	//Recusrsive case
	ans[j]=s[i];
	subsequences(s,ans,i+1,j+1);
	subsequences(s,ans,i+1,j);
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q;
		//string s;
		char ans[100],s[100];
		cin>>s;
		//string ans;
		subsequences(s,ans,0,0);
		
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