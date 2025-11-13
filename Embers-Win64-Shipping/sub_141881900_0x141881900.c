// 函数: sub_141881900
// 地址: 0x141881900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x40)

if (*(arg1 + 0x70) != 0)
    void* rax = *(arg1 + 0x80)
    void* rcx_1 = arg1 + 0x90
    
    if (rax != 0)
        rcx_1 = rax
    
    result = (*(arg1 + 0x70))((*(*rcx_1 + 8))(rcx_1), arg2)

if (arg1 == -0x40)
    return result

return LeaveCriticalSection(arg1 + 0x40)
