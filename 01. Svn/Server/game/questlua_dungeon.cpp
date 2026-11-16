// Dosyanin uygun bir yerine ekle:
#ifdef ENABLE_GLOBAL_RANKING
#include "global_ranking.h"
#endif


// Ara:
				if (pChar->IsPC())
				{
					pChar->SetQuestFlag(flag.c_str(), pChar->GetQuestFlag(flag.c_str()) + value);

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
					GlobalRanking_Add(pChar, GLOBAL_RANK_DUNGEON);
#endif

