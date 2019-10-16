#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main()
{
	struct Person {
		std::string name;
		int age;
		Person(std::string n, int a) : name(n),age(a) {}
	}; 
	
	struct Dog {
		std::string name;
		Dog(std::string n) : name(n) {}
	}; 

	std::vector<Person> roster { {"Linda", 65}, {"Todd", 27}, {"Doug", 42} };
	
	auto printName = [](auto& x){std::cout << x.name << std::endl;};
	for(auto& p : roster) { printName(p); }
	
	Dog rover("Rover the Dog");
	printName(rover);

	auto byAge = [](auto& lhs, auto& rhs) {return lhs.age < rhs.age;};
	std::sort(roster.begin(),roster.end(), byAge);
	for(auto& p : roster) { printName(p); }

	// The possibilities are endless. We could just as easily have made a difference of age lambda 
	// and that lambda could compare rover the dogs age to a humans age

return 0;
}
