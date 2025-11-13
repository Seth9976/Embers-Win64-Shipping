// 函数: sub_141dcc5c0
// 地址: 0x141dcc5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return zx.o(0)

void* rax = *(arg1 + 0x130)
float rcx = data_143dbb200
int64_t zmm2 = data_143dbb1f8.q
int64_t var_38
float var_30
float zmm1[0x4]

if (rax == 0)
    var_38 = zmm2
    var_30 = rcx
else
    zmm1 = *(rax + 0x1d0)
    var_38.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_30 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_38:4.d = temp0_1[0]

void* rax_2 = *(arg2 + 0x130)
float var_30_1

if (rax_2 == 0)
    int64_t var_38_1 = zmm2
    var_30_1 = rcx
else
    zmm1 = *(rax_2 + 0x1d0)
    var_38.d = zmm1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_30_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_38:4.d = temp0_3[0]

float zmm0[0x4] = var_30
zmm0[0] = zmm0[0] - var_30_1
return __andps_xmmxud_memxud(zmm0, data_142d3f770)
