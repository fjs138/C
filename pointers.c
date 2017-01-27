p = &c; // the unary operator "&" gives the address of an object
		// this assigns the address of c to the variable p
		// p is said to "point to" c
		// the "& operator only applies to objects in memory
		// (variables, array elements) not expressions, constants, or register variables
		
		// the unary operator "*" is the indirection or dereferencing operator
		// when applied to a pointer, it accesses the object the pointer points to

		// Suppose that x and y are integers and ip is a pointer to int.
		// This artificial sequence shows how to declare a pointer and how to use & and * :

int a = 1, b = 2, c[10];
int *ip; // ip is a pointer to int

ip = &a; // ip is now pointing to a
b = *ip; // b is now 1
*ip = 0; // a is now 0
ip = &c[0]; // ip now points to c[0]

