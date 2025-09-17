//Simply Linked List. It only insert from the head, because I made ir to implement templates.

#include <iostream>


struct Node{
	int value;
	Node* ptr;
};

Node* head = nullptr;
Node* tail = nullptr;


void insert_head(){
	int pvalue;
	std::cout <<"\nInsert a value: ";
	std::cin >> pvalue;
	
	Node* newNode = new Node();
	newNode -> value = pvalue;
	
	if (head == nullptr){
		head = newNode;
		tail = newNode;
	}
	else if (head == tail){
		head = newNode;
		head -> ptr = tail;
	}
	else{
		newNode -> ptr = head;
		head = newNode;
	}
}


void print(){
	std::cout << "List:" << "\n";
	Node* temp = head;
	
	do{
		std::cout << temp -> value << "\n";
		temp = temp -> ptr;
	}while (temp != nullptr);
}

void reverse(){
	Node* temp = head;
	Node* temp2 = head;
	Node* temp3 = head;
	
	do{
		if (temp == head){
			temp = head -> ptr;
			head -> ptr = nullptr;
			temp2 = head;
		}
		else if (temp2 == head){
			temp2 = temp;
			temp = temp -> ptr;
			temp2 -> ptr = head;
			temp3 = head;
		}
		else{
			temp3 = temp2;
			temp2 = temp;
			temp = temp -> ptr;
			temp2 -> ptr = temp3;
		}
	}while (temp != nullptr);
	
	temp = head;
	head = tail;
	tail = head;
	
	std::cout << "\nList reversed!" << "\n";
}

int main(){
	std::cout << "\tSimple Linked List" << "\n";
	char op;
	
	while(op != '5'){
		std::cout << "Type 1 to insert" << "\n";
		std::cout << "Type 2 to print" << "\n";
		std::cout << "Type 3 to reverse list" << "\n";
		std::cout << "Type 5 to exit" << "\n";
		std::cin >> op;
		
		switch(op){
			case '1':
				insert_head(); 
				break;
				
			case '2':
				print();
				break;
				
			case '3':
				reverse();
				break;
				
			case '5':
				break;
				
			default:
				std::cout << "\nType a valid value" << "\n";
		}
	}
}