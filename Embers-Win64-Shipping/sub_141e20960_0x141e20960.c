// 函数: sub_141e20960
// 地址: 0x141e20960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int16_t* const r15

if (arg2[4].d == 0)
    r15 = &data_142d40450
else
    r15 = arg2[3]

int64_t arg_8 = *(sub_1424682e0() + 0x18)
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
int64_t var_38
sub_140a2e390(&var_38, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_48

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

char rbx_1 = *(arg1 + 0x39)
int16_t* rcx_15
int16_t* var_28
int32_t var_20

if (9.99999975e-05f f>= *(arg1 + 0x40))
    sub_140bdece0(sub_142464870(), &arg_8, zx.q(rbx_1))
    sub_140b63b70(&arg_8, &var_48)
    float zmm3_2[0x2] = *(arg1 + 0x3c)
    float zmm1_1[0x2] = *(arg1 + 0x40)
    float zmm0_2[0x2] = _mm_cvtps_pd(*(arg1 + 0x44))
    
    if (var_40 != 0)
        rsi = var_48
    
    _mm_cvtps_pd(zmm3_2)
    float var_60_1[0x2] = zmm0_2
    float var_68_2[0x2] = _mm_cvtps_pd(zmm1_1)
    sub_140a2e390(&var_28, u"('%s' Time: %.3f / %.3f [%.3f])", rsi)
    int32_t r8_8
    
    if (var_20 == 0)
        r8_8 = 0
    else
        r8_8 = var_20 - 1
    
    sub_140a20ba0(&var_38, var_28, r8_8)
    int16_t* rcx_14 = var_28
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    rcx_15 = var_48
else
    sub_140bdece0(sub_142464870(), &arg_8, zx.q(rbx_1))
    sub_140b63b70(&arg_8, &var_28)
    float zmm3_1[0x2] = *(arg1 + 0x3c)
    float zmm2_1[0x2] = *(arg1 + 0x40)
    float zmm4_1[0x2] = *(arg1 + 0x44)
    zmm3_1[0] = zmm3_1[0] * 100f
    zmm4_1 = _mm_cvtps_pd(zmm4_1)
    
    if (var_20 != 0)
        rsi = var_28
    
    zmm3_1[0] = zmm3_1[0] / zmm2_1[0]
    float var_58_1[0x2] = zmm4_1
    int64_t temp0_2 = _mm_cvtps_pd(zmm3_1)
    _mm_cvtps_pd(zmm3_1)
    int64_t var_60 = temp0_2
    float var_68_1[0x2] = _mm_cvtps_pd(zmm2_1)
    sub_140a2e390(&var_48, u"('%s' Time: %.3f / %.3f (%.0f%%) [%.3f])", rsi)
    int32_t r8_4
    
    if (var_40 == 0)
        r8_4 = 0
    else
        r8_4 = var_40 - 1
    
    sub_140a20ba0(&var_38, var_48, r8_4)
    int16_t* rcx_9 = var_48
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    rcx_15 = var_28

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rsi_1 = var_38
var_48 = nullptr
int32_t var_30
int32_t var_40_1 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_48, var_30, 0)
    memcpy(var_48, rsi_1, var_30 * 2)
else
    int32_t var_3c_1 = 0

int64_t result = sub_141e14220(arg2, &var_48, 0)
int64_t* rcx_19 = *(arg1 + 0x18)

if (rcx_19 != 0)
    result = (*(*rcx_19 + 0x30))(rcx_19, arg2)

int64_t rcx_20 = var_38

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
