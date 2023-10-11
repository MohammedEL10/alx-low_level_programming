#include <stdio.h>

/** main -  prints the name of the file it was compiled from 
 *
 * Return:everything work ok
 */

int main(void)
{
	printf("%s\n", __BASEBASE_FILE__);
	return (0);
}
