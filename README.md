1. Normal Variable vs Pointer

Normal Variable

Stores the actual value

Access memory directly

Read/modify using the variable name

Example: int x = 10;

Pointer

Stores memory address of another variable

Access memory indirectly

Read/modify using dereferencing (*)

Example: int *p = &x; *p = 20;

2. Declaration vs Definition

Variable

Declaration: Introduces name & type

Definition: Allocates memory & optionally stores value

Example: int x; x = 10;

Pointer

Declaration: Shows it stores an address (int *p;)

Definition: Assigns address of variable (p = &x;)

Operators:

& → Address of variable

* → Declare pointer / dereference

3. Dereferencing a Pointer

Accesses the value stored at the pointer’s address

Example:

int x = 10;
int *p = &x;
*p = 25; // x becomes 25

4. When to Use Pointers

Modify variables in functions (e.g., swapping numbers)

Dynamic memory allocation (e.g., arrays, linked lists)

Efficient handling of large data

5. Limitations / Risks

Uninitialized pointers can crash programs

Dangling pointers point to invalid memory

Memory leaks if memory not freed

Harder to debug than normal variables

6. Call by Value vs Call by Reference

Call by Value

Passes a copy; original variable not changed

Example: void change(int x);

Call by Reference

Passes address; original variable is updated

Example: void change(int *x);
