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
