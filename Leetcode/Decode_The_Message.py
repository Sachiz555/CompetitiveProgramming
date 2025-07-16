# https://leetcode.com/problems/decode-the-message/description/
# Leetcode 2325
def decodeMessage(key: str, message: str) -> str:
    alphabetOccurence = [0]*26
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encryptedAlphabet = []
    for ch in key:
        alphabetPos = ord(ch) - 97
        if ch == ' ':
            continue
        if alphabetOccurence[alphabetPos] == 1:
            continue
        
        encryptedAlphabet.append(ch)
        alphabetOccurence[alphabetPos] = 1

    decrypted = ""
    for ch in message:
        if ch == ' ':
            decrypted += ' '
        else:
            decrypted += alphabet[encryptedAlphabet.index(ch)]

    print(decrypted)

key = ""
message = ""
decodeMessage(key, message)