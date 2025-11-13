// 函数: sub_142666e60
// 地址: 0x142666e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = EnterCriticalSection(arg1 + 0x370)

if (*(arg1 + 0xa8) u< 0x10)
    int64_t* r8_1 = *(arg1 + 0xa0)
    int64_t rdx = sx.q(*(arg1 + 0xa8))
    int64_t* rcx_1 = r8_1
    result = &r8_1[rdx]
    
    if (r8_1 != result)
        while (*rcx_1 != arg2)
            rcx_1 = &rcx_1[1]
            
            if (rcx_1 == result)
                goto label_142666ed2
    
    if (r8_1 == result || ((rcx_1 - r8_1) s>> 3).d == 0xffffffff)
    label_142666ed2:
        int32_t rax = (rdx + 1).d
        *(arg1 + 0xa8) = rax
        
        if (rax s> *(arg1 + 0xac))
            sub_1405a4d70(arg1 + 0xa0)
        
        result = *(arg1 + 0xa0)
        *((rdx << 3) + result) = arg2

if (arg1 == -0x370)
    return result

return LeaveCriticalSection(arg1 + 0x370) __tailcall
