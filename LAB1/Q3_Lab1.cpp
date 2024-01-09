#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> Numbers;
    Numbers.push(23);
    Numbers.push(54);
    Numbers.push(75);
    Numbers.push(38);
    Numbers.push(85);
    Numbers.push(66);
    Numbers.push(27);
    Numbers.push(7);

    stack <int> even;
    stack<int> odd;

  while(!Numbers.empty()){
    int number = Numbers.top();
    if(number%2==0){
        even.push(number);
    }
    else{
        odd.push(number);
    }
    
    Numbers.pop();

  }
  cout<<"Even: ";
  while(!even.empty()){
    cout<<even.top()<<",";
    even.pop();
  }
  cout<<"\nOdd: ";
  while(!odd.empty()){
    cout<<odd.top()<<",";
    odd.pop();
  }
    return 0;
}