class Solution {
public:
    int getSum(int a, int b) {
        int sum {0};
        int carry {0};
        int aMask {0}, bMask {0};

        for (auto i = 0; i < 32; ++i) {
            aMask = a & (1 << i);
            bMask = b & (1 << i);

            sum |= aMask ^ bMask ^ carry;

            if ((aMask & bMask) ||
                (aMask & carry) ||
                (bMask & carry)) {
                    carry = (1 << (i+1));
                } else {
                    carry = 0;
                }
        }

        return sum;
    }
};
