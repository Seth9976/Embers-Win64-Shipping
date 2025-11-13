// 函数: sub_142c59d30
// 地址: 0x142c59d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1 + 0x18, 0, 0x60)
*(arg1 + 0x70) = arg1
*(arg1 + 0x30) = arg3
*(arg1 + 0x40) = *arg4
*(arg1 + 0x50) = arg4[1]
*(arg1 + 0x60) = arg4[2]
CRITICAL_SECTION* lpCriticalSection = data_143ccb898(0x28)
*(arg1 + 0x18) = lpCriticalSection

if (lpCriticalSection != 0)
    InitializeCriticalSectionEx(lpCriticalSection, 0, 1)
    *(arg1 + 0x34) = 0
    int64_t rax = data_143ccb8b0(arg2)
    *(arg1 + 0x28) = rax
    
    if (rax != 0)
        return 1

CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0x18)

if (lpCriticalSection_1 != 0)
    DeleteCriticalSection(lpCriticalSection_1)
    data_143ccb8a0(*(arg1 + 0x18))

data_143ccb8a0(*(arg1 + 0x28))
void* rcx_5 = *(arg1 + 0x38)

if (rcx_5 != 0)
    sub_142c710d0(rcx_5)

memset(arg1 + 0x18, 0, 0x60)
return 0
