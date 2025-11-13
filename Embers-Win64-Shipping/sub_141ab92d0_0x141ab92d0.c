// 函数: sub_141ab92d0
// 地址: 0x141ab92d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
int16_t* const r15

if (arg2[4].d == 0)
    r15 = &data_142d40450
else
    r15 = arg2[3]

int64_t arg_8 = *(sub_141ae7ed0() + 0x18)
int16_t* var_48
sub_140b63b70(&arg_8, &var_48)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_68 = r15
int32_t var_40

if (var_40 != 0)
    r8 = var_48

_mm_cvtps_pd(zmm0)
int64_t var_58
sub_140a2e390(&var_58, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_48

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

sub_140a20b00(&var_58, U"(", 1)
float zmm0_1[0x2] = *(arg1 + 0x24)
zmm0_1[0] = zmm0_1[0] * 100f
sub_140a2e390(&var_48, u"Alpha: %.1f%%", _mm_cvtps_pd(zmm0_1))
int32_t r8_3

if (var_40 == 0)
    r8_3 = 0
else
    r8_3 = var_40 - 1

sub_140a20ba0(&var_58, var_48, r8_3)
int16_t* rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t var_28
int64_t* rax_1 = sub_140b63b70(arg1 + 0xd8, &var_28)

if (rax_1[1].d != 0)
    *rax_1

int64_t var_38
int64_t* rax_2 = sub_140b63b70(arg1 + 0xc8, &var_38)

if (rax_2[1].d != 0)
    rdi = *rax_2

sub_140a2e390(&var_48, u" StartBone: %s, EndBone: %s)", rdi)
int32_t r8_6

if (var_40 == 0)
    r8_6 = 0
else
    r8_6 = var_40 - 1

sub_140a20ba0(&var_58, var_48, r8_6)
int16_t* rcx_13 = var_48

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = var_38

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = var_28

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rdi_1 = var_58
var_48 = nullptr
int32_t var_50
int32_t var_40_1 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_48, var_50, 0)
    memcpy(var_48, rdi_1, var_50 * 2)
else
    int32_t var_3c_1 = 0

sub_141e14220(arg2, &var_48, 0)
int64_t result = sub_141e21d10(arg1 + 0x10, arg2)
int64_t rcx_20 = var_58

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
