//
//  prog_level1_없는_숫자_더하기.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/10/29.
//

import Foundation

func solution(_ numbers:[Int]) -> Int {
    
    var result = 0
    
    for i in 0...9 {
        if !(numbers.contains(i)) {
            result += i
        }
    }
    
    return result
}
