#include <iostream>
#include <algorithm> // Для std::swap

int main() {
    int range_start = 0;
    int range_end = 0;

    // Ввод данных с проверкой на корректность
    if (!(std::cin >> range_start >> range_end)) {
        std::cerr << "Ошибка: некорректный ввод чисел!" << std::endl;
        return 1;
    }

    // Если начало диапазона больше конца, меняем их местами
    if (range_start > range_end) {
        std::swap(range_start, range_end);
    }

    // Используем long long для защиты от переполнения
    long long total_sum = 0;
    for (int i = range_start; i <= range_end; ++i) {
        total_sum += i;
    }

    std::cout << "sum=" << total_sum << std::endl;

    return 0;
}
