    #include <iostream>
	#include<stdio.h>
	#include<stack>
    using namespace std;
     
    const int N = 100000;
     
    int n , t;
    int dep[N];
    string s;
     
    void clear(int n){
    	for(int i = 0;i <= n;i++){
    		dep[i] = 0;
    	}
    }
     
    int main(){
    	scanf("%d" , &t);
    	while(t--){
    		cin >> s;
    		n = s.size();
    		stack<int> a , b;
		cout<<a<<b;
    		for(int i = 0;i < n;i++){
    			if(s[i] == '('){
    				if(!a.empty())
				dep[a.top()]++;
    				a.push(i);
    			}
    			else {
    				int x = dep[a.top()];
    				int y = 0;
    				while(x--){
    					y ^= b.top();
    					b.pop();
    				}
    				y++;
    				b.push(y);
    				a.pop();
    			}
    		}
    		int ans = 0;
    		while(!b.empty()){
    			ans ^= b.top();
    			b.pop();
    		}
    		if(ans)printf("ATM\n");
    		else printf("Bob\n");
    		clear(n);
    	}
    } 


