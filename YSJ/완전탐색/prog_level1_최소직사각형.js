function solution(sizes) {
    let sorted = [...sizes]
    
    sorted.forEach(v => {
        v.sort((a,b) => a-b)
    })
    
    
    let maxSize = [0,0];
    sorted.forEach(([w,h]) => {
        if (w > maxSize[0]) maxSize[0] = w;
        if (h > maxSize[1]) maxSize[1] = h;
    }) 
    
    
    return maxSize[0] * maxSize[1];
}