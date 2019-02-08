# lambdaDemo_c-14
A showcase of the utility lambdas bring to the table

The demonstration defines two structs Person and Dog. Both of these structs have a member string name. The person struct contains an additional member int age. Both structs also have a constructor.

The program intializes three person objects and one dog object. The person objects are then sotred in a vector named roster. An anonymous function is then stored in the variable printName. This function will take any type and attempt to print that objects name data. This is akin to ducktyping in c++. Instead of overloading the  << operator or defining a printName function for each structure, we can just use a lambda once.

The program calls the printName lamda on the roster and on the Dog rover. This demonstrates the ability of our anonymous function to take any type as a parameter.

A further demonstration of lambda functionality is then shown by defining a lambda 'byAge' that takes in two objects and compares their ages. It is used in conjuction with std::sort to create a clear syntax "sort the vector byAge"
The vector is then printed again with the printName lambda but this time the roster is sorted by age.

The lambda allows us to avoid overloading an operator for each of these structs. It also gives us the ability to create a sorting criteria on the fly without having to hardcode it into the structure. We could just as easily define a lambda that sorts the roster by the name field.
