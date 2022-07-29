#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - multiplies two positive numbers
 *   * @argc: arguments count
 *    * @argv: array of arguments (pointers)
 *     *
 *      * Return: 0 on Success, 98 upon failure
 *       * Author: Felix Obianozie
 *        */
int main(int argc, char **argv)
{
		int i, j, k, l, ndex, len_1, len_2, total_len;
			char *num1, *num2, *mul, *sum;

				ndex = 0;
					k = 0;

						/*Check that only two arguments are passed to program*/
						if (argc != 3)
								{
											printf("Error\n");
													exit(98);
														}

							/*Get length of each argument passed*/
							len_1 = str_len(argv[1]);
								len_2 = str_len(argv[2]);
									total_len = len_1 + len_2;

										/*Reserve memory space using malloc*/
										num1 = malloc(sizeof(char) * len_1);
											num2 = malloc(sizeof(char) * len_2);
												if (len_1 >= len_2)
															mul = malloc(sizeof(char) * (len_1 + 1));
													else
																mul = malloc(sizeof(char) * (len_2 + 1));
														sum = malloc(sizeof(char) * total_len);

															/*Verify that malloc did not fail*/
															if (num1 == NULL || num2 == NULL || mul == NULL || sum == NULL)
																	{
																				printf("Malloc failed!\n");
																						free(num1);
																						        	free(num2);
																								        	free(mul);
																										        	free(sum);
																														exit(98);
																															}
