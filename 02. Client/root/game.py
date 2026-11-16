# GameWindow icinde ara:
			self.bkoku.Show()
	if app.ENABLE_RANKING:

# Altina ekle:
		def OpenRanking(self):
			if self.interface:
				self.interface.OpenRanking()


# GameWindow icinde ara:
			if self.interface:
				self.interface.CostumeShopResult(int(result))

# Altina ekle:
	if app.ENABLE_GLOBAL_RANKING:
		# LoadRankData <page> <time> <category> <seconds to reset> <own value> <rows | empty>
		def __LoadRankData(self, page, timeIdx, category, secondsToReset, ownValue, rankCmd):
			if self.interface:
				self.interface.LoadRankData(int(page), int(timeIdx), int(category), int(secondsToReset), long(ownValue), rankCmd)

		def RankingClearData(self):
			if self.interface:
				self.interface.RankingClearData()

		def RankingAddRank(self, position, level, points, name, realPosition):
			if self.interface:
				self.interface.RankingAddRank(position, level, points, name, realPosition)

		def RankingRefresh(self):
			if self.interface:
				self.interface.RankingRefresh()


# GameWindow.__BuildKeyDict icinde ara:
		onClickKeyDict[app.DIK_LSHIFT] = lambda: self.__SetQuickSlotMode()
		if app.ENABLE_RANKING:

# Altina ekle:
			onPressKeyDict[app.DIK_J] = lambda : self.interface.OpenRanking()


# GameWindow.__ServerCommand_Build icinde ara:
			serverCommandList["MokokoRewardsEnd"] = self.__MokokoRewardsEnd
			serverCommandList["MokokoRewardResult"] = self.__MokokoRewardResult

# Altina ekle:
		if app.ENABLE_GLOBAL_RANKING:
			serverCommandList["LoadRankData"] = self.__LoadRankData

