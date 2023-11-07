#include<iostream>
using namespace std;
int main() {
  int rowCount,colCount;
  cin>>rowCount>>colCount;
  
  // 1 Square
  
  // for(int i = 0;i<n;i++){
  //   for(int j = 0;j<m;j++){
  //     cout<<"*"<<" ";
  //   }
  //   cout<<endl;
  // }

  // 2 Hollow Rectangle 
  
  // for(int i = 0;i<n;i++){
  //   if(i == 0 or i == n-1){
  //     for(int j = 0;j<m;j++)
  //         cout<<'*'<<" ";
  //   }
  //   else{
  //     cout<<'*'<<" ";
  //     for(int j = 1;j<m-1;j++)
  //         cout<<"  ";
  //     cout<<'*'<<" ";
  //   }
  //   cout<<endl;
  // }

  // 3 Half Pyramid
  
  // for(int row = 0;row<rowCount;row++){
  //   for(int col = 0;col<=row;col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  // 4 Inverted Half Pyramid

  // for(int row = rowCount;row>0;row--){
  //   for(int col = 0;col<row;col++)
  //     {
  //       cout<<"* ";
  //     }
  //   cout<<endl;
  // }

  // 5 Numeric Half Pyramid

  // for(int row = 1;row<=rowCount;row++){
  //   for(int col = 1;col<=row;col++){
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }

  // 6 Numeric inverted Half Pyramid

  // for(int row = rowCount;row>0;row--){
  //   for(int col = 1;col<=row;col++){
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }

  // 7 Full Pyramid

  // for(int row = rowCount-1;row>=0;row--){
  //   for(int col = 0; col<row;col++){
  //     cout<<" ";
  //   }
    
  //   for(int col = 0;col<rowCount - row;col++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }  

  // 8 Inverted Full Pyramid

  // for(int row = rowCount-1;row>=0;row--){
    
  //   for(int col = 1;col<rowCount-row;col++){
  //     cout<<" ";
  //   }
  //   for(int col = 0;col<row+1;col++)
  //     {
  //       cout<<"* ";
  //     }
  //   cout<<endl;
  // }

  // 9 Numeric Full Pyramid

  
}