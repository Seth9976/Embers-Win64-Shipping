// 函数: sub_1425da970
// 地址: 0x1425da970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0xa8)
float zmm6[0x4] = 0x44754000

if (rax != 0)
    zmm6 = sub_142436950(rax)
else
    rax = sub_141ee69e0(arg2)
    
    if (rax != 0)
        zmm6 = sub_142436950(rax)

float result = zmm6[0]
*(arg1 + 0x60) = (_mm_unpacklo_ps(zx.o(0), 0)).q
*(arg1 + 0x68) = result
return result
