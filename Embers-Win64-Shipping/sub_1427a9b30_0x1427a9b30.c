// 函数: sub_1427a9b30
// 地址: 0x1427a9b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg4
char* result
int32_t r8_1
int32_t r9
result, r8_1, r9 = sub_1427a6ad0(arg2, arg3, arg4)

if (result != 0)
    uint128_t* rcx_1 = *(arg1 + 0x188)
    int32_t rdx_1 = *(arg1 + 0x174)
    uint64_t var_e8 = *(arg1 + 0x16c)
    uint128_t zmm10 = var_e8.d
    uint128_t zmm11 = var_e8:4.d
    float zmm12[0x4] = rdx_1
    uint128_t zmm0_1
    
    if (rcx_1 != 0)
        zmm0_1 = *rcx_1
        zmm10.d = zmm10.d f* zmm0_1.d
        zmm11.d = zmm11.d f* zmm0_1.d
        zmm12[0] = zmm12[0] f* zmm0_1.d
    
    uint128_t zmm2 = *(arg1 + 0x178)
    float zmm6[0x4] = *(arg1 + 0xa0)
    uint128_t zmm1
    zmm1.d = zmm2.d f* *(arg1 + 0x160)
    zmm0_1 = zmm2
    int32_t var_9c_1 = 0x3f800000
    zmm2.d = zmm2.d f* *(arg1 + 0x168)
    int64_t var_98_1 = 0
    zmm0_1.d = zmm0_1.d f* *(arg1 + 0x164)
    zmm1.d = zmm1.d f+ zmm10.d
    int32_t var_90_1 = 0
    float var_a8[0x4]
    float zmm3[0x4] = var_a8
    zmm2.d = zmm2.d f+ zmm12[0]
    float zmm5[0x4] = *(arg1 + 0x90)
    float zmm4[0x4] = *(arg1 + 0x80)
    zmm0_1.d = zmm0_1.d f+ zmm11.d
    uint128_t zmm8 = 0x3f800000
    zmm3[0] = zmm1.d
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    int64_t var_b8 = 0
    int32_t var_b0_1 = 0
    temp0_1[0] = zmm0_1.d
    var_b8 = 0
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2.d
    int32_t var_b0_2 = 0
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    var_a8 = temp0_3
    zmm2 = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0), zmm4)
    int32_t var_9c_2 = 0x3f800000
    zmm1 = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
    zmm0_1 = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
    zmm1 = _mm_mul_ps(zmm1, zmm6)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm5)
    float temp0_11[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(arg1 + 0xb0))
    var_98_1.o = _mm_add_ps(_mm_add_ps(zmm2, zmm0_1), _mm_add_ps(zmm1, temp0_11))
    zmm2.d = zmm10.d
    _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    zmm2.d = zmm11.d
    _mm_shuffle_ps(zmm2, zmm2, 0xc6)
    zmm2.d = zmm12[0]
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
    var_a8 = zmm2
    zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(arg1 + 0xb0))
    int32_t var_9c_3 = 0x3f800000
    zmm3 = var_a8
    zmm10 = _mm_mul_ps(zmm10, zmm4)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm5)
    zmm1 = _mm_mul_ps(zmm1, zmm6)
    zmm10 = _mm_add_ps(zmm10, zmm0_1)
    zmm3[0] = data_143dbb1f8.d
    zmm1 = _mm_add_ps(zmm1, zmm2)
    float temp0_28[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    zmm2 = data_143dbb200
    zmm10 = _mm_add_ps(zmm10, zmm1)
    zmm1 = data_143dbb1fc
    var_e8.d = zmm10.d
    zmm11 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
    zmm12 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
    var_e8:4.d = zmm11.d
    float var_e0_2 = zmm12[0]
    bool cond:0_1 = *(arg1 + 0x190) == 0
    temp0_28[0] = zmm1.d
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc6)
    temp0_32[0] = zmm2.d
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
    var_a8 = temp0_33
    zmm2 = _mm_shuffle_ps(temp0_33, temp0_33, 0)
    zmm0_1 = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
    zmm1 = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
    zmm2 = _mm_mul_ps(zmm2, zmm4)
    float temp0_39[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_33, temp0_33, 0xff), *(arg1 + 0xb0))
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm5)
    zmm1 = _mm_mul_ps(zmm1, zmm6)
    zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0_1), _mm_add_ps(zmm1, temp0_39))
    int32_t var_d8 = zmm2.d
    zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float var_d4_1 = zmm3[0]
    float var_d0_1 = zmm4[0]
    
    if (not(cond:0_1) && *(arg1 + 0x181) != 0)
        zmm0_1 = sub_1427a22c0(result, &var_e8, r8_1, r9)
        zmm8 = zmm0_1
        **(arg1 + 0x190) = zmm0_1.d
        zmm12 = var_e0_2
        zmm11 = var_e8:4.d
        zmm10 = var_e8.d
        zmm4 = var_d0_1
        zmm3 = var_d4_1
        zmm2 = var_d8
    
    zmm5 = var_90_1
    result = *(arg1 + 0x198)
    zmm1.d = zmm10.d f- zmm2.d
    zmm5[0] = zmm5[0] - zmm12[0]
    zmm0_1.d = zmm11.d f- zmm3[0]
    zmm1.d = zmm1.d f* zmm8.d
    zmm0_1.d = zmm0_1.d f* zmm8.d
    zmm1.d = zmm1.d f+ zmm2.d
    zmm2 = zmm8 ^ data_142d3f780
    zmm0_1.d = zmm0_1.d f+ zmm3[0]
    zmm3 = var_98_1.d
    zmm3[0] = zmm3[0] f- zmm10.d
    int32_t var_c8 = zmm1.d
    zmm1.d = zmm12.d f- zmm4[0]
    int32_t var_c4_1 = zmm0_1.d
    zmm0_1.d = zmm2.d f* zmm3[0]
    zmm3[0] = zmm3[0] f* zmm8.d
    zmm1.d = zmm1.d f* zmm8.d
    zmm0_1.d = zmm0_1.d f+ zmm10.d
    zmm10.d = zmm10.d f+ zmm3[0]
    zmm1.d = zmm1.d f+ zmm4[0]
    zmm4 = var_98_1:4.d
    var_a8[0] = zmm0_1.d
    zmm4[0] = zmm4[0] f- zmm11.d
    var_b8.d = zmm10.d
    int32_t var_c0_1 = zmm1.d
    zmm1.d = zmm2.d f* zmm4[0]
    zmm2.d = zmm2.d f* zmm5[0]
    zmm4[0] = zmm4[0] f* zmm8.d
    zmm1.d = zmm1.d f+ zmm11.d
    zmm5[0] = zmm5[0] f* zmm8.d
    zmm2.d = zmm2.d f+ zmm12[0]
    zmm11.d = zmm11.d f+ zmm4[0]
    var_a8[1] = zmm1.d
    zmm12[0] = zmm12[0] + zmm5[0]
    var_a8[2] = zmm2.d
    var_b8:4.d = zmm11.d
    float var_b0_3 = zmm12[0]
    
    if (result == 0 || *result != 1)
        zmm6 = *(arg1 + 0x17c)
    else
        zmm6 = *(arg1 + 0x184)
        zmm6[0] = zmm6[0] f* *(arg1 + 0x17c)
    
    int32_t i = 0
    
    if (arg2[1].d s> 0)
        int32_t rsi_1 = 1
        int64_t r12_1 = 0
        
        do
            if ((rbx & rsi_1) != 0)
                int64_t* rcx_4 = arg5 + 0x50
                int64_t* rax_2 = rcx_4[2]
                
                if (rax_2 != 0)
                    rcx_4 = rax_2
                
                int64_t* rdi_1 = *(rcx_4 + r12_1)
                (*(*rdi_1 + 0x30))(rdi_1, &var_d8, &var_c8, arg1 + 0x150, 1, zmm6[0], 0, 1)
                zmm0_1.d = zmm6.d f+ zmm6[0]
                result =
                    (*(*rdi_1 + 0x30))(rdi_1, &var_a8, &var_b8, arg1 + 0x150, 1, zmm0_1.d, 0, 1)
                rbx = arg4
            
            i += 1
            rsi_1 = rol.d(rsi_1, 1)
            r12_1 += 8
        while (i s< arg2[1].d)

return result
