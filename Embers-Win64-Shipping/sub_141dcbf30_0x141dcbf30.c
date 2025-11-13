// 函数: sub_141dcbf30
// 地址: 0x141dcbf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return zx.o(0)

void* rax = *(arg2 + 0x130)
float rdx = data_143dbb200
int64_t zmm2 = data_143dbb1f8.q
int64_t var_1c
float var_14
float zmm1[0x4]

if (rax == 0)
    var_1c = zmm2
    var_14 = rdx
else
    zmm1 = *(rax + 0x1d0)
    var_1c.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_14 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_1c:4.d = temp0_1[0]

void* rax_2 = *(arg1 + 0x130)
int64_t var_28 = var_1c
float var_14_1

if (rax_2 == 0)
    var_1c = zmm2
    var_14_1 = rdx
else
    zmm1 = *(rax_2 + 0x1d0)
    var_1c.d = zmm1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_14_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_1c:4.d = temp0_3[0]

float zmm0[0x4] = zx.o(var_1c)
float result[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm2 = zmm0[0].q
result[0] = result[0] f- var_28:4.d
zmm2.d = zmm2.d f- var_28.d
zmm1 = var_14_1
zmm1[0] = zmm1[0] - var_14
result[0] = result[0] * result[0]
zmm2.d = zmm2.d f* zmm2.d
zmm1[0] = zmm1[0] * zmm1[0]
result[0] = result[0] f+ zmm2.d
result[0] = result[0] + zmm1[0]
return result
