namespace java com.empire.msg.auto

enum MallItemState{
	//卖
	SELL
	//非卖
	UNSELL	
}

struct MallItem{
	1: i32 itemId
	2: byte category
	3: string itemName
	/** 永久物品的货币数量*/
	4: double currency
	/** 是否限数量*/
	5: bool isLimit
	/** 上架时间*/
	6: i64 openTime
	7: list<string> names
	//多语言提示ID
	8: i16 langId
	9:MallItemState state
	10: map<byte, byte> changedPoses
}
