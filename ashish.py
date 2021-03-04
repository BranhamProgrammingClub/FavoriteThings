items = ["eating", "sleeping", "typing", "biking"]

def printfavs(lim):
	if (lim == len(items)):
		return
	else:
		print("- " + items[lim])
		printfavs(lim + 1)
