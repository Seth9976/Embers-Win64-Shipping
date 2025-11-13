// 函数: sub_141e7f240
// 地址: 0x141e7f240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
EnterCriticalSection(arg1 + 0xf0)
int32_t result = *(arg1 + 0xa8)
int32_t* rdx_2

if (result == *(arg1 + 0xd4))
label_141e7f2bf:
    rdx_2 = nullptr
else
    void* r10_1 = arg1 + 0xd8
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    result = *(r10_1 + (((sx.q(*(arg1 + 0xe8)) - 1) & rsi) << 2))
    
    if (result == 0xffffffff)
    label_141e7f2bf_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(result) << 6) + *(arg1 + 0xa0)
            
            if (*rdx_2 == rsi.d)
                break
            
            result = rdx_2[0xe]
            
            if (result == 0xffffffff)
                goto label_141e7f2bf_2
        
        if (result == 0xffffffff)
        label_141e7f2bf_2:
            rdx_2 = nullptr

rdx_2[4] += 1

if (arg1 == -0xf0)
    return result

return LeaveCriticalSection(arg1 + 0xf0)
