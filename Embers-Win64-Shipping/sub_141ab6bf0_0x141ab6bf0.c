// 函数: sub_141ab6bf0
// 地址: 0x141ab6bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450
int16_t* const r15

if (arg2[4].d == 0)
    r15 = &data_142d40450
else
    r15 = arg2[3]

int64_t arg_8 = *(sub_141ae2140() + 0x18)
int16_t* var_78
sub_140b63b70(&arg_8, &var_78)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_98 = r15
int32_t var_70

if (var_70 != 0)
    r8 = var_78

_mm_cvtps_pd(zmm0)
int64_t var_88
sub_140a2e390(&var_88, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_78

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

sub_140a20b00(&var_88, U"(", 1)
float zmm0_1[0x2] = *(arg1 + 0x24)
zmm0_1[0] = zmm0_1[0] * 100f
sub_140a2e390(&var_78, u"Alpha: %.1f%%", _mm_cvtps_pd(zmm0_1))
int32_t r8_3

if (var_70 == 0)
    r8_3 = 0
else
    r8_3 = var_70 - 1

sub_140a20ba0(&var_88, var_78, r8_3)
int16_t* rcx_8 = var_78

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

bool cond:7

if (*(arg1 + 0xe0) == 0)
    cond:7 = (*(arg1 + 0xec) & 0x7fffffff) != 0x7fffffff
else
    cond:7 = *(arg1 + 0x138) != 0xffffffff

float zmm3[0x2] = *(arg1 + 0x1a8)
int32_t rax_1
rax_1.b = cond:7
float zmm2[0x2] = *(arg1 + 0x1a4)
float zmm0_2[0x2] = _mm_cvtps_pd(*(arg1 + 0x1ac))
_mm_cvtps_pd(zmm3)
float var_98_1[0x2] = zmm0_2
zmm2 = _mm_cvtps_pd(zmm2)
int16_t* rcx_27
int16_t* var_68
int16_t* var_58
int32_t var_50
int64_t var_38

if (rax_1.b == 0)
    sub_140a2e390(&var_78, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
    zmm2 = *(arg1 + 0x140)
    float zmm0_4[0x2] = *(arg1 + 0x148)
    int16_t* rsi_1 = &data_142d40450
    _mm_cvtps_pd(*(arg1 + 0x144))
    
    if (var_70 != 0)
        rsi_1 = var_78
    
    zmm2 = _mm_cvtps_pd(zmm2)
    float var_98_4[0x2] = _mm_cvtps_pd(zmm0_4)
    sub_140a2e390(&var_68, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
    int64_t* rax_6 = sub_140b63b70(arg1 + 0xc8, &var_38)
    
    if (rax_6[1].d != 0)
        rdi = *rax_6
    
    int16_t* var_98_5 = rsi_1
    sub_140a2e390(&var_58, u" Bone: %s, Look At Location : %s, Target Location : %s)", rdi)
    int32_t r8_12
    
    if (var_50 == 0)
        r8_12 = 0
    else
        r8_12 = var_50 - 1
    
    sub_140a20ba0(&var_88, var_58, r8_12)
    int16_t* rcx_24 = var_58
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t rcx_25 = var_38
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    int16_t* rcx_26 = var_68
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    rcx_27 = var_78
else
    sub_140a2e390(&var_58, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
    zmm2 = *(arg1 + 0x140)
    float zmm0_3[0x2] = *(arg1 + 0x148)
    int16_t* const r15_1 = &data_142d40450
    _mm_cvtps_pd(*(arg1 + 0x144))
    
    if (var_50 != 0)
        r15_1 = var_58
    
    zmm2 = _mm_cvtps_pd(zmm2)
    float var_98_2[0x2] = _mm_cvtps_pd(zmm0_3)
    sub_140a2e390(&var_68, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
    int16_t* const r12_1 = &data_142d40450
    int32_t var_60
    
    if (var_60 != 0)
        r12_1 = var_68
    
    int64_t rax_3
    
    if (*(arg1 + 0xe0) == 0)
        rax_3 = *(arg1 + 0xe4)
    else
        rax_3 = *(arg1 + 0x130)
    
    arg_8 = rax_3
    int64_t* rax_4 = sub_140b63b70(&arg_8, &var_38)
    
    if (rax_4[1].d != 0)
        *rax_4
    
    int64_t var_48
    int64_t* rax_5 = sub_140b63b70(arg1 + 0xc8, &var_48)
    
    if (rax_5[1].d != 0)
        rdi = *rax_5
    
    int16_t* const var_90_1 = r15_1
    int16_t* const var_98_3 = r12_1
    sub_140a2e390(&var_78, 
        Bone: %s, Look At Target: %s, Look At Location: %s, Target Location : %s)", rdi)
    int32_t r8_8
    
    if (var_70 == 0)
        r8_8 = 0
    else
        r8_8 = var_70 - 1
    
    sub_140a20ba0(&var_88, var_78, r8_8)
    int16_t* rcx_15 = var_78
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t rcx_16 = var_48
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = var_38
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int16_t* rcx_18 = var_68
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    rcx_27 = var_58

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t rsi_2 = var_88
var_78 = nullptr
int32_t var_80
int32_t var_70_1 = var_80

if (var_80 != 0)
    sub_1405a4c70(&var_78, var_80, 0)
    memcpy(var_78, rsi_2, var_80 * 2)
else
    int32_t var_6c_1 = var_80

sub_141e14220(arg2, &var_78, 0)
int64_t result = sub_141e21d10(arg1 + 0x10, arg2)
int64_t rcx_32 = var_88

if (rcx_32 == 0)
    return result

return sub_140a74f90(rcx_32)
