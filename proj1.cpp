#include <bits/stdc++.h>
using namespace std;
string str;
int match[100005];
int calc(int start,int end)
{
    if(end-start==1)    return 1;
    if(match[start]==end)   return (1+calc(start+1,end-1));
    return calc(start,match[start]) ^ calc(match[start]+1,end);
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    str.clear();
	    cin>>str;
	    stack<int> s;
	    for(int i=0;i<str.size();i++){
	        if(str[i]=='(') s.push(i);
	        else{
	            match[s.top()]=i;
	            s.pop();
	        }
	    }
	    if(calc(0,str.size()-1))   cout<<"ATM\n";
	    else    cout<<"Bob\n";
	}
	return 0;
}
