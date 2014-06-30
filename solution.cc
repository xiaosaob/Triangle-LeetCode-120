// Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

// For example, given the following triangle
// [
//      [2],
//     [3,4],
//    [6,5,7],
//   [4,1,8,3]
// ]
// The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int n = triangle.size();
        for(int i = n-2; i >= 0; --i) {
            for(int j = 0; j <= i; ++j)
                triangle[n-1][j] = min(triangle[n-1][j], triangle[n-1][j+1])+triangle[i][j];
        }
        return triangle[n-1][0];
    }
};
