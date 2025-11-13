// 函数: sub_141adca00
// 地址: 0x141adca00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int16_t* const rbp

if (arg3[4].d == 0)
    rbp = &data_142d40450
else
    rbp = arg3[3]

int64_t arg_10 = *(sub_141add4e0() + 0x18)
int16_t* var_28
sub_140b63b70(&arg_10, &var_28)
float zmm0[0x2] = *arg3
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

arg3[4].d = 0

if (*(arg3 + 0x24) != 0)
    sub_1405947f0(&arg3[3], 0)

return arg2
