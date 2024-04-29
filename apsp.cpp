#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>g={
   	{0,1,3,5},
   	{2,0,1000,2},
   	{4,3,0,1000},
   	{1000,1000,1,0}
   };

   vector<vector<int>>dist=g;

   for(int k=0;k<dist.size();k++){
    for(int i=0;i<dist.size();i++){
        for(int j=0;j<dist[0].size();j++){
            dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
        }
    }
   }

   for(int i=0;i<dist.size();i++){
        for(int j=0;j<dist[0].size();j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }


}