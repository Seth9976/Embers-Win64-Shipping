// 函数: sub_141ab5100
// 地址: 0x141ab5100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
int16_t* const rbp

if (arg2[4].d == 0)
    rbp = &data_142d40450
else
    rbp = arg2[3]

int64_t arg_10 = *(sub_142468160() + 0x18)
int16_t* var_38
sub_140b63b70(&arg_10, &var_38)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_48 = rbp
int32_t var_30

if (var_30 != 0)
    r8 = var_38

_mm_cvtps_pd(zmm0)
int16_t* var_28
sub_140a2e390(&var_28, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

int32_t var_20

if (var_20 != 0)
    rdi = var_28

void var_18
sub_140a2e390(&var_18, u"Non Overriden GatherDebugData! (%s)", rdi)
int64_t result = sub_141e14220(arg2, &var_18, 0)
int16_t* rcx_7 = var_28

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
