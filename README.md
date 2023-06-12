<!DOCTYPE html>
<html>
<head>
    <title>String Base Implementation README</title>
    <style>
        body { font-family: Arial, sans-serif; }
        code { font-family: monospace; background-color: #f4f4f4; padding: 5px; border-radius: 5px; }
    </style>
</head>
<body>
    <h1>String Base Implementation</h1>

    <p>This project is a basic implementation of a string class in C++, with a focus on learning about core concepts like memory management, operator overloading, and object-oriented programming.</p>

    <h2>Features</h2>

    <ul>
        <li>Basic string operations such as assignment and length retrieval</li>
        <li>Overloaded stream insertion and extraction operators for easy I/O</li>
        <li>Custom namespace to avoid naming conflicts</li>
    </ul>

    <h2>Usage</h2>

    <p>Include the string class in your C++ code as follows:</p>

    <code>#include "/path/to/your/string.h"</code>

    <p>Then you can use the string class like any other data type:</p>

    <code>
    custom_string::string myString;<br>
    std::cin >> myString;<br>
    std::cout << "The length of the string is: " << myString.get_len() << std::endl;
    </code>

    <h2>Contributing</h2>

    <p>Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.</p>

    <h2>License</h2>

    <p>This project is licensed under the MIT License.</p>

</body>
</html>
