//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"",	"news",		0,	6}, */
	/* {"",	"torrent",	20,	7}, */
	{"",	"music",	300,	11},
	{"",	"cpu",		5,	12},
	{"",	"memory",	10,	12},
	/* {"",	"weather",	18000,	5}, */
	/* {"",	"nettraf",	5,	16}, */
	{"",	"videoOutput",	0,	12},
	{"",	"sink",		0,	12},
	{"",	"volume",	0,	10},
	{"",	"uptime | awk '{print $3}' | sed 's/,//g'",	60,	1},
	{"",	"clock",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
