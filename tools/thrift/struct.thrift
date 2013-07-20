namespace java com.empire.msg.auto

enum MallItemState{
	//Âô
	SELL
	//·ÇÂô
	UNSELL	
}

enum BuildState{
	BUILDING
	PRODUCING
	UPDATING
	RESEARCHING
}

enum MessageType {
}

enum ErrorType {
}

enum BattlePropertyType {
}

struct ServerInfo{
	1: string ip
	2: string ports
	3: string name
}

struct BuildInfo {
        1: string id
	2: string tmplId
	3: i16 lvl
	4: i16 pos
	5: BuildState state
	6: i16 leftTime
	7: string produceId
}

struct BoatInfo {
	1: string id
	2: string tmplId
	3: byte pos
	4: i16 count
}