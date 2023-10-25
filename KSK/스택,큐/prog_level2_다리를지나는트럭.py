from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 0
    bridge = deque([0] * bridge_length)  # 다리를 나타내는 큐
    total_weight = 0
    truck_weights = deque(truck_weights)
    
    while truck_weights:
        # 다리에서 나가는 트럭의 무게를 빼주고 큐에서 제거
        total_weight -= bridge.popleft()
        
        # 다음에 들어갈 트럭이 다리에 올라갈 수 있는 경우
        if total_weight + truck_weights[0] <= weight:
            truck = truck_weights.popleft()
            bridge.append(truck)
            total_weight += truck
        else:
            # 다음 트럭이 다리에 올라갈 수 없는 경우, 무게 0인 트럭을 추가하여 시간 경과를 표현
            bridge.append(0)
        
        answer += 1
    
    # 마지막 트럭이 다리를 완전히 지날 때까지 추가적으로 시간을 더해줌
    answer += bridge_length
    
    return answer