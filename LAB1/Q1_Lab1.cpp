#include <iostream>
#include <queue>
using namespace std;

int main() {

  // create a queue of int
  queue<int> nums;

  // push element into the queue
  nums.push(1);
  nums.push(2);
  nums.push(3);
  nums.push(4);
  nums.push(5);
  nums.push(6);
  nums.push(7);
  
  queue <int> even;
  queue <int> odd;

  while(!nums.empty()){
    int number = nums.front();
    if(number%2==0){
        even.push(number);
    }
    else{
        odd.push(number);
    }
    
    nums.pop();

  }
  cout<<"Even: ";
  while(!even.empty()){
    cout<<even.front()<<",";
    even.pop();
  }
  cout<<"\nOdd: ";
  while(!odd.empty()){
    cout<<odd.front()<<",";
    odd.pop();
  }
  return 0;
}