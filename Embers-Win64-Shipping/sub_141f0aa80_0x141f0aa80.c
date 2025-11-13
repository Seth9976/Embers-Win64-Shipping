// 函数: sub_141f0aa80
// 地址: 0x141f0aa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x278)
float result = *(arg1 + 0x204)

if (rax_1 != 0)
    if ((*(arg1 + 0x280) & 1) != 0)
        result = *(rax_1 + 0xe8) f* *(arg1 + 0x284)
    
    result = result f* *(rax_1 + 0xec)

if ((*(arg1 + 0x338) & 1) == 0)
    return result

char rax = *(arg1 + 0x320)

if (rax == 1)
    return result * 10000f

if (rax != 2)
    return result * 16f

return result * 795.774719f
