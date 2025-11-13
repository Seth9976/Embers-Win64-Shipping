// 函数: sub_14175cba0
// 地址: 0x14175cba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* r11 = *(arg1 + 0x20)
int32_t* var_68 = arg1
int64_t r8
int64_t var_60 = r8
uint32_t r10 = zx.d(*(r11 + 0x36))
float zmm2 = *(r11 + 0x3c)
float zmm3 = *(r11 + 0x2c)
int32_t r9_1 = arg2 + divs.dp.d(sx.q(arg2), r10 - 1)
int64_t rcx = sx.q(r9_1)
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(r9_1)
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp8:temp9, r10)))
int64_t rdx_3 = *r11
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp8:temp9, r10)))
uint128_t zmm5
zmm5.d = zmm6.d f+ 1f
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_3 + (rcx << 1)))).d f* zmm2
zmm0.d = zmm0.d f+ zmm3
int32_t var_70 = zmm0.d
uint64_t var_58 = (_mm_unpacklo_ps(zmm6, zmm4.q)).q
float zmm1 = var_58:4.d
zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_3 + (rcx << 1) + 2))).d f* zmm2
zmm0.d = zmm0.d f+ zmm3
int32_t var_70_1 = zmm0.d
zmm0 = _mm_unpacklo_ps(zmm5, zmm4.q)
zmm4.d = zmm4.d f+ 1f
uint64_t var_4c = zmm0.q
int64_t rcx_1 = sx.q(r10 + r9_1)
zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_3 + (rcx_1 << 1)))).d f* zmm2
zmm0.d = zmm0.d f+ zmm3
int32_t var_70_2 = zmm0.d
uint64_t var_40 = (_mm_unpacklo_ps(zmm6, zmm4.q)).q
zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_3 + (rcx_1 << 1) + 2))).d f* zmm2
zmm2 = r11[5].d
zmm0.d = zmm0.d f+ zmm3
zmm3 = *(r11 + 0x24)
float var_70_3 = zmm0.d
zmm0 = _mm_unpacklo_ps(zmm5, zmm4.q)
zmm4 = r11[4].d
uint64_t var_34 = zmm0.q
zmm0.d = zmm6.d f* zmm4.d
var_58:4.d = zmm1 * zmm3
var_58.d = zmm0.d
zmm0.d = var_70.d f* zmm2
int32_t rbx_1 = arg2 * 2
int32_t var_50_1 = zmm0.d
zmm0.d = zmm5.d f* zmm4.d
var_4c:4.d = var_4c:4.d * zmm3
var_4c.d = zmm0.d
zmm0.d = var_70_1.d f* zmm2
int32_t var_44_1 = zmm0.d
zmm0.d = zmm4.d f* zmm6.d
var_40:4.d = var_40:4.d * zmm3
var_40.d = zmm0.d
zmm0.d = var_70_2.d f* zmm2
zmm4.d = zmm4.d f* zmm5.d
int32_t var_38_1 = zmm0.d
zmm0.d = var_34:4.d.d f* zmm3
var_34:4.d = zmm0.d
var_34.d = zmm4.d
float var_2c_1 = var_70_3 * zmm2

if (sub_14170dc30(&var_68, rbx_1, &var_58, &var_4c, &var_34) != 0)
    sub_14170dc30(&var_68, rbx_1 + 1, &var_58, &var_34, &var_40)

int32_t zmm0_1 = (zx.o(0)).d
float temp14 = *arg1
zmm0_1 f- temp14
__security_check_cookie(rax_1 ^ &var_a8)
return zmm0_1 f< temp14
