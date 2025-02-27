#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define fi first
#define se second
#define SZ(x) (int)(x).size()
#define rep(i,a,b) for (int i=a;i<b;i++)
#define per(i,a,b) for (int i=b-1;i>=a;i--)
#define each(a,x) for(auto&a:(x))
#define DEBUG(x) cerr<<'<'<<#x<<": "<<x<<'\n'
#define nl '\n'
typedef vector<int> VI;
typedef vector<long long> VLL;
typedef pair<int,int> PII;
typedef long long ll;
typedef long double ld;
const ll MOD=1000000007;
mt19937 mrand(random_device{}()); 
int rnd(int x) { return mrand() % x;}
ll powmod(ll a,ll b) {ll res=1;a%=MOD; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}

void Fast(){ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);}
//credit MiFaFaOvO
 
const int N=2020;
ll n,x[N],y[N];
map<pair<ld,ll>,ll> line;
 
int main(){
    upgrade();

	int n, k;
	
	cin >> n >> k;
	
	VI V;

	int N = n;	
	while (N--) {
		int tmp;
		cin >> tmp;
		V.pb(tmp);
	}
	
	while (k--){
	int l = -1;
	int r = n;
	int cmp;
	cin >> cmp;
	
	while (l + 1 < r) {
		int m = (l + r) >> 1;
		if (V[m] <= cmp) {
			l = m;
		} else {
			r = m;
		}
	}
	
	if (l == -1) l = 0;
	else l++;
	cout << l << '\n';	
	}
}
