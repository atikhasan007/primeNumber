
///minimum prime factorized
#include<bits/stdc++.h>
using namespace std;
int N = 100000;
vector<int>spf(N);
void createSieve(){

for(int i=1;i<=N;i++){
    spf[i] = i;
}
for(int i=2;i*i<=N;i++){
    if(spf[i]==i){
        for(int j=i*i;j<=N;j+=i){
            if(spf[j]==j){
                spf[j] = i;
            }
        }
    }
}


}
int main(){

int t;
cin>>t;
while(t--){
       createSieve();
    int n;
    cin>>n;
    ///print prime fact

    ///0(log n)
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    cout<<endl;
}

}
