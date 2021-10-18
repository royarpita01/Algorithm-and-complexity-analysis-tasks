#include<iostream>
using namespace std;

int lcs[1001][1001];
char x[1000];
char y[1000];

int main()
{
    while(cin>>x>>y){
        int a = strlen(x);
        int b = strlen(y);

        for(int i=0; i<a+1; i++){
            for(int j=0; j<b+1; j++){
                if(i==0||j==0){
                    lcs[i][j]=0;
                }
                else if(x[i-1]==y[j-1]){
                    lcs[i][j]==lcs[i-1][j-1]+1;
                }
                else lcs[i][j]=max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
        cout<<lcs[a][b]<<endl;
    }
    return 0;
}
