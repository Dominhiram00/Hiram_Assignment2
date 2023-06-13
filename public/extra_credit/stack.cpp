#include "stack.hpp"

using namespace std;

template<class T>
void Stack<T>::push(T c){
  //always push the node on the top of the stack/linked-list

}

template<class T>
T Stack<T>::pop(){

}

template<class T>
bool Stack<T>::isEmpty(){

}

template<class T>
T Stack<T>::peek(){
  if(isEmpty()){
    cout<<"Cannot peek. Stack empty."<<endl;
  }
  
  return top->item;
}

template<class T>
int Stack<T>::size(){
  return list_size;
}

template<class T>
void Stack<T>::display(){
  Node<T> *head = top;
  while(head != NULL){
    head = head->next;
    cout << head->item << ", ";
  }
  cout<<endl;
}

template class Stack<char>;
template class Stack<int>;
