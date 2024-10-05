#include<bits/stdc++.h>
using namespace std; 

  void insert_heap(vector<int> &v,int x){
             v.push_back(x);
             int s = v.size()-1;
              int curIndex =  s;
               while (curIndex!=0)
               {  
                    int parIndex =  (curIndex-1)/2;
                    if(v[parIndex] < v[curIndex]){
                          swap(v[parIndex],v[curIndex]);
                    }else{
                         break;
                    };
                     curIndex = parIndex;
               }
               
  };

   void delete_heap(vector<int>  &v){ 
           v[0] =v[v.size()-1];
            v.pop_back();
             int cur =  0; 
             while (true){
                   int left_idx = (cur*2)+1;
                    int right_idx =  (cur*2)+2;
                     int last_idx =  v.size()-1;
                      if(left_idx <= last_idx &&  right_idx <= last_idx){
                          if(v[left_idx] >= v[right_idx] && v[left_idx] > v[cur]){
                             swap(v[left_idx],v[cur]);
                               cur =  left_idx;
                          }else if(v[right_idx] >= v[left_idx] && v[right_idx] > v[cur]){
                                swap(v[right_idx],v[cur]);
                                  cur =  right_idx;
                          }
                          else{
                              break;
                          };
                           
                        }else if(left_idx <= last_idx){
                                if(v[left_idx] > v[cur]){ 
                                       swap(v[left_idx],v[cur]);
                                        cur =  left_idx;
                                }else{ 
                                     break;
                                };
                      }else if(right_idx <= last_idx){
                            if(v[right_idx] > v[cur]){
                                  swap(v[right_idx],v[cur]);
                                   cur =  left_idx;
                            }else{
                                  break;
                            }else{
                          break;
                      }
             };
   }; 


int main(){
       int n;
        cin>>n;
         vector<int> v;
         for(int i =  0; i<n;i++){
              int x;
               cin>>x;
                insert_heap(v,x);
         };
           delete_heap(v);

           for(int val : v){
              cout<<val<<" ";
           };
            
    return 0;
}