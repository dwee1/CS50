#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{

    int nletters = 0;
    int letters = 0;
    int c = 0;
    string alpha;
    string key = argv[1];
    int error = 0;
    int dupe = 0;

    if (argv[1] == '\0')
    {
        printf("Please key in a key.\n");
        error = 1;
        return (1);
    }

    for (c = 0; c < strlen(key); c++)
    {
        if (isalpha(key[c]))
        {
            letters++;
        }
        else
        {
            nletters++;
        }
    }

//  printf("%i\n", letters);
//  printf("%i\n", nletters);
//  printf("%s\n", key);

    if (letters != 26 && nletters == 0)
    {
        printf("Key must contain 26 characters.\n");
        error = 1;
        return (1);
    }

    else if (nletters > 0)
    {
        printf("Key must only contain alphabetic characters.\n");
        error = 1;
        return (1);
    }

    if (error == 0)
    {
        for (int z = 0; z < 26; z++)
        {
            if (islower(key[z]))
            {
                key[z] = key[z];
            }

            else
            {
                key[z] = tolower(key[z]);
            }
        }


        for (int a = 0; a < 26; a++)
        {
            for (int b = a + 1; b < 26; b++)
                if (key[a] == key[b])
                {
                    dupe++;
                }
        }
    }


//  printf("test1:%s\n",key);

    if (dupe != 0)
    {
        error = 1;
        printf("Key must not contain repeated letters.\n");
        return (1);

    }

    if (error == 0)
    {
        string input = get_string("plaintext:");

        string output = 0;


        for (int q1 = 0; q1 < strlen(input); q1++)
        {

//          printf("%s\n",input);

            if (isalpha(input[q1]))
            {
                if (isupper(input[q1]))
                {
                    for (int t = 0; t < 26; t++)
                    {
                        key[t] = toupper(key[t]);
                    }

                    input[q1] = key[(int)input[q1] - 65];
                }

                if (islower(input[q1]))
                {
                    for (int t1 = 0; t1 < 26; t1++)
                    {
                        key[t1] = tolower(key[t1]);
                    }

                    input[q1] = key[(int)input[q1] - 97];
                }
            }

            else
            {
                input[q1] = input[q1];
            }

        }

        printf("ciphertext:%s\n", input);
    }



}
