//pol
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=6e5+5;
int head[maxn],nex[maxn],to[maxn],cnt;
int n,m,d;
bool flag[maxn];
bool mov[maxn];
vector<int> ans;
queue<int> q;
void add(int i,int j){
    cnt++;
    to[cnt]=j;nex[cnt]=head[i];head[i]=cnt;
}
void bfs(){
    while(q.size()){
        int x=q.front();q.pop();
        for(int i=head[x];i;i=nex[i]){
            int y=to[i];
            if(!flag[y]){
                flag[y]=true;
                mov[i]=mov[i^1]=true;
                q.push(y);
            }
        }
    }

}
int main(){
       cin>>n>>m>>d;
    for(int i=1;i<=m;i++){
        int x;
        cin>>x;
        flag[x]=true;
    }
    for(int i=1;i<=n;i++){
        if(flag[i]) q.push(i);
    }
    cnt=1;
    for(int i=1;i<n;i++){
        int a,b;
       cin>>a>>b;
        add(a,b);
        add(b,a);
    }
    bfs();
    for(int i=2;i<=(n-1)*2;i+=2){
        if(!mov[i]){
            ans.push_back(i/2);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}

	   	   	  	    		 			   	 	  	
