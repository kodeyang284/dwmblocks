//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "db-mem",	      10,		6},
	{"", "db-disk",		    50,		7},
	{"", "db-cputmp",			10,		5},
	{"", "db-battery",		30,		2},
	{"", "db-internet",		5,		3},
	{"", "db-volum",			1,		4},
	{"", "db-clock",			30,		1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
