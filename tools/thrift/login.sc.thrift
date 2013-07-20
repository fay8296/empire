include "struct.thrift"

namespace java com.empire.msg.auto.sc

struct SCServerListMsg{
	1: i16 id
	2: list<struct.ServerInfo> serverInfos
}

struct SCPlayerInfoMsg{
	1: byte sex
	2: i16 lvl
	3: i16 reputationLvl
	4: i16 govLvl
	5: i16 jwLvl
	6: i32 exp
	7: i64 diamond
	8: i64 gold
	9: i64 iron
	10: i64 tree
	11: i64 oil
	12: i64 magicStone
	13: list<struct.BuildInfo> buildInfos
	14: list<struct.BoatInfo> boatInfos
	15: byte vipLvl
	16: string name
}

