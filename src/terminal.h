#ifndef TERMINAL_H
#define TERMINAL_H

struct editorConfig {
  int curPosX, curPosY;
  int screenRows;
  int screenCols;
  struct termios origTermInfo;
};

extern struct editorConfig E;

void die (const char * errorMsg);
void enableCanonicalMode ();
void disableCanonicalMode ();
char editorReadKey ();
int getCursorPosition(int *rows, int *cols);
int getWindowSize(int *rows, int *cols);
#endif
