//Simply Linked List. It only insert from the head, because I made ir to implement templates.

#include <iostream>

template <typename T>
struct Node{
	T value;
	Node* ptr;
};

template <typename T>
Node<T>* head = nullptr;

template <typename T>
Node<T>* tail = nullptr;

template <typename T>
void insert_head(){
	T pvalue;
	std::cout <<"\nInsert a value: ";
	std::cin >> pvalue;
	
	Node<T>* newNode = new Node<T>();
	newNode -> value = pvalue;
	
	if (head<T> == nullptr){
		head<T> = newNode;
		tail<T> = newNode;
	}
	else if (head<T> == tail<T>){
		head<T> = newNode;
		head<T> -> ptr = tail<T>;
	}
	else{
		newNode -> ptr = head<T>;
		head<T> = newNode;
	}
}


template <typename T>
void print(){
	std::cout << "List:" << "\n";
	Node<T>* temp = head<T>;
	
	do{
		std::cout << temp -> value << "\n";
		temp = temp -> ptr;
	}while (temp != nullptr);
}

int main(){
	std::cout << "\tSimple Linked List" << "\n";
	char op;
	
	while(op != '5'){
		std::cout << "Type 1 to insert" << "\n";
		std::cout << "Type 2 to print" << "\n";
		std::cout << "Type 5 to exit" << "\n";
		std::cin >> op;
		
		switch(op){
			case '1':
				insert_head<float>(); 
				break;
				
			case '2':
				print<float>();
				break;
				
			case '3':
				std::cout << "teste3";
				break;
				
			case '5':
				break;
				
			default:
				std::cout << "\nType a valid value" << "\n";
		}
	}
}