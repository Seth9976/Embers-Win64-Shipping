// 函数: sub_141c472f0
// 地址: 0x141c472f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x18)
int32_t rax_2 = (*(arg1 + 0x10) + 1) & 0x80000003

if (rax_2 s< 0)
    rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1

*(arg1 + 0x10) = rax_2
int32_t result = *(arg1 + 0x10)

if (*(arg1 + 0x14) == result)
    result = (*(arg1 + 0x10) + 1) & 0x80000003
    
    if (result s< 0)
        result = ((result - 1) | 0xfffffffc) + 1
    
    *(arg1 + 0x10) = result

if (arg1 == -0x18)
    return result

return LeaveCriticalSection(arg1 + 0x18)
