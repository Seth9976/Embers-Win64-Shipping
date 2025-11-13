// 函数: sub_141ab5be0
// 地址: 0x141ab5be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e3b510(arg1 + 0x30, *(arg1 + 0x2c))
int16_t* const rdi

if (arg2[4].d == 0)
    rdi = &data_142d40450
else
    rdi = arg2[3]

int64_t arg_8 = *(sub_141add860() + 0x18)
int16_t* var_58
float zmm6_1[0x2] = sub_140b63b70(&arg_8, &var_58)
float zmm0_1[0x2] = *arg2
int16_t* const r8 = &data_142d40450
zmm0_1[0] = zmm0_1[0] * 100f
int16_t* const var_88 = rdi
int32_t var_50

if (var_50 != 0)
    r8 = var_58

_mm_cvtps_pd(zmm0_1)
int64_t var_78
sub_140a2e390(&var_78, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_4 = var_58

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rsi = 0
arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

zmm6_1[0] = zmm6_1[0] * 100f
sub_140a2e390(&var_58, u"(Alpha: %.1f%%)", fconvert.d(zmm6_1[0]))
int32_t r8_3

if (var_50 == 0)
    r8_3 = 0
else
    r8_3 = var_50 - 1

sub_140a20ba0(&var_78, var_58, r8_3)
int16_t* rcx_8 = var_58

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rdi_1 = var_78
int64_t var_68 = 0
int32_t var_70
int32_t var_60 = var_70
int32_t var_5c

if (var_70 != 0)
    sub_1405a4c70(&var_68, var_70, 0)
    memcpy(var_68, rdi_1, var_70 * 2)
else
    var_5c = 0

sub_141e14220(arg2, &var_68, 0)
int64_t r12 = sx.q(*(arg1 + 0xe0))
int32_t r14 = 0

if (r12 s> 0)
    do
        *(*(arg1 + 0xe8) + (rsi << 2))
        int64_t var_48
        int64_t* rax_3
        rax_3, zmm6_1 = sub_140b63b70(sx.q(r14) * 0x1c + *(arg1 + 0xd8), &var_48)
        int16_t* const r8_6
        
        if (rax_3[1].d == 0)
            r8_6 = &data_142d40450
        else
            r8_6 = *rax_3
        
        _mm_cvtps_pd(zmm6_1)
        sub_140a2e390(&var_68, u"  Target : %s (%0.2f) ", r8_6)
        int64_t rcx_15 = var_78
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        int64_t rdi_2 = var_68
        int32_t rbx_1 = var_60
        int64_t rcx_16 = var_48
        var_78 = rdi_2
        var_68 = 0
        int32_t var_6c_1 = var_5c
        var_60.q = 0
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
            rdi_2 = var_78
        
        var_58 = nullptr
        int32_t var_50_1 = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_58, rbx_1, 0)
            memcpy(var_58, rdi_2, rbx_1 * 2)
        else
            int32_t var_4c_1 = 0
        
        sub_141e14220(arg2, &var_58, 0)
        r14 += 1
        rsi += 1
    while (rsi s< r12)

int64_t result = sub_141e21d10(arg1 + 0x10, arg2)
int64_t rcx_21 = var_78

if (rcx_21 == 0)
    return result

return sub_140a74f90(rcx_21)
