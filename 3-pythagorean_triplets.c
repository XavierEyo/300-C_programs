#include <stdio.h>
#include <math.h>

/**
* program to print pythagorean triplets less than 1000
* Any three digits x, y, z are pythagorean triplets if (x < y < z) && (x^2 + y^2 = z^2)
* example: 3, 4, 5 are pythagorean triplets because 3 < 4 < 5 && 3^2 + 4^2 = 5^2
* @num: the first digit representing x
* @j: second digit representing y
* @k: third digit representing z;
* @pnum: square of num
* @pj: square of j
*/

main()
{
	int num, j, k, pnum, pj;
	double psum;
	
	for(num = 1; num <= 1000; num++) /* An outermost loop to generate digits from 1 through 50 */
	{
		for (j = 1; j <= 1000; j++) /* second (inner) loop to generate digits from 1 through 50 */
		{
			pnum = pow(num, 2); /* square first digit */
			pj = pow(j, 2); /* square second digit */
			if (num < j) /* if first digit is less than second digit */
			{
				psum = pnum + pj; /* add the square of the first digit to that of the second */
				for (k = 0; k <= 1000; k++) /* an (innermost) loop to generate digits from 1 through 50 */
				{
					if (k == sqrt(psum) && k <= 1000) /* if any iteration(k) of this loop encounters a number thats same as psum and k is less than 50 */
						printf("%d %d %d\n", num, j, k); /* print the three digits the in the loop that satisfies the pythagorean triplet rule */
				} /* End of innermost loop */
			}
		} /* End of inner loop */
	} /* End of outermost loop */
}

