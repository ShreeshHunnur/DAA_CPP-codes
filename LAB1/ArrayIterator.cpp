#include <iostream>
#include <iomanip>
#include <array>
#include <iterator>

using namespace std;

int main()
{
   array<int, 7> arr = { 0, 1, 1, 2, 3, 5, 8 };
   array<int, 7>::iterator iter;

   for(iter = arr.begin(); iter < arr.end(); iter++)
      cout<<*iter<<" ";

   cout<<endl;

   iter = arr.begin();
   advance(iter,4);
   cout<<*iter<<endl;
   auto pa = prev(iter,2);
   cout<<*pa<<endl;
   auto pb = next(iter,1);
   cout<<*pb<<endl;
   cout<<"Size : "<<arr.size()<<endl;

   return 0;
}

