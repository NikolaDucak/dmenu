/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* postion of the menu on y axis */
static enum BarType bartype = CENTER_BAR;

/* menu width as percentage of monitor width (menu will be centered on x axis) */
static float widthfact = 0.5;

/* width in pixels for menu window border */
static int borderwidth = 1;


/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
