//
//  prog_level1_K번째수.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/11/12.
//

import Foundation

func solution(_ array:[Int], _ commands:[[Int]]) -> [Int] {

    var result = [Int]()
    var anyArray = array
    
    for i in 0..<commands.count {
        var tmpArray = [Int]()
        
        for j in commands[i][0]...commands[i][1] {
            tmpArray.append(anyArray[j-1])
        }
        
        tmpArray.sort()
        result.append(tmpArray[commands[i][2]-1])
    }

    return result
}
