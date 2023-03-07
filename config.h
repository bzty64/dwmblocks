static const Block blocks[] = {
    {"   ", "dwm-cpu", 10, 18},
	{"  ", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g", 5, 0},
	{"  ", "dwm-temp", 1, 0},
	{"   ", "date '+%a %d %b'", 5, 0},
	{"  ", "date +%R", 60, 1},
	{ ""  , "dwm-bat", 5, 3},
	{ ""  , "dwm-vol", 1, 10},
	{ ""  , "dwm-mic", 1, 10},
//	{ ""  , "dwm-net", 5, 4},
};

static char delim[] = " |";
static unsigned int delimLen = 5;
