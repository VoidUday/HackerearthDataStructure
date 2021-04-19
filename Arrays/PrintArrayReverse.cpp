#include<iostream>
using namespace std;
void revereseArray(int arr[], int start, int end){
    if(start >=end) // check where start is not greater than end;
        return;
       int temp = arr[start];  //swap start to end;
       arr[start] = arr[end];
       arr[end] = temp;
      revereseArray(arr, start + 1, end - 1); // called recursive function;
}
void printArray(int arr[], int size)
{
   for (int i = 0; i <=size; i++)
   cout << arr[i]<<endl;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<=n; i++){
      cin >> arr[i];
    }
    printArray(arr, n-1);
    revereseArray(arr, 0 , n-1);
    printArray(arr, n-1);
}