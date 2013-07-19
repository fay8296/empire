namespace java com.empire.msg.auto.cs


struct CSBuyItemMsg{
	1: byte partIndex
	2: byte inputIndex
	/** 0-male 1-female 2-together */
	3: byte inputType
	/** 1-miss 2-good 3-great 4-perfect */
	4: byte keyResult
	/** 0-no 1-yes */
	5: byte calMarkTag
	
}
