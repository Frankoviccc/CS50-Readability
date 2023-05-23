#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    string text = get_string("Text: ");
// Store the number of words in variable
    int words = count_words(text);
// Store the letters in variable
    int letters = count_letters(text);
// Store the sentences in variable
    int sentences = count_sentences(text);
// Use floats because of decimal numbers
// Because i'm dividing integer numbers they are being truncated
// With (float) i perform integer dividing
    float l = (float)letters / words * 100;
    float s = (float)sentences / words * 100;
// Use the Coleman-Lia algorithm to store the index number
    float index = ((0.0588 * l) - (0.296 * s) - 15.8);
// Round the index number to closest integer
    int result = round(index);

// Decide which grade the text is depending on the index number

    if (result < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (result == 1)
    {
        printf("Grade 1\n");
    }
    else if (result == 2)
    {
        printf("Grade 2\n");
    }
    else if (result == 3)
    {
        printf("Grade 3\n");
    }
    else if (result == 4)
    {
        printf("Grade 4\n");
    }
    else if (result == 5)
    {
        printf("Grade 5\n");
    }
    else if (result == 6)
    {
        printf("Grade 6\n");
    }
    else if (result == 7)
    {
        printf("Grade 7\n");
    }
    else if (result == 8)
    {
        printf("Grade 8\n");
    }
    else if (result == 9)
    {
        printf("Grade 9\n");
    }
    else if (result == 10)
    {
        printf("Grade 10\n");
    }
    else if (result == 11)
    {
        printf("Grade 11\n");
    }
    else if (result == 12)
    {
        printf("Grade 12\n");
    }
    else if (result == 13)
    {
        printf("Grade 13\n");
    }
    else if (result == 14)
    {
        printf("Grade 14\n");
    }
    else if (result == 15)
    {
        printf("Grade 15\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
}


// Create function that counts all that alphabetics
int count_letters(string text)
{
    int lettersCounter = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            lettersCounter++;
        }
    }
    return lettersCounter;
}
// Create function that counts all the words.
int count_words(string text)
{
    int wordsCounter = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            wordsCounter++;
        }
    }
    return wordsCounter;
}
// Create function that counts all the sentences.
int count_sentences(string text)
{
    int sentencesCounter = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] == ('.')) || (text[i] == ('!')) || (text[i] == ('?')))
        {
            sentencesCounter++;
        }
    }
    return sentencesCounter;
}