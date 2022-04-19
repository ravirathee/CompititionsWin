#include<bits/stdc++.h>
using namespace std;
 
void test_case(){
    int n,m;
    cin>>n;
    cin>>m;
    if(n==1 && m>2) cout<<-1<<"\n";
    else if(m==1 && n>2) cout<<-1<<"\n";
    else{
        if(m<n) swap(n,m);
        int total = 0;
        total += (n-1) + (n-1);
        int left = m-n;
        if(left%2==0) total += 2*left;
        else total += (2*left-1);
        cout<<total<<"\n";
    }
    
}
 
int main() {
    int t; cin>>t;
    while(t--){
        test_case();
    }
    return 0;
} 