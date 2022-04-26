#include<bits/stdc++.h>
using namespace std;

void test_case(){
    int n;
    cin>>n;
    
    int a[n];
    int b[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        b[i] = 0;
    }
    
    int count = 0;
    for(int i=1 ; i<n ; i++){
        int diff = a[i] - a[i-1];
        if(diff >= 4){
            cout<<"NO"<<"\n"; 
            return;      
        }else if(diff == 3 && b[i]==0 && b[i-1]==0){
            a[i] = a[i]-1;
            a[i-1] = a[i-1]+1;

            b[i]=1;
            b[i-1]=1;
        }else if(diff == 3 && (a[i-1]==1 || a[i]==1)){
            cout<<"NO"<<"\n";
            return;
        }else if(diff == 2 && a[i-1]==0 && a[i]==0){
            count++;
            if(count >= 3){
                cout<<"NO"<<"\n";
                return;
            }
        }else if(diff == 2 && a[i-1]==1 && a[i]==0){
            a[i] = a[i]-1;
            b[i]=1;
        }else if(diff == 2 && a[i-1]==0 && a[i]==1){
            a[i-1] = a[i-1]+1;
            b[i-1]=1;
        }
    }

    int count = 0;
    for(int i=1 ; i<n ; i++){
        int diff = a[i] - a[i-1];
        if(diff >= 4){
            cout<<"NO"<<"\n"; 
            return;      
        }else if(diff == 3 && b[i]==0 && b[i-1]==0){
            a[i] = a[i]-1;
            a[i-1] = a[i-1]+1;

            b[i]=1;
            b[i-1]=1;
        }else if(diff == 3 && (a[i-1]==1 || a[i]==1)){
            cout<<"NO"<<"\n";
            return;
        }else if(diff == 2 && a[i-1]==0 && a[i]==0){
            count++;
            if(count >= 3){
                cout<<"NO"<<"\n";
                return;
            }
        }else if(diff == 2 && a[i-1]==1 && a[i]==0){
            a[i] = a[i]-1;
            b[i]=1;
        }else if(diff == 2 && a[i-1]==0 && a[i]==1){
            a[i-1] = a[i-1]+1;
            b[i-1]=1;
        }
    }


    

    cout<<"YES"<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--){
        test_case();
    }
    return 0;
}
