function solution(sizes) {
  let long = 0,
    short = 0;

  for (let i = 0; i < sizes.length; i++) {
    let tmpLong, tmpShort;
    sizes[i][0] >= sizes[i][1]
      ? ((tmpLong = sizes[i][0]), (tmpShort = sizes[i][1]))
      : ((tmpLong = sizes[i][1]), (tmpShort = sizes[i][0]));

    if (tmpLong > long) {
      long = tmpLong;
    }
    if (tmpShort > short) {
      short = tmpShort;
    }
  }
  return long * short;
}
