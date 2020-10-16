#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono; 


#define pb push_back
#define mp make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define per(i,a,b) for (int i=b-1;i>=a;i--)

#define fi first
#define se second

#define DEBUG(x) cerr<<'<'<<#x<<": "<<x<<'\n'
#define nl '\n'

typedef vector<int> VI;
typedef vector<long long> VLL;
typedef deque<int> DQ;
typedef stack<int> STK;
typedef set<int> SET;
typedef map<int, int> MAP;
typedef priority_queue<int> PQ;

typedef long long ll;
typedef long double ld;
const ll MOD=1000000007;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
void fast(){ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);}
 
const int N=2020;
 
int solve(int t, VI coins) {
	
	if (t == 0) return 0;
	if (t < 0) return MOD;
	
	int best = MOD;
	
	for (auto x: coins) {
		// recurse for every coin, the minimum value for THAT coin
		// return it for various combinations
		// for all of the combinations, from t to t-xn return the absolute minimum
		best = min(best, solve(t - x, coins) + 1);
	}
	return best;
	
}
 
int main(){
	cout << "Program to find min coin combination for a desired target, enter target and number of coins followed by coin values" << nl;
	
	fast();
    auto start = high_resolution_clock::now(); 

	
	int t, k;
	cin >> t >> k;
	
	VI coins;
	
	while (k--) {
		int tmp;
		cin >> tmp;
		coins.pb(tmp);
	}
	
	int g = solve(t, coins);
	
	cout << "The best is: " << g << nl;
	
	
	auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << nl << nl << "Time taken by function: "
         << duration.count() * 1e-6 << " seconds" << endl; 

	return 0;
	
}

