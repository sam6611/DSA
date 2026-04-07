#include <vector>
#include <string>
using namespace std;

class Robot {
private:
    int w, h;
    int x, y;
    int dir; // 0=East, 1=North, 2=West, 3=South
    int perimeter;
    vector<string> dirs;

public:
    Robot(int width, int height) {
        w = width;
        h = height;
        x = 0;
        y = 0;
        dir = 0;
        perimeter = 2 * (width + height) - 4;
        dirs = {"East", "North", "West", "South"};
    }

    void step(int num) {
        if (perimeter == 0) return;

        num %= perimeter;

        // special case
        if (num == 0) num = perimeter;

        while (num > 0) {
            int steps = 0;

            if (dir == 0) { // East
                steps = min(num, w - 1 - x);
                x += steps;
            } 
            else if (dir == 1) { // North
                steps = min(num, h - 1 - y);
                y += steps;
            } 
            else if (dir == 2) { // West
                steps = min(num, x);
                x -= steps;
            } 
            else { // South
                steps = min(num, y);
                y -= steps;
            }

            num -= steps;

            if (num > 0) {
                dir = (dir + 1) % 4;
            }
        }
    }

    vector<int> getPos() {
        return {x, y};
    }

    string getDir() {
        return dirs[dir];
    }
};
