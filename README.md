# Python TabError Fixer
If you have ever had to deal with: `TabError: inconsistent use of tabs and spaces in indentation`
<br>in your python program, it must be frustrating. Having to go through each line and make consistent indentation is a pain.
<br>I created Python TabError Fixer, a CLI tool, to solve this problem.
<br>Python TabError Fixer works by converting all of your tabs to spaces, with the user inputting how many spaces per tab to insert.
# Installation
Copy the repository into your directory and compile `fixer.c`.
<br>In GCC, this is `gcc -o fixer fixer.c`.
<br>In Clang, this is `clang -o fixer fixer.c`.
# Usage
Python TabError Fixer takes in two arguments: file path and spaces per tab.
<br>
For example, if my file is named `test.py` and I am using four spaces per tab, I would execute `./fixer test.py 4`.
<br>My old file would stay the same, but a new file, `correctedIndenting.py` would be created with all tabs converted to spaces.
<br>Now, I can just run `python3 correctedIndenting.py` and get no TabErrors!