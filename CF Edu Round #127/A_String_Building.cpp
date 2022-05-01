#include<bits/stdc++.h>
using namespace std;

void test_case(){
    string s;
    cin>>s;

    if(s.length() == 1){
        cout<<"NO"<<"\n";
        return;
    }

    int toggle = 0;
    if(s[0] == 'a') toggle = 0;
    else toggle = 1;

    int count = 1;

    int next = 0;
    for(int i=1 ; i<s.length(); i++){

        if(s[i] == 'a') next = 0;
        else next = 1;

        if(toggle == next ){
            count++;
        }else{
            if(count == 1){
                cout<<"NO"<<"\n";
                return;
            } 
            count = 1;
        }


        toggle = next;
    }
    int n = s.length();
    if(s[n-2] != s[n-1]) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--){
        test_case();
    }
    return 0;
}
