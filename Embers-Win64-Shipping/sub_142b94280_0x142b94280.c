// 函数: sub_142b94280
// 地址: 0x142b94280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 0x14

int16_t rcx = arg1[1]

if (rcx != arg2[1] || *arg1 != *arg2)
    return 6

if (arg1 != arg2)
    if (rcx != 0)
        memcpy(*(arg2 + 8), *(arg1 + 8), (sx.q(rcx) << 3).d)
        memcpy(*(arg2 + 0x10), *(arg1 + 0x10), sx.d(arg1[1]))
    
    int16_t rax_2 = *arg1
    
    if (rax_2 != 0)
        memcpy(*(arg2 + 0x18), *(arg1 + 0x18), sx.d(rax_2) * 2)
    
    *(arg2 + 0x20) = (*(arg1 + 0x20) & 0xfffffffe) | (*(arg2 + 0x20) & 1)

return 0
