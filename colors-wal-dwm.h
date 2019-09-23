static const char norm_fg[] = "#aeebf1";
static const char norm_bg[] = "#0b071d";
static const char norm_border[] = "#79a4a8";

static const char sel_fg[] = "#aeebf1";
static const char sel_bg[] = "#285594";
static const char sel_border[] = "#aeebf1";

static const char urg_fg[] = "#aeebf1";
static const char urg_bg[] = "#68258F";
static const char urg_border[] = "#68258F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
