#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main() {
  vector<int>station;
  vector<int>train;
  int n;
  
   cin >> n;
   train.resize(n);
   cin >> train[0];

  while(1){
   for(int i = 1; i < n; i++){
      cin >> train[i];
    }
    cout << endl;
   for(int j = 0; j < n; j++){
      cout << train[j];
   }
   cin >> train[0];
   if(train[0] == 0){
       break;
   }
  }

}