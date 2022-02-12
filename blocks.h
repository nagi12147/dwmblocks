//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon      Command     Update Interval	    Update Signal*/
	{ " ",      "wifi",      30,                4},
	{ "",       "netraf",    1,                 4},
	{ "",       "volume",    0,                 10},
	{ "",       "battery",   5,                 2},
	{ "",       "datetime",  30,                1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

