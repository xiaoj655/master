#include<iostream>
#include<deque>
using namespace std;
int s[100005];
deque<int> dq;
int main(){
    int n,m;scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%lld",&s[i]);
    for(int i=2;i<=n;i++) s[i] = s[i] + s[i-1];
    int ans = -1e8;
    dq.push_back(0);
    for(int i=1;i<=n;i++){
        while(!dq.empty() && dq.front() < i-m) dq.pop_front();
        if(dq.empty()) ans= max(ans,s[i]);
        else ans = max(ans,s[i] - s[dq.front()]);
        while(!dq.empty() && s[dq.back()] > s[i]) dq.pop_back();
        dq.push_back(i);
    }
    printf("%d\n",ans);
}