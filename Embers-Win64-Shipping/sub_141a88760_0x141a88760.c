// 函数: sub_141a88760
// 地址: 0x141a88760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int16_t* const rbp

if (arg1[4].d == 0)
    rbp = &data_142d40450
else
    rbp = arg1[3]

int64_t arg_8 = *(sub_141add7e0() + 0x18)
int16_t* var_28
sub_140b63b70(&arg_8, &var_28)
float zmm0[0x2] = *arg1
zmm0[0] = zmm0[0] * 100f
int16_t* const var_38 = rbp
int32_t var_20

if (var_20 != 0)
    rsi = var_28

_mm_cvtps_pd(zmm0)
sub_140a2e390(arg2, u"%s<W:%.1f%%> %s", rsi)
int16_t* rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[4].d = 0

if (*(arg1 + 0x24) != 0)
    sub_1405947f0(&arg1[3], 0)

return arg2
