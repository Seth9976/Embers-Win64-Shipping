// 函数: sub_142703400
// 地址: 0x142703400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe8) == 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t var_38
sub_141e912d0(arg1 + 0x148, &var_38)
int32_t var_18
sub_1426fbf30(arg1, &var_18)
void* rcx_2 = *(*(arg1 + 0xe8) + 0xb0)
int64_t var_28
float var_20
float zmm1_1[0x4]

if (rcx_2 == 0)
    var_28 = data_143b58088
    var_20 = data_143b58090
else
    zmm1_1 = *(rcx_2 + 0x1d0)
    var_28.d = zmm1_1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
    temp0_2[0] = temp0_2[0] f- *(rcx_2 + 0x114)
    var_28:4.d = temp0_1[0]
    var_20 = temp0_2[0]

uint128_t zmm2 = zx.o(var_28)
int32_t var_34
zmm1_1 = var_34
int128_t zmm3
zmm3.d = var_38.d f- zmm2.d
float zmm0[0x4] = zmm2
float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm1_1[0] = zmm1_1[0] - temp0_3[0]
int32_t var_30
zmm0 = var_30
zmm3.d = zmm3.d f* var_18
zmm0[0] = zmm0[0] - var_20
int32_t var_14
zmm1_1[0] = zmm1_1[0] f* var_14
int32_t var_10
zmm0[0] = zmm0[0] f* var_10
zmm3.d = zmm3.d f+ zmm1_1[0]
zmm3.d = zmm3.d f+ zmm0[0]

if (zmm3.d f>= 0f)
    return sub_142703ae0(arg1, &var_38, zx.o(0), zx.o(0), arg2, (*(arg1 + 0x118))[0], 0.0500000007f)

float rax_3
rax_3.b = 1
return rax_3
