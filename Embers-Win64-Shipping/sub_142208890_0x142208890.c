// 函数: sub_142208890
// 地址: 0x142208890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x60))()
uint64_t result_1 = result

if (result != 0)
    __builtin_memset(&arg1[0x20], 0, 0x30)
    arg1[0x30] = 0x3f800000
    *(arg1 + 0x18c) = *(result + 0x88)
    uint128_t zmm6 = zx.o(0)
    uint32_t rsi_1 = zx.d(*(result_1 + 0xb3))
    char rax_2 = *(result_1 + 0xb2)
    uint128_t zmm7 = 0x3f800000
    int32_t var_48
    uint128_t zmm0
    float zmm3[0x4]
    
    if (rax_2 == 3)
        arg1[0x30].d = 0
        *(arg1 + 0x124) = 0x3f800000
    else if (rsi_1 != 0)
        int128_t* rdx = &data_14399f6e0
        
        if (*(result_1 + 0xb0) != 0)
            rdx = arg2 + 0x80
        
        int32_t var_58
        zmm6, zmm7 = sub_1421e0780(rsi_1, rdx, &var_48, &var_58)
        int32_t var_3c_1 = 0x3f800000
        int32_t var_4c_1 = 0x3f800000
        zmm3 = var_58.o
        zmm3[0] = var_58.d
        zmm0 = var_48
        float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        int32_t var_54
        temp0_1[0] = var_54[0]
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        int32_t var_50
        temp0_2[0] = var_50.d
        *(arg1 + 0x100) = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        *(arg1 + 0x10c) = 0x3f800000
        zmm3 = var_48.o
        zmm3[0] = zmm0.d
        float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        int32_t var_44
        temp0_4[0] = var_44[0]
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
        int32_t var_40
        temp0_5[0] = var_40.d
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
        var_48.o = temp0_6
        *(arg1 + 0x110) = temp0_6
        *(arg1 + 0x11c) = 0x3f800000
        
        if (rsi_1 - 7 u> 2)
            arg1[0x24].d = 0x3f800000
        else
            arg1[0x25].d = 0x3f800000
        
        if (rsi_1 != 9)
            zmm0 = zx.o(0)
        else
            zmm0 = 0x3fc90fdb
        
        *(arg1 + 0x184) = zmm0.d
    else if (rax_2 != 0)
        arg1[0x24].d = 0x3f800000
    else
        *(arg1 + 0x12c) = 0x3f800000
    
    if (*(result_1 + 0xc0) == 0)
        zmm0 = zx.o(0)
    else
        zmm0 = zmm7
    
    *(arg1 + 0x16c) = zmm0.d
    float zmm1[0x4]
    uint128_t zmm2
    
    if (*(result_1 + 0xb2) != 6)
        zmm2 = zx.o(0)
        zmm0 = zx.o(0)
    else
        zmm0 = *(result_1 + 0xc8)
        zmm1 = *(result_1 + 0xc4)
        zmm0.d = zmm0.d f* zmm0.d
        *(arg1 + 0x12c) = 0x3f800000
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm0.d = zmm0.d f- zmm1[0]
        zmm2.d = zmm7.d f/ _mm_max_ss(zmm0.d, zmm7.d).d
        zmm0 = zmm7
        zmm6.d = zmm2.d f* zmm1[0]
    
    arg1[0x2c].d = zmm0.d
    zmm1 = zmm7
    *(arg1 + 0x164) = zmm2.d
    arg1[0x2d].d = zmm6.d
    zmm0 = zx.o(*(result_1 + 0xac))
    zmm2 = _mm_cvtepi32_ps(zx.o(*(result_1 + 0xa8)))
    zmm0 = _mm_cvtepi32_ps(zmm0)
    zmm1[0] = zmm1[0] f/ zmm2.d
    _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    zmm2.d = zmm0.d
    zmm7.d = zmm7.d f/ zmm0.d
    _mm_shuffle_ps(zmm2, zmm2, 0xc6)
    zmm2.d = zmm1[0]
    _mm_shuffle_ps(zmm2, zmm2, 0x27)
    zmm2.d = zmm7.d
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
    *(arg1 + 0x150) = zmm2
    result = zx.q(*(result_1 + 0xb5))
    var_48.o = zmm2
    int32_t var_3c_2 = 0x3f800000
    zmm3 = var_48.o
    arg1[0x31].d = _mm_cvtepi32_ps(zx.o(result.d)).d
    zmm0 = data_143dbb200
    zmm2 = data_143dbb1fc
    zmm3[0] = data_143dbb1f8[0]
    float temp0_15[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_15[0] = zmm2.d
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
    temp0_16[0] = zmm0.d
    zmm0 = data_142d5beb0
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
    var_48.o = temp0_17
    *(arg1 + 0x130) = temp0_17
    *(arg1 + 0x140) = zmm0
    
    if (result.b != 0)
        zmm2 = *(result_1 + 0x74)
        zmm3 = *(result_1 + 0x78)
        int32_t var_3c_3 = 0x3f800000
        float zmm4_1[0x4] = var_48.o
        zmm4_1[0] = (*(result_1 + 0x70))[0]
        float temp0_18[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
        temp0_18[0] = zmm2.d
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
        temp0_19[0] = zmm3[0]
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
        var_48.o = temp0_20
        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0xaa), *(arg2 + 0xa0))
        float temp0_24[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0x55), *(arg2 + 0x90))
        zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0xff), *(arg2 + 0xb0))
        float temp0_28[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0), *(arg2 + 0x80))
        *(arg1 + 0x130) = _mm_add_ps(_mm_add_ps(zmm2, zmm0), _mm_add_ps(temp0_24, temp0_28))
        
        if (result.b == 2)
            zmm2 = *(result_1 + 0x80)
            zmm3 = *(result_1 + 0x84)
            int32_t var_3c_4 = 0
            zmm4_1 = var_48.o
            zmm4_1[0] = (*(result_1 + 0x7c))[0]
            float temp0_32[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
            temp0_32[0] = zmm2.d
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
            temp0_33[0] = zmm3[0]
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_34, temp0_34, 0xaa), *(arg2 + 0xa0))
            float temp0_38[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_34, temp0_34, 0), *(arg2 + 0x80))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_34, temp0_34, 0xff), *(arg2 + 0xb0))
            float temp0_42[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_34, temp0_34, 0x55), *(arg2 + 0x90))
            *(arg1 + 0x140) = _mm_add_ps(_mm_add_ps(zmm2, zmm0), _mm_add_ps(temp0_38, temp0_42))
    
    arg1[0x32] = *(result_1 + 0xb8)

return result
