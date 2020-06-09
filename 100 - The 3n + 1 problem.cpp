  
                               ███    ██ ███████  ██████  ███    ██ 
                               ████   ██ ██      ██    ██ ████   ██ 
                               ██ ██  ██ █████   ██    ██ ██ ██  ██ 
                               ██  ██ ██ ██      ██    ██ ██  ██ ██ 
                               ██   ████ ███████  ██████  ██   ████
                               
#include<bits/stdc++.h>
using namespace std;
int main(){
    long int a,b;
    vector<int>v;
    while(scanf("%ld%ld",&a,&b)==2){
    
        cout<<a<<" "<<b<<" ";
        if(a>b)
            swap(a,b);

        for(int i=a;i<=b;i++){
                int n=i;
                int count=1;
            while(n>1){
                    count++;
                if(n%2==1)
                    n=(3*n+1);
                else
                    n/=2;
            }
            v.push_back(count);
        }
        sort(v.begin(),v.end(),greater<int>());

        cout<<v[0]<<endl;
        v.erase(v.begin(),v.end());
    }
return 0;
}              
