//
//  Solution.cpp
//  ShellSort
//
//  Created by Source on 2020/9/28.
//  Copyright © 2020 Source. All rights reserved.
//

#include "Solution.hpp"


void Solution::shellSort(std::vector<int>& arrNumbers) {
    
    for ( int increment = arrNumbers.size() / 2; increment > 0; increment /= 2 ) {
        
        for ( int end = increment; end < arrNumbers.size(); ++end ) {
            
            insertSort(arrNumbers, increment, end);
        }
    }
}


void Solution::insertSort(std::vector<int>& arrNumbers, int increment, int i) {
    
    // increment 表示的是分组元素之间的 间隔
    // i 表示当前分组的最后一个元素
    int j = i;
    while ( j - increment >= 0 && arrNumbers[j] < arrNumbers[j - increment] ) {
        
        // swap
        // 异或：相同为 0，不同为 1
        arrNumbers[j] = arrNumbers[j] ^ arrNumbers[j - increment];
        arrNumbers[j - increment] = arrNumbers[j] ^ arrNumbers[j - increment];
        arrNumbers[j] = arrNumbers[j] ^ arrNumbers[j - increment];
        
        j -= increment;
    }
}

