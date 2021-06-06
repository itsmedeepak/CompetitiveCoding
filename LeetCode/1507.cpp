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
    string s;
    getline(cin, s);
    unordered_map<string, string> months({{"Jan", "01"},
                                          {"Feb", "02"},
                                          {"Mar", "03"},
                                          {"Apr", "04"},
                                          {"May", "05"},
                                          {"Jun", "06"},
                                          {"Jul", "07"},
                                          {"Aug", "08"},
                                          {"Sep", "09"},
                                          {"Oct", "10"},
                                          {"Nov", "11"},
                                          {"Dec", "12"}});
    int i=s.find(' ');
    string day = s.substr(0,i-2);
    string mon = s.substr(i+1, 3);
    string yr=s.substr(i+5,4);
    mon=months[mon];
    if(day.size()==1){
        day.insert(0,1,'0');
    }
    cout<< yr +'-'+mon+'-'+day;
    return 0;
}