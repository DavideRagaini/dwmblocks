static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"music",	0,	11},
	{"",	"cat $XDG_CACHE_HOME/stbspt",		0,	12},
	/* {"",	"news",		0,	6}, */
	{"",	"cpu",		5,	0},
	{"",	"memory",	10,	0},
	/* {"",	"weather",	18000,	5}, */
	/* {"",	"torrent",	20,	7}, */
	/* {"",	"nettraf",	5,	16}, */
	/* {"",	"rfkill | awk '/hci0/ {print $4}' | sed 's/unblocked// ; s/blocked//'",	0,	12}, */
	{"",	"internet",	10,	16},
	{"",	"volume",	0,	10},
	{"",	"backlight acpi_video0",	0,	6},
	{"",	"temp",	25,	0},
	{"ﯓ",	"uptime | awk '{print $3}' | sed 's/,//g'",	60,	0},
	{"",	"sudo tlp-stat -s | awk '/Mode/ {print $3}' | sed 's/AC// ; s/battery//'",	0,	4},
	{"",	"s-date",	0,	0},
	{"",	"clock",	1,	0},
};

static char delim = '|';
