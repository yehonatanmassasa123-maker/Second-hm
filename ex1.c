/******************
Name:
ID:
Assignment: 1
*******************/

#include <stdio.h>

/*
 * REMINDER:
 * All numeric variables must be unsigned int (32 bits).
 * Allowed: declarations, assignments, parentheses, scanf, printf,
 * bitwise operators (&, |, ^, ~, <<, >>), addition (+), subtraction (-).
 * No control flow, comparisons, logical operators (&&, ||), multiplication, division, modulo, arrays, string processing, recursion, or additional functions are allowed.
 * Keep the supplied messages unchanged.
 * Add input, calculations, and result output at the marked locations.
 * Replace braces in result descriptions with the calculated values.
 * Each result line must end with a newline.
 */

int main()
{
    // Task 1
    /* Read n and i in decimal; 0 <= i <= 31. Position 0 is the LSB.
     * Print the bit at position i.
     * Result format: The bit in position {i} of number {n} is: {bit}
     */
    printf("What bit:\n");
    printf("Please enter a number:\n");
    /* TODO: Read input value 1 for this task. */
    printf("Please enter a position:\n");
    /* TODO: Read input value 2 for this task. */
    /* TODO: Calculate and print the requested result(s). */

    // Task 2
    /* Read n in decimal. Print 1 if n is even, or 0 if n is odd.
     * Zero is even.
     * Result format: Is even: {result}
     */
    printf("\nEven - Odd:\n");
    printf("Please enter a number:\n");
    /* TODO: Read input value 1 for this task. */
    /* TODO: Calculate and print the requested result(s). */

    // Task 3
    /* Read n, i, and j in decimal; 0 <= i, j <= 31.
     * Swap bits i and j, leaving all other bits unchanged.
     * Handle equal bit values and identical positions.
     * Print the result in unsigned decimal.
     * Result format: Number after swapping bits: {result}
     */
    printf("\nSwap bits:\n");
    printf("Please enter a number:\n");
    /* TODO: Read input value 1 for this task. */
    printf("Please enter the first position:\n");
    /* TODO: Read input value 2 for this task. */
    printf("Please enter the second position:\n");
    /* TODO: Read input value 3 for this task. */
    /* TODO: Calculate and print the requested result(s). */

    // Task 4
    /* Read n in decimal. Print its 32-bit one's and two's complements
     * in unsigned decimal on separate lines. Handle zero as well.
     * Result formats, in order:
     * One's complement: {ones}
     * Two's complement: {twos}
     */
    printf("\nComplements:\n");
    printf("Please enter a number:\n");
    /* TODO: Read input value 1 for this task. */
    /* TODO: Calculate and print the requested result(s). */

    // Task 5
    /* Read n and k in decimal; 0 <= k <= 31.
     * Rotate all 32 bits of n left by k positions, wrapping bits
     * leaving the left end around to the right end.
     * For k = 0, the result must equal n.
     * Never shift by 32 or more, even in an intermediate expression.
     * Print the result in unsigned decimal.
     * Result format: Number after rotation: {result}
     */
    printf("\nRotate left:\n");
    printf("Please enter a number:\n");
    /* TODO: Read input value 1 for this task. */
    printf("Please enter the number of positions:\n");
    /* TODO: Read input value 2 for this task. */
    /* TODO: Calculate and print the requested result(s). */

    // Task 6
    /* Read a and b in octal. Both may use the full unsigned int range.
     * Take even-position bits from a and odd-position bits from b.
     * Keep each selected bit at its original position.
     * Print exactly eight uppercase hexadecimal digits, including
     * leading zeros, without the 0x prefix.
     * Result format: Merged number in hexadecimal: {result}
     */
    printf("\nMerge bits:\n");
    printf("Please enter the first number (octal):\n");
    /* TODO: Read input value 1 for this task. */
    printf("Please enter the second number (octal):\n");
    /* TODO: Read input value 2 for this task. */
    /* TODO: Calculate and print the requested result(s). */

    // Task 7
    /* Read n in decimal. Print 1 if n is a power of two, or 0 otherwise.
     * One is a power of two; zero is not.
     * Do not check powers individually or use a lookup table.
     * Result format: Is power of two: {result}
     */
    printf("\nPower of two:\n");
    printf("Please enter a number:\n");
    /* TODO: Read input value 1 for this task. */
    /* TODO: Calculate and print the requested result(s). */

    printf("Bye!\n");

    return 0;
}
