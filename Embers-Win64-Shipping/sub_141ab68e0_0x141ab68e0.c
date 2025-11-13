// 函数: sub_141ab68e0
// 地址: 0x141ab68e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
int64_t r12 = sx.q(*(arg1 + 0x28))
int16_t* const rsi

if (arg2[4].d == 0)
    rsi = &data_142d40450
else
    rsi = arg2[3]

int64_t arg_8 = *(sub_141ae2080() + 0x18)
int16_t* var_48
sub_140b63b70(&arg_8, &var_48)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const var_58 = rsi
int32_t var_40

if (var_40 != 0)
    rdi = var_48

_mm_cvtps_pd(zmm0)
int64_t var_38
sub_140a2e390(&var_38, u"%s<W:%.1f%%> %s", rdi)
int16_t* rcx_3 = var_48

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

sub_140a2e390(&var_48, u"(Num Poses: %i)", zx.q(r12.d))
int32_t r8_3

if (var_40 == 0)
    r8_3 = 0
else
    r8_3 = var_40 - 1

sub_140a20ba0(&var_38, var_48, r8_3)
int16_t* rcx_7 = var_48

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rdi_1 = var_38
var_48 = nullptr
int32_t var_30
int32_t var_40_1 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_48, var_30, 0)
    memcpy(var_48, rdi_1, var_30 * 2)
else
    int32_t var_3c_1 = 0

sub_141e14220(arg2, &var_48, 0)
var_48 = nullptr
var_40_1.q = 0
int64_t result =
    sub_141e21d10(arg1 + 0x10, UnDecorator::getTemplateArgumentList(arg2, 0x3f800000, &var_48))
int32_t rsi_1 = 0

if (r12 s> 0)
    int64_t rdi_2 = 0
    
    do
        int64_t rax_2 = *(arg1 + 0x40)
        int64_t rbx_1 = *(arg1 + 0x20)
        var_48 = nullptr
        var_40_1.q = 0
        result = sub_141e21d10((sx.q(rsi_1) << 4) + rbx_1, 
            UnDecorator::getTemplateArgumentList(arg2, *(rax_2 + (rdi_2 << 2)), &var_48))
        rsi_1 += 1
        rdi_2 += 1
    while (rdi_2 s< r12)

int64_t rcx_17 = var_38

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
