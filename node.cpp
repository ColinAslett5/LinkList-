//Colin Aslett, C++, Period 07, Node.cpp file
#include "node.h"
Node::Node(Student* newstudent){
  next = NULL;
  student = newstudent;
}
void Node::setNext(Node* newnext){
  next = newnext;
}
Node* Node::getNext(){
  return next;
}
Node::~Node(){
  delete student;
  next = NULL;
}
Student* Node::getStudent(){
  return student;
}
