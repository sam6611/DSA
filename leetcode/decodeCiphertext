class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        
        int n = encodedText.size();
        int cols = n / rows;

        // Step 1: build matrix
        vector<vector<char>> mat(rows, vector<char>(cols));

        int k = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                mat[i][j] = encodedText[k++];
            }
        }

        // Step 2: read diagonally
        string result = "";

        for(int startCol = 0; startCol < cols; startCol++){
            int i = 0, j = startCol;

            while(i < rows && j < cols){
                result += mat[i][j];
                i++;
                j++;
            }
        }

        // Step 3: remove trailing spaces
        while(!result.empty() && result.back() == ' '){
            result.pop_back();
        }

        return result;
    }
};
