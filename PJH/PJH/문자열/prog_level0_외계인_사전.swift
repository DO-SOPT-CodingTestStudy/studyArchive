//
//  prog_level0_외계인_사전.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/10/24.
//

import Foundation

func solution(_ spell:[String], _ dic:[String]) -> Int {
    
    var result = 0
    
    for i in dic {
        let sortedSpell = spell.sorted().joined()
        let sortedDic = String(i.sorted())
        
        if sortedSpell == sortedDic {
            result = 1
            break
        } else {
            result = 2
        }
    }
    
    return result
}
