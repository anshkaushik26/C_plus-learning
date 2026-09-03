#include <iostream>
#include <vector>
using namespace std;


//vector <int> printsum(vector <int> nums,int target){
//
//    vector <int> ans;
//    int n= nums.size();
//    for(int i=0;i<n;i++){
//        for (int j=i+1;j<n;j++){
//            if(nums[i]+nums[j]==target){
//                ans.push_back(i);
//                ans.push_back(j);
//            }
//        }
//
//
//    }
//   
//    return ans;
//}

vector <int> pairsum(vector <int> nums,int target){
 vector <int> ans;
 int n = nums.size();
   int i = 0 , j=n-1;
  while (i<j){
    int pairsum = nums [i]+nums[j];
    if (pairsum<target){
        i++;
    }
    else if (pairsum>target){
        j--;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
       break;

        
    }
  

  }

   return ans;

}




int main (){

vector <int> nums ={2,7,11,15};
int target = 22;
vector <int> ans = pairsum(nums,target);
cout<<"The indices of the two numbers that add up to the target are: "<<ans[0]<<" and "<<ans[1]<<endl;





    return 0;
} 
