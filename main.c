#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

static char *your[] = {
	"yo",
	"ur",
	"your",
	"you're",
	"joe",
	"thy",
	"ye",
};

static char *I[] = {
	"I"
};

static char *action1[] = {
	"fucked",
	"had sexual intercourse with",
	"had sex with",
	"sexed",
	"raped",
	"was making love with",
	"was making out with",
	"was putting my 11 inch cock in",
	"impregnated",
	"came in"
};

static char *when[] = {
	"last night",
	"today",
	"in the 70s",
	"month ago",
	"last year",
	"when your dad was out",
	"yesterday",
	"when your dad went for milk",
	"when we were young",
	"before you were conceived",
	"last time we met"
};

static char *where[] = {
	"in a motel",
	"in a brothel",
	"in her bed",
	"in my bed",
	"in her room",
	"in a pool",
	"at the airport",
	"in the car",
	"in her ass",
	"in her throat",
	"in her cunt",
	"in her pussy",
	"in her anus"
};

static char *adjective[] = {
	"fat",
	"old",
	"ugly",
	"stupid",
	"retarded",
	"idiotic",
	"disgusting",
	"dumb"
};

static char *mom[] = {
	"mom",
	"momma",
	"mother",
	"mum",
	"mommy",
	"mummy"
};

static char *is[] = {
	"is"
};

static char *has[] = {
	"has"
};

static char *so[] = {
	"so",
	"so utterly",
	"so fucking",
	"so extremely"
};

static char *noun[] = {
	"a bitch",
	"a whore",
	"a monkey",
	"a cunt",
	"a tramp",
	"a moron",
	"a dick sucker",
	"a cum dumpster",
	"a cum chugger",
	"a pussy"
};

static char *noun2[] = {
	"HIV",
	"syphilis",
	"blue waffle",
	"a loose pussy",
	"HPV",
	"HSV",
	"gonorrhea",
	"saggy boobs",
	"no brain",
	"loose asshole"
};

static char *she[] = {
	"she"
};

static char *action2[] = {
	"gave head to a caveman",
	"had sex with a dinosaur",
	"crashed her car",
	"left you when you were 10",
	"had sex with a random stranger",
	"dropped you on the ground, when you were an infant",
	"forgot to use protection, when she made you",
	"fucked her dad",
	"conceived you",
	"gave birth to you",
	"mollested you",
	"fucked a dog",
	"choked on my cum"
};

struct table
{
	char **item;
	short len;
};

typedef struct table TABLE;
#define len(x) sizeof(x) / sizeof(char *)


TABLE list1[] = {
	{your, len(your)},
	{mom, len(mom)},
	{so, len(so)},
	{adjective, len(adjective)},
	{she, len(she)},
	{action2, len(action2)}
};
TABLE list2[] = {
	{I, len(I)},
	{action1, len(action1)},
	{your, len(your)},
	{mom, len(mom)},
	{where, len(where)},
	{when, len(when)}
};
TABLE list3[] = {
	{your, len(your)},
	{adjective, len(adjective)},
	{mom, len(mom)},
	{is, len(is)},
	{noun, len(noun)}
};
TABLE list4[] = {
	{your, len(your)},
	{adjective, len(adjective)},
	{mom, len(mom)},
	{has, len(has)},
	{noun2, len(noun2)}
};

TABLE *lists[] = {
	list1,
	list2,
	list3,
	list4
};

short l[] = {
	6,
	6,
	5,
	5
};

int main(int argc, char **argv)
{
	int getpid();

	srand(getpid() + time(NULL));

	short r = rand() % 4;

	for (int i = 0; i < l[r]; i++)
	{
		char *str = lists[r][i].item[rand() % lists[r][i].len]; 
		char *word = malloc(strlen(str));
		strcpy(word, str);

		if (i == 0)
			word[0] = toupper(word[0]);

		if (i < l[r] - 1)
			printf("%s ", word);
		else
			printf("%s.\n", word);

		free(word);
	}

	return 0;
}
