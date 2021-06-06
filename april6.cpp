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
#define MP make_pain
string arr[1000000+5];
void store(){
    FOR(i,1000000+5){
        arr[i]=convertbin(i);
        cout<<arr[i]<<endl;
    }
}
string convertbin(ll n){
    string s = "";
    while(n>0){
        char temp=n%2;
        s+=temp;
        n=n/2;
        reverse(s.begin(),s.end());
        return s;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    store();
    ll t;
    cin >> t;
    while (t--) { 
        string s;
        cin>>s;
        ll n=s.size();
        FOR(i,n){
            if(s.find(arr[i])<n){
                continue;
            }
            else{
                FOR(j,n){
                    if(jn)
                }
            }
        }
    return 0;
}