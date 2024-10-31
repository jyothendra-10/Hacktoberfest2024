#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,a,t;
    cin>>t;
    
    while(t--)
    {
        
       int n;
       cin>>n;
       vector<int> v(n);
       stack<int> s;
       for(i=0;i<n;i++){
           cin>>v[i];
       }
       for(i=0;i<n;i++){
           while(!s.empty()&& v[i]>=v[s.top()]){
               s.pop();
           }
           if(s.empty()){
               cout<<(i+1)<<" ";
           }
           else{
               cout<<(i-s.top())<<" ";
           }
           s.push(i);
       }
       cout<<endl;
    }
}
