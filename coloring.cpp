#include<bits/stdc++.h>
using namespace std;


bool G[100][100]={0};
int x[100]={0};
int c=0,m=3;
int n=5;

void nextvalue(int k){

//while(1){
    x[k]=(x[k]+1)%(m+1);
    if(x[k]==0)
        return ;
    int j;
    for(j=1;j<=n;j++){

        if(G[k][j]!=0 && x[k]==x[j])
            break;

    }
    if(j==n+1)
        return ;



//}
nextvalue(k);


}


void mColoring(int k){


nextvalue(k);
if(x[k]==0)
    return ;
if(k==n)
{
    for(int i=1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}
else
    mColoring(k+1);
mColoring(k);




}


int main(){


    G[1][2]=G[2][1]=G[2][3]=G[3][2]=G[1][3]=G[3][1]=G[2][5]=G[5][2]=G[1][5]=G[5][1]=G[3][4]=G[4][3]=G[4][5]=G[5][4]=1;

    mColoring(1);






}
