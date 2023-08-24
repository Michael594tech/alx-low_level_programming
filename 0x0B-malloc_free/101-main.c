#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * split_words - Helper function to split a string into words
 * @str: The input string
 *
 * Return: An array of pointers to strings (words)
 */
char **split_words(char *str)
{
    // Count the number of words in the input string
    int count = 0;
    char *temp = str;
    while (*temp)
    {
        while (*temp && *temp == ' ')
            temp++;
        if (*temp)
            count++;
        while (*temp && *temp != ' ')
            temp++;
    }

    // Allocate memory for an array of string pointers
    char **words = (char **)malloc((count + 1) * sizeof(char *));
    if (words == NULL)
    {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    // Initialize the array of string pointers
    int i;
    for (i = 0; i <= count; i++)
    {
        words[i] = NULL;
    }

    // Extract words from the input string
    char *word = strtok(str, " ");
    i = 0;
    while (word != NULL)
    {
        words[i] = strdup(word);
        if (words[i] == NULL)
        {
            perror("Memory allocation error");
            exit(EXIT_FAILURE);
        }
        word = strtok(NULL, " ");
        i++;
    }

    return words;
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: An array of pointers to strings (words)
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    return split_words(str);
}
