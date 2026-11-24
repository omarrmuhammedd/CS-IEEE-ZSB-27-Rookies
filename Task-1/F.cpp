#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tens=(n/10)%10;
    int ones=n%10;
    cout<<tens<<ones<<"\n";
}