//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/    /*Command*/                 /*Update Interval*/     /*Update Signal*/
	{"",        "status-netraf",            1,                      0},
	{"",        "status-wifi",              5,                      0},
	{"",        "status-vol",               0,                      1},
	{"",        "status-batstat",           1,                      0},
	{"",        "status-bat",               5,                      0},
	{"",        "status-fulldate",          60,                     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

