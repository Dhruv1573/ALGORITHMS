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
void inWord(lint n)
{
	vector<string>vect;
	vect.push_back("Zero");vect.push_back("One");vect.push_back("Two");vect.push_back("Three");vect.push_back("Four");
	vect.push_back("Five");vect.push_back("Six");vect.push_back("Seven");vect.push_back("Eight");vect.push_back("Nine");
	//Base case
	if(n==0)
		return;
	//Recusrsive Case
	inWord(n/10);
	cout<<vect[n%10]<<" ";
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
		inWord(n);
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