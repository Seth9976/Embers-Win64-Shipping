// 函数: sub_141c5bfe0
// 地址: 0x141c5bfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0xb8)
int64_t* rcx_1 = *(arg1 + 0x60)

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x20))(rcx_1)
    int64_t* rcx_2 = *(arg1 + 0x60)
    
    if (rcx_2 != 0)
        result = (**rcx_2)(rcx_2, 1)
    
    *(arg1 + 0x60) = 0

if (arg1 == -0xb8)
    return result

return LeaveCriticalSection(arg1 + 0xb8)
