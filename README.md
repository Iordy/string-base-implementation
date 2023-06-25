# String Base Implementation

This project is a basic implementation of a string class in C++, with a focus on learning about core concepts like memory management, operator overloading, and object-oriented programming.

## Features

- Basic string operations such as assignment and length retrieval
- Overloaded stream insertion and extraction operators for easy I/O
- Custom namespace to avoid naming conflicts
- All the basic constructors, iterators and other stuff
 ```cpp
 string();
 string(char letters[]);
 string(const string &source);
 string(char* begin, char* end);
 string(long long size);
   ```
- String class methods such as ```assign```, ```at```, ```replace``` and others
  ```cpp
 char at(int index);
 char back();
 char front();
 bool empty();
 void erase(int index = 0);
 void append(const string &source);
 void push_back(const char c);
 string& assign(const string &source);
 void replace(int index, const string &source);
 void insert(int index, const string &source);
 void pop_back();
  ```
- Operator overloads
```cpp
 string& operator = (const string &source);
 string& operator +(const string &source);
 bool operator ==(const string &source);
 bool operator !=(const string &source);
 char operator [](int index);

  string& operator +=(const string &source);

 friend std::istream& operator>>(std::istream& in, string &source);
 friend std::ostream& operator<<(std::ostream& out, string &source);
```
- Other ideas and observations are welcomed

## Usage

Include the string class in your C++ code as follows:

```cpp
#include "/path/to/your/string.h"

custom_string::string myString;
std::cin >> myString;
std::cout << "The length of the string is: " << myString.length() << std::endl;
```

<h3>Contributing</h3>
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.


<h3>License</h3>
This project is licensed under the MIT License.
