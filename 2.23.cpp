//2.23


#include <iostream>
int main()
{
  int a,b,c,d,e=0;
  std::cout<<"Input 5 integers: ";
  std::cin>>a>>b>>c>>d>>e;
  
  
  int largest = a;
  if (b > largest) {
    largest = b;
  }
  if (c > largest) {
    largest = c;
  }
  if (d > largest) {
    largest = e;
  }
  if (e > largest) {
    largest = e;
  }
  int smallest = a;
  if (b < smallest) {
    smallest = b;
  }
  if (c < smallest) {
    smallest = c;
  }
  if (d < smallest) {
    smallest = d;
  }
  if (e < smallest) {
    smallest = e;
  }  
  std::cout << "Largest is " << largest << std::endl;
  std::cout << "Smallest is " << smallest << std::endl;
      
      return 0;
}
