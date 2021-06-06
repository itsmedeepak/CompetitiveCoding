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
    int t;
    cin >> t;
    while (t--) { 
        int k,n;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flag=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(!isalpha(s[i])){
                count++;
            }
            if(count==k){
                cout<<"YES\n";
                flag=1;
                break ;
            }
            if(isalpha(s[i])){
                count=0;
            }
        }
        if(flag==0){
            cout<<"NO\n";
        }
    }
    return 0;
}