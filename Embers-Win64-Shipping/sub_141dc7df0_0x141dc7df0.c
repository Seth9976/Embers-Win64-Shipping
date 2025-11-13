// 函数: sub_141dc7df0
// 地址: 0x141dc7df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return zx.o(0)

void* rax = *(arg2 + 0x130)
float rdx = data_143dbb200
uint128_t zmm2 = zx.o(data_143dbb1f8.q)
uint64_t var_1c
float var_14
float zmm1[0x4]

if (rax == 0)
    var_1c = zmm2.q
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
    var_1c = zmm2.q
    var_14_1 = rdx
else
    zmm1 = *(rax_2 + 0x1d0)
    var_1c.d = zmm1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_14_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_1c:4.d = temp0_3[0]

float zmm0[0x4] = zx.o(var_1c)
zmm2 = zmm0
zmm1 = zmm0
zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f- var_28:4.d
zmm1[0] = zmm1[0] f- var_28.d
zmm0 = var_14_1
zmm0[0] = zmm0[0] - var_14
zmm2.d = zmm2.d f* zmm2.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm2.d = zmm2.d f+ zmm1[0]
zmm2.d = zmm2.d f+ zmm0[0]
return _mm_sqrt_ss(0, zmm2.d)
