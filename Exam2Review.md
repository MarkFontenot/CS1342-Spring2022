# Exam 2

### Format
- T/F
- Multiple Choice
- Free Response

### Chapter 7
Mediums
- Console I/O
- Stringstreams I/O
- File I/O

- manipulators

### Chapter 8
- built-in c-arrays
- Vectors
    - `.at()`
    - vector[0] // DO NOT DO
    - `push_back()`
    - `.size()`
- 2-D vectors
    - `vector<vector<string>> playerInfo;`
    - `playerInfo.at(row).at(col)`
- for loops
    - traditional
    - range-based for-loops
    ```c++
    for (auto element: vector) {
        // element
    }
    ```

- Common vector algorithms
    - findMin / findMax
    - normalize

### Chapter 9
- Linear Search
- Binary Search

- Big-O notation
    - `f(x) = 6n^2 + 5x + 6`
        - O(n^2)
    - for ()
        for ()
            for()

    - O(n^3)

- Sorting Algorithms
    - Selection Sort
    - Insertion Sort
        -  `O(n^2)`
    - Quick sort
    - Mergesort
        - `O(nlog(n))`

### Chapter 10
- Objects and Classes
    - create classes
    - separating .h / .cpp
- Class definition
    - data members
        - `private`, `public`
    - member functions
        - getters / setters
        - utility functions
        - Constructors
            - Default Constructor
            - Overloaded Constructors
            - Copy Constructor
        - Destructors
        - Copy Assignment Operators
    - `const` qualified functions
    - list initialization
    - Scope resolution `::`

### Chapter 11
- Pointers
    - Pointers on the stack
- Dynamic Memory Allocation
    - use pointers to create / access / manage memory on the heap
    - `new`
    - `delete`
    - `delete[]`
    - `*` - dereference operator
    - `nullptr`
    - Memory Diagrams
    - c-arrays 
    - pointer arithmetic
        ```c++
        int *ptr = new int[10];
        *(ptr + 1) = 1;
        ptr[1] = 1;
        ```
    - Rule of Three
        - Shallow vs Deep
    - Common Mistakes
        - Memory Leaks
        - Dangling Pointers




