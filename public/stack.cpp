/*
I will be using vector methods for this assignment.
*/
#include "stack.hpp"

using namespace std;

template<class T>

void Stack<T>::push(T c){
		values[++top] = c;
}

template<class T>
T Stack<T>::pop(){
		return values[topIndex--];
}

template<class T>
T Stack<T>::peek(){
  if(topIndex < 0){
    cout<<"Cannot peek. Stack empty."<<endl;
  }
  return arr[topIndex];
}

template<class T>
int Stack<T>::size(){
  return topIndex+1;
}

template<class T>
void Stack<T>::display(){
  for(int i=topIndex; i>=0; --i){
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
}

template class Stack<char>;
template class Stack<int>;
