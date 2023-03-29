#include<iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll        long long
#define fl(s, e)      for(int i=s; i<e; ++i)         
#define vecint   vector< int > 
#define intmeme(s, e, val) fl(s, e+1){arr[i]=val;}
#define arrin(string, n)   fl(0, n){ cin>>string[i];}
#define arrout(string, n)  fl(0, n){cout<<string[i]<<" ";} cout<<endl;
#define bug   cout<<"bug"<<endl;
#define dbg(x) cout << "debug: " << #x << ": " << (x) <<endl;
#define CY  cout<<"YES"<<endl;
#define CN cout<<"NO"<<endl;



int ocarance(int c){
        while(c>=3){
                c=(c/3)+(c%3);
        }
        return c;
}

void test(){
        // vector<char> ans;
        int n;
        cin>>n;
        vector<char> s;
        char c;
        int count=1;
        fl(0, n){
                cin>>c;
                s.push_back(c);
        }
        char b;
        s.push_back('#');
        // fl(0, s.size()){
        //         cout<<s[i];
        // }
        // cout<<endl;
        for(int i=0; i<n; i++){
                if(s[i]==s[i+1]){
                        count++;
                        b=s[i];
                        // cout<<dbg(i);

                }
                else{
                        // if(count>3){
                        int temp=ocarance(count);
                        if(count==1){
                                while(temp--){
                                        // ans.push_back(s[i]);
                                        cout<<s[i];
                                        // dbg(0);
                                        // dbg(i);
  
                                }
                        }
                        else{
                                while(temp--){
                                        // ans.push_back(b);
                                        cout<<b;
                                        // dbg(i);
                                }
                        }
                        count=1;
                }
        }
        cout<<endl;

        
        
        
}
int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #endif
        int t;
        cin>>t;
        while(t--){
                test();
        }
     
        return 0;
}

