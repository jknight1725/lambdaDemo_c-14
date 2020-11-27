# modern_cpp_lambda_examples
A showcase of the utility c++ brings to the table with its improved lambdas
compile with -std=c++14 or greater


The first demonstration defines two structs Person and Dog. Both of these structs have a member string name. The person struct contains an additional member int age. Both structs also have a constructor.

The program intializes three person objects and one dog object. The person objects are then stored in a vector named roster. A lambda expression is then evaluated, creating a closure called printName. This closure will take any type and attempt to print that objects name data. This is essentially ducktyping done without defining a templatized printName free function or a fcn for each structure.
. 

A further demonstration of lambda functionality is then shown by defining a lambda 'byAge' that takes in two objects and compares their ages. It is used in conjuction with std::sort to create a clear syntax "sort the vector byAge"
The vector is then printed again with the printName lambda but this time the roster is sorted by age.

The lambda allows us to avoid overloading an operator for each of these structs. It also gives us the ability to create a sorting criteria on the fly without having to hardcode it into the structure. We could just as easily define a lambda that sorts the roster by the name field.

*Documentation in progress for further examples*
