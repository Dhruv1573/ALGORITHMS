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
void towerOfHanoi(lint n,char A, char C,char B)
{
	if(n==0)
		return;
	towerOfHanoi(n-1,A,B,C);
	cout<<"Move "<<n<<" From "<<A<<" to "<<C<<endl;
	towerOfHanoi(n-1,B,C,A);
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q;
		string s;
		char A='A';
		char B='B';
		char C='C';
		cin>>n;
		towerOfHanoi(n,A,C,B);
		
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