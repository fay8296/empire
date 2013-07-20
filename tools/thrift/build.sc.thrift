include "struct.thrift"

namespace java com.empire.msg.auto.sc


struct SCSystemInfoMsg {
	1: string infoId
	2: list<string> params
	3: struct.ErrorType error
}

struct SCStartBuildMsg{
	1: string id
	2: i32 leftTime
}

struct SCStartProduceMsg{
	1: string id
	2: i32 leftTime
	3: string produceTmplId
	4: i16 produceCount
}

struct SCStartResearchMsg{
	1: string id
	2: string researchTmplId
	3: i32 leftTime
}

struct SCStartUpdateMsg{
	1: string id
	2: i32 leftTime
}

struct SCResearchInfoMsg {
	1: string researchTmplId
	2: i32 leftTime
}
