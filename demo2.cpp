#COMPILE WITH CPP17
#include <iostream>
#include <vector>
#include <numeric>
auto test_score_above(double avg) {
    return [avg](auto score){ return score > avg; };
}
int main() {
    std::vector<double> test_scores {};
    double test_score {0};
    std::cout << "Enter test scores, enter -1 when finished\n";
    auto fits_constraint = [](double score){ return (score > 0 && score < 100); };
    while( std::cin >> test_score && test_score != -1 ) {
        if(fits_constraint(test_score))
            test_scores.push_back(test_score);
    }
    auto avg { std::reduce(test_scores.begin(), test_scores.end()) / test_scores.size() };
    auto test_scores_above_avg { std::count_if(test_scores.begin(), test_scores.end(), test_score_above(avg)) };
    std::cout << test_scores_above_avg << " scores above the average\n";
    return 0;
}
