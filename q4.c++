#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    using ii = pair<int, int>;
    const int INF = 0x3f3f3f3f;
    const int MAX = 2e9;
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges,int source, int destination, int target) {
        vector<vector<ii>> graph(n);

        for (const vector<int>& edge : edges) {
            const int u = edge[0];
            const int v = edge[1];
            const int w = edge[2];
            if (w == -1)
                continue;
            graph[u].emplace_back(v, w);
            graph[v].emplace_back(u, w);
        }

        int dis = dijkstra(graph, source, destination);
        if (dis < target)
            return {};
        if (dis == target) {
            for (vector<int>& edge : edges)
                if (edge[2] == -1)
                    edge[2] = MAX;
            return edges;
        }

        for (int i = 0; i < edges.size(); ++i) {
            const int u = edges[i][0];
            const int v = edges[i][1];
            int& w = edges[i][2];
            if (w != -1)
                continue;
            w = 1;
            graph[u].emplace_back(v, 1);
            graph[v].emplace_back(u, 1);
            dis = dijkstra(graph, source, destination);
            if (dis <= target) {
                w += target - dis;
                for (int j = i + 1; j < edges.size(); ++j)
                    if (edges[j][2] == -1)
                        edges[j][2] = MAX;
                return edges;
            }
        }

        return {};
    }

    int dijkstra(const vector<vector<ii>>& g, int src, int dst) {
        vector<int> dist(g.size(), INF);

        dist[src] = 0;
        priority_queue<ii, vector<ii>, greater<>> pq;
        pq.emplace(dist[src], src);

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

        return dist[dst];
    }
};