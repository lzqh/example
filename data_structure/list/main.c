#include "list_base.h"

int main()
{
	list_t *m_list =NULL;
	int ret;
	m_list = create_list(m_list);
	header_t m_header;
	m_header.sender =1;
	m_header.receiver =2;
	if(m_list ==NULL)
	{
		printf("m_list  ==null\n");
		return 0;
	}
	ret = add_to_list(m_list, m_header);
	ret = add_to_list(m_list, m_header);
	ret = add_to_list(m_list, m_header);
	ret = add_to_list(m_list, m_header);
	if(ret ==-1)
	{
		printf("add faild \n");
		exit(-1);
	}
	print_list(m_list);
	return 0;
}
