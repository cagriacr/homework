import java.util.Arrays;

public class Main {
    public static int coin_change_ways_dp(int amount, int[] coinTypes) {
        int n = coinTypes.length;
        int[][] dp = new int[n + 1][amount + 1];
        for (int i = 0; i < n + 1; i++) {
            dp[i][0] = 1;
        }
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < amount + 1; j++) {
                if (j < coinTypes[i - 1]) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i][j - coinTypes[i - 1]] + dp[i - 1][j];
                }
            }
        }
        return dp[n][amount];
    }

    public static void main(String[] args) {
        int amount = 3;
        int[] coinTypes = {1, 2, 3};
        System.out.println(coin_change_ways_dp(amount, coinTypes));
    }
}
