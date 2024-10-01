#include<bits/stdc++.h>
using namespace std;
int main(){
      vector<int> v;
        int n;
         cin>>n;
          for(int i = 0; i<n;i++){ 
                int x;
                 cin>>x;
                  v.push_back(x);
                      int curIndx = v.size()-1;
                       while (curIndx!=0)
                       {
                             int parIndx = (curIndx-1)/2;
                              if(v[parIndx] >  v[curIndx]){
                                  swap(v[parIndx],v[curIndx]);
                              }else{
                                  break;
                              };
                               curIndx =  parIndx;
                       };
          };

        for(int val:v){
              cout<<val<<" ";
        }
    return 0;
}