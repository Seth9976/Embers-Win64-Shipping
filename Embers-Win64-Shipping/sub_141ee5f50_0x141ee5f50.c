// 函数: sub_141ee5f50
// 地址: 0x141ee5f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 - 0x88)
int64_t var_18
float var_10

if (rax == 0)
    var_18 = data_143a2d6e0
    var_10 = data_143a2d6e8
else
    float zmm1[0x4] = *(rax + 0x1d0)
    var_18.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    temp0_2[0] = temp0_2[0] f- *(rax + 0x114)
    var_18:4.d = temp0_1[0]
    var_10 = temp0_2[0]

*arg2 = var_18
arg2[1].d = var_10
return arg2
