// 函数: sub_141dc86d0
// 地址: 0x141dc86d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return zx.o(0)

void* rax = *(arg2 + 0x130)
int32_t rdx = data_143dbb200
int64_t zmm2 = data_143dbb1f8.q
int64_t var_28
float zmm1[0x4]

if (rax == 0)
    var_28 = zmm2
    int32_t var_20_1 = rdx
else
    zmm1 = *(rax + 0x1d0)
    var_28.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float var_20 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_28:4.d = temp0_1[0]

void* rax_1 = *(arg1 + 0x130)
int64_t var_1c = var_28

if (rax_1 == 0)
    var_28 = zmm2
    int32_t var_20_3 = rdx
else
    zmm1 = *(rax_1 + 0x1d0)
    var_28.d = zmm1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float var_20_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_28:4.d = temp0_3[0]

zmm1 = var_28:4.d
zmm1[0] = zmm1[0] f- var_1c:4.d
zmm2.d = var_28.d f- var_1c.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm2.d = zmm2.d f* zmm2.d
zmm1[0] = zmm1[0] f+ zmm2.d
return _mm_sqrt_ss(zx.o(0)[0], zmm1[0])
