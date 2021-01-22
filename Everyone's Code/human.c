#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include "human.h"
#include "str.h"

struct Human Create_Human(char* name, int age, int gender)
{
	struct Human human;

	human.age = age;
	human.gender = gender;
	copy_str(human.name, name);
	return human;
}

int Print_Human(struct Human* human)
{
	printf("Name : %s \n", human->name);
	printf("age : %d \n", human->age);
	if (human->gender == MALE)
	{
		printf("Gender : Male \n");
	}
	else if (human->gender == FEMALE)
	{
		printf("Gender : Female \n");
	}
	return 0;
}