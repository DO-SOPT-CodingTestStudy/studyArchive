//
//  prog_level1_약수의_개수와_덧셈.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/10/22.
//

import Foundation

func solution(_ left:Int, _ right:Int) -> Int {
    
    var result = 0
    
    for i in left...right {
        let count = calculate(num: i)
        result += (count % 2 == 0) ? i : -i
    }
    
    return result
}

func calculate(num: Int) -> Int{
    
    var count = 0
    
    for i in 1...num {
        if num % i == 0 {
            count += 1
        }
    }
    
    return count
}
