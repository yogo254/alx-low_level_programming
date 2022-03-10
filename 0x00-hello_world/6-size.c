#include <stdio.h>
int main()
{

    char charType;
    int intType;
    long int longIntType;
    long long longLongType;
    float floatType;

    printf("Size of a char:  %zu byte(s)\n", sizeof(charType));
    printf("Size of an int:  %zu byte(s)\n", sizeof(intType));
    printf("Size of a long int:  %zu byte(s)\n", sizeof(longIntType));
    printf("Size of a long long int:  %zu byte(s)\n", sizeof(longLongType));
    printf("Size of a float:  %zu byte(s)\n", sizeof(floatType));

    return 0;
}
