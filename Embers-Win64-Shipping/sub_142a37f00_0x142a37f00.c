// 函数: sub_142a37f00
// 地址: 0x142a37f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg1 + 0x78)
double zmm1 = *(rax_2 + 0x30)

if (0.0 <= zmm1)
    return int.q(float.d(*(rax_2 + 0x28)) f* zmm1)

return -1
