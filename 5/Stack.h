#ifndef STACK_H
#define STACK_H
using namespace std;
#include <iostream>

struct Stack {
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
	}
	
	Stack(){
       head = NULL;
   }
	Stack(double n){
       for(double i=1; i<=n; i= i+ 0.1){
           push(i);
       }
   }


	 ~Stack(){
       if(head != NULL){
           while(head != NULL){
               cout<<head->data<<" ";
               pop();
           }
           cout<<endl;
       }
   }

	void push(double dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop(){
		if(head == 0)
			return 0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};
#endif