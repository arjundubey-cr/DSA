class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {

    int low;
    int high;

    for (low = 0, high = matrix.size() - 1; low <= high;) {
      int middle = (low + high) / 2;
      if (matrix[middle][0] < target) {
        low = middle + 1;
      } else if (matrix[middle][0] > target) {
        high = middle - 1;
      } else {
        return true;
      }
    }

    int row = high;
    if (row >= 0) {
      for (low = 0, high = matrix[row].size() - 1; low <= high;) {
        int middle = (low + high) / 2;
        if (matrix[row][middle] < target) {
          low = middle + 1;
        } else if (matrix[row][middle] > target) {
          high = middle - 1;
        } else {
          return true;
        }
      }
    }

    return false;
  }
};