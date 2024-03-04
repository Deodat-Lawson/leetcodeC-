#include <bits/stdc++.h>
using namespace std;

// Fast input/output
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// Frequently used macros
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

// Debugging
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

struct Node{
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};



class LRUCache {
private:
    Node* head;
    map<

public:
    int capacity;
    int* head;

    LRUCache(int capacity) {
        this->capacity = capacity;
        head = nullptr;
    }


    int get(int key) {

    }

    void put(int key, int value) {
        if()
    }
};

















void solve() {
    // Problem solving code goes here
}

int main() {
    fast_io

    // Uncomment the following line if the input is from a file
    // freopen("input.txt", "r", stdin);

    // Uncomment the following line if the output is to a file
    // freopen("output.txt", "w", stdout);

    int t = 1;
    // For problems with multiple test cases, uncomment the following line
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}


