#include<bits/stdc++.h>
using namespace std;
const int maxn=3e5+5;
int n,m,k;
set<int> vis,e[maxn];
int q[maxn],st;
void solve(int x)
{
    vis.erase(x);
    q[st++]=x;
    for(int i=0;i<st;i++)
    {
        int now=q[i];
        int pre=1;
        while(1)
        {
            auto next=vis.upper_bound(pre);
            if(next==vis.end()) break;
            int v=*next;
            pre=v;
            if(e[now].count(v)) continue;
            q[st++]=v;
            vis.erase(v);
        }
    }
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        e[x].insert(y);
        e[y].insert(x);
    }
    if(k>n-1-e[1].size()) return puts("impossible"),0;
    for(int i=2;i<=n;i++) vis.insert(i);
    int cnt=0;
    for(int i=2;i<=n;i++)
    {
        if(vis.count(i))
        {
            cnt++;st=0;
            solve(i);
            int flag=0;
            for(int j=0;j<st;j++) if(!e[1].count(q[j])) flag=1;
            if(flag==0) return puts("impossible"),0;
        }
    }
    if(cnt>k) return puts("impossible"),0;
    return puts("possible"),0;
}
