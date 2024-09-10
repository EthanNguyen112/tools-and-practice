#Information must be copied from a document, NOT a powerpoint slide
#Enter copied information and will return a formated copy

#ToDo: Make the function into a while loop
#ToDo: Turn the code into a function

# Initialize list of unwanted characters
bad_chars = ['•']
#repeatflag = 0
# Initialize test string
#while (repeatflag==0):
test_string = 0
test_string = input('Enter: \n') 

    # Print original string
print('\n')

    # Use map and lambda function to remove bullet points and replaced with return for formating
filtered_string = ''.join(map(lambda x: x if x not in bad_chars else '\n', test_string))

    # Print filtered string
print(filtered_string)
print('\n')
    #repeatflag = input( '0 for continue, 1 for exit \n')

