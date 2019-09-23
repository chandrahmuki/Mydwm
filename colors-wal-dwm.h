static const char norm_fg[] = "#9ebbcf";
static const char norm_bg[] = "#161603";
static const char norm_border[] = "#6e8290";

static const char sel_fg[] = "#9ebbcf";
static const char sel_bg[] = "#0779B0";
static const char sel_border[] = "#9ebbcf";

static const char urg_fg[] = "#9ebbcf";
static const char urg_bg[] = "#306F99";
static const char urg_border[] = "#306F99";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
