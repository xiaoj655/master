#include<iostream>
using namespace std;
const int INF=0x7fffffff;
int main(){
    int T;cin >> T;
    for(int i=1;i<=T;i++){
        int st=1,end=1,p=1,sum=0,max=-INF;
        int lenth;cin >> lenth;
        for(int k=1;k<=lenth;k++){
            int a;cin >>a;sum +=a;
            if(sum > max){st=p;end=k;max=sum;}
            if(sum <0){sum=0;p=k+1;}
        }
        printf("Case %d:\n",i);
        printf("%d %d %d\n",max,st,end);
        if(i != T) cout <<endl;
    }
}