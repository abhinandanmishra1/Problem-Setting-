#include<bits/stdc++.h>
using namespace std;

int sizer[]={100,400,500,20000,300000,400000,500000,600000,700000,800000,900000,1000000};
int kkk=0;
string generateString(int size){
    string res(size,'a');
    int i=0;
    while(i<size){
        int ind=rand()%26;
        res[i++]=char('a'+ind);
    }
    return res;
}
void generateArray(int m){
    for(int i=0;i<m;i++){
        int n=rand()%100005+1;
        cout<<n<<" ";
    }
    cout<<endl;
}

void generateTests(){
    // now call that functions which you want 

    
}

int main(){
	const char* inp[]={"input1.txt","input2.txt","input3.txt","input4.txt","input5.txt","input6.txt","input7.txt","input8.txt","input9.txt","input10.txt","input11.txt","input12.txt"};
	const char* outp[]={"output1.txt","output2.txt","output3.txt","output4.txt","output5.txt","output6.txt","output7.txt","output8.txt","output9.txt","output10.txt","output11.txt","output12.txt"};
    for(int i=0;i<12;i++){
        freopen(inp[i],"w",stdout);
        generateTests();
    }
	return 0;
}
