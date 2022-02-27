#include <iostream>
using namespace std;


bool function(string a){
char anbani[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
for(int i=0; i<26;i++){  
    for(int b=0; b<a.length(); b++){
        if(anbani[i]==a[b]){
           anbani[i]='0';
        } 
    }
}

for(int i=0; i<26; i++){
    if(anbani[i]!='0'){
        return false;
    }
}

return true;


}

int main(){
    string name;
    cin>>name;
    bool bolo = function(name);
    cout << bolo;
}    