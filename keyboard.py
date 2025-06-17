def brokenKeyboard(words, char):
    word_lst = words.split()
    count = 0
    
    for word in word_lst:
        if char not in word:
            count += 1
            
    return count
    
words = 'I wanna go to that place'

broken_key = 'n'

valid = brokenKeyboard(words, broken_key)

print(valid)