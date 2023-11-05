//
//  prog_level3_디스크_컨트롤러.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/11/05.
//

import Foundation

func solution(_ jobs:[[Int]]) -> Int {
    var sortedJobs = jobs.sorted(by: { $0[0] == $1[0] ? $0[1] < $1[1] : $0[0] < $1[0] })
    sortedJobs.sort(by: { $0[1] == $1[1] ? $0[0] < $1[0] : $0[1] < $1[1] })
    var now = 0
    var totalTime = 0

    while !sortedJobs.isEmpty {
        var check = false
        for i in 0..<sortedJobs.count {
            if sortedJobs[i][0] <= now {
                now += sortedJobs[i][1]
                totalTime += now - sortedJobs[i][0]
                sortedJobs.remove(at: i)
                check = true
                break
            }
        }

        if !check {
            now += 1
        }
    }

    return totalTime / jobs.count
}
