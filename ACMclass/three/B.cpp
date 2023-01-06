#include<iostream>
#include<list>
using namespace std;
int main(){
    int n,m;cin >> n >> m;
    list<int> node;
    for(int i=1;i<=n;i++) node.push_back(i);
    list<int>::iterator it = node.begin();
    while(node.size() > 1){
        for(int i=1;i<m;i++){
        it++;
        if(it == node.end()) it = node.begin();}
        cout << *it <<' ';
        node.erase(it++);
        if( it == node.end()) it = node.begin();
    }
    cout << *it << endl;
}