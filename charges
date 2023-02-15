#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        int t;
        cin>>t;
        while(t--){
        	int n;
        	cin>>n;
        	string s;
        	int p=0;
        	for(int i = 0; i<n; i++){
        		cin>>s[i];
        		if(s[i] == '0')
        		p++;
        	}
        	for(int i = 0; i<n; i++){

        	}
        	// for(int i = 0; i<n; i++){
        	// 	cout<<s[i];
        	// }
        	// cout<<endl;
        	int c0=0,count=0;
        	int g;
        	char carry1;
        	for(int i = 0; i<n; i++){
        		if(s[i] !='0'){
        			g=i;
        			carry1=s[i];
        			break;
        		}
        	} 
        	char carry2;
        	carry1 == '+' ? carry2='-' : carry2='+';
        	// cout<<carry1<<carry2<<endl;
        	for(int i=g; i<n; i++){
        		if(s[i]=='0') c0++;
        		// cout<<carry1<<" "<<carry2<<" "<<c0<<endl;
        		if((s[i] != carry1 && c0%2==1 && s[i]==carry2)){
        			count++;
        			c0=0;
        			swap(carry2,carry1);
        		}

        	}
        	
        	   	
        	p==n ? cout<<n<<endl : cout<<count<<endl;
        		
        }
        

        return 0;
}
