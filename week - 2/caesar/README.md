#Problem Set 2
## readability.c
### Algorithm For readability
```
Step 1: Start
Step 2: Prompt user for text
Step 3: Iterate over each character of the giventext:
        If given text is a alphabet A-Z or a-z,
            increment the letter
            letter ++
        If giventext has any space
            place space ASCII 32 = ' '
        If giventext contain . ! or ?
            sentence ++
Step 4: Putting all you get from loop together in formula (index = 0.0588 * L - 0.296 * S - 15.8)
Step 5: If index > 16
            display Grade 16+
        else If index < 1
            display Before Grade 1
        else
        display Grade
Step 6: Print newline
```
### Algorithm For Cash
```
Step 1: Start
Step 2: Check that program was run with one command-line argument
Step 3: Iterate over the provided argument to make sure all characters are digits
Step 4: Convert that command-line argument from a string to an int
Step 5: Prompt user for plaintext
Step 6: Iterate over each character of the plaintext:
        If it is an uppercase letter, rotate it, preserving case, then print out the rotated character
        If it is a lowercase letter, rotate it, preserving case, then print out the rotated character
        If it is neither, print out the character as is
Step 7: Print a newline
```
