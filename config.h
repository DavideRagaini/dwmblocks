//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/* {"",	"music",	0,	11}, */
	/* {"",	"pacpackages",	0,	8}, */
	/* {"",	"dwm_spotify",	0,	5}, */
	{"",	"dwm_mpc",	300,	11},
	{"",	"news",		0,	6},
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"torrent",	20,	7}, */
	{"",	"cpu",		3,	13},
	{"",	"memory",	10,	14},
	/* {"",	"moonphase",	18000,	5}, */
	/* {"",	"weather",	18000,	5}, */
	/* {"",	"mailbox",	180,	12}, */
	{"",	"nettraf",	1,	16},
	{"",	"videoOutput",	3600,	4},
	/* {"",	"dwm_tlp",	3600,	4}, */
	{"",	"sink",		3600,	12},
	{"",	"volume",	60,	10},
	/* {"",	"battery | tr \'\n\' \' \'",	5,	3}, */
	/* {"",	"internet",	5,	4}, */
	{"",	"uptime | awk '{print $3}' | sed 's/,//g'",	60,	1},
	{"",	"clock",	1,	1},
	/* {"",	"help-icon",	0,	15}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
