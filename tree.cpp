#include<bits/stdc++.h>
using namespace std;

vector <int> ar[10001];
int visited[10001];

void dfs(int node)
{
    visited[node] = 1;
    for(int child : ar[node])
    if(visited[child] == 0){
        dfs(child);
    }
}

int main()
{
    int n,m,x,y;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        cin>>x>>y;
        ar[y].push_back(x);
        ar[x].push_back(y);
    }

    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(visited[i] == 0){
            dfs(i);
            count++;
        }
        if(count == 1 && m == n-1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }

    return 0;
}
