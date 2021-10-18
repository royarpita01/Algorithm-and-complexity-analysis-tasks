#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>>adj;

vector<bool> visited;
vector<int> dis,low;

void dfs(int v, int p=-1, int time)
{
    visited[v] = true;
    dis[v]=low[v]=time;
    time++;

    int child=0;
    for(int total : adj[v])
    {
        if total=p
            continue;
        if (visited[total])
        {
            low[v]=min(low[v], disc[total]);
        }
        else
        {
            dfs(total,v);
            low[v]=min(low[v],low[total]);
            if(low[total] >= dis[v]&&p!=-1)
                IS_ARTICULATION(v);
            ++child;
        }
    }
    if(p==-1 && child>1)
    IS_ARTICULATION(v);

}

void main()
{
    int time=0;
    visited.ass(n, false);

    for(int i=0; i<n; i++)
    {
        if(!visited[i])
            dfs(i);
    }
}
