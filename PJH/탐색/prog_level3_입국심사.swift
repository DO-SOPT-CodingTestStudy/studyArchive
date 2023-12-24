//
//  prog_level3_입국심사.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/11/05.
//

import Foundation

func solution(_ n:Int, _ times:[Int]) -> Int64 {
    
    let sortedTimes = times.sorted()
    var minTime = 1
    var maxTime = sortedTimes.last! * n
    var result = 0
    
    while minTime <= maxTime {
        var middle = (minTime + maxTime) / 2
        var count = 0
        
        for time in sortedTimes {
            count += middle / time
        }
        
        if count < n {
            minTime = middle + 1
        } else {
            maxTime = middle - 1
            result = middle
        }
    }
    
    return Int64(result)
}
