// 函数: sub_141f53f70
// 地址: 0x141f53f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
float zmm6[0x4]
float var_28[0x4] = zmm6
int128_t zmm9 = zx.o(0)
int64_t r15 = sx.q(arg3)
int64_t var_b8
int32_t var_b0
float zmm0[0x4]

if (arg4 != 1)
    result = zx.q(*(arg2 + 8))
    var_b8 = *arg2
    var_b0 = result.d
else
    zmm6 = *(arg1 + 0x1e0)
    zmm0 = *(arg2 + 8)
    uint128_t zmm2 = _mm_unpacklo_ps(*(arg2 + 4), 0)
    float temp0_2[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f3b980)
    float temp0_5[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), zmm2.q), *(arg1 + 0x1d0))
    float temp0_6[0x4] = _mm_rcp_ps(zmm6)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    float zmm8[0x4] = __andps_xmmxud_memxud(temp0_5, data_143f3b880)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_9)
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_7)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
    float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
    float temp0_16[0x4] = _mm_mul_ps(temp0_6, temp0_6)
    float temp0_17[0x4] = _mm_add_ps(temp0_6, temp0_6)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm6)
    float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
    float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
    zmm2 = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_7)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
    float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0_21)
    float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
    float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm6)
    float temp0_29[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f3b860), data_143f3b970, 2)
    float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_27)
    zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9))
    zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
    zmm2 = _mm_mul_ps(_mm_add_ps(zmm2, temp0_24), zmm6)
    var_b8.d = zmm2.d
    float temp0_37[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    var_b0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    var_b8:4.d = temp0_37[0]

if (arg3 s>= 0)
    int32_t r13_1 = arg1[0x82].d
    
    if (r15.d s<= r13_1)
        if (arg3 != 0)
            zmm9.d = (*(r15 * 0x2c + arg1[0x81] - 0x2c)).d f+ 1f
        
        int64_t var_a4_1 = var_b8
        zmm0 = zx.o(data_143dbb1f8.q)
        int32_t var_9c_1 = var_b0
        int32_t rax_2 = data_143dbb200
        int64_t var_98_1 = zmm0.q
        int64_t var_8c_1 = zmm0.q
        int32_t var_a8 = zmm9.d
        int32_t var_90_1 = rax_2
        int32_t var_84_1 = rax_2
        char var_80_1 = 1
        sub_141f6c460(&arg1[0x81], &var_a8, r15.d)
        int128_t zmm0_1 = data_14399f720
        var_98_1.o = zmm0_1
        var_8c_1:4.o = zmm0_1
        int128_t var_78_1 = zmm0_1
        var_a8 = zmm9.d
        char var_68_1 = 1
        sub_141f6c3b0(&arg1[0x84], &var_a8, r15.d)
        int64_t var_a4_2 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
        int64_t zmm0_2 = data_143dbb1f8.q
        int32_t var_9c_2 = 0x3f800000
        int32_t rax_3 = data_143dbb200
        int64_t var_98_2 = zmm0_2
        int64_t var_8c_2 = zmm0_2
        var_a8 = zmm9.d
        int32_t var_90_2 = rax_3
        int32_t var_84_2 = rax_3
        char var_80_2 = 1
        sub_141f6c460(&arg1[0x87], &var_a8, r15.d)
        int64_t* rax_5 = (*(*arg1 + 0x868))(arg1)
        
        if (rax_5 != 0)
            (*(*rax_5 + 0x260))(rax_5, zx.q(int.d(zmm9.d)), _mm_cvtepi32_ps(zx.o(r15.d)), 
                zx.q(*(arg1 + 0x4e1)), var_b8, 0x3f800000)
        
        int64_t r10_1 = sx.q((r15 + 1).d)
        result = zx.q(r13_1 + 1)
        int64_t r8_4 = sx.q(result.d)
        
        if (r10_1 s< r8_4)
            result = r8_4 - r10_1
            
            if (result s>= 4)
                int64_t rdx_5 = r10_1 * 0x50
                float* rcx_6 = r10_1 * 0x2c
                int64_t i_3 = ((r8_4 - r10_1 - 4) u>> 2) + 1
                r10_1 += i_3 << 2
                int64_t i
                
                do
                    int32_t* rax_8 = arg1[0x81]
                    *(rax_8 + rcx_6) = *(rax_8 + rcx_6) + 1f
                    int32_t* rax_9 = arg1[0x84]
                    *(rax_9 + rdx_5) = *(rax_9 + rdx_5) + 1f
                    int64_t rax_10 = arg1[0x87]
                    *(rcx_6 + rax_10) = *(rcx_6 + rax_10) + 1f
                    int64_t rax_11 = arg1[0x81]
                    *(rax_11 + rcx_6 + 0x2c) = *(rax_11 + rcx_6 + 0x2c) + 1f
                    int64_t rax_12 = arg1[0x84]
                    *(rax_12 + rdx_5 + 0x50) = *(rax_12 + rdx_5 + 0x50) + 1f
                    int64_t rax_13 = arg1[0x87]
                    *(rcx_6 + rax_13 + 0x2c) = *(rcx_6 + rax_13 + 0x2c) + 1f
                    int64_t rax_14 = arg1[0x81]
                    *(rcx_6 + rax_14 + 0x58) = *(rcx_6 + rax_14 + 0x58) + 1f
                    int64_t rax_15 = arg1[0x84]
                    *(rax_15 + rdx_5 + 0xa0) = *(rax_15 + rdx_5 + 0xa0) + 1f
                    int64_t rax_16 = arg1[0x87]
                    *(rcx_6 + rax_16 + 0x58) = *(rcx_6 + rax_16 + 0x58) + 1f
                    int64_t rax_17 = arg1[0x81]
                    *(rcx_6 + rax_17 + 0x84) = *(rcx_6 + rax_17 + 0x84) + 1f
                    int64_t rax_18 = arg1[0x84]
                    *(rax_18 + rdx_5 + 0xf0) = *(rax_18 + rdx_5 + 0xf0) + 1f
                    rdx_5 += 0x140
                    result = arg1[0x87]
                    *(rcx_6 + result + 0x84) = *(rcx_6 + result + 0x84) + 1f
                    rcx_6 = &rcx_6[0x2c]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            if (r10_1 s< r8_4)
                int64_t rdx_7 = r10_1 * 0x50
                int32_t* rcx_7 = r10_1 * 0x2c
                int64_t i_2 = r8_4 - r10_1
                int64_t i_1
                
                do
                    int64_t rax_19 = arg1[0x81]
                    *(rcx_7 + rax_19) = *(rcx_7 + rax_19) + 1f
                    float* rax_20 = arg1[0x84]
                    *(rax_20 + rdx_7) = *(rax_20 + rdx_7) + 1f
                    rdx_7 += 0x50
                    result = arg1[0x87]
                    *(rcx_7 + result) = *(rcx_7 + result) + 1f
                    rcx_7 = &rcx_7[0xb]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
        
        if (*(arg1 + 0x4e2) != 0)
            *(arg1 + 0x4e4) = *(arg1 + 0x4e4) + 1f

if (arg5 == 0)
    return result

return sub_141f77550(arg1)
