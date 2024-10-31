#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    cin.ignore();
    while(t--){
        stack<string> st;
        string str,word;
        getline(cin,str);
        for(int i=0;i<str.length();i++){
            if(str[i]!=' ')
            word+=str[i];
            else{
                 st.push(word);
                 word.clear();
            }
        }
        st.push(word);
        word.clear();
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}
