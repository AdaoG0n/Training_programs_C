#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// Cores ANSI
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

// Function to test ft_isalpha
void test_ft_isalpha() {
    char c;
    printf(GREEN "Enter a character to test ft_isalpha: " RESET);
    scanf(" %c", &c);
    printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
    printf("This function checks if the character is alphabetic.\n");
}

// Function to test ft_isdigit
void test_ft_isdigit() {
    char c;
    printf(GREEN "Enter a character to test ft_isdigit: " RESET);
    scanf(" %c", &c);
    printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
    printf("This function checks if the character is a digit.\n");
}

// Function to test ft_isalnum
void test_ft_isalnum() {
    char c;
    printf(GREEN "Enter a character to test ft_isalnum: " RESET);
    scanf(" %c", &c);
    printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
    printf("This function checks if the character is alphanumeric.\n");
}

// Function to test ft_isascii
void test_ft_isascii() {
    int n;
    printf(GREEN "Enter a number to test ft_isascii: " RESET);
    scanf("%d", &n);
    printf("ft_isascii(%d) = %d\n", n, ft_isascii(n));
    printf("This function checks if the value is a valid ASCII character.\n");
}

// Function to test ft_isprint
void test_ft_isprint() {
    char c;
    printf(GREEN "Enter a character to test ft_isprint: " RESET);
    scanf(" %c", &c);
    printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
    printf("This function checks if the character is printable.\n");
}

// Function to test ft_strlen
void test_ft_strlen() {
    char str[100];
    printf(GREEN "Enter a string to test ft_strlen: " RESET);
    scanf(" %[^\n]", str);
    printf("ft_strlen(\"%s\") = %zu\n", str, ft_strlen(str));
    printf("This function returns the length of a string.\n");
}

// Function to test ft_memset
void test_ft_memset() {
    char str[50];
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", str);
    char c;
    printf(GREEN "Enter a character to fill: " RESET);
    scanf(" %c", &c);
    size_t n;
    printf(GREEN "Enter the number of bytes to fill: " RESET);
    scanf("%zu", &n);
    printf("Before memset: %s\n", str);
    ft_memset(str, c, n);
    printf("After memset: %s\n", str);
    printf("This function fills the first n bytes of the memory area with the constant byte c.\n");
}

// Function to test ft_bzero
void test_ft_bzero() {
    char str[50];
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", str);
    size_t n;
    printf(GREEN "Enter the number of bytes to zero: " RESET);
    scanf("%zu", &n);
    printf("Before bzero: %s\n", str);
    ft_bzero(str, n);
    printf("After bzero: %s\n", str);
    printf("This function zeroes the n bytes of memory starting from the pointed location.\n");
}

// Function to test ft_memcpy
void test_ft_memcpy() {
    char src[50], dest[50];
    printf(GREEN "Enter the source string: " RESET);
    scanf(" %[^\n]", src);
    size_t n;
    printf(GREEN "Enter the number of bytes to copy: " RESET);
    scanf("%zu", &n);
    ft_memcpy(dest, src, n);
    printf("Copied string: %s\n", dest);
    printf("This function copies n bytes from the source memory area to the destination.\n");
}

// Function to test ft_memmove
void test_ft_memmove() {
    char str[50];
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", str);
    size_t n;
    printf(GREEN "Enter the number of bytes to move: " RESET);
    scanf("%zu", &n);
    char *ptr = str + 5;
    ft_memmove(ptr, str, n);
    printf("After memmove: %s\n", str);
    printf("This function copies n bytes from one memory area to another, allowing for overlap.\n");
}

// Function to test ft_strlcpy
void test_ft_strlcpy() {
    char src[100], dest[100];
    size_t size;
    printf(GREEN "Enter a source string: " RESET);
    scanf(" %[^\n]", src);
    printf(GREEN "Enter the destination buffer size: " RESET);
    scanf("%zu", &size);
    size_t result = ft_strlcpy(dest, src, size);
    printf("ft_strlcpy result: %zu\n", result);
    printf("Destination string: %s\n", dest);
    printf("This function copies up to size-1 characters from src to dest, null-terminating the result.\n");
}

// Function to test ft_strlcat
void test_ft_strlcat() {
    char dest[100] = "Initial string: ";
    char src[100];
    size_t size;
    printf(GREEN "Enter a string to concatenate: " RESET);
    scanf(" %[^\n]", src);
    printf(GREEN "Enter the destination buffer size: " RESET);
    scanf("%zu", &size);
    size_t result = ft_strlcat(dest, src, size);
    printf("ft_strlcat result: %zu\n", result);
    printf("Resulting string: %s\n", dest);
    printf("This function concatenates src to dest, ensuring null-termination.\n");
}

// Function to test ft_toupper
void test_ft_toupper() {
    char c;
    printf(GREEN "Enter a character to test ft_toupper: " RESET);
    scanf(" %c", &c);
    printf("ft_toupper('%c') = '%c'\n", c, ft_toupper(c));
    printf("This function converts a lowercase letter to uppercase.\n");
}

// Function to test ft_tolower
void test_ft_tolower() {
    char c;
    printf(GREEN "Enter a character to test ft_tolower: " RESET);
    scanf(" %c", &c);
    printf("ft_tolower('%c') = '%c'\n", c, ft_tolower(c));
    printf("This function converts an uppercase letter to lowercase.\n");
}

// Function to test ft_strchr
void test_ft_strchr() {
    char str[100];
    char c;
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", str);
    printf(GREEN "Enter a character to search for: " RESET);
    scanf(" %c", &c);
    char *result = ft_strchr(str, c);
    if (result)
        printf("Character '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found.\n", c);
    printf("This function locates the first occurrence of c in the string.\n");
}

void test_ft_strrchr() {
    char str[100];
    int c;
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", str);
    printf(GREEN "Enter a character to find: " RESET);
    scanf(" %c", (char*)&c);
    char *result = ft_strrchr(str, c);
    if (result)
        printf("Character '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found in the string.\n", c);
    printf("This function locates the last occurrence of c in the string pointed to by s.\n");
}

void test_ft_strncmp() {
    char s1[100], s2[100];
    size_t n;
    printf(GREEN "Enter the first string: " RESET);
    scanf(" %[^\n]", s1);
    printf(GREEN "Enter the second string: " RESET);
    scanf(" %[^\n]", s2);
    printf(GREEN "Enter the number of characters to compare: " RESET);
    scanf("%zu", &n);
    int result = ft_strncmp(s1, s2, n);
    printf("ft_strncmp result: %d\n", result);
    printf("This function compares not more than n characters of the strings s1 and s2.\n");
}

void test_ft_memchr() {
    char str[100];
    int c;
    size_t n;
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", str);
    printf(GREEN "Enter a character to find: " RESET);
    scanf(" %c", (char*)&c);
    printf(GREEN "Enter the number of bytes to search: " RESET);
    scanf("%zu", &n);

    void *result = ft_memchr(str, c, n);

    if (result)
        printf(GREEN "Character '%c' found at position: %ld\n" RESET, c, (char*)result - str);
    else
        printf(RED "Character '%c' not found in the first %zu bytes.\n" RESET, c, n);

    printf("This function scans the initial n bytes of the memory area pointed to by s for the first instance of c.\n");
}

void test_ft_memcmp() {
    char s1[100], s2[100];
    size_t n;
    printf(GREEN "Enter the first string: " RESET);
    scanf(" %[^\n]", s1);
    printf(GREEN "Enter the second string: " RESET);
    scanf(" %[^\n]", s2);
    printf(GREEN "Enter the number of bytes to compare: " RESET);
    scanf("%zu", &n);

    int result = ft_memcmp(s1, s2, n);
    printf("ft_memcmp result: %d\n", result);
    printf("This function compares the first n bytes of the memory areas s1 and s2.\n");
}

void test_ft_strnstr() {
    char haystack[100], needle[100];
    size_t len;
    printf(GREEN "Enter the haystack string: " RESET);
    scanf(" %[^\n]", haystack);
    printf(GREEN "Enter the needle string: " RESET);
    scanf(" %[^\n]", needle);
    printf(GREEN "Enter the length to search within: " RESET);
    scanf("%zu", &len);

    char *result = ft_strnstr(haystack, needle, len);

    if (result)
        printf(GREEN "Substring found at position: %ld\n" RESET, result - haystack);
    else
        printf(RED "Substring not found within the first %zu characters.\n" RESET, len);

    printf("This function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.\n");
}

void test_ft_atoi() {
    char str[100];
    printf(GREEN "Enter a string to convert to integer: " RESET);
    scanf(" %[^\n]", str);

    int result = ft_atoi(str);
    printf("ft_atoi result: %d\n", result);
    printf("This function converts the initial portion of the string pointed to by str to int representation.\n");
}

void test_ft_calloc() {
    size_t count, size;
    printf(GREEN "Enter count: " RESET);
    scanf("%zu", &count);
    printf(GREEN "Enter size: " RESET);
    scanf("%zu", &size);

    void *ptr = ft_calloc(count, size);

    if (ptr) {
        printf(GREEN "Memory successfully allocated and initialized to zero.\n" RESET);
        free(ptr);
    } else {
        printf(RED "Memory allocation failed.\n" RESET);
    }

    printf("This function allocates memory for an array of count elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero.\n");
}

void test_ft_strdup() {
    char str[100];
    printf(GREEN "Enter a string to duplicate: " RESET);
    scanf(" %[^\n]", str);

    char *dup = ft_strdup(str);

    if (dup) {
        printf("Original string: %s\n", str);
        printf("Duplicated string: %s\n", dup);
        free(dup);
    } else {
        printf(RED "Memory allocation failed.\n" RESET);
    }

    printf("This function returns a pointer to a new string which is a duplicate of the string s.\n");
}

void test_ft_substr() {
    char str[100];
    unsigned int start;
    size_t len;
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", str);
    printf(GREEN "Enter the starting index: " RESET);
    scanf("%u", &start);
    printf(GREEN "Enter the length of substring: " RESET);
    scanf("%zu", &len);

    char *result = ft_substr(str, start, len);

    if (result) {
        printf("Substring: %s\n", result);
        free(result);
    } else {
        printf(RED "Substring creation failed.\n" RESET);
    }

    printf("This function returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.\n");
}

void test_ft_strjoin() {
    char s1[100], s2[100];
    printf(GREEN "Enter the first string: " RESET);
    scanf(" %[^\n]", s1);
    printf(GREEN "Enter the second string: " RESET);
    scanf(" %[^\n]", s2);

    char *result = ft_strjoin(s1, s2);

    if (result) {
        printf("Joined string: %s\n", result);
        free(result);
    } else {
        printf(RED "String join failed.\n" RESET);
    }

    printf("This function returns a new string, which is the result of the concatenation of 's1' and 's2'.\n");
}

void test_ft_strtrim() {
    char s1[100], set[100];
    printf(GREEN "Enter the string to trim: " RESET);
    scanf(" %[^\n]", s1);
    printf(GREEN "Enter the set of characters to trim: " RESET);
    scanf(" %[^\n]", set);

    char *result = ft_strtrim(s1, set);

    if (result) {
        printf("Trimmed string: %s\n", result);
        free(result);
    } else {
        printf(RED "String trim failed.\n" RESET);
    }

    printf("This function returns a copy of 's1' with the characters specified in 'set' removed from the beginning and end of the string.\n");
}

void test_ft_split() {
    char s[100];
    char c;
    printf(GREEN "Enter a string to split: " RESET);
    scanf(" %[^\n]", s);
    printf(GREEN "Enter the delimiter character: " RESET);
    scanf(" %c", &c);

    char **result = ft_split(s, c);

    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Split string %d: %s\n", i, result[i]);
            free(result[i]);
        }
        free(result);
    } else {
        printf(RED "String split failed.\n" RESET);
    }

    printf("This function returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter.\n");
}

void test_ft_itoa() {
    int n;
    printf(GREEN "Enter an integer to convert to string: " RESET);
    scanf("%d", &n);
    char *result = ft_itoa(n);
    if (result) {
        printf(GREEN "Converted string: %s\n" RESET, result);
        free(result);
    } else {
        printf(RED "Integer to string conversion failed.\n" RESET);
    }
    printf("This function returns a string representing the integer received as an argument.\n");
}

char test_strmapi_func(unsigned int i, char c) {
    return (char)(c + i);
}

void test_ft_strmapi() {
    char s[100];
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", s);
    char *result = ft_strmapi(s, test_strmapi_func);
    if (result) {
        printf(GREEN "Result: %s\n" RESET, result);
        free(result);
    } else {
        printf(RED "String mapping failed.\n" RESET);
    }
    printf("This function applies the function 'f' to each character of the string 's', passing its index as the first argument to create a new string resulting from successive applications of 'f'.\n");
}

void test_striteri_func(unsigned int i, char *c) {
    *c = *c + i;
}

void test_ft_striteri() {
    char s[100];
    printf(GREEN "Enter a string: " RESET);
    scanf(" %[^\n]", s);
    ft_striteri(s, &test_striteri_func);
    printf(GREEN "Result: %s\n" RESET, s);
    printf("This function applies the function 'f' on each character of the string passed as an argument, passing its index as the first argument. Each character is passed by address to 'f' to be modified if necessary.\n");
}

void test_ft_putchar_fd() {
    char c;
    printf(GREEN "Enter a character to output: " RESET);
    scanf(" %c", &c);
    printf(GREEN "Character output to stdout:\n" RESET);
    ft_putchar_fd(c, 1);
    printf("\n");
    printf("This function outputs the character 'c' to the given file descriptor.\n");
}

void test_ft_putstr_fd() {
    char s[100];
    printf(GREEN "Enter a string to output: " RESET);
    scanf(" %[^\n]", s);
    printf(GREEN "String output to stdout:\n" RESET);
    ft_putstr_fd(s, 1);
    printf("\n");
    printf("This function outputs the string 's' to the given file descriptor.\n");
}

void test_ft_putendl_fd() {
    char s[100];
    printf(GREEN "Enter a string to output: " RESET);
    scanf(" %[^\n]", s);
    printf(GREEN "String output to stdout with newline:\n" RESET);
    ft_putendl_fd(s, 1);
    printf("This function outputs the string 's' to the given file descriptor, followed by a newline.\n");
}

void test_ft_putnbr_fd() {
    int n;
    printf(GREEN "Enter an integer to output: " RESET);
    scanf("%d", &n);
    printf(GREEN "Integer output to stdout:\n" RESET);
    ft_putnbr_fd(n, 1);
    printf("\n");
    printf("This function outputs the integer 'n' to the given file descriptor.\n");
}

void print_menu() {
    printf("\n" YELLOW "Libft Tester" RESET "\n");
    printf("+----+------------+----+------------+----+--------------+\n");
    printf("| ID | Function   | ID | Function   | ID | Function     |\n");
    printf("+----+------------+----+------------+----+--------------+\n");
    printf("| 1  | " CYAN "ft_isalpha" RESET " | 13 | " CYAN "ft_toupper" RESET " | 25 | " CYAN "ft_strjoin" RESET "   |\n");
    printf("| 2  | " CYAN "ft_isdigit" RESET " | 14 | " CYAN "ft_tolower" RESET " | 26 | " CYAN "ft_strtrim" RESET "   |\n");
    printf("| 3  | " CYAN "ft_isalnum" RESET " | 15 | " CYAN "ft_strchr" RESET "  | 27 | " CYAN "ft_split" RESET "     |\n");
    printf("| 4  | " CYAN "ft_isascii" RESET " | 16 | " CYAN "ft_strrchr" RESET " | 28 | " CYAN "ft_itoa" RESET "      |\n");
    printf("| 5  | " CYAN "ft_isprint" RESET " | 17 | " CYAN "ft_strncmp" RESET " | 29 | " CYAN "ft_strmapi" RESET "   |\n");
    printf("| 6  | " CYAN "ft_strlen" RESET "  | 18 | " CYAN "ft_memchr" RESET "  | 30 | " CYAN "ft_striteri" RESET "  |\n");
    printf("| 7  | " CYAN "ft_memset" RESET "  | 19 | " CYAN "ft_memcmp" RESET "  | 31 | " CYAN "ft_putchar_fd" RESET "|\n");
    printf("| 8  | " CYAN "ft_bzero" RESET "   | 20 | " CYAN "ft_strnstr" RESET " | 32 | " CYAN "ft_putstr_fd" RESET " |\n");
    printf("| 9  | " CYAN "ft_memcpy" RESET "  | 21 | " CYAN "ft_atoi" RESET "    | 33 | " CYAN "ft_putendl_fd" RESET "|\n");
    printf("| 10 | " CYAN "ft_memmove" RESET " | 22 | " CYAN "ft_calloc" RESET "  | 34 | " CYAN "ft_putnbr_fd" RESET " |\n");
    printf("| 11 | " CYAN "ft_strlcpy" RESET " | 23 | " CYAN "ft_strdup" RESET "  |    |              |\n");
    printf("| 12 | " CYAN "ft_strlcat" RESET " | 24 | " CYAN "ft_substr" RESET "  | 0  | Exit         |\n");
    printf("+----+------------+----+------------+----+--------------+\n");
}

void run_test(void (*test_function)()) {
    char choice;
    do {
        test_function();
        printf("\n" CYAN "Do you want to test this function again? (y/n): " RESET);
        scanf(" %c", &choice);
        getchar(); // Clear the input buffer
    } while (choice == 'y' || choice == 'Y');
}

int main() {
    int choice;

    do {
        print_menu();
        scanf("%d", &choice);
        getchar(); // Clear the input buffer

        switch(choice) {
            case 1: run_test(test_ft_isalpha); break;
            case 2: run_test(test_ft_isdigit); break;
            case 3: run_test(test_ft_isalnum); break;
            case 4: run_test(test_ft_isascii); break;
            case 5: run_test(test_ft_isprint); break;
            case 6: run_test(test_ft_strlen); break;
            case 7: run_test(test_ft_memset); break;
            case 8: run_test(test_ft_bzero); break;
            case 9: run_test(test_ft_memcpy); break;
            case 10: run_test(test_ft_memmove); break;
            case 11: run_test(test_ft_strlcpy); break;
            case 12: run_test(test_ft_strlcat); break;
            case 13: run_test(test_ft_toupper); break;
            case 14: run_test(test_ft_tolower); break;
            case 15: run_test(test_ft_strchr); break;
            case 16: run_test(test_ft_strrchr); break;
            case 17: run_test(test_ft_strncmp); break;
            case 18: run_test(test_ft_memchr); break;
            case 19: run_test(test_ft_memcmp); break;
            case 20: run_test(test_ft_strnstr); break;
            case 21: run_test(test_ft_atoi); break;
            case 22: run_test(test_ft_calloc); break;
            case 23: run_test(test_ft_strdup); break;
            case 24: run_test(test_ft_substr); break;
            case 25: run_test(test_ft_strjoin); break;
            case 26: run_test(test_ft_strtrim); break;
            case 27: run_test(test_ft_split); break;
            case 28: run_test(test_ft_itoa); break;
            case 29: run_test(test_ft_strmapi); break;
            case 30: run_test(test_ft_striteri); break;
            case 31: run_test(test_ft_putchar_fd); break;
            case 32: run_test(test_ft_putstr_fd); break;
            case 33: run_test(test_ft_putendl_fd); break;
            case 34: run_test(test_ft_putnbr_fd); break;
            case 0:
                printf(RED "Exiting...\n" RESET);
                break; 
            default:
                printf(RED "Invalid option. Please try again.\n" RESET);
        }

    } while (choice != 0);

    return 0;
}


