namespace java com.empire.msg.auto

enum MallItemState{
	//��
	SELL
	//����
	UNSELL	
}

struct MallItem{
	1: i32 itemId
	2: byte category
	3: string itemName
	/** ������Ʒ�Ļ�������*/
	4: double currency
	/** �Ƿ�������*/
	5: bool isLimit
	/** �ϼ�ʱ��*/
	6: i64 openTime
	7: list<string> names
	//��������ʾID
	8: i16 langId
	9:MallItemState state
	10: map<byte, byte> changedPoses
}
