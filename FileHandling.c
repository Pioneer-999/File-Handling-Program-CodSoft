#include <stdio.h>
#include <stdlib.h>

void createFile(const char *filename);
void writeFile(const char *filename);
void appendFile(const char *filename);
void readFile(const char *filename);

int main() {
    int choice;
    char filename[100];

    printf("Enter file name (with extension, e.g., file.txt): ");
    scanf("%s", filename);

    while (1) {
        printf("\n--- File Handling Menu ---\n");
        printf("1. Create File\n");
        printf("2. Write to File (overwrite)\n");
        printf("3. Append to File\n");
        printf("4. Read File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from buffer

        switch (choice) {
            case 1:
                createFile(filename);
                break;
            case 2:
                writeFile(filename);
                break;
            case 3:
                appendFile(filename);
                break;
            case 4:
                readFile(filename);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

// Function to create a file (or clear it if already exists)
void createFile(const char *filename) {
    FILE *fp = fopen(filename, "w");  // "w" mode creates or clears the file
    if (fp == NULL) {
        perror("Error creating file");
        return;
    }
    printf("File '%s' created successfully.\n", filename);
    fclose(fp);
}

// Function to write (overwrite) data to the file
void writeFile(const char *filename) {
    FILE *fp = fopen(filename, "w");  // "w" mode overwrites the file
    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char data[1000];
    printf("Enter data to write (end input with '~' on a new line):\n");

    // Read input line by line until '~' is entered
    while (fgets(data, sizeof(data), stdin)) {
        if (data[0] == '~')
            break;
        fputs(data, fp);  // Write to file
    }

    printf("Data written to '%s' successfully.\n", filename);
    fclose(fp);
}

// Function to append data to the file
void appendFile(const char *filename) {
    FILE *fp = fopen(filename, "a");  // "a" mode appends data to the file
    if (fp == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char data[1000];
    printf("Enter data to append (end input with '~' on a new line):\n");

    // Read input line by line until '~' is entered
    while (fgets(data, sizeof(data), stdin)) {
        if (data[0] == '~')
            break;
        fputs(data, fp);  // Append to file
    }

    printf("Data appended to '%s' successfully.\n", filename);
    fclose(fp);
}

// Function to read and display contents of the file
void readFile(const char *filename) {
    FILE *fp = fopen(filename, "r");  // "r" mode reads from the file
    if (fp == NULL) {
        perror("Error reading file");
        return;
    }

    char ch;
    printf("\n--- File Contents (%s) ---\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // Print each character to console
    }
    printf("\n--- End of File ---\n");

    fclose(fp);
}
