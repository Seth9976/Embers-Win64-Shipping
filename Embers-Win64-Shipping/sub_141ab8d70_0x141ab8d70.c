// 函数: sub_141ab8d70
// 地址: 0x141ab8d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
int16_t* const r15

if (arg2[4].d == 0)
    r15 = &data_142d40450
else
    r15 = arg2[3]

int64_t arg_8 = *(sub_141ae7db0() + 0x18)
int16_t* var_48
sub_140b63b70(&arg_8, &var_48)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_58 = r15
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

void* rax_1 = *(arg1 + 0x30)

if (rax_1 != 0)
    arg_8 = *(rax_1 + 0x18)
    sub_140b63b70(&arg_8, &var_48)
else
    var_48 = nullptr
    var_40.q = 0
    sub_1405947f0(&var_48, (rax_1 + 5).d)
    int32_t rax_2 = var_40 + 5
    var_40 = rax_2
    int32_t var_3c
    
    if (rax_2 s> var_3c)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"None", 0xa)

float zmm0_1[0x2] = *(arg1 + 0x1c)
_mm_cvtps_pd(*(arg1 + 0x38))

if (var_40 != 0)
    rdi = var_48

float var_58_1[0x2] = _mm_cvtps_pd(zmm0_1)
int64_t var_28
sub_140a2e390(&var_28, u"('%s' InputTime: %.3f, Time: %.3f)", rdi)
int32_t var_20
int32_t r8_3

if (var_20 == 0)
    r8_3 = 0
else
    r8_3 = var_20 - 1

sub_140a20ba0(&var_38, var_28, r8_3)
int64_t rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int16_t* rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

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
int64_t rcx_16 = var_38

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
