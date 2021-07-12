
// ambiguous - unclear, when multiple functions with same name are
// specified and compiler don't know what function to call.

// Operator: +, =, !
// Operand: an input for an operation such as 5, "hi", 'a'
// Rules: Operators act upon operands. Operation type is determined from the operator and operands.

// --------------------------------------- Operator Overloading
// "5" + "7" == "57"
// the + operator is overloaded for the string class
// IT IS THE OPERANDS THAT DETERMINES WHICH VERSION OF + IS CALLED.
// If it's 5 + 7 == 12, it's just a sum of two integers.

// Three ways to overload operators:
// Member, non-member, friend

// Member functions: are binary, they have two operands. First operand is the calling object.
// second one will be a parameter for the function.

// Non-Member functions: Both operands will be parameters. Parameters means objects
// that are of the type of class which we are overloading these operators for.

// Friend Functions
// Friend Functions are non-member functions that are labeled as friend functions.
// As a result, they are given member access to the class.
// Unlike a non-member function, you'll have direct access to class members.






