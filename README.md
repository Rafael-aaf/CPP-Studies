# C++ Studies
In this repository I'll add files of my C++ studies!

## Contents
- [Templates](#templates)
- [Data Structures](#data-structures)

## Templates
### Function Templates
It can use different types of data in the same function. In this example, the parameters of the function can be of any kind, for example int, double or float, and the output will be determined accordingly because of the auto keyword.
```cpp
template <typename T, typename U>
auto min(T x, U y){
	return (x < y) ? x : y; //Ternary Operator
}
```
Useful for:
- Generic coding
- Cleaner and reusable code

Implementation on a linked list:

I tried implementing templates on a [linked list](https://github.com/Rafael-aaf/CPP-Studies/blob/ef41b41ad92c3a37a5efdeb44b74b1cb5625a035/Templates/Linked%20List%20with%20Templates.cpp) too! I coded the list to only insert from the head, and it can print too. It's very simple because I just wanted to try templates on something. The templates here are really useful, because you can easily use the list with different data types, just change ``` insert_head<float>(); ``` to any data type, like int, float or std::string.


## Data Structures
### Linked List

A code for Linked Lists that can be reversed: [Reverse Linked List](https://github.com/Rafael-aaf/CPP-Studies/blob/24e549e294035b850562eee385573bcae92b3099/Data%20Structures/Linked%20List%20Reversed.cpp)

I used 3 temporary pointers, on the function reverse() they were outise of the ```do... while``` loop, on reserve2() one of the pointers was inside, which made the code a bit cleaner.

Here's the code to reverse a Linked List:
```cpp
void reverse2(){
	Node* prev = nullptr;
	Node* current = head;
	
	while(current != nullptr){
		Node* next = current -> ptr;
		current -> ptr = prev;
		prev = current;
		current = next;
	}

	tail = head;
	head = prev;
}
```
