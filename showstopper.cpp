#include<iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll        long long
#define fl(s, e)      for(int i=s; i<e; ++i)         
#define vecint   vector< int > 
#define str      string
#define arrin  fl(0, n){ cin>>arr[i];}
#define arrout fl(0, n){ cout<<arr[i]<<" ";} cout<<endl;



void test(){
        int n;
        cin>>n;
        int arr[n], brr[n];
        int amax, bmax;
        int aa[n], bb[n];
        fl(0, n){
                cin>>arr[i];
        }
        fl(0, n){
                cin>>brr[i];
        }
        if(n==1){
                cout<<"yes"<<endl;
                return;
        }
        fl(0, n){
                aa[i]=max(arr[i], brr[i]);
                bb[i]=min(arr[i], brr[i]);
                if(i==n-1){
                        amax=aa[i];
                        bmax=bb[i];
                }
        }
        int pA=INT_MIN,pB=INT_MIN;
        fl(0, n-1){
                if(aa[i]>pA)pA=aa[i];
                if(bb[i]>pB)pB=bb[i];
        }
        if(amax>=pA && bmax>=pB)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
}
        
int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        int t;
        cin>>t;
        while(t--){
                test();
        }
     
        return 0;
}

