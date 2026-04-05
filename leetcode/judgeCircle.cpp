class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;

        for(int i = 0; i < moves.size(); i++){
            char ch = moves[i];

            if(ch == 'U'){
                y = y + 1;
            }
            else if(ch == 'D'){
                y = y - 1;
            }
            else if(ch == 'R'){
                x = x + 1;
            }
            else if(ch == 'L'){
                x = x - 1;
            }
        }

        return (x == 0 && y == 0);
    }
};
