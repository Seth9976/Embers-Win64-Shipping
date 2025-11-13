// 函数: sub_140b54830
// 地址: 0x140b54830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = *(arg1 + 0x29)

if ((rbx & 1) != 0)
    return 

int64_t rax = *(arg1 + 0xa8)
int32_t r10_1 = 0
int32_t i = 1

if (arg3 u> 1)
    while (i != 0)
        if (rax s>= *(arg1 + 0xa0))
            *(arg1 + 0x29) = rbx | 1
            break
        
        int32_t rcx_6 = i | r10_1
        
        if ((1 << (rax.b & 7) & *(sx.q((rax s>> 3).d) + *(arg1 + 0x90))) == 0)
            rcx_6 = r10_1
        
        i *= 2
        r10_1 = rcx_6
        rax += 1
        
        if (rcx_6 + i u>= arg3)
            break

*(arg1 + 0xa8) = rax
*arg2 = r10_1
