import re


sentence = input('ENTER: \n')
words = list(filter(lambda word: not any(char.isdigit()
										for char in word), sentence.split()))


input = eval(input()) #if possible find a safer thing than this code or learn form it??

sentence = input.split() #split the sentence into individual words

if sentence in words: #see if one of the words in the sentence is the word we want
    
   #add code to enter to change '•' to a return key \n
   
print(words) # Output: ['Hello', 'Geeks', 'for', 'geeks']
