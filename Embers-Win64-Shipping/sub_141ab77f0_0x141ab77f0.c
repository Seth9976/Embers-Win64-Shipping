// 函数: sub_141ab77f0
// 地址: 0x141ab77f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_8 = 0
int16_t* const r14

if (arg2[4].d == 0)
    r14 = &data_142d40450
else
    r14 = arg2[3]

arg_8.q = *(sub_141ae2440() + 0x18)
int16_t* var_68
sub_140b63b70(&arg_8, &var_68)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_78 = r14
int32_t var_60

if (var_60 != 0)
    r8 = var_68

_mm_cvtps_pd(zmm0)
int64_t var_58
sub_140a2e390(&var_58, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_68

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

int16_t* var_48
int16_t* const rbx

if (sub_140d3e110(arg1 + 0x38) == 0)
    rbx = u"None"
else
    arg_8.q = *(sub_140d3c6e0(arg1 + 0x38) + 0x18)
    sub_140b63b70(&arg_8, &var_48)
    rbx = &data_142d40450
    rsi = 1
    int32_t var_40
    
    if (var_40 != 0)
        rbx = var_48

int64_t var_38
int16_t** rax_3 = sub_140b63b70(arg1 + 0x78, &var_38)

if (rax_3[1].d != 0)
    *rax_3

sub_140a2e390(&var_68, u"('%s' Pose: %s)", rbx)
int32_t r8_3

if (var_60 == 0)
    r8_3 = 0
else
    r8_3 = var_60 - 1

sub_140a20ba0(&var_58, var_68, r8_3)
int16_t* rcx_12 = var_68

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

if ((rsi & 1) != 0)
    int16_t* rcx_14 = var_48
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

int64_t rdi_1 = var_58
var_68 = nullptr
int32_t var_50
int32_t var_60_1 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_68, var_50, 0)
    memcpy(var_68, rdi_1, var_50 * 2)
else
    int32_t var_5c_1 = var_50

int64_t result = sub_141e14220(arg2, &var_68, 1)
int64_t rcx_18 = var_58

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
