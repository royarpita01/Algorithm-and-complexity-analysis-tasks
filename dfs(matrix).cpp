#include<bits/stdc++.h>
using namespace std;

int a[50][50];
int s[50],visited[50],n,i,j,top=-1;

void dfs(int v)
{
   for(i=0; i<n; i++)
    {
    if (a[v][i] && !visited[i])
    s[++top] = i;
    }

    if(top!=-1)
    {
       visited[s[top]]=1;
       dfs(s[top--]);
    }
}

int main()
{
    int v;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        s[i]=0;
        visited[i]=0;
    }
    cout<<"Enter adjacency matrix of the graph: ";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the starting vertex: ";
    cin>>v;
    dfs(v);
    cout<<"The reachable nodes are: ";
    for(i=0; i<n; i++)
    {
        if(visited[i])
        {
            cout<< i <<" ";
        }
    }

return 0;

}
