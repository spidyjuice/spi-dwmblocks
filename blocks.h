//blkacfksa
//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"NET:", "print-net2",					60,		2},

	{"VOL:", "print-vol2",					0,		1},

	{"RAM:", "free -h | awk '/^Mem/ { print $3 }' | sed s/Mi//g",	20,		2},

	{"BAT:", "print-bat2",					15,		2},

};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
