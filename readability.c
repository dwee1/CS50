#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    float punct = 0;
    int test = 0;
    int c = 0;
    float nblank = 0;
    float blank = 0;
    string text = get_string("Text:\n");

    for (c = 0; c < strlen(text); c++)
    {
        if (isalpha(text[c]))
        {
            nblank++;
        }

        if (isspace(text[c]))
        {
            if (c > 0)
            {
                if (isspace(text[c - 1]) || isspace(text[c + 1]))
                {
                }
                else
                {
                    blank++;
                }

            }
        }
        if (text[c] == '.' || text[c] == '?' || text[c] == '!')
        {
            punct++;
        }
    }


//  printf("%f letter(s)\n",nblank);
//  printf("%lu letter\n",strlen(text));
//  printf("%f word(s)\n",blank+1);
//  printf("%f sentence\n",punct);

    float s = (punct / (blank + 1)) * 100;
    float L = (nblank / (blank + 1)) * 100;
    float index = (0.0588 * L) - (0.296 * s) - 15.8;

//  printf("%f\n", index);
//  printf("%f\n", s);
//  printf("%f\n", L);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        int final = round(index);
        printf("Grade %i\n", final);
    }
}
