class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        return n - rev; // or abs(n - rev)
    }
};


class Solution {
public:
    int mirrorDistance(int n) {
        string s=to_string(n);
        string v=s;
        reverse(v.begin(),v.end());
        int z= stoi(v);
        int res=abs(n-z);
        return res;
    }
};
