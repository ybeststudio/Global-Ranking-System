// Ara:
{
	Mokoko_Command(ch, "reload", argument);
}

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
#include "global_ranking.h"
ACMD(do_global_rank)
{
	GlobalRanking_Command(ch, argument);
}
#endif

