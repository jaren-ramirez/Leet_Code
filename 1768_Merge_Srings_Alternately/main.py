class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        """
        Since this problem relys on the minimum length of a word we can solve this by precomputing the minimum.
        """

        min_size = min(len(word1),len(word2))
        new_word = []
        for i in range(min_size):
            new_word.append(word1[i])
            new_word.append(word2[i])    
        if len(word1) > len(word2):
            new_word.append(word1[min_size:])
        if len(word1) < len(word2):
            new_word.append(word2[min_size:])
        return "".join(new_word)
