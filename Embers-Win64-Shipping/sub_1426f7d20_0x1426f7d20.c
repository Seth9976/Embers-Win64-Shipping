// 函数: sub_1426f7d20
// 地址: 0x1426f7d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm2
zmm2.o = 0x3b808081
uint32_t rax_1 = zx.d(data_14399f640:1.b)
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(data_14399f640:2.b)).d f* 0.00392156886f
int32_t var_48 = zmm0.d
uint32_t rax_2 = zx.d(data_14399f640.b)
zmm0 = _mm_cvtepi32_ps(zx.o(rax_1))
uint32_t rax_3 = zx.d(data_14399f640:3.b)
zmm0.d = zmm0.d f* 0.00392156886f
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_2))
int32_t var_44 = zmm0.d
int64_t rax_4 = *(arg2 + 0x98)
zmm1.d = zmm1.d f* 0.00392156886f
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* 0.00392156886f
int32_t var_40 = zmm1.d
int32_t var_3c = zmm0.d
(*(rax_4 + 0x20))(arg2 + 0x98, &var_48, zmm2)
int32_t arg_8 = 0
int64_t* rax_5 = sub_142702210(arg1, &var_48)
int16_t* const rsi = &data_142d40450
int16_t* const r8

if (rax_5[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_5

int16_t* var_38
sub_140a2e390(&var_38, u"  Move status: %s", r8)
uint64_t result = sub_142409af0(arg2 + 0x98, &var_38, &arg_8)
int16_t* rcx_4 = var_38

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = var_48.q

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

if (*(arg1 + 0x1b8) == 3)
    void* rax_6 = *(arg1 + 0x100)
    
    if (rax_6 != 0)
        *(rax_6 + 0x98)
        *(rax_6 + 0x30)
    
    void* rax_7 = sub_140d3c6e0(arg1 + 0x138)
    
    if (rax_7 != 0)
        arg_8.q = *(rax_7 + 0x18)
        sub_140b63b70(&arg_8, &var_48)
    else
        var_48.q = rax_7
        var_40.q = rax_7
        sub_1405947f0(&var_48, 5)
        int32_t rax_8 = var_40 + 5
        var_40 = rax_8
        
        if (rax_8 s> var_3c)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48.q, u"None", 0xa)
    
    int16_t* const rbx_1 = &data_142d40450
    
    if (var_40 != 0)
        rbx_1 = var_48.q
    
    int32_t var_58
    sub_141e912d0(arg1 + 0x148, &var_58)
    float zmm2_1[0x2] = var_58
    int32_t var_54
    _mm_cvtps_pd(var_54)
    float temp0_5[0x2] = _mm_cvtps_pd(zmm2_1)
    int32_t var_50
    float var_68_1[0x2] = _mm_cvtps_pd(var_50)
    sub_140a2e390(&var_38, u"X=%3.3f Y=%3.3f Z=%3.3f", temp0_5)
    int16_t* const rax_10 = &data_142d40450
    int16_t* const var_60_1 = rbx_1
    int32_t var_30
    
    if (var_30 != 0)
        rax_10 = var_38
    
    int16_t* const var_68_2 = rax_10
    int64_t var_28
    sub_140a2e390(&var_28, u"  Move target [%d/%d]: %s (%s)", zx.q(*(arg1 + 0x1e4)))
    int16_t* rcx_15 = var_38
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t rcx_16 = var_48.q
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    arg_8 = 0
    int64_t* rax_11 = sub_142702210(arg1, &var_48)
    
    if (rax_11[1].d != 0)
        rsi = *rax_11
    
    sub_140a2e390(&var_38, u"  Move status: %s", rsi)
    result = sub_142409af0(arg2 + 0x98, &var_38, &arg_8)
    int16_t* rcx_20 = var_38
    
    if (rcx_20 != 0)
        result = sub_140a74f90(rcx_20)
    
    int64_t rcx_21 = var_48.q
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = var_28
    
    if (rcx_22 != 0)
        return sub_140a74f90(rcx_22)

return result
