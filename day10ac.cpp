#include <iostream>
using namespace std;

int main(){
 int n = 4;
int i,j;

//char ch ='a';
//for(int i=0;i<n;i++)
//{
// for(int j=0;j<i+1;j++)
// {
//    cout<<ch;
//   }
//    cout<<endl;
//   ch++;
//   
//
//
//
//}

//for(int i=0;i<n;i++){
// 
//for(int j=1;j<i+1;j++)
// {
//     
//    cout<<j;
//   
//   }
//    
//    cout<<endl;
//    
//
//
//}


// for(int i=0;i<n;i++){
//  
//    for(int j=i+1;j>0;j--){
//
//         cout<<j;
//    }
//
//   cout<<endl;
//
//
// }

 // int num = 1;
 //for(int i=0;i<n;i++){
 // 
 //   for(int j=1;j<i+1;j++){
//
 //        cout<<num;
 //           num++;
 //   }
//
 //     cout<<endl;
//
//
 //}

 //for(int i=0;i<n;i++){
 // 
 //   for(int j=1;j<i;j++){
//
 //        cout<<"_";
 //        
 //           
 //   }
//
 //   for(int j=1;j<i;j++){
//
 //        cout<<"_";
 //        
 //           
 //   }
//
 //     cout<<endl;
//
//
 //}
 //for (int i=0;i<n;i++){
 //    for(int j=0;j<i;j++){
 //        cout<<" ";
 //    }
 //    for(int j=0;j<n-i;j++){
 //         cout<<i+1;
 //    }
 //    cout<<endl;
 //  
 //}



 for (int i=0;i<n;i++){
     for(int j=0;j<n-i-1;j++){
         cout<<" ";
     }
     for(int j=0;j<i+1;j++){
          cout<<j;
     }
     for(int j=i;j>0;j--){
          cout<<j;
     }
     cout<<endl;
   
 }
    return 0;

}