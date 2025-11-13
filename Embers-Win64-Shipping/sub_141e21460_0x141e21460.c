// 函数: sub_141e21460
// 地址: 0x141e21460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int16_t* const rdi = &data_142d40450
int32_t arg_8 = 0
int16_t* const r12

if (arg2[4].d == 0)
    r12 = &data_142d40450
else
    r12 = arg2[3]

arg_8.q = *(sub_142468520() + 0x18)
int16_t* var_58
sub_140b63b70(&arg_8, &var_58)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_68 = r12
int32_t var_50

if (var_50 != 0)
    r8 = var_58

_mm_cvtps_pd(zmm0)
int64_t var_48
sub_140a2e390(&var_48, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_58

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

void* rax_1 = *(arg1 + 0x30)
int16_t* var_38

if (rax_1 == 0)
    rdi = u"NULL"
else
    arg_8.q = *(rax_1 + 0x18)
    sub_140b63b70(&arg_8, &var_38)
    rsi = 1
    int32_t var_30
    
    if (var_30 != 0)
        rdi = var_38

_mm_cvtps_pd(*(arg1 + 0x1c))
sub_140a2e390(&var_58, u"('%s' Play Time: %.3f)", rdi)
int32_t r8_3

if (var_50 == 0)
    r8_3 = 0
else
    r8_3 = var_50 - 1

sub_140a20ba0(&var_48, var_58, r8_3)
int16_t* rcx_8 = var_58

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if ((rsi & 1) != 0)
    int16_t* rcx_9 = var_38
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

int64_t rdi_1 = var_48
var_58 = nullptr
int32_t var_40
int32_t var_50_1 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_58, var_40, 0)
    memcpy(var_58, rdi_1, var_40 * 2)
else
    int32_t var_4c_1 = var_40

int64_t result = sub_141e14220(arg2, &var_58, 1)
int64_t rcx_13 = var_48

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
