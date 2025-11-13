// 函数: sub_142217e30
// 地址: 0x142217e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x130)
float zmm2 = *(arg1 + 0x22c)
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
float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
*arg2 = zmm1[0]
arg2[1] = temp0_3[0]
arg2[2] = zmm2 + var_10
return arg2
