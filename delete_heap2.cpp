#include<bits/stdc++.h>
using namespace std;

     void insert(vector<int> &v,int x){
                  v.push_back(x);
                    int curIndex = v.size()-1;
                     while (curIndex!=0)
                     {   int parIndex =  (curIndex-1)/2;
                             if(v[parIndex] < v[curIndex]){
                                 swap(v[parIndex],v[curIndex]);
                             }else{
                                 break;
                             };
                              curIndex =  parIndex;
                     };  
     };
      void delete_heap(vector<int> &v){
            v[0] =  v[v.size()-1];
               v.pop_back();
                int lastIndex =  v.size()-1;
                   int curIndex = 0;
                      while (true)
                      {
                              int leftIndex =  (curIndex*2)+1;
                              int rightIndex = (curIndex*2)+2;
                               if(lastIndex > leftIndex  && lastIndex > rightIndex){
                            if(v[leftIndex] >= v[rightIndex] && v[curIndex] <  v[leftIndex]){
                                      swap(v[curIndex],v[leftIndex]);
                                      curIndex =  leftIndex;      
                            }else if(v[rightIndex] >= v[leftIndex] && v[curIndex] < v[rightIndex]){
                                  swap(v[curIndex] , v[rightIndex]);
                                   curIndex =  rightIndex;
                            }else{
                                 break;
                            }
                     }else if(lastIndex >= leftIndex){ 
                          if(v[curIndex] < v[leftIndex]){
                              swap(v[curIndex],v[leftIndex]);
                                curIndex =  leftIndex;
                          }else{
                              break;
                          };
                     }else if(lastIndex >=  rightIndex){
                               if(v[curIndex] < v[rightIndex]){
                              swap(v[curIndex],v[rightIndex]);
                                curIndex =  rightIndex;
                          }else{
                              break;
                          };
                     }
             };
         
      }; 
       
int main(){
       int n;
        cin>>n;
         vector<int> v;
          for(int i = 0; i<n;i++){
                int x;
                cin>>x;
                   insert(v,x);
          };
           delete_heap(v);
     for(int i = 0 ;i<n;i++){ 
         cout<<v[i]<<" ";
     };
    return 0;
}