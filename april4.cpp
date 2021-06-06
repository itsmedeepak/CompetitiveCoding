#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll temp=n/4;
        ll r=n%4;
        if(r==0 && temp>=1) cout<<temp*44+16<<"\n";
        if(r==1 && temp>=1) cout<<temp*44+20+12<<"\n";
        if(r==2 && temp>=1) cout<<temp*44+36+8<<"\n";
        if(r==3 && temp>=1) cout<<temp*44+51+4<<"\n";

        if(r==1 && temp==0) cout<<20<<"\n";
        if(r==2 && temp==0) cout<<36<<"\n";
        if(r==3 && temp==0) cout<<51<<"\n";
    }
    return 0;
}