#include<iostream>
using namespace std;
const int INF=0x7fffffff;
int main(){
    int sum=0,m,n,st=1,end,max = -INF,cnt=1;
    cin >> m;
    for(int k=1;k<=m;k++){
        sum=0;max=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int temp;cin >> temp;
            sum += temp;
            if(sum > max){max = sum;end=i+1;}
            else if(sum < 0){sum=0;st = i+1;}
        }
        cout << "Case" << ' '<< k <<':' <<endl;
        if(k != m) cout << max <<' '<< st <<' '<<end<<endl<<endl;
        else cout << max <<' '<< st <<' '<<end;
    }
}