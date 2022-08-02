#include <stdio>
#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main (viod)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.if :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
