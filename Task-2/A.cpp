#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        string s;
        cin>> n >> s;
        int solved[26]={0};
        int pts=0;
        for(int j=0;j<n;j++){
            int order = s[j]-'A';
            if(solved[order]==0){
                pts+=2;
                solved[order]=1;

            }
            else pts+=1;

        }
        cout << pts << "\n";
    }
}