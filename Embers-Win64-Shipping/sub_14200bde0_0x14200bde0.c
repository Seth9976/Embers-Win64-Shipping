// 函数: sub_14200bde0
// 地址: 0x14200bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2.d
uint128_t zmm12 = arg2
arg1[8].b = 0
*(arg1 + 0x44) = 0
arg2 = *(arg1 + 0x2c)

if (not(arg2.d f<= 9.99999994e-09f) && not(arg3.d f<= 9.99999994e-09f))
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    int32_t zmm7
    int32_t var_28_1 = zmm7
    int32_t zmm8
    int32_t var_38_1 = zmm8
    uint128_t zmm9
    zmm9.d = zmm12.d f+ *(arg1 + 0x24)
    void* rcx = arg1[0x19]
    zmm9.d = zmm9.d f/ arg2.d
    
    if (rcx != 0)
        zmm9 = sub_141f89240(rcx, zmm9)
    
    uint128_t zmm13 = arg1[0x16].d
    arg1[0x13].d
    uint128_t zmm10 = *(arg1 + 0xb4)
    *(arg1 + 0x9c)
    uint128_t zmm11 = arg1[0x17].d
    arg1[0x14].d
    uint64_t var_b8
    float* rax_1
    float zmm6_1[0x4]
    int32_t zmm7_1
    int32_t zmm8_1
    uint128_t zmm9_1
    rax_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_142006010(arg1, &var_b8, zmm9)
    zmm13.d = zmm13.d f- zmm6_1[0]
    zmm10.d = zmm10.d f- zmm7_1
    zmm11.d = zmm11.d f- zmm8_1
    zmm13.d = zmm13.d f* zmm9_1.d
    zmm10.d = zmm10.d f* zmm9_1.d
    zmm11.d = zmm11.d f* zmm9_1.d
    zmm13.d = zmm13.d f+ zmm6_1[0]
    zmm10.d = zmm10.d f+ zmm7_1
    zmm11.d = zmm11.d f+ zmm8_1
    zmm13.d = zmm13.d f+ *rax_1
    zmm10.d = zmm10.d f+ rax_1[1]
    zmm11.d = zmm11.d f+ rax_1[2]
    void* rax_2 = *(arg4 + 0x130)
    int32_t arg_8 = zmm13.d
    int32_t var_c4_1 = zmm10.d
    int32_t var_c0_1 = zmm11.d
    int32_t var_b0_1
    uint128_t zmm0_2
    
    if (rax_2 == 0)
        int32_t rax_3 = data_143dbb200
        var_b8 = data_143dbb1f8.q
        var_b0_1 = rax_3
    else
        arg2 = *(rax_2 + 0x1d0)
        var_b8.d = arg2.d
        zmm0_2 = _mm_shuffle_ps(arg2, arg2, 0x55)
        var_b0_1 = _mm_shuffle_ps(arg2, arg2, 0xaa).d
        var_b8:4.d = zmm0_2.d
    
    bool cond:1_1 = *(arg1 + 0xbc) == 0
    arg2 = zx.o(var_b8)
    zmm13.d = zmm13.d f- arg2.d
    uint128_t zmm2
    zmm2.d = 1f f/ arg3.d
    uint128_t zmm15
    zmm15.d = zmm11.d f- var_b0_1
    uint128_t zmm14
    zmm14.d = zmm10.d f- _mm_shuffle_ps(arg2, arg2, 0x55).d
    zmm13.d = zmm13.d f* zmm2.d
    var_b8 = arg2.q
    zmm15.d = zmm15.d f* zmm2.d
    zmm14.d = zmm14.d f* zmm2.d
    uint128_t zmm5_1
    
    if (not(cond:1_1))
        if (_mm_and_ps(zmm13, 0x7fffffff).d f> 9.99999975e-05f)
        label_14200c015:
            zmm9_1.d = (*(arg1 + 0x24)).d f/ *(arg1 + 0x2c)
            zmm10 = arg1[0x16].d
            arg1[0x13].d
            zmm11 = *(arg1 + 0xb4)
            *(arg1 + 0x9c)
            zmm12 = arg1[0x17].d
            arg1[0x14].d
            float* rax_5
            int32_t zmm9_2
            rax_5, zmm6_1, zmm7_1, zmm8_1, zmm9_2 = sub_142006010(arg1, &var_b8, zmm9_1)
            float zmm3_1[0x4] = zmm2.d
            zmm11.d = zmm11.d f- zmm6_1[0]
            zmm10.d = zmm10.d f- zmm8_1
            zmm12.d = zmm12.d f- zmm7_1
            zmm11.d = zmm11.d f* zmm9_2
            zmm10.d = zmm10.d f* zmm9_2
            zmm11.d = zmm11.d f+ zmm6_1[0]
            zmm12.d = zmm12.d f* zmm9_2
            zmm10.d = zmm10.d f+ zmm8_1
            zmm12.d = zmm12.d f+ zmm7_1
            zmm11.d = zmm11.d f+ rax_5[1]
            zmm10.d = zmm10.d f+ *rax_5
            zmm12.d = zmm12.d f+ rax_5[2]
            arg2.d = var_c4_1.d f- zmm11.d
            zmm0_2.d = arg_8.d f- zmm10.d
            zmm2.d = var_c0_1.d f- zmm12.d
            arg2.d = arg2.d f* zmm3_1[0]
            zmm0_2.d = zmm0_2.d f* zmm3_1[0]
            zmm2.d = zmm2.d f* zmm3_1[0]
            zmm3_1 = zmm13
            zmm0_2.d = zmm0_2.d f* zmm0_2.d
            zmm2.d = zmm2.d f* zmm2.d
            arg2.d = arg2.d f* arg2.d
            zmm3_1[0] = zmm3_1[0] f* zmm13.d
            zmm0_2.d = zmm0_2.d f+ arg2.d
            arg2.d = zmm15.d f* zmm15.d
            zmm0_2.d = zmm0_2.d f+ zmm2.d
            float temp0_7[0x4] = _mm_sqrt_ss(0, zmm0_2.d)
            zmm0_2.d = zmm14.d f* zmm14.d
            zmm2.d = temp0_7.d f+ 0.5f
            zmm3_1[0] = zmm3_1[0] f+ zmm0_2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm3_1[0] = zmm3_1[0] f+ arg2.d
            
            if (not(zmm3_1[0] f<= zmm2.d))
                if (not(zmm3_1[0] <= 9.99999994e-09f))
                    float zmm4_1[0x4] = 0x3f000000
                    zmm0_2 = zmm3_1
                    zmm3_1 = zmm0_2
                    zmm5_1 = _mm_rsqrt_ss(zmm0_2.d, zmm3_1[0])
                    zmm3_1[0] = zmm3_1[0] * 0.5f
                    zmm0_2.d = zmm5_1.d f* zmm5_1.d
                    arg2.d = zmm3_1.d f* zmm0_2.d
                    zmm2.d = 0.5f f- arg2.d
                    zmm0_2.d = zmm5_1.d f* zmm2.d
                    zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                    arg2.d = zmm5_1.d f* zmm5_1.d
                    zmm3_1[0] = zmm3_1[0] f* arg2.d
                    zmm4_1[0] = 0.5f - zmm3_1[0]
                    zmm0_2.d = zmm5_1.d f* zmm4_1[0]
                    zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                    zmm13.d = zmm13.d f* zmm5_1.d
                    zmm14.d = zmm14.d f* zmm5_1.d
                    zmm15.d = zmm15.d f* zmm5_1.d
                
                zmm13.d = zmm13.d f* temp0_7[0]
                zmm14.d = zmm14.d f* temp0_7[0]
                zmm15.d = zmm15.d f* temp0_7[0]
            
            zmm12 = arg_10
        else
            if (_mm_and_ps(zmm14, 0x7fffffff).d f> 9.99999975e-05f)
                goto label_14200c015
            
            if (not(_mm_and_ps(zmm15, 0x7fffffff).d f<= 9.99999975e-05f))
                goto label_14200c015
    
    zmm5_1 = __andps_xmmxud_memxud(data_143f3f2a0, data_143f3f2b0)
    arg1[8].b = 1
    float temp0_10[0x4] = _mm_unpacklo_ps(zmm13, zmm15.q)
    *(arg1 + 0x70) = zmm5_1
    *(arg1 + 0x60) = _mm_unpacklo_ps(temp0_10, _mm_unpacklo_ps(zmm14, 0).q)
    zmm0_2.q = zx.o(0) u>> 0x40
    *(arg1 + 0x50) = _mm_shuffle_ps(zx.o(0), zmm0_2, 0xc4)
    *(arg1 + 0x70) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143a2d2d0, data_143a2d2d8.q), 
        _mm_unpacklo_ps(data_143a2d2d4, 0).q)
    *(arg1 + 0x44) = 0x3f800000

zmm12.d = zmm12.d f+ *(arg1 + 0x24)
jump(*(*arg1 + 0x38))
