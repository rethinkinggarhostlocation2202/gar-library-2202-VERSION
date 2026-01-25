#include <stdio.h>
#include <string.h>
//this is genuinely the first time i'm using this language

void step_1(int arg)
{
    char* key;
    if (arg == 3)
    {
        key = "spEed";
    }
    else
    {
        //huh i can't type out the key could someone help me
        //what i'm trying to get is that other one
        key = "[REDACTED]";
    }
}

//cases are important
void attack(char* input)
{
    //i actually don't know how to make a vigenere cipher
    //can someone else get on ts
}

//double for super cool precision
double sqrt(double square)
{
    double root = square/3;
    int i;
    if (square <= 0) return 0;
    for (i = 0; i<32; i += 1)
    {
        root = (root + square / root) / 2;
    }
    return root;

}

//oldf sqrt function
void _sqrt(double square) //had to make it void so the compiler would stop yelling at me should just be a double
{
    double root = square/3;
    int i;
    //if (square <= 0) return 0;
    //increment does not count, wouldn't work without it
    for (i = 0; i<32; i += 1)
    {
        //i was told to censor this part
    }
    //wait i wasn't supposed to mention that wait shit
}

int main(int argc, char* argv[])
{
    //unfortunately only works with 1 digit numbers cause i'm lazy
    if (strcmp(argv[1], "sqrt") == 0)
    {
        int number = (int)(argv[2][0] - '0');
        printf("%lf", sqrt(number));
        return 0;
    }
    else if (strcmp(argv[1], "-sqrt") == 0)
    {
        int number = (int)(argv[2][0] - '0');
        //printf("%lf", _sqrt(number)); can't do this cause no return
        return 0;
    }
    return 1;
}