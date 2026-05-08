class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = ((n & 0xFFFF0000) >> 16) | ((n & 0x0000FFFF) << 16);
        result = ((result & 0xFF00FF00) >> 8) | ((result & 0x00FF00FF) << 8);
        result = ((result & 0xF0F0F0F0) >> 4) | ((result & 0x0F0F0F0F) << 4);
        result = ((result & 0xCCCCCCCC) >> 2) | ((result & 0x33333333) << 2);
        result = ((result & 0xAAAAAAAA) >> 1) | ((result & 0x55555555) << 1);

        return result;

    }
};
