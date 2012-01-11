#include <ncurses.h>
#include <locale.h>

#include "beam.h"

const int LINES_NUMBER = 11;
const int BEAM_NUMBER = 20*2;

char *s[] = {
	"　　　　　 　 ＿＿＿＿＿＿_",
	" 　　　　　 ／ ＼　　　　／＼　ｷﾘｯ",
	"　　　　　／　（ー） 　（ー）＼",
	"　　　　／　　  ⌒（__人__）⌒ 　＼",
	"　　　  |　　　　　|　　|　　　 |",
	"　　　　 ＼　　　　 `ー´　　  ／",
	"　　　　ノ　　　　　　　　　　 ＼",
	"　 ／´　　　　　　　　　　　　 　ヽ",
	"　|　　　　ｌ　　　　　　　 |　　　＼",
	"　ヽ　　　 -一'〜〜〜'ー--､-一'''''''ー-､",
	"　　ヽ ＿＿＿＿(⌒)(⌒)⌒)　)　　(⌒＿(⌒)⌒)⌒))"
};


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");

	initscr();
	noecho();
	leaveok(stdscr, TRUE);
	scrollok(stdscr, FALSE);

	int i;
	for(i=0; i<LINES_NUMBER; i++) {
		printw("%s\n", s[i]);
	}
	refresh();
	usleep(2000000);

	move(1, 31);	
	addstr("Vimビーム!!");
	refresh();
	usleep(1000000);

	for(i=21; i<21+BEAM_NUMBER; i+=2) {
		move(4, i);	
		addstr("＝＞");
		refresh();
		usleep(100000);
	}

	usleep(1000000);
	endwin();
}
