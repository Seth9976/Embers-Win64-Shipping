// 函数: sub_141e21b80
// 地址: 0x141e21b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
int16_t* const rbp

if (arg2[4].d == 0)
    rbp = &data_142d40450
else
    rbp = arg2[3]

int64_t arg_8 = *(sub_1424686a0() + 0x18)
int16_t* var_48
sub_140b63b70(&arg_8, &var_48)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_58 = rbp
int32_t var_40

if (var_40 != 0)
    r8 = var_48

_mm_cvtps_pd(zmm0)
int64_t var_38
sub_140a2e390(&var_38, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_48

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

int64_t var_28
int64_t* rax_1 = sub_140b63b70(arg1 + 0x20, &var_28)

if (rax_1[1].d != 0)
    rdi = *rax_1

sub_140a2e390(&var_48, u"%s:", rdi)
int32_t r8_3

if (var_40 == 0)
    r8_3 = 0
else
    r8_3 = var_40 - 1

sub_140a20ba0(&var_38, var_48, r8_3)
int16_t* rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rdi_1 = var_38
var_48 = nullptr
int32_t var_30
int32_t var_40_1 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_48, var_30, 0)
    memcpy(var_48, rdi_1, var_30 * 2)
else
    int32_t var_3c_1 = 0

int64_t result = sub_141e14220(arg2, &var_48, 1)
int64_t rcx_13 = var_38

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
