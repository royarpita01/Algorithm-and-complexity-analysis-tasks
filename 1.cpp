void DFS(int s)
{
   visit[s] = 1;
   for(int i=0; i<n; i++)
   {
         if(visit[i]==0 && adj[s][i]==1)
         {
               visit[i]=1;

         }
         DFS(1);
   }
}
