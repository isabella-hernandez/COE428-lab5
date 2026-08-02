# COE428 Lab 5 – XML-Based Heap Using Stacks

## Overview

This project was completed as part of **COE428 – Data Structures and Algorithms** at **Toronto Metropolitan University**.

The lab focuses on implementing stack and heap data structures in C while working with XML representations. The project is divided into two parts:

* **Part 1:** Validate simplified XML expressions using a stack.
* **Part 2:** Build a max heap from integer input, display the heap as XML, and output values in descending and ascending order using stacks.

## Learning Objectives

This lab demonstrates:

* Implementation of stacks in C.
* Implementation of a max heap in C.
* Dynamic memory and data structure manipulation.
* Representation of tree structures using XML.
* Using stacks to validate balanced XML tags.
* Using stacks with heap operations to process sorted output.

## Files

| File            | Description                                     |
| --------------- | ----------------------------------------------- |
| `part1Main.c`   | Main program for XML validation using a stack.  |
| `stringStack.c` | Stack implementation for storing XML tag names. |
| `stringStack.h` | Header file for the string stack.               |
| `part2Main.c`   | Main program for heap processing.               |
| `intStack.c`    | Stack implementation for integers.              |
| `intStack.h`    | Header file for the integer stack.              |
| `intHeap.c`     | Max heap implementation.                        |
| `intHeap.h`     | Header file for the max heap.                   |
| `Makefile`      | Compiles all project files.                     |
| `README.md`     | Project documentation.                          |

## Features

## Part 1 – XML Validation

The program:

* Reads simplified XML input from standard input.
* Stores opening tags using a stack.
* Compares opening and closing tags.
* Determines whether the XML expression is valid or invalid.

### Example

Run:

```bash
./part1Main
```

Input:

```xml
<a></a>
```

Output:

```
Valid XML
```

Another valid example:

```xml
<a><b></b></a>
```

Invalid example:

```xml
<a><b></a></b>
```

The program detects that the tags are not closed in the correct order.

---

## Part 2 – Max Heap Processing

The program:

* Reads integers from standard input.
* Inserts values into a max heap.
* Prints the heap structure as XML.
* Removes values from the heap in descending order.
* Uses a stack to output the values in ascending order.

### Example

Run:

```bash
./part2Main
```

Input:

```text
5 3 8 1 9 2
```

The program creates a max heap using the input values and displays the heap representation, followed by sorted output.

## Compilation

Compile the project using:

```bash
make
```

This will generate the executable files:

```text
part1Main
part2Main
```

## Running the Programs

After compiling, run either program:

### Part 1

```bash
./part1Main
```

Provide XML input through standard input.

Example:

```xml
<a></a>
```

### Part 2

```bash
./part2Main
```

Provide integer input through standard input.

Example:

```text
10 4 7 2 15 8
```

## Technologies Used

* C Programming Language
* GCC Compiler
* Makefile
* Stack Data Structure
* Max Heap Data Structure
* XML Tree Representation

## Course Information

**Toronto Metropolitan University**
**COE428 – Data Structures and Algorithms**
**Lab 5: XML-Based Heap Using Stacks**

