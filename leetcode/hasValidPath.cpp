class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        // Directions: left, right, up, down
        vector<vector<pair<int,int>>> dirs = {
            {},                         // dummy for index 0
            {{0,-1},{0,1}},             // type 1
            {{-1,0},{1,0}},             // type 2
            {{0,-1},{1,0}},             // type 3
            {{0,1},{1,0}},              // type 4
            {{0,-1},{-1,0}},            // type 5
            {{0,1},{-1,0}}              // type 6
        };

        vector<vector<bool>> visited(m, vector<bool>(n, false));
        queue<pair<int,int>> q;
        
        q.push({0,0});
        visited[0][0] = true;

        while(!q.empty()) {
            auto [x,y] = q.front();
            q.pop();

            // Reached destination
            if(x == m-1 && y == n-1) return true;

            // Explore all valid directions from current street
            for(auto [dx,dy] : dirs[grid[x][y]]) {
                int nx = x + dx;
                int ny = y + dy;

                if(nx < 0 || ny < 0 || nx >= m || ny >= n || visited[nx][ny])
                    continue;

                // Check if next cell connects back
                for(auto [rdx,rdy] : dirs[grid[nx][ny]]) {
                    if(nx + rdx == x && ny + rdy == y) {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                        break;
                    }
                }
            }
        }

        return false;
    }
};
