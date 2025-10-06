/*STACK:
	stack is a linear data structure which follow last in first out mechanism 
	.It is a part of STL,It implement using class tempelate inside(stack)
	.we can push()or pop()elements inside stack from rear side only
	
	
	stack (data_type) stack_name;
	

OPERATIONS:
1.Push()
2.Pop()
3.top()
4.Empty()*/


#include<iostream>
#include<stack>
using namespace std;

int main(){


stack <int> s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

while(!s.empty()){
	
	cout<< s.top() <<endl;
	s.pop();
}
return 0;
}
