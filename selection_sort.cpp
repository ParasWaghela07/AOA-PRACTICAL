#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={3,1,5,7,3,2,0};

    for(int i=0;i<v.size()-1;i++){
        int mini=v[i];
        int index=i;

        for(int j=i+1;j<v.size();j++){
            if(v[j]<mini){
                mini=v[j];
                index=j;
            }
        }

        swap(v[i],v[index]);
    }

    for(auto it:v){
        cout<<it<<" ";
    }
}