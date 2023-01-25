#include "node.h"

//constructor

//next node
Node* Node::getNext() {
	return next;
}

//retrive student from node
Student* Node::getStudent() {
	return student;
}

void Node::setNext(Node* node) {
	next = node;
}

Node::Node(Student* stu) {
	student = stu;
	next = nullptr;
}

//destructor
Node::~Node() {
	delete student;
}
