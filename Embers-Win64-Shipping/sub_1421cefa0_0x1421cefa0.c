// 函数: sub_1421cefa0
// 地址: 0x1421cefa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x18)
int64_t var_58
float var_50
float zmm1[0x4]

if (rax == 0)
    var_58 = data_143dbb1f8.q
    var_50 = data_143dbb200
else
    zmm1 = *(rax + 0x1d0)
    var_58.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_50 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_58:4.d = temp0_1[0]

uint128_t zmm5 = zx.o(var_58)
uint128_t zmm6
zmm6.d = zmm5.d f+ 1f
zmm1 = var_50
int64_t zmm3 = zmm5.q:4.d
zmm1[0] = zmm1[0] + 1f
zmm1[0] = zmm1[0] - 1f
zmm5.d = zmm5.d f- 1f
int64_t zmm4
zmm4.d = zmm3.d f+ 1f
zmm3.d = zmm3.d f- 1f
float var_40 = zmm1[0]
float var_50_2 = zmm1[0]
int64_t var_30 = (_mm_unpacklo_ps(zmm6, zmm4)).q
float var_34 = var_50_2
float var_28 = var_40
int32_t result = 1.d
float var_3c[0x4]
var_3c[0].q = (_mm_unpacklo_ps(zmm5, zmm3)).q
*(arg1 + 0x140) = var_3c
*(arg1 + 0x150) = var_30
*(arg1 + 0x158) = result
return result
