# MiniMap.__LoadWindow icinde ara:
		if app.ENABLE_IKASHOP_RENEWAL:
			self.shopSearchButton.SetEvent(ui.__mem_func__(self.OpenShopSearch))

# Altina ekle:
		self.btnRank.SetEvent(ui.__mem_func__(self.OpenRanking))


# MiniMap icinde ara:
		self.GetMapsGlobal()
	if app.ENABLE_RANKING:

# Altina ekle:
		def OpenRanking(self):
			if self.interface:
				self.interface.OpenRanking()

		def RankingClearData(self):
			if self.interface:
				self.interface.RankingClearData()

		def RankingAddRank(self, position, level, points, name, realPosition):
			if self.interface:
				self.interface.RankingAddRank(position, level, points, name, realPosition)

		def RankingRefresh(self):
			if self.interface:
				self.interface.RankingRefresh()

