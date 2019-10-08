#include<bits/stdc++.h>
using namespace std;

float knapsack(int n,int m,vector<float>profit,vector<float>weights){
    vector<pair<float,int>>ratios;
    float ans=0;int i;
    for(int i=0;i<n;i++){
        ratios.push_back(make_pair(profit[i]/weights[i],i));
     }
    sort(ratios.begin(),ratios.end());
     for(i=n-1;i>=0;i--){
        if(m>0 && weights[ratios[i].second]<=m){
            m-=weights[ratios[i].second];
            ans+=profit[ratios[i].second];
        }
        else{
            break;
        }
    }
    if(m>0 && i<n){
        ans +=profit[ratios[i].second]*(m/weights[ratios[i].second]);
    }
    return ans;
}

int main(){
int n,m;
cout<<"Enter The No. Of Objects \n ";
cin>>n;
cout<<"Enter The Capacity Of Knapscak:\n";
cin>>m;
vector<float>weights(n);
vector<float>profit(n);
cout<<"Enter The Weights \n";
for(int i=0;i<n;i++){
    cin>>weights[i];
}
cout<<"Enter The Profits \n";
for(int i=0;i<n;i++){
    cin>>profit[i];
}
cout<<knapsack(n,m,profit,weights);
return 0;
}
