
��SDKĿǰ����2���ӿں���������ʹ�òο�sample.c

/*******************************************************************************************************/
1. int sdk_init(VPSS_GRP Grp, VPSS_CHN Chn, HI_U32 u32Width, HI_U32 u32Height, HI_U32 u32PixelFormat)
	
����jvt-sdk�ĳ�ʼ�����ɹ�����0��ʧ�ܷ���-1��
// Grp��VPSS GROUP �š�
// Chn��VPSS Chn �š�
// u32Width��Ŀ��ͼ���ȡ�
// u32Height��Ŀ��ͼ��߶ȡ�
// u32PixelFormat��Ŀ��ͼ�����ظ�ʽ��

/*******************************************************************************************************/
2. int GetOneFrame( VPSS_GRP Grp, VPSS_CHN Chn, char* pBuf, int *pLen )

���ڻ�ȡһ֡��Ƶ��YUV���ݡ��ɹ�����0��ʧ�ܷ���-1��
// Grp��VPSS GROUP �š�
// Chn��VPSS Chn �š�
// pBuf��YUV���ݻ��档
// pLen��YUV���ݳ��ȡ�