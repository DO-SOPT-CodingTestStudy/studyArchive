class MinHeap {
    constructor() {
        this.heap = [];
    }
    
    size() {
        return this.heap.length;
    }
    
    // 값을 넣고 재정렬
    push(value) {
        this.heap.push(value);
        let currIdx = this.heap.length - 1;
        
        while (
            // 트리의 제일 위에까지 올라갔으면 멈추기
            currIdx > 0 && 
            // 부모가 현재값보다 더 크면
            this.heap[currIdx] < this.heap[Math.floor((currIdx-1) / 2)]
        ) {
            // 부모랑 현재값 위치 바꾸기
            const temp = this.heap[currIdx]; 
            this.heap[currIdx] = this.heap[Math.floor((currIdx-1) / 2)];
            this.heap[Math.floor((currIdx-1) / 2)] = temp;
            // 현재값 인덱스 업데이트 해주기
            currIdx = Math.floor((currIdx - 1) / 2);
        }
    }
    
    // 값을 빼고, 오름차순 재정렬
    pop() {
        if (this.heap.length === 0) return null;
        if (this.heap.length === 1) return this.heap.pop();
        
        const minValue = this.heap[0]; // 기존 최소값 반환하고
        this.heap[0] = this.heap.pop(); // 마지막 요소를 첫번째로
        let currIdx = 0;
        
        // 마지막 요소까지
        while (currIdx * 2 + 1 < this.heap.length) {
            // 가장 작은 값의 인덱스 찾기     
            let minChildIdx = (currIdx * 2 + 2 < this.heap.length) // 마지막 요소를 넘지 않고
                                // 자식 노드 중 왼쪽이 오른쪽보다 크면
                            && (this.heap[currIdx * 2 + 2] < this.heap[currIdx * 2 + 1]) 
                                // 가장 작은 값의 인덱스는 오른쪽
                                ? currIdx * 2 + 2 : currIdx * 2 + 1;
            
            // currIdx가 최소값이면 멈춤
            if (this.heap[currIdx] < this.heap[minChildIdx]) {
                break;
            }
            
            // currIdx의 값이랑 최소값 Idx의 값이랑 자리바꿈
            const temp = this.heap[currIdx];
            this.heap[currIdx] = this.heap[minChildIdx];
            this.heap[minChildIdx] = temp;
            // currIdx 업데이트
            currIdx = minChildIdx;
        }
        return minValue;
    }
    
    peek() {
        return this.heap[0];
    }
}

function solution(scoville, K) {
    const minHeap = new MinHeap();
    
    for (const sco of scoville) {
        minHeap.push(sco);
    }
    
    let mixedCount = 0;
    
    // scoville 길이 2 이상이라는 조건 만족
    while (minHeap.size() >= 2 && minHeap.peek() < K) {
        const first = minHeap.pop();
        const second = minHeap.pop();
        const mixedScov = first + second * 2;
        minHeap.push(mixedScov);
        mixedCount++;
    }
    
    return minHeap.peek() >= K ? mixedCount : -1;
}