class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_temp = sorted(s)
        t_temp = sorted(t)
        if s_temp == t_temp: return True
        return False
        