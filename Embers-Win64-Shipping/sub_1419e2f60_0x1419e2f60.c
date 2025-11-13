// 函数: sub_1419e2f60
// 地址: 0x1419e2f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2
void* rax = sub_141f8b8d0(arg1 + 0x2d8)
arg2 = *(arg1 + 0x2c4)

if (arg2[0] != 0f)
    zmm6[0] = zmm6[0] / arg2[0]
    
    if (zmm6[0] >= 0f)
        zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
    else
        zmm6 = zx.o(0)
else
    zmm6 = _mm_min_ss(0x3f800000[0], 0x3f800000)

float zmm0 = sub_141f86ef0(rax, zmm6, zx.o(0))
float zmm1 = *(arg1 + 0x2cc)
return (*(arg1 + 0x2d0) - zmm1) * zmm0 + zmm1
