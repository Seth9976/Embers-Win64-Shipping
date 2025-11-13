// 函数: sub_141ab9500
// 地址: 0x141ab9500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e3b510(arg1 + 0x30, *(arg1 + 0x2c))
int16_t* const rbp = &data_142d40450
int16_t* const r14

if (arg2[4].d == 0)
    r14 = &data_142d40450
else
    r14 = arg2[3]

int64_t arg_8 = *(sub_141ae7f30() + 0x18)
int16_t* var_48
float zmm6_1 = sub_140b63b70(&arg_8, &var_48)
float zmm0_1[0x2] = *arg2
zmm0_1[0] = zmm0_1[0] * 100f
int16_t* const var_58 = r14
int32_t var_40

if (var_40 != 0)
    rbp = var_48

_mm_cvtps_pd(zmm0_1)
int64_t var_38
sub_140a2e390(&var_38, u"%s<W:%.1f%%> %s", rbp)
int16_t* rcx_4 = var_48

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

_mm_cvtps_pd(*(arg1 + 0x118))
sub_140a2e390(&var_48, u"(Alpha: %.1f%% RemainingTime: %.3f)", fconvert.d(zmm6_1 * 100f))
int32_t r8_3

if (var_40 == 0)
    r8_3 = 0
else
    r8_3 = var_40 - 1

sub_140a20ba0(&var_38, var_48, r8_3)
int16_t* rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rbp_1 = var_38
var_48 = nullptr
int32_t var_30
int32_t var_40_1 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_48, var_30, 0)
    memcpy(var_48, rbp_1, var_30 * 2)
else
    int32_t var_3c_1 = 0

sub_141e14220(arg2, &var_48, 0)
int64_t result = sub_141e21d10(arg1 + 0x10, arg2)
int64_t rcx_13 = var_38

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
