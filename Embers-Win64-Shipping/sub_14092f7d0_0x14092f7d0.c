// 函数: sub_14092f7d0
// 地址: 0x14092f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x2e8)
int64_t result = sx.q(*(arg1 + 0x318))
int32_t rdx = 0

if (result.d s> 0)
    int64_t result_1 = result
    int64_t rcx_1 = 0
    result = *(arg1 + 0x310) + 0xb0
    
    do
        if (*result == arg2)
            result = sub_14092f6b0(arg1 + 0x310, rdx, 1, 1)
            break
        
        rdx += 1
        rcx_1 += 1
        result += 0xe8
    while (rcx_1 s< result_1)

if (arg1 == -0x2e8)
    return result

return LeaveCriticalSection(arg1 + 0x2e8)
