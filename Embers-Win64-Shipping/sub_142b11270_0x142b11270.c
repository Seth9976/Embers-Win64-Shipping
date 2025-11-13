// 函数: sub_142b11270
// 地址: 0x142b11270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0x60) == 0)
    result.b = 0
    return result

int32_t rbx = *(arg1 + 0x68)

if (arg2 s> rbx)
    do
        rbx *= 2
    while (rbx s<= arg2)
    
    int64_t rax_1 = sub_142a7dd00(sx.q(rbx * 2))
    
    if (rax_1 == 0)
        sub_142a7dcd0(*(arg1 + 0x60))
        *(arg1 + 0x60) = 0
        *(arg1 + 0x68) = 0
        return 0
    
    int32_t r8_1 = *(arg1 + 0x6c)
    sub_142a8bca0(rax_1 + (sx.q(rbx - r8_1) << 1), 
        *(arg1 + 0x60) + (sx.q(*(arg1 + 0x68) - r8_1) << 1), r8_1)
    sub_142a7dcd0(*(arg1 + 0x60))
    *(arg1 + 0x60) = rax_1
    *(arg1 + 0x68) = rbx

result.b = 1
return result
