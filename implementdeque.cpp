#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,val; cin>>t;
   deque<int> st;
   while(t--){
       string str;
      cin>>str;
       if(str=="pop_back"){
           if(!st.empty()){
               cout<<st.back()<<endl;
               st.pop_back();
           }else
           {
               cout<<"Empty"<<endl;
           }
       }else if(str=="pop_front"){
           if(!st.empty()){
               cout<<st.front()<<endl;
               st.pop_front();
           }else
           {
               cout<<"Empty"<<endl;
           }
       }
       else if(str=="push_back"){
           cin>>val;
           st.push_back(val);
       }
       else{
           cin>>val;
           st.push_front(val);
       }
       
   }
    
}
