class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        result = int(dividend/divisor)
        if result > 2147483647:
            return 2147483647
        if result < -2147483648:
            return -2147483648
        
        return result
