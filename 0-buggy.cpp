using namespace std;
#include <iostream>
#include <stdio.h>
int max_total_sum = 2000;
int calculate_total(const int costs[], int length) {
    int amount = 0;
    for (int number = 0; number < length; number++) {
        amount += costs[number];
}
    return amount;
}

int main() {
    int costs[] = {100, 299, 599, 1000};
    int length = sizeof(costs) / sizeof(int);
    int total = calculate_total(costs, length);
    if (total <= max_total_sum) {
        printf("%d\n", total);
    }
    if (total >= max_total_sum) {
        cout << "The sum is bigger"  << endl;
    }
}
