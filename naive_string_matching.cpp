#include<bits/stdc++.h>
using namespace std;

int main(){
    string t="ABGFDABTYACAB";
    string p="AB";
    for(int i=0;i<t.size()-p.size()+1;i++){
        bool flag=true;
        for(int j=0;j<p.size();j++){
            if(p[j]!=t[i+j]){
                flag=false;
                break;
            }
        }

        if(flag==true) cout<<"Found at :- "<<i<<endl;
    }
}