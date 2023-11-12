//
//  prog_leve2_최댓값과 최솟값.swift
//  PJH
//
//  Created by ParkJunHyuk on 2023/11/12.
//

import Foundation

func solution(_ s:String) -> String {
    
    var splitS = s.split(separator: " ").map{ Int(String($0))! }
    
    var max = splitS.max()
    var min = splitS.min()
    
    var result = "\(min!) \(max!)"
    
    return result
}
