// 函数: sub_141fbfb60
// 地址: 0x141fbfb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 0xe28) == 0)
label_141fbfbbb:
    result = sub_141fbfbd0(arg1, *arg2, arg2[1].d)
    
    if (result.b == 0)
        return result
else
    int64_t rax_1 = sx.q(arg2[3].d)
    
    if (rax_1.d == 0)
        goto label_141fbfbbb
    
    int32_t rcx = (rax_1 - 1).d
    
    if (rcx s< 0 || rcx s>= *(arg1 + 0xe18))
        goto label_141fbfbbb
    
    result = *(arg1 + 0xd60)
    int64_t rdx = sx.q(*(*(arg1 + 0xe10) + (rax_1 << 2) - 4)) * 3
    bool cond:1_1 = *(result + (rdx << 3) + 0x14) == 0
    *(result + (rdx << 3) + 0x15) = 1
    
    if (not(cond:1_1))
        goto label_141fbfbbb

result.b = 1
return result
