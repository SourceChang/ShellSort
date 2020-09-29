//
//  ViewController.m
//  ShellSort
//
//  Created by Source on 2020/9/28.
//  Copyright © 2020 Source. All rights reserved.
//


#import "ViewController.h"
#import "Sorter.h"


#include "Solution.hpp"
#include <string>
#include <iostream>


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    std::vector<int> arrNumbers = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    Solution::shellSort( arrNumbers );
    for ( auto value : arrNumbers ) {
        
        std::cout << value << " ";
    }
    std::cout << std::endl;
    
    NSArray *arrObjectiveCNumbers = @[ @9, @8, @7, @6, @5, @4, @3, @2, @1 ];
    NSArray *arrSortedObjectiveCNumbers = [Sorter shellSort:arrObjectiveCNumbers];
    NSLog(@"%@", [arrSortedObjectiveCNumbers componentsJoinedByString:@", "]);
}


@end
