
PROBLEM: Highest Product

Asked in: Coursera,Amazon

Given an array A, of N integers A.
Return the highest product possible by multiplying 3 numbers from the array.

NOTE: Solution will fit in a 32-bit signed integer.

Input Format:
The first and the only argument is an integer array A.

Output Format:
Return the highest possible product.

Constraints:
1 <= N <= 5e5

Example:
Input 1:
A = [1, 2, 3, 4]
Output 1:
24
Explanation 1:
2 * 3 * 4 = 24

Input 2:
A = [0, -1, 3, 100, 70, 50]
Output 2:
350000
Explanation 2:
70 * 50 * 100 = 350000
_________________________________________________________

Time Complexity: O(nlogn) for sort function

int Solution::maxp3(vector<int> &A) {
    int n=A.size();
    if(A.size()==0){
        return 0;
    }
    if(A.size()==1){
        return A[0];
    }
    if(A.size()==2){
        return (A[0]*A[1]);
    }
    sort(A.begin(),A.end());
    return max((A[0]*A[1]*A[n-1]),(A[n-3]*A[n-2]*A[n-1]));
}
