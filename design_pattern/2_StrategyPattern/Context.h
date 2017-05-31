#ifndef __CONTEXT_H__
#define __CONTEXT_H__
class Strategy;
/**
*������� Strategy ģʽ�Ĺؼ���Ҳ�� Strategy ģʽ�� Template ģʽ�ĸ����������ڡ�
*Strategy ͨ������ϡ���ί�У���ʽʵ���㷨��ʵ�֣����칹���� Template ģʽ���ȡ���Ǽ̳еķ�ʽ
*������ģʽ������Ҳ�Ǽ̳к��������ʵ�ֽӿ����õķ�ʽ������
*/

class Context
{
	public:
		Context(Strategy *stg);
		~Context();
		
		void DoAction();
	private:
		Strategy *_stg;
		
};
#endif