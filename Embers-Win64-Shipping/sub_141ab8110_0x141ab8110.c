// 函数: sub_141ab8110
// 地址: 0x141ab8110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int16_t* const r14

if (arg2[4].d == 0)
    r14 = &data_142d40450
else
    r14 = arg2[3]

int64_t arg_8 = *(sub_141ae2680() + 0x18)
int16_t* var_28
sub_140b63b70(&arg_8, &var_28)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const var_48 = r14
int32_t var_20

if (var_20 != 0)
    rsi = var_28

_mm_cvtps_pd(zmm0)
int64_t var_38
sub_140a2e390(&var_38, u"%s<W:%.1f%%> %s", rsi)
int16_t* rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

sub_140a20b00(&var_38, U"(", 1)
float zmm0_1[0x2] = *(arg1 + 0x24)
zmm0_1[0] = zmm0_1[0] * 100f
sub_140a2e390(&var_28, u"Alpha: %.1f%%", _mm_cvtps_pd(zmm0_1))
int32_t r8_3

if (var_20 == 0)
    r8_3 = 0
else
    r8_3 = var_20 - 1

int64_t r8_4 = sub_140a20ba0(&var_38, var_28, r8_3)
int16_t* rcx_8 = var_28

if (rcx_8 != 0)
    r8_4 = sub_140a74f90(rcx_8)

sub_140a2e390(&var_28, &data_142da76f4, r8_4)
int32_t r8_5 = var_20 - 1

if (var_20 == 0)
    r8_5 = 0

sub_140a20ba0(&var_38, var_28, r8_5)
int16_t* rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rsi_1 = var_38
var_28 = nullptr
int32_t var_30
int32_t var_20_1 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_28, var_30, 0)
    memcpy(var_28, rsi_1, var_30 * 2)
else
    int32_t var_1c_1 = 0

sub_141e14220(arg2, &var_28, 0)
int64_t result = sub_141e21d10(arg1 + 0x10, arg2)
int64_t rcx_16 = var_38

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
