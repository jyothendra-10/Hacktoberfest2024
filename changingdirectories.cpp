//directories
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        stack<string> st;
        string cmd,str,word;
        for(i=0;i<n;i++)
        {
            cin>>cmd;
            if(cmd=="cd"){
                cin>>str;
                if(str[0]=='/'){
                    while(!st.empty()){
                        st.pop();
                    }
                }
                for(j=0;j<str.length();j++){
                    if(str[j] !='/'){
                        word +=str[j];
                    }
                
                    else{
                        if(word==".."){
                        if(!st.empty()){
                           st.pop();
                        }
                        word.clear();
                        }
                        else{
                            st.push(word);
                            word.clear();
                        }
                    }
                }
            }
            else{
                if(st.empty()){
                    cout<<"/";
                }
                else{
                    stack<string> st2;
                    while(!st.empty()){
                        st2.push(st.top());
                        st.pop();
                    }
                    if(j==0)
                        cout<<"/";
                    while(!st2.empty()){
                        cout<<st2.top()<<"/";
                        st.push(st2.top());
                        st2.pop();
                        
                    }
                }
                cout<<"\n";
            }
        }
        cout<<"\n";
    }
}
