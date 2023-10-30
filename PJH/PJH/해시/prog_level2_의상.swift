//
//  prog_level2_의상.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/10/22.
//

import Foundation

func solution(_ clothes:[[String]]) -> Int {
    
    var clothesType: [String: Int] = [:]
    
    for cloth in clothes {
        let clothType = cloth[1]
        
        if let count = clothesType[clothType] {
            clothesType[clothType] = count + 1
        } else {
            clothesType[clothType] = 1
        }
    }
    
    var result = 1
    for count in clothesType.values {
        result *= (count + 1)
    }
    
    return result - 1
}
