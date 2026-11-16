# Ara:
if app.ENABLE_RANKING:
	import uiranking

# Altina ekle:
if app.ENABLE_GLOBAL_RANKING:
	import uiglobalranking


# Interface.__init__ icinde ara:
			self.wndImproveGemTicket = None
		if app.ENABLE_RANKING:

# Altina ekle:
			self.wndRanking = None


# Interface.__MakeWindows icinde ara:
			self.wndBattlePass = uibattlepass.BattlePassWindow()
			self.wndBattlePass.BindInterface(self)

# Altina ekle:
		if app.ENABLE_GLOBAL_RANKING:
			self.wndRanking = uiglobalranking.RankingWindow()

		elif app.ENABLE_RANKING:
			self.wndRanking = uiranking.RankingWindow()


# Interface.Close icinde ara:
				self.wndCubeRenewal.Close()
		if app.ENABLE_RANKING:

# Altina ekle:
			if self.wndRanking:
				self.wndRanking.Destroy()
				del self.wndRanking


# Interface.ShowAllWindows icinde ara:
			if self.wnd12ziReward:
				self.wnd12ziReward.Show()

# Altina ekle:
		if app.ENABLE_RANKING and not app.ENABLE_GLOBAL_RANKING:
			if self.wndRanking:
				self.wndRanking.Open()


# Interface.HideAllWindows icinde ara:
				self.wndHuntingReward.Hide()
		if app.ENABLE_RANKING:

# Altina ekle:
			if self.wndRanking:
				self.wndRanking.Close()


# Interface.__HideWindows icinde ara:
				hideWindows += self.wndBattlePass,
		if app.ENABLE_RANKING:

# Altina ekle:
			if self.wndRanking:
				hideWindows += self.wndRanking,


# Interface icinde ara:
		pass
	if app.ENABLE_RANKING:

# Altina ekle:
		def OpenRanking(self):
			if self.wndRanking:
				self.wndRanking.Open()


# Interface icinde ara:
			if self.wndCostumeShop:
				self.wndCostumeShop.OnResult(result)

# Altina ekle:
	if app.ENABLE_GLOBAL_RANKING:
		def LoadRankData(self, page, timeIdx, category, secondsToReset, ownValue, rankCmd):
			if self.wndRanking:
				self.wndRanking.LoadRankData(page, timeIdx, category, secondsToReset, ownValue, rankCmd)

		def RankingClearData(self):
			if self.wndRanking:
				self.wndRanking.ClearData()

		def RankingAddRank(self, position, level, points, name, realPosition):
			if self.wndRanking:
				self.wndRanking.AddRank(position, name, points, level, realPosition)

		def RankingRefresh(self):
			if self.wndRanking:
				self.wndRanking.RefreshList()
				self.wndRanking.OnScroll()

