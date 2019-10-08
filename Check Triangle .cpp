#include<bits/stdc++.h>
using namespace std;
bool check_triangle(int ar[3][3]){
    int upper=1;
    int lower=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j>i && ar[i][j]==0){
                upper=0;
            }
            if(i<j && ar[i][j]==0){
                lower=0;
            }
        }
    }
    if (lower==0 && upper==0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
int ar[3][3]={{1,2,3},{2,0,0},{0,2,0}};
cout<<check_triangle(ar);
return 0;
}
