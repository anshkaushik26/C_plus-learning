#include <iostream>
using namespace std;


//linear search and array 
 int search(int marks[], int size, int target){
  
   for (int i=0;i<size;i++){
   if (marks[i] == target){
        return i;
   }
    
  }
   
 }


 void revarray(int arr[], int size){
  

   int start = 0;
    int end = size-1;
   while(start<end){

      swap (arr[start],arr[end]);

      start++;
      end--;
   }



 }

 int main()
{

   // reverse an array 
 int arr[5]={4,4,7,8,1};
 int size =5;






  // linear search
 // int marks [5]={30,01,60,70,80};
 //int size = 5;
  //  int target =70;
  
 // finding smallest and largest  in an array
 // int smallest = INT_MAX;
 // int largest = INT_MIN;
  //for (int i=0;i<size;i++){

//if (marks[i] < smallest) {
   /// smallest = marks[i];
  // }

   // smallest = min(marks[i],smallest);
   // largest = max(marks[i],largest);   
  // }
      
 // cout<<"the smallest number is "<<smallest<<endl;
 // cout<<"the largest number is "<<largest<<endl;
    

   //  cout <<"the target value is found  "<<search(marks, size, target)<<endl;
    
    revarray(arr,size);
    for (int i=0;i<size ;i++){
   cout <<""<<arr[i];
   }
    cout<<endl;
    return 0;
 }