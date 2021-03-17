int isSubsetSum(vector < int > & A, int sum) {
  int n = A.size();
  // The value of subset[i][j] will be true if
  // there is a subset of set[0..j-1] with sum
  // equal to i
  bool subset[n + 1][sum + 1];

  // If sum is 0, then answer is true
  for (int i = 0; i <= n; i++)
    subset[i][0] = true;

  // If sum is not 0 and set is empty,
  // then answer is false
  for (int i = 1; i <= sum; i++)
    subset[0][i] = false;

  // Fill the subset table in botton up manner
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= sum; j++) {
      if (j < A[i - 1])
        subset[i][j] = subset[i - 1][j];
      if (j >= A[i - 1])
        subset[i][j] = subset[i - 1][j] ||
        subset[i - 1][j - A[i - 1]];
    }
  }
  return subset[n][sum];
}

int Solution::solve(vector < int > & A, int B) {
  return isSubsetSum(A, B);
}
