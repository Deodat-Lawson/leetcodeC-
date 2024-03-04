//
// Created by Timothy Lin on 3/4/24.
//

#ifndef UNTITLED2_TEMPLATE_H
#define UNTITLED2_TEMPLATE_H


#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cassert>

// For Graph Algorithms
#include <complex>
#include <array>
#include <iomanip>
#include <tuple>

// C++11 Threads
#include <thread>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <future>

// Optimization for faster input/output (optional)
static auto speedup = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();

// Macros for frequently used operations
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

using namespace std;

// Frequently used data types
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;

#endif //UNTITLED2_TEMPLATE_H
