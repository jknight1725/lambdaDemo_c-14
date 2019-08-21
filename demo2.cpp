#include <iostream>
#include <vector>
#include <numeric>

int main() {
        std::vector<int> intList {};
        int x {0};
        std::cout << "Enter integers, enter -1 when finished\n";
        auto fitsConstraint = [](auto num){ return (num > 0 && num < 99); };
        while( std::cin >> x && x != -1 ) {
                if(fitsConstraint(x))
                        intList.push_back(x);
        }
        auto avg { std::accumulate(intList.begin(),intList.end(),0) / intList.size() };
        auto aboveAvg = [avg](auto num){return num > avg;};
        int numbersAbove {0};
        for(auto num : intList) {
                if (aboveAvg(num))
                        ++numbersAbove;
        }
        std::cout << "There are " << numbersAbove << " numbers above the average\n";
return 0;
}
