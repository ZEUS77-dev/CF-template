//header files//
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
// definition files//;
#define loop(i, a, b) for(ll i = (ll)a; i <(ll) b; ++i)
#define fl(i,n) loop(i, 0, n)
#define rfl(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
#define pb(x) push_back(x)
#define nl '\n'
#define inpt(v) fl(i,sz(v)) cin >> v[i];
#define prt(v)  for(auto i:v) cout << i << ' ';
#define sz(v) sizeof(v)
#define ff first
#define ss second
#define each(a, x) for (auto &a : x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cout << #x << " "<< x << endl;
#define Vmax(x) *max_element(all(x))
#define Vmin(x) *min_element(all(x))
#define fix(prec) cout << setprecision(prec) << fixed;
#define lowB(v,x) lower_bound(all(v),x)-v.begin() // >=x
#define upB(v,x)  upper_bound(all(v),x)-v.begin() // > x
#define charToInt(c) (c - '0')
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
 //Template Class//
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
//main// 
ll n,k,a,b,c,q,x,y,l,r,ans,mx,mn,sum;
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 int t = 1;
 cin >> t;
 while (t--)
  {
     //start her//
    
  }
  return 0;
}
