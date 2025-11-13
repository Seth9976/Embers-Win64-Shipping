// 函数: sub_141d36b60
// 地址: 0x141d36b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x10)

if (lpCriticalSection == 0)
    return 

DeleteCriticalSection(lpCriticalSection)
return j_sub_140a74f90(lpCriticalSection) __tailcall
