#include<iostream>
using namespace std;
int main(){
    int h,w;
    int px1=0;
    int py1=0;
    cin>>h>>w;
    char arr[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>arr[i][j];
        }
    }
for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if((arr[i][j])=='o'){
                px1-=i;
                px1=abs(px1);
                py1-=j;
                py1=abs(py1);
                arr[i][j]='x';
            }
           
        }
}
cout<<(abs(px1)+abs(py1));
}