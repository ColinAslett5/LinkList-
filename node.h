//Colin Aslett, C++, Period 07, Node.h file
#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class Student;
class Node{
 public:
  Node(Student* student);
  ~Node();
  void setNext(Node*);
  Node* getNext();
  Student* getStudent();
 private:
  Node* next;
  Student* student;
};
#endif
