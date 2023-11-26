//
//  prog_level3_풍선 터트리기.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/11/12.
//

import Foundation

func solution(_ a:[Int]) -> Int {
    if a.count < 3 { return 2 }
    var rst = 2
    var lm = a[0]
    var dp: [Int] = Array(repeating: a.last!, count: a.count-1)
    
    dp[a.count-2] = a.last!
    for i in (1 ..< a.count-2).reversed() {
        dp[i] = [a[i+1], dp[i+1]].min()!
    }
    let check: (Int) -> Bool = { i in
        if a[i] < lm {
            lm = [lm, a[i]].min()!
            return true
        }
        if a[i] < dp[i] {
            return true
        }
        return false
    }
    
    for i in 1 ..< a.count-1 {
        if check(i) {
            rst += 1
        }
    }

    return rst
}
