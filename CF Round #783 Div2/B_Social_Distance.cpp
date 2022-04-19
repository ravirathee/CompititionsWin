#include<bits/stdc++.h>
using namespace std;
 
void test_case(){
    long long int n,m;
    cin>>n>>m;
    
    int a[n];
    for(int i=0 ; i<n ; i++) cin>>a[i];
    
    long long total = 0;
    total += 1 + a[0];
    for(int i=1 ; i<n ; i++){
        if(a[i] <= a[i-1]){
            total += 1 + a[i];
        }else{
            total += 1 + a[i] + (a[i]-a[i-1]);
        }
    }
    if(a[0]<=a[n-1]){
        
    }else{
        total += (a[0]-a[n-1]);
    }
    
    
    if(n>m) cout<<"NO"<<"\n";
    else if(total <= m) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
}
 
void test_case2(){
    long long int n,m;
    cin>>n>>m;
    
    int a[n];
    for(int i=0 ; i<n ; i++) cin>>a[i];
    
    m-= (2*a[0]+1);
    if(m<0){
        cout<<"NO"<<"\n";
        return;
    }else{
        for(int i=1 ; i<n-1 ; i++){
            if(a[i]>a[i-1]){
                m-= (a[i]+1+(a[i]-a[i-1]));
            }else{
                m-= (a[i]+1);
            }
            if(m<0){
                cout<<"NO"<<"\n";
                return;
            }
            
        }
    }
    
    if(a[n-1] > a[n-2]){
        m-= a[n-1]-a[n-2];
    }
    if(m<0){
        cout<<"NO"<<"\n";
        return;
    }
    
    if(a[0]<a[n-1]){
        m-= (1+(a[n-1]-a[0]));
    }else{
        m-=1;
    }
    if(m<0){
        cout<<"NO"<<"\n";
        return;
    }else{
        cout<<"YES"<<"\n";
        return;
    }
}
 
int main() {
    int t; cin>>t;
    while(t--){
        test_case2();
    }
    //code
    return 0;
}