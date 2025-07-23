# File-Handling-Program-CodSoft

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SHASHWAT SHUBHAM

*INTERN ID*: CT04DG3340

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH



**About File Handling Program in C**

# Task 1 - File Handling Program in C

## Task Objective

Create a C program that demonstrates *basic file handling operations*:
- Creating a file
- Writing to a file (overwrite)
- Appending data to a file
- Reading and displaying file contents

---

## What the Program Does

This C program provides a *menu-based interface* allowing the user to:
1. *Create* a new file or clear the contents if it already exists.
2. *Write* new data to the file (overwrites existing content).
3. *Append* additional data to the end of the file.
4. *Read* and display the contents of the file.

The user inputs the *file name* and then selects operations by choosing from the menu. The program takes input data until a `~` character is entered on a new line (used to mark the end of input).

---

## How the Program Works

- *File Creation* uses `"w"` mode to create or reset a file.
- *Writing* also uses `"w"` mode to overwrite any existing content.
- *Appendin* uses `"a"` mode to add new content at the end.
- *Reading* uses `"r"` mode and displays contents character-by-character.

The program makes use of:
- `fopen()`, `fputs()`, `fgetc()`, and `fclose()` for file operations
- `fgets()` to read multiline input from the user
- Proper *error handling* and *comments* to improve readability

---
