namespace java com.empire.msg.auto.cs


struct CSStartBuildMsg{
	1: i16 pos
	2: string tmplId
}


struct CSStartProduceMsg{
	1: string id
	2: string produceTmplId
	3: i16 produceCount
}

struct CSStartResearchMsg{
	1: string id
	2: string researchTmplId
}

struct CSStartUpdateMsg{
	1: string id
}

struct CSQueryResearchInfoMsg{
	
}


