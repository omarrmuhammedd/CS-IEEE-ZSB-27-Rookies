#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string words[100];
    for(int i=0;i<n;i++){
        cin>>words[i];
        if(words[i].length()>10){
            cout<<words[i][0]<<(words[i].length()-2)<<words[i][words[i].length()-1]<<"\n";
        }
        else
        cout<<words[i]<<"\n";
    }
}