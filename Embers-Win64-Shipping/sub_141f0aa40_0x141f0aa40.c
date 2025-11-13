// 函数: sub_141f0aa40
// 地址: 0x141f0aa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x278)
float result = *(arg1 + 0x204)

if (rax == 0)
    return result

if ((*(arg1 + 0x280) & 1) != 0)
    result = *(rax + 0xe8) f* *(arg1 + 0x284)

return result f* *(rax + 0xec)
