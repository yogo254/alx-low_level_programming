#include "main.h"

/**
 * get_endianness - check for  endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness()
{
	int num = 1;
    
    char* ptr = (char*)&num;

    if (*ptr == 1) {
        return 1; // little-endian
    } else {
        return 0; // big-endian
    }
}
