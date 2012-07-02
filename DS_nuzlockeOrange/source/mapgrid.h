#ifndef MAPGRID_H
#define MAPGRID_H

#include <nds.h>

typedef u16 gridEntry;

//------------------------------------------------------------------
// Values and macros used to handle bit-values in a mapGridEntry
//------------------------------------------------------------------
#define GRIDENTRY_MASK_ORIENTATION	0x003
#define GRIDENTRY_MASK_COLIDABLE	(1 << 2)
#define GRIDENTRY_MASK_ISWATER		(1 << 3)
#define GRIDENTRY_MASK_ISGRASS		(1 << 4)
#define GRIDENTRY_MASK_CUTTABLE		(1 << 5)
#define GRIDENTRY_MASK_STRENGTHABLE	(1 << 6)
#define GRIDENTRY_MASK_JUMPWALL		(1 << 7)
#define GRIDENTRY_MASK_DOORCODE		0xFF00



class mapGrid
{
public:

private:
	gridEntry curMap[4096];
};

#endif
