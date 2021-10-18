#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);

    int m = s1.size();
    int n = s2.size();

    int edit_dis[n+1][m+1];

    for(int i=0; i<n+1; i++){
            for(int j=0; i<m+1; j++){
                    if(i==0 && j==0){
                    edit_dis[i][j]=0;
                    }
                else if(i==0){
                    edit_dis[i][j]=edit_dis[i][j-1]+1;
                }
                else if(j==0){
                    edit_dis[i][j]=edit_dis[i-1][j]+1;
                }
                else if(s1[i-1]==s2[j-1]){
                    edit_dis[i][j]=edit_dis[i-1][j-1];
                }
                else
                {
                    edit_dis[i][j]=1+min(edit_dis[i][j-1],edit_dis[i-1][j],edit_dis[i-1][j-1]);
                }
            }
       cout<<edit_dis[n][m]<<endl;
    }
    return 0;
}

