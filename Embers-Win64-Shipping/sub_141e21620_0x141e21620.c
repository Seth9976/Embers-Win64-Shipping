// 函数: sub_141e21620
// 地址: 0x141e21620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi

if (arg2[4].d == 0)
    rdi = &data_142d40450
else
    rdi = arg2[3]

int64_t arg_8 = *(sub_142468580() + 0x18)
int16_t* var_68
sub_140b63b70(&arg_8, &var_68)
float zmm0[0x2] = *arg2
int16_t* const r8 = &data_142d40450
zmm0[0] = zmm0[0] * 100f
int16_t* const var_78 = rdi
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

int64_t var_38
int64_t* rax_3 = sub_140b63b70(sx.q(*(arg1 + 0x1c)) * 0x58 + *(*(arg1 + 0x28) + 0x10), &var_38)

if (rax_3[1].d != 0)
    *rax_3

int64_t var_48
int64_t* rax_4 = sub_140b63b70(*(arg1 + 0x28), &var_48)
int16_t* const r8_1

if (rax_4[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_4

sub_140a2e390(&var_68, u"(%s->%s)", r8_1)
int32_t r8_3

if (var_60 == 0)
    r8_3 = 0
else
    r8_3 = var_60 - 1

sub_140a20ba0(&var_58, var_68, r8_3)
int16_t* rcx_10 = var_68

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = var_48

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rdi_1 = var_58
var_68 = nullptr
int32_t var_50
int32_t var_60_1 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_68, var_50, 0)
    memcpy(var_68, rdi_1, var_50 * 2)
else
    int32_t var_5c_1 = 0

int64_t result = sub_141e14220(arg2, &var_68, 0)
int32_t i = 0

if (*(arg1 + 0x48) s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rax_7 = sub_140b63b70(sx.q(i) * 0x58 + *(*(arg1 + 0x28) + 0x10), &var_38)
        int16_t* const r8_6
        
        if (rax_7[1].d == 0)
            r8_6 = &data_142d40450
        else
            r8_6 = *rax_7
        
        sub_140a2e390(&var_48, u"(State: %s)", r8_6)
        int64_t rcx_19 = var_38
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t r15_1 = var_48
        var_68 = nullptr
        int32_t var_40
        int32_t var_60_2 = var_40
        
        if (var_40 != 0)
            sub_1405a4c70(&var_68, var_40, 0)
            memcpy(var_68, r15_1, var_40 * 2)
        else
            int32_t var_5c_2 = 0
        
        int64_t rbx_3 = *(arg1 + 0x40)
        result = UnDecorator::getTemplateArgumentList(arg2, sub_141e24b90(arg1, i), &var_68)
        int64_t* rcx_24 = *(r14_1 + rbx_3 + 8)
        
        if (rcx_24 != 0)
            int64_t r8_10 = *rcx_24
            result = (*(r8_10 + 0x30))(rcx_24, result, r8_10)
        
        int64_t rcx_25 = var_48
        
        if (rcx_25 != 0)
            result = sub_140a74f90(rcx_25)
        
        i += 1
        r14_1 += 0x10
    while (i s< *(arg1 + 0x48))

int64_t rcx_26 = var_58

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26)
