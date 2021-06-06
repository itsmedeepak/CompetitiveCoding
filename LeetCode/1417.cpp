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
    string s;cin>>s;
    string ap = "", nu = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i])){
            ap+=s[i];
        }
        else{
            nu+=s[i];
        }
    }
    string ans="";
    bool flag=0;
    int j=0,k=0;
    if((ap.size())+1==nu.size() || (ap.size())==(nu.size())+1||ap.size()==nu.size()){
        for(int i=0;i<s.size();i++){
            if(ap.size()==nu.size()){
                if(flag==0){
                    ans+=ap[j];
                    j++;
                    flag=1;
                }
                else{
                    ans+=nu[k];
                    k++;
                    flag=0;
                }
                continue;
            }
            if(ap.size()>nu.size()){
                if(flag==0){
                    ans+=ap[j];
                    j++;
                    flag=1;
                }
                else{
                    ans+=nu[k];
                    k++;
                    flag=0;
                }
                continue;
            }
            if(ap.size()<nu.size()){
                if(flag==0){
                    ans+=nu[j];
                    j++;
                    flag=1;
                }
                else{
                    ans+=ap[k];
                    k++;
                    flag=0;
                }
                continue;
            }
        }
    }
    else{
        cout<<ans;
    }
    cout<<ans;
    return 0;
}