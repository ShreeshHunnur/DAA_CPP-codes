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

    cout<<"Multiples of 3 are : ";
    while(!Numbers.empty()){
        int num = Numbers.top();
        if(num % 3 == 0){
            cout<<num<<",";
        }
        Numbers.pop();
    }
    return 0;
}