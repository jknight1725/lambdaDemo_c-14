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

	Person doug("Doug", 42);
	Person linda("Linda", 65);
	Person todd("Todd", 27);
	std::vector<Person> roster = {doug, linda, todd};
	
	auto printName = [](auto& x){std::cout << x.name << std::endl;};
	for(auto p : roster) { printName(p); }
	
	Dog rover("Rover the Dog");
	printName(rover);

	auto byAge = [](auto& lhs, auto& rhs) {return lhs.age < rhs.age;};
	std::sort(roster.begin(),roster.end(), byAge);
	for(auto p : roster) { printName(p); }

return 0;
}
