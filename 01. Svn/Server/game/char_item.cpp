// Dosyanin uygun bir yerine ekle:
#ifdef ENABLE_GLOBAL_RANKING
#include "global_ranking.h"
#endif


// void NotifyRefineSuccess(LPCHARACTER ch, LPITEM item, const char* way) icinde:
// Ara:
	if (NULL != ch && item != NULL)
	{
		ch->ChatPacket(CHAT_TYPE_COMMAND, "RefineSuceeded");

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
		GlobalRanking_Add(ch, GLOBAL_RANK_REFINE_SUCCESS);
#endif


// void NotifyRefineFail(LPCHARACTER ch, LPITEM item, const char* way, int success = 0) icinde:
// Ara:
	if (NULL != ch && NULL != item)
	{
		ch->ChatPacket(CHAT_TYPE_COMMAND, "RefineFailed");

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
		GlobalRanking_Add(ch, GLOBAL_RANK_REFINE_FAIL);
#endif


// bool CHARACTER::UseItemEx(LPITEM item, TItemPos DestCell) icinde:
// Ara:
											item2->ChangeAttrCostumeHair();
										else
											item2->ChangeAttrCostume();

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
										GlobalRanking_Add(this, GLOBAL_RANK_SWITCH_COSTUME);
#endif


// bool CHARACTER::UseItemEx(LPITEM item, TItemPos DestCell) icinde:
// Ara:
										}
										item2->ChangeAttribute();
									}

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
									GlobalRanking_Add(this, GLOBAL_RANK_SWITCH_ITEM);
#endif

