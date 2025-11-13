// 函数: sub_140ad9100
// 地址: 0x140ad9100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_78
int64_t rax_1 = __security_cookie ^ &var_78
float zmm4[0x4] = *arg1
zmm4[0] = zmm4[0] * 0.0166666675f
float zmm5 = *(arg1 + 8)
float zmm3[0x4] = zmm4
int32_t rdx = int.d(zmm3[0])

if (rdx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx)).d f== zmm3[0]))
    zmm3 = _mm_cvtepi32_ps(zx.o(rdx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))

zmm4[0] = zmm4[0] - zmm3[0]
int32_t var_68[0x3]
var_68[1] = 3
var_68[0] = 0
uint128_t zmm0
zmm0.d = 1f f- *(arg1 + 4)
int32_t var_2c = 0
int32_t r8 = (int.q(zmm3[0])).d
var_68[2] = 1
int64_t var_5c = 2
int32_t var_54 = 1
int64_t var_50 = 1
int32_t var_48 = 3
int32_t var_44 = 1
int64_t var_40 = 2
zmm0.d = zmm0.d f* zmm5
int32_t var_38 = 3
var_78 = zmm5
int32_t var_74 = zmm0.d
zmm0.d = zmm4.d f* *(arg1 + 4)
int64_t var_34 = 1
float zmm1 = 1f f- zmm0.d
int32_t var_28 = 1
int32_t var_24 = 2
zmm0.d = 1f - zmm4[0]
zmm0.d = zmm0.d f* *(arg1 + 4)
float var_70 = zmm1 * zmm5
arg2[3] = (*(arg1 + 0xc)).d
uint64_t r8_2 = zx.q(r8 u% 6) * 3
float var_6c = (1f f- zmm0.d) * zmm5
var_64
uint64_t rcx_3 = zx.q(*(&var_64 + (r8_2 << 2)))
*arg2 = (&var_78)[zx.q(var_68[r8_2])]
var_60
uint64_t rcx_4 = zx.q(*(&var_60 + (r8_2 << 2)))
arg2[1] = (&var_78)[rcx_3]
arg2[2] = (&var_78)[rcx_4]
__security_check_cookie(rax_1 ^ &var_78)
return arg2
