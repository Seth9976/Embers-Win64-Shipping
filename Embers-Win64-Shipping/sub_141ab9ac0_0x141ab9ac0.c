// 函数: sub_141ab9ac0
// 地址: 0x141ab9ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
int16_t* const rsi

if (arg2[4].d == 0)
    rsi = &data_142d40450
else
    rsi = arg2[3]

int64_t arg_8 = *(sub_141ae8110() + 0x18)
int16_t* var_38
sub_140b63b70(&arg_8, &var_38)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const var_48 = rsi
int32_t var_30

if (var_30 != 0)
    rdi = var_38

_mm_cvtps_pd(zmm0)
int64_t var_28
sub_140a2e390(&var_28, u"%s<W:%.1f%%> %s", rdi)
int16_t* rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

float zmm0_1[0x2] = *(arg1 + 0xc0)
zmm0_1[0] = zmm0_1[0] * 100f
sub_140a2e390(&var_38, u"(Alpha: %.1f%%)", _mm_cvtps_pd(zmm0_1))
int32_t r8_3

if (var_30 == 0)
    r8_3 = 0
else
    r8_3 = var_30 - 1

sub_140a20ba0(&var_28, var_38, r8_3)
int16_t* rcx_7 = var_38

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rdi_1 = var_28
var_38 = nullptr
int32_t var_20
int32_t var_30_1 = var_20

if (var_20 != 0)
    sub_1405a4c70(&var_38, var_20, 0)
    memcpy(var_38, rdi_1, var_20 * 2)
else
    int32_t var_2c_1 = 0

sub_141e14220(arg2, &var_38, 0)
int128_t zmm1
zmm1.d = 1f f- *(arg1 + 0xc0)
var_38 = nullptr
var_30_1.q = 0
sub_141e21d10(arg1 + 0x10, UnDecorator::getTemplateArgumentList(arg2, zmm1, &var_38))
int128_t zmm1_1 = *(arg1 + 0xc0)
var_38 = nullptr
var_30_1.q = 0
int64_t result =
    sub_141e21d10(arg1 + 0x20, UnDecorator::getTemplateArgumentList(arg2, zmm1_1, &var_38))
int64_t rcx_15 = var_28

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
