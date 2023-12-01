import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

class Solution {
    public int solution(int[] people, int limit) {
        int answer = 0;

        Arrays.sort(people);
        int l = 0;
        int r = people.length - 1;

        // 오름차순 정렬 후, 가장 가벼운 사람과 무거운 사람이 함께 탈 수 있는 지 비교한다.
        // 가장 무거운 사람이 가장 가벼운 사람과 함께 타려해도 limit가 넘으면 혼자 태운다.
        while (true) {
            if(l == r) { // 마지막 비교의 합이 limit보다 커서 각각 보트에 따로 타야하는 경우
                answer++;
                break;
            } else if(l > r) { // 마지막 비교의 합이 limit보다 작거나 같았던 경우
                break;
            }
            if (people[l] + people[r] <= limit) {
                answer++;
                l++;
                r--;
            }
            else if (people[l] + people[r] > limit) {
                answer++;
                r--;
            }
        }

        return answer;
    }
}
