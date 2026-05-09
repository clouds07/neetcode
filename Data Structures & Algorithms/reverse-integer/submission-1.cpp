class Solution {
public:
    int reverse(int x) {
        int result {0};
        int digit = 0;
        const int maxInt = 0x7FFFFFFF;
        const int minInt = 0x80000000;
        printf("%d, %d\n", maxInt, minInt);
        while (x) {
            if ((result > (maxInt / 10)) || (result < (minInt / 10))) {
                return 0;
            }
            result *= 10;
            digit = x % 10;
            result += digit;
            x /= 10;
        }

        return result;
    }
};
