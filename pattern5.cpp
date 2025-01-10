#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of the lines " << endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout << n-j+1 << " ";
        }
        cout << endl;
    }

return 0;
}

//Pattern-5
//  1 2 3 4
//  1 2 3
//  1 2 
//  1