# C++ Studies
In this repository I'll add files of my C++ studies!

## Contents
- [Templates](#templates)

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
