//
//  Solution.hpp
//  ShellSort
//
//  Created by Source on 2020/9/28.
//  Copyright © 2020 Source. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>
#include <vector>


class Solution {
public:
    static void shellSort(std::vector<int>& arrNumbers);
    
private:
    static void insertSort(std::vector<int>& arrNumbers, int begin, int end);
};


#endif /* Solution_hpp */
