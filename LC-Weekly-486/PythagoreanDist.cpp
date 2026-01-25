#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<vector<int>> &adj, vector<int> &dist, int st, int n)
    {
        queue<int> q;
        q.push(st);
        dist[st] = 0;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (auto &it : adj[node])
            {
                if (dist[it] == -1)
                {
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }
    }

    int specialNodes(int n, vector<vector<int>> &edges, int x, int y, int z)
    {
        vector<vector<int>> adj(n);
        int cnt = 0;

        for (auto i : edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        vector<int> distX(n, -1), distY(n, -1), distZ(n, -1);

        solve(adj, distX, x, n);
        solve(adj, distY, y, n);
        solve(adj, distZ, z, n);

        for (int i = 0; i < n; i++)
        {
            int xNode = distX[i];
            int yNode = distY[i];
            int zNode = distZ[i];

            vector<int> temp = {xNode, yNode, zNode};
            sort(temp.begin(), temp.end());

            if ((temp[0] * temp[0]) + (temp[1] * temp[1]) == (temp[2] * temp[2]))
                cnt++;
        }

        return cnt;
    }
};