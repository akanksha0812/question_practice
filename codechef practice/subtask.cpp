#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> v(n);
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum=sum+v[i];
            if(i==m-1 and sum==m){
                ans=k;
            }
        }
        if(sum==n){
            ans=100;
        }
        cout<<ans<<endl;
    }
    return 0;
}