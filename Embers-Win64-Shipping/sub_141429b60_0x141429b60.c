// 函数: sub_141429b60
// 地址: 0x141429b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1

if (arg1 != 0)
    rax_1 = sub_140fbd770(arg1 + 0x12c0)

int32_t result

if (arg1 == 0 || rax_1 == 0 || not(test_bit(arg2, 0x19)))
    *(arg3 + 0xcc0) = data_143dbb1f8.q
    *(arg3 + 0xcc8) = data_143dbb200
    *(arg3 + 0xcd0) = data_143dbb1f8.q
    *(arg3 + 0xcd8) = data_143dbb200
    *(arg3 + 0xce0) = data_143dbb1f8.q
    *(arg3 + 0xce8) = data_143dbb200
    *(arg3 + 0xcec) = 0
    *(arg3 + 0xcf0) = data_143dbb1f8.q
    result = data_143dbb200
else
    void* rcx_2 = *sub_140fbd770(arg1 + 0x12c0)
    int64_t rax_3 = *(rcx_2 + 0x60)
    
    if (rax_3 == 0)
        rax_3 = *(data_143f11348 + 0x10)
        
        if (rax_3 == 0)
            rax_3 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xde8) = rax_3
    int64_t rax_6 = data_143a2faf0
    
    if (rax_6 == 0)
        rax_6 = *(data_143f111a8 + 0x10)
        
        if (rax_6 == 0)
            rax_6 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xdf0) = rax_6
    int64_t rax_9 = data_143a2fb28
    
    if (rax_9 == 0)
        rax_9 = *(data_143f111a8 + 0x10)
        
        if (rax_9 == 0)
            rax_9 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xdf8) = rax_9
    int64_t rax_12 = data_143a2fb60
    
    if (rax_12 == 0)
        rax_12 = *(data_143f111a8 + 0x10)
        
        if (rax_12 == 0)
            rax_12 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xe00) = rax_12
    int64_t rax_15 = data_143a2fb98
    
    if (rax_15 == 0)
        rax_15 = *(data_143f111a8 + 0x10)
        
        if (rax_15 == 0)
            rax_15 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xe08) = rax_15
    int64_t rax_18 = data_143a2fbd0
    
    if (rax_18 == 0)
        rax_18 = *(data_143f111a8 + 0x10)
        
        if (rax_18 == 0)
            rax_18 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xe10) = rax_18
    int64_t rax_21 = data_143a2fc08
    
    if (rax_21 == 0)
        rax_21 = *(data_143f111a8 + 0x10)
        
        if (rax_21 == 0)
            rax_21 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xe18) = rax_21
    int64_t rax_24 = data_143a2fc40
    
    if (rax_24 == 0)
        rax_24 = *(data_143f111a8 + 0x10)
        
        if (rax_24 == 0)
            rax_24 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xe20) = rax_24
    int64_t rax_27 = data_143a2fc78
    
    if (rax_27 == 0)
        rax_27 = *(data_143f111a8 + 0x10)
        
        if (rax_27 == 0)
            rax_27 = *(data_143f10e68 + 0x10)
    
    *(arg3 + 0xe28) = rax_27
    int64_t rax_30 = data_143a2fcb0
    
    if (rax_30 == 0)
        rax_30 = *(data_143f111a8 + 0x10)
        
        if (rax_30 == 0)
            rax_30 = *(data_143f10e68 + 0x10)
    
    uint128_t zmm2 = 0x7f7fc99e
    *(arg3 + 0xe30) = rax_30
    float zmm5[0x4] = *(rcx_2 + 0x10)
    uint128_t zmm4 = zx.o(*(rcx_2 + 0x20))
    uint128_t zmm7 = zx.o(*(rcx_2 + 0x20))
    float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    temp0_1[0] = temp0_1[0] - zmm5[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
    zmm7.d = zmm7.d f- temp0_2[0]
    zmm4.d = zmm4.d f- temp0_4[0]
    uint128_t zmm8
    
    if (temp0_1[0] == 0f)
        zmm8 = 0x7f7fc99e
    else
        zmm8.d = 1f / temp0_1[0]
    
    float zmm6[0x4]
    
    if (zmm7.d f== 0f)
        zmm6 = 0x7f7fc99e
    else
        zmm6 = 0x3f800000
        zmm6[0] = 1f f/ zmm7.d
    
    if (not(zmm4.d f== 0f))
        zmm2.d = 1f f/ zmm4.d
    
    int64_t rax_33 = data_143a2fac0
    uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(data_143a2fac8))
    zmm7 = _mm_cvtepi32_ps(zx.o(rax_33.d))
    zmm4 = _mm_cvtepi32_ps(zx.o((rax_33 u>> 0x20).d))
    int32_t var_a8_1
    uint128_t zmm0
    
    if (zmm7.d f== 0f)
        var_a8_1 = 0x7f7fc99e
    else
        zmm0.d = 1f f/ zmm7.d
        var_a8_1 = zmm0.d
    
    if (zmm4.d f== 0f)
        int32_t var_a4_2 = 0x7f7fc99e
    else
        zmm0.d = 1f f/ zmm4.d
        int32_t var_a4_1 = zmm0.d
    
    int32_t result_1
    
    if (zmm9.d f== 0f)
        result_1 = 0x7f7fc99e
    else
        uint128_t zmm1
        zmm1.d = 1f f/ zmm9.d
        result_1 = zmm1.d
    
    *(arg3 + 0xcc0) = (_mm_unpacklo_ps(zmm8, zmm6[0].q)).q
    *(arg3 + 0xcc8) = zmm2.d
    temp0_4[0] = temp0_4[0] f* zmm2.d
    zmm5[0] = zmm5[0] f* zmm8.d
    temp0_2[0] = temp0_2[0] * zmm6[0]
    float var_90_2 = (temp0_4 ^ 0x80000000)[0]
    *(arg3 + 0xcd0) = (_mm_unpacklo_ps(zmm5 ^ 0x80000000, (temp0_2 ^ 0x80000000)[0].q)).q
    *(arg3 + 0xcd8) = var_90_2
    uint64_t var_98_1 = *(rcx_2 + 0x30)
    int32_t var_90_3 = _mm_cvtepi32_ps(zx.o(*(rcx_2 + 0x38))).d
    *(arg3 + 0xce0) = (_mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(var_98_1.d)), 
        _mm_cvtepi32_ps(zx.o((var_98_1 u>> 0x20).d)).q)).q
    *(arg3 + 0xce8) = var_90_3
    result = result_1
    zmm0 = _mm_cvtepi32_ps(zx.o(*(rcx_2 + 0x78)))
    *(arg3 + 0xcf0) = var_a8_1.q
    *(arg3 + 0xcec) = zmm0.d

*(arg3 + 0xcf8) = result
return result
