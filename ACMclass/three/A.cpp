#include<stdio.h>
#include<stdlib.h>
struct students{
    int grades;
}student[5000005];
int cmp(const void*a,const void *b){
    struct students *c = (struct students*)a;
    struct students *d = (struct students*)b;
    return c->grades - d->grades;
}
int main(){
    int n,k;scanf("%d%d",&n,&k);
    //struct students student[n];
    for(int i=0;i<n;i++){
        scanf("%d",&student[i].grades);
    }
    while(k--){
        int x,y,change;scanf("%d%d%d",&x,&y,&change);
        for(int i=x-1;i<y;i++) student[i].grades += change;
    }
    qsort(student,n,sizeof(student[0]),cmp);
    printf("%d",student[0].grades);
}
