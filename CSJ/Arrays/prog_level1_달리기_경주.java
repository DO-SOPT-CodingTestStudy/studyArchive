import java.util.*;

class Solution {
      public String[] solution(String[] players, String[] callings) {
        Map<String, Integer> playerMap = new HashMap<>();
        for (int i = 0; i < players.length; i++) {
            playerMap.put(players[i], i);
        }

        for (String calling : callings) {
            int nextPlayerRank = playerMap.get(calling) - 1;
            String nextPlayerName = players[nextPlayerRank];
            
            playerMap.replace(nextPlayerName, nextPlayerRank + 1);
            playerMap.replace(calling, nextPlayerRank);
            
            players[nextPlayerRank] = calling;
            players[nextPlayerRank+1] = nextPlayerName;
        }

        return players;
    }
}
