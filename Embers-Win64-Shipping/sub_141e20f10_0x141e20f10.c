// 函数: sub_141e20f10
// 地址: 0x141e20f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbp = &data_142d40450
int16_t* const r14

if (arg2[4].d == 0)
    r14 = &data_142d40450
else
    r14 = arg2[3]

int64_t arg_8 = *(sub_142468400() + 0x18)
int16_t* var_38
sub_140b63b70(&arg_8, &var_38)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const var_48 = r14
int32_t var_30

if (var_30 != 0)
    rbp = var_38

_mm_cvtps_pd(zmm0)
int64_t var_28
sub_140a2e390(&var_28, u"%s<W:%.1f%%> %s", rbp)
int16_t* rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

int64_t rbp_1 = var_28
var_38 = nullptr
int32_t var_20
int32_t var_30_1 = var_20

if (var_20 != 0)
    sub_1405a4c70(&var_38, var_20, 0)
    memcpy(var_38, rbp_1, var_20 * 2)
else
    int32_t var_2c_1 = 0

int64_t result = sub_141e14220(arg2, &var_38, 0)

if (*(arg1 + 0x70) != 0)
    int64_t* rcx_8 = *(arg1 + 0x28)
    
    if (rcx_8 != 0)
        result = (*(*rcx_8 + 0x30))(rcx_8, arg2)

int64_t rcx_9 = var_28

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
