#include "Solution.cpp"
#include<bits/stdc++.h>
using namespace std;


void solve(){
    solution();
}

int main(){
	const char* inp[]={"input1.txt","input2.txt","input3.txt","input4.txt","input5.txt","input6.txt","input7.txt","input8.txt","input9.txt","input10.txt","input11.txt","input12.txt"};
	const char* outp[]={"output1.txt","output2.txt","output3.txt","output4.txt","output5.txt","output6.txt","output7.txt","output8.txt","output9.txt","output10.txt","output11.txt","output12.txt"};
    for(int i=0;i<12;i++){
        freopen(inp[i],"r",stdin);
        freopen(outp[i],"w",stdout);
        solve();
    }
	return 0;
}

