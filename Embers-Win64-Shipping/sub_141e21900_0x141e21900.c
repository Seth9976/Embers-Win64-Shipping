// 函数: sub_141e21900
// 地址: 0x141e21900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int16_t* const rbp

if (arg2[4].d == 0)
    rbp = &data_142d40450
else
    rbp = arg2[3]

int64_t arg_8 = *(sub_1424685e0() + 0x18)
int16_t* var_38
sub_140b63b70(&arg_8, &var_38)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const var_48 = rbp
int32_t var_30

if (var_30 != 0)
    rsi = var_38

_mm_cvtps_pd(zmm0)
int64_t var_28
sub_140a2e390(&var_28, u"%s<W:%.1f%%> %s", rsi)
int16_t* rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

sub_140a2e390(&var_38, u"(Cached Frames Remaining: %i)", zx.q(*(arg1 + 0x4c)))
int32_t r8_3

if (var_30 == 0)
    r8_3 = 0
else
    r8_3 = var_30 - 1

sub_140a20ba0(&var_28, var_38, r8_3)
int16_t* rcx_7 = var_38

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rsi_1 = var_28
var_38 = nullptr
int32_t var_20
int32_t var_30_1 = var_20

if (var_20 != 0)
    sub_1405a4c70(&var_38, var_20, 0)
    memcpy(var_38, rsi_1, var_20 * 2)
else
    int32_t var_2c_1 = 0

int64_t result = sub_141e14220(arg2, &var_38, 0)
int64_t rcx_11 = var_28

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
