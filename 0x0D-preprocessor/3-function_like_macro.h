#ifndef ABS_h
#define ABS_h
/**
 * Header File: 3-function_like_macro.h
 * Description: Header File that define a function-like macro ABS(x)
 * that computes the absolute value of a number.
 * @x: input
 */
#define ABS(x) ((x) < (0) ? ((x) * -1) : (x))
#endif
