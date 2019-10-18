#include <iostream>
#include <vector>
#include <numeric>
auto above(int avg) {
    return [avg](int x){ return x > avg; };
}
int main() {
	std::vector<int> intList {};
	int x {0};
	std::cout << "Enter integers, enter -1 when finished\n";
	auto fits_constraint = [](auto num){ return (num > 0 && num < 100); };
	while( std::cin >> x && x != -1 ) {
		if(fits_constraint(x))
			intList.push_back(x);
	}
	auto avg { std::accumulate(intList.begin(), intList.end(), 0) / intList.size() };
	auto above_avg { std::count_if(intList.begin(), intList.end(), above(avg)) };
	std::cout << above_avg << " scores above the average\n";
return 0;
}
