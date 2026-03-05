# C++ Type Conversion Demo

This small project demonstrates **user-defined type conversions in C++** using a custom `String` class.

## Concepts Covered

- Conversion constructor (int → String)
- Type conversion operator (`operator int()`)
- Use of modern C++ utilities:
  - `std::string`
  - `std::to_string`
  - `std::stoi`

## Example

The class allows implicit conversions like:

String s1 = 123;   // int → String  
int num = s1;      // String → int

## File Structure

main.cpp – Implementation of the String class and demonstration program.

## Purpose

This project was created as part of strengthening **C++ fundamentals and understanding operator overloading and type conversions.**
