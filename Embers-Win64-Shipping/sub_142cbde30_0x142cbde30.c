// 函数: sub_142cbde30
// 地址: 0x142cbde30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = data_143dbae98

if (lpCriticalSection == 0)
    return 

lpCriticalSection->__offset(0x70).d = 0
int64_t rcx_1 = lpCriticalSection->__offset(0x68).q

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1408ffc10(&lpCriticalSection[1])
DeleteCriticalSection(lpCriticalSection)
data_143dbae98 = 0
