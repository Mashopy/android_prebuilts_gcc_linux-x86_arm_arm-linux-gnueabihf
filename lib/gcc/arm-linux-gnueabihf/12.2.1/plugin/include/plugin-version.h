#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   12
#define GCCPLUGIN_VERSION_MINOR   2
#define GCCPLUGIN_VERSION_PATCHLEVEL   1
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "12.2.1";
static char datestamp[] = "20230401";
static char devphase[] = "";
static char revision[] = "[releases/gcc-12 revision 3a8829e0e1b523a36477f5c8a49d72caaae3b9d7]";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
