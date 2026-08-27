#include <iostream>
#include <vector>
using namespace std;

int main(){
   int n = 5;
  int arr[5]={1,-3,4,5,9};

 // for(int st=0;st<n;st++){
 //  for(int end=st;end<n;end++){
 //   for (int i=st;i<=end;i++){
//
 //       cout<<arr[i];
 //   }
 //        cout<<" ";
 //  }
 //    cout<<endl;
 // }



  //kadenes algo
   
  int   currsum=0;
  int   maxsum=INT_MIN;  
 for(int i=0;i<n;i++){
  currsum += arr[i];
  maxsum = max(currsum,maxsum);

  if(currsum<0){

    currsum=0;
  }

   
   
     
  }
 cout<<maxsum<<endl;

    return 0;
} 

