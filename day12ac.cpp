#include <iostream>
using namespace std;
  

//int decNum( int decnum){
//  int rem , pow=1;
//
//  int ans=0 ;
//  while (decnum>0){
//    rem = decnum%2;
//    decnum=decnum/2;
//  ans += rem*pow;
//  pow *=10;
//  }
//
//
//  return ans;
//}

int BinNum( int binnum){
  int rem , pow=1;

  int ans=0 ;
  while (binnum>0){
    rem = binnum%10;
   
  ans += rem*pow;
  binnum /=10;
  pow *=2;
  }


  return ans;
}


int main (){

  int binnum=100;
 cout<<"bin to dec of 100 is "<<BinNum(100)<<endl;

    return 0;
}