// 函数: sub_141fb5d50
// 地址: 0x141fb5d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 - 0xf0)
int64_t var_18
float var_10
float zmm1[0x4]

if (rax == 0)
    var_18 = data_143dbb1f8.q
    var_10 = data_143dbb200
else
    zmm1 = *(rax + 0x1d0)
    var_18.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_10 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_18:4.d = temp0_1[0]

zmm1 = zx.o(var_18)
arg2[1] = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
float zmm0[0x4] = var_10
zmm0[0] = zmm0[0] f- *(arg1 + 0xc)
*arg2 = zmm1[0]
arg2[2] = zmm0[0]
return arg2
