//
// Created by timot on 3/9/2024.
//

#include "template.h"

class Solution {

struct ComparePair{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b){
        double a1Val = sqrt(abs(a.first) * abs(a.first)  + abs(a.second) * abs(a.second));
        double b1Val = sqrt(abs(b.first) * abs(b.first) + abs(b.second) * abs(b.second));
        return a1Val > b1Val;
    }
};


public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, ComparePair> pq;

        for(int i = 0; i < points.size(); i++){
            vector<int> row = points.at(i);
            int x = row.at(0);
            int y = row.at(1);
            pq.push(make_pair(x, y));
        }

        vector<vector<int>> ans;
        for(int i = 0; i < k; i++){
            pair<int, int> curr = pq.top();
            pq.pop();
            vector<int> this_vec;
            this_vec.push_back(curr.first);
            this_vec.push_back(curr.second);
            ans.push_back(this_vec);
        }
        return ans;
    }
};