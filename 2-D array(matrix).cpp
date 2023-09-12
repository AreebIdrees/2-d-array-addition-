#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr1[3][3] = {{3,5,6},{4,6,7},{4,6,8}};
    int arr2[3][3] = {{3,5,6},{4,6,7},{4,6,8}};
    int ans[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for (int i=0;i<3;i++){
     for (int j=0;j<3;j++){
        
         ans[i][j] = arr1[i][j]+  arr2[i][j];
    }
     
    }
     for (int i=0;i<3;i++){
     for(int j=0;j<3;j++){
     cout<<ans[i][j]<<" ";
     }
    cout<<endl;
     }
}
