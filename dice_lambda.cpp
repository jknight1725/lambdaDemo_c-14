#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
int main() {
    enum dice { low=1, two, three, four, five, high = 6};
    
    //Populate a vector with all possible results of rolling two die at once
    std::vector<std::pair<int, int>> v;
    for(int i = dice::low; i <= dice::high; ++i) {
        for(int j = dice::low; j <= dice::high; ++j) {
            v.push_back(std::pair<int, int>(i,j));
        }
    }

    int target = dice::low;
    // Check if the dice rolled contain the target, or if their sum is the target
    auto pair_contains_target = [&target](auto pair){
        return (pair.first == target || pair.second == target || pair.first + pair.second == target);
    };

    // Check if dice rolled are equal
    auto doubles = [](auto pair){
        return(pair.first == pair.second);
    };

    auto v_count_if = [&v](auto closure){
        return std::count_if(v.begin(), v.end(), closure);
    };

    auto count = v_count_if(pair_contains_target);
    std::cout << "Pairs containing the target: " << count << std::endl;
    count = v_count_if(doubles);
    std::cout << "Pairs containing doubles: " << count << std::endl;

    return 0;
}