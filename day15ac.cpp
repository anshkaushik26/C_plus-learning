#include <iostream>
#include <vector>
using namespace std;

int main(){
 
 //vector <int> vec = {1,3,4};
 // cout<<"the vector value is "<<vec[0]<<endl;


  vector <int> vect(4,7);
   

  cout<<"the size of vector "<<vect.size()<<endl;

  for(int i : vect){
     
    cout<<i<<endl;


  }


 


    return 0;
}

