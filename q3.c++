#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  using ii = pair<int, int>;
  const int INF = 0x3f3f3f3f;
  int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<ii>> g(n);

    for (const vector<int>& time : times) {
      const int u = time[0] - 1;
      const int v = time[1] - 1;
      const int w = time[2];
      g[u].emplace_back(v, w);
    }

    cout << dijkstra(g, k - 1) << endl;
  }

  int dijkstra(const vector<vector<ii>>& g, int k) {
    vector<int> dist(g.size(), INF);

    dist[k] = 0;
    priority_queue<ii, vector<ii>, greater<>> pq;
    pq.emplace(dist[k], k);

    while (!pq.empty()) {
      const auto [d, u] = pq.top();
      pq.pop();
      if (d > dist[u])
        continue;
      for (const auto& [v, w] : g[u]){
        auto dt = d + w;
        if (dt < dist[v]) {
          dist[v] = d + w;
          pq.emplace(dist[v], v);
        }
      }
    }

    auto ans = *max_element(dist.begin(), dist.end());
    return ans == INF ? -1 : ans;
  }
};