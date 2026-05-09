class Solution {
public:
    int reverse(int x) {
        int result {0};
        int digit = 0;
        const int maxInt = 0x7FFFFFFF;
        const int minInt = 0x80000000;
        printf("%d, %d\n", maxInt, minInt);
        while (x) {
            digit = x % 10;
            if ((result > (maxInt / 10)) || ((result == (maxInt / 10)) && (digit > (maxInt % 10)))) {
                return 0;
            }
            if ((result < (minInt / 10))|| ((result == (minInt / 10)) && (digit < (minInt % 10)))) {
                return 0;
            }
            result *= 10;
            result += digit;
            x /= 10;
        }

        return result;
    }
};
