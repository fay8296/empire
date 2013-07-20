namespace java com.empire.msg.auto.cs


struct CSQueryServerListMsg{
	
}

struct CSQuickLoginMsg{
	1: byte deviceType
	2: string deviceId	
}

struct CSPasswdLoginMsg{
	1: byte deviceType
	2: string accountName
	3: string passwd
	4: string deviceId	
}

struct CSBindAccountMsg{
	1: string accountName
	2: string passwd	
}