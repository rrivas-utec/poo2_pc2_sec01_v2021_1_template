//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_PC2_SEC01_V2021_1_P1_H
#define POO2_PC2_SEC01_V2021_1_P1_H

#include <vector>
#include <unordered_map>
#include <iterator>
#include <priority_queue>
using namespace std;

template <  typename T,
            typename Comparer,
            template<typename...> class ContainerTemplate>
pair<size_t, size_t> minimum_range(ContainerTemplate<T>... container,
                                            Comparer comparer = greater<T>) {
    vector<ContainerTemplate<T>> res;
    (res.push_back(container), ...);

    priority_queue<T, vector<T>, greater<T>> pq(greater<T>());
    vecto<ContainerTemplate<T>::iterator> iters (sizeof...(container));
    for (size_t i = 0; i < sizeof...(container); ++i) {
        iters[i] = begin(res[i]);
        pq.push(*iters[i]);
    }
    auto max = pq.top();
    for (size_t i = 0; i < sizeof...(container); ++i) {
        if (max == *iters[i]) {
            iters[i]++;
            break;
        }
    }
    while (true) {

    }

}

void question_1_1();

#endif //POO2_PC2_SEC01_V2021_1_P1_H
