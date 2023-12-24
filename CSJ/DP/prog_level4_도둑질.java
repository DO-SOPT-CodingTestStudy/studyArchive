class Solution {
    public int solution(int[] money) {
        int len = money.length;
        int[] dp1 = new int[len];
        int[] dp2 = new int[len];

        //첫번째 집을 털고 시작하는 경우
        dp1[0] = money[0];
        dp1[1] = money[0];

        for (int i = 2; i < len-1; i++) {
            dp1[i] = Math.max(dp1[i - 2] + money[i], dp1[i - 1]);
        }

        // 첫번째 집을 안 털고 시작하는 경우
        dp2[1] = money[1];
        
        for (int i = 2; i < len; i++) {
            dp2[i] = Math.max(dp2[i - 2] + money[i], dp2[i - 1]);
        }

        return Math.max(dp1[len - 2], dp2[len - 1]);
    }
}
