//
//  prog_level2_올바른_괄호.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/10/28.
//

import Foundation

// 첫번째 풀이
func solution(_ s:String) -> Bool {
    var ans:Bool = false
   
    var stack: [String] = []
    let characters: [Character] = Array(s)
    
    for i in characters {
        if i == "(" {
            stack.append("(")
        } else if i == ")" {
            if stack.isEmpty {
                ans = false
                return ans
            } else {
                stack.removeLast()
            }
        }
    }

    return stack.isEmpty
}



// 두번째 풀이
func solution(_ s:String) -> Bool
{
    var result = 0
    let characters: [Character] = Array(s)
    
    for i in characters {
        if i == "(" {
            result += 1
        } else if i == ")" {
            result -= 1
        }
        
        if result < 0 {
            return false
        }
    }
    
    if result != 0 {
        return false
    }
    
    return true
}
