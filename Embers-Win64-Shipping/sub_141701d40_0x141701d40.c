// 函数: sub_141701d40
// 地址: 0x141701d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* r10 = *(arg1 + 0x20)
uint128_t zmm0
zmm0.d = arg1[0x10].d f+ 9.99999994e-09f
int64_t r8
int64_t var_68 = r8
uint32_t r9 = zx.d(*(r10 + 0x36))
char var_88 = 0
zmm0.d = zmm0.d f* zmm0.d
int32_t* var_70 = arg1
int32_t var_78 = zmm0.d
int32_t r9_2 = arg2 + divs.dp.d(sx.q(arg2), r9 - 1)
uint32_t r8_1 = zx.d(*(r10 + 0x36))
float zmm2 = *(r10 + 0x3c)
float zmm3 = *(r10 + 0x2c)
int32_t* var_60 = &var_78
char* var_58 = &var_88
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(r9_2)
int64_t rcx = sx.q(r9_2)
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp8:temp9, r8_1)))
int64_t rdx_3 = *r10
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp8:temp9, r8_1)))
uint128_t zmm5
zmm5.d = zmm6.d f+ 1f
zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_3 + (rcx << 1)))).d f* zmm2
zmm0.d = zmm0.d f+ zmm3
int32_t var_7c = zmm0.d
uint64_t var_50 = (_mm_unpacklo_ps(zmm6, zmm4.q)).q
zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_3 + (rcx << 1) + 2))).d f* zmm2
zmm0.d = zmm0.d f+ zmm3
int32_t var_7c_1 = zmm0.d
zmm0 = _mm_unpacklo_ps(zmm5, zmm4.q)
zmm4.d = zmm4.d f+ 1f
uint64_t var_44 = zmm0.q
int64_t rcx_1 = sx.q(r8_1 + r9_2)
zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_3 + (rcx_1 << 1)))).d f* zmm2
zmm0.d = zmm0.d f+ zmm3
int32_t var_7c_2 = zmm0.d
uint64_t var_38 = (_mm_unpacklo_ps(zmm6, zmm4.q)).q
zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_3 + (rcx_1 << 1) + 2))).d f* zmm2
zmm0.d = zmm0.d f+ zmm3
float var_7c_3 = zmm0.d
uint64_t var_2c = (_mm_unpacklo_ps(zmm5, zmm4.q)).q
zmm4 = r10[4].d
zmm2 = r10[5].d
zmm3 = *(r10 + 0x24)
int32_t rbx_1 = arg2 * 2
zmm0.d = zmm6.d f* zmm4.d
var_50:4.d = var_50:4.d * zmm3
var_50.d = zmm0.d
zmm0.d = var_7c.d f* zmm2
int32_t var_48_1 = zmm0.d
zmm0.d = zmm5.d f* zmm4.d
var_44:4.d = var_44:4.d * zmm3
var_44.d = zmm0.d
zmm0.d = var_7c_1.d f* zmm2
int32_t var_3c_1 = zmm0.d
zmm0.d = zmm4.d f* zmm6.d
var_38:4.d = var_38:4.d * zmm3
var_38.d = zmm0.d
zmm0.d = var_7c_2.d f* zmm2
zmm4.d = zmm4.d f* zmm5.d
int32_t var_30_1 = zmm0.d
zmm0.d = var_2c:4.d.d f* zmm3
var_2c:4.d = zmm0.d
var_2c.d = zmm4.d
float var_24_1 = var_7c_3 * zmm2
sub_141729130(&var_70, rbx_1, &var_50, &var_44, &var_2c)
sub_141729130(&var_70, rbx_1 + 1, &var_50, &var_2c, &var_38)
float temp14 = *arg1
0f - temp14
void** result
result.b = 0f < temp14
__security_check_cookie(rax_1 ^ &var_b8)
return result
