// Dosyanin uygun bir yerine ekle:
#ifdef ENABLE_GLOBAL_RANKING
#include "global_ranking.h"
#endif


// void Take(fishing_event_info* info, LPCHARACTER ch) icinde:
// Ara:
						ch->SetQuestFlag("stats.fish", ch->GetQuestFlag("stats.fish") + 1);

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
						if (item->GetType() == ITEM_FISH)
							GlobalRanking_Add(ch, GLOBAL_RANK_FISH);
#endif

