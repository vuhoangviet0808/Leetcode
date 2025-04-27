class Solution {
    void rotate_circle(vector<vector<int>>& matrix, int k){
        int n = matrix.size();
        int end = n-1-k, memory = matrix[k][k];
        for(int i=k+1;i<=end;i++){
            swap(matrix[k][i], memory);

        }
        for(int i=k+1;i<=end;i++){
            swap(matrix[i][end], memory);
        }
        for(int i=end-1;i>=k;i--){
            swap(matrix[end][i], memory);
        }
        for(int i=end-1;i>=k;i--){
            swap(matrix[i][k], memory);
        }
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // for(int i=0;i<n-1;i++){
        //     while(2*k+1 < n){
        //         rotate_circle(matrix, k);
        //         k++;
        //     }
        //     for(int )
        //     k=0;
        // }
        for(int k=0;2*k+1<n;k++){
            for(int i=0;i<n-2*k-1;i++){
                rotate_circle(matrix, k);
            }
        }
    }
};