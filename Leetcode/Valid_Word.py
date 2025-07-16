# https://leetcode.com/problems/valid-word/description/
def isValid(word: str) -> bool:

    vowels = "aeiou"
    specialChars = "@#$"
    consonants = "bcdfghjklmnpqrstvwxyz"
    word = word.lower()

    if len(word) < 3:
        return False
    
    for ch in word:
        if ch in specialChars:
            return False
    
    for i, ch in enumerate(word):
        if ch in vowels:
            break
        if i == len(word)-1:
            return False
    
    for i, ch in enumerate(word):
        if ch in consonants:
            break
        if i == len(word)-1:
            return False
    
    return True

    

print(isValid("@$@"))