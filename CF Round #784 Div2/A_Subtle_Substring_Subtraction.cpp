#include<bits/stdc++.h>
using namespace std;

void test_case(){
    string s;
    cin>>s;
    int len = s.length();
    if(len==1){
        int score2 = 0;
        score2 += (s[0] - 'a' + 1 );
        cout<<"Bob "<<score2<<"\n";
    }else if(len%2==1){
        int score1 = 0;
        int score2 = 0;
        int first = 0; first = (s[0] - 'a' + 1 );
        int last = 0; last = (s[len-1] - 'a' + 1 );
        score1 += (s[0] - 'a' + 1 );
        
        for(int i=1 ; i < len-1 ; i++){
            score1 += (s[i] - 'a' + 1 );
            score2 += (s[i] - 'a' + 1 );
        }
        score2 += (s[len-1] - 'a' + 1 );

        // cout<<"this is score1 "<<score1<<" blah";
        // cout<<"this is score2 "<<score2<<" blah";

        if(score1 > score2) {
            cout<<"Alice "<<score1-last<<"\n";
        }else{
            cout<<"Alice "<<score2-first<<"\n";
        }
        
    }else{
        int score1 = 0;
        for(int i=0; i < len ; i++){
            score1 += (s[i] - 'a' + 1 );
        }
        cout<<"Alice "<<score1<<"\n";
    }
    


}

int main(){
    int t; cin>>t;
    while(t--){
        test_case();
    }
    return 0;
}
