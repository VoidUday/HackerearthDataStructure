#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
  
    for (int i = 1; i <=5; i++)
    {
        /* code */
           V.push_back(i);

    }
    for(auto i = V.begin(); i!=V.end(); i++){
       cout << *i << " " ;
    }
     cout << endl;
       for(auto i = V.cbegin(); i!=V.cend(); i++){
       cout << *i << " " ;
    }
    cout << endl;
       for(auto i = V.rbegin(); i!=V.rend(); i++){
       cout << *i << " " ;
    }
       
}