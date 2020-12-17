static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"music",	0,	11},
	{"",	"spt",	0,	12},
	/* {"",	"cat $XDG_CACHE_HOME/stbspt",		0,	12}, */
	/* {"",	"news",		0,	6}, */
	{"",	"cpu",		5,	0},//5
	/* {"",	"cpubars",		5,	0},//5 */
	{"",	"memory",	25,	0},//5
	/* {"",	"weather",	18000,	5}, */
	/* {"",	"torrent",	20,	7}, */
	/* {"",	"nettraf",	1,	0},//16 */
	{"",	"internet",	60,	16},//16
	/* {"",	"UI 10",	10,	0},//16 */
	{"",	"[ \"$(rfkill | awk '/hci0/ {print $4}')\" = \"unblocked\" ] && printf \"\"",	0,	12},
	{"",	"volume-p",	0,	10},
	{"",	"xbacklight | cut -d. -f1",	0,	6},
	{"",	"[ \"$(sudo tlp-stat -s | awk '/Mode/ {print $3}')\" = \"AC\" ] && printf \"\"",	0,	6},
	{"",	"battery",	60,	12},
	{"",	"sensors | awk '/Package id 0:/ {print $4}' | sed 's/+//; s/.0//'",	60,	12},
	{"ﯓ",	"uptime | awk '{print $3}' ",	60,	0},
	{"",	"s-date",	0,	0},
	{"",	"clock",	60,	0},
};

static char delim = '|';
