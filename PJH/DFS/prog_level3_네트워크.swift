//
//  prog_level3_네트워크.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/11/05.
//

import Foundation

func solution(_ n:Int, _ computers:[[Int]]) -> Int {
    
    var result = 0
    var visited = Array(repeating: false, count: n)
    
    func dfs(_ computer: Int ) {
        visited[computer] = true
        for i in 0..<n {
            if computers[computer][i] == 1 && !visited[i] {
                dfs(i)
            }
        }
    }
    
    for i in 0..<n {
        if !visited[i] {
            result += 1
            dfs(i)
        }
    }
    
    return result
}
