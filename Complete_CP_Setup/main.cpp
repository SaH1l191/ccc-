    // CTRL+B to run file
// Read for reading vector(snippet)
// YES/NO for cout(snippet)
// include for cptemplate(snippet)
#include <bits/stdc++.h> 
// #include "debug/modint.h" // dont know
#ifndef ONLINE_JUDGE
#include "debug/debug.h"
#endif
#include <chrono>
using namespace std::chrono;
// string,sstream,vector,algorithm,limits,math.h,stack,set,unordered_map,climits,string,numeric,<cctype> (string toupper,lower)
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define rep(i, l, r) for (int i = l; i < r; i++)
#define nl '\n'

//ds
//vectors
template<typename T>
using vec = std::vector<T>;
template<typename T>
using vec2D = std::vector<std::vector<T>>;
// Pairs
template<typename T1, typename T2>
using pairt = std::pair<T1, T2>;
// Stacks
template<typename T>
using stackt = std::stack<T>;
// Unordered sets and maps
template<typename T>
using uset = std::unordered_set<T>;
template<typename K, typename V>
using umap = std::unordered_map<K, V>;
// Vector of pairs
template<typename T1, typename T2>
using vecpair = std::vector<std::pair<T1, T2>>;
// Min priority queue
template<typename T>
using minpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;
#define pb push_back

#define all(v)  v.begin(), v.end()
#define allr(v) v.rbegin(),v.rend()
#define Size(container) ((container).size())
using namespace std;
// =================== DEBUG BLOCK ===================
#ifndef DEBUG_H
#define DEBUG_H
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(int x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(long long x) { cerr << x; }
template <class T>
void _print(vector<T> v) {
    cerr << "[";
    for (T i : v)
        cerr << i << " ";
    cerr << "]";
}

#endif // DEBUG_H
// ===================================================
using ll = long long;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

void solve() {

     
}


int main() {
    fastio;
    int t = 1; cin >> t;
    auto start = high_resolution_clock::now();
    while (t--) solve();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time taken: " << duration.count() << " ms\n";
    return 0;
}

