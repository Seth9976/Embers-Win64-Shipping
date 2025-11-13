// 函数: sub_142205360
// 地址: 0x142205360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_1421b7c40(arg2, arg1)
sub_1421f3fd0(arg1, arg2, rax)
uint64_t result = sub_140d3e110(rax)

if (result.b != 0 && rax[0x12] != 0xffffffff)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    result = sub_140d3c6e0(rax)
    char rcx_4 = (*(arg1 + 0x40)).b
    uint64_t result_3 = result
    float result_1
    int128_t zmm9
    uint128_t zmm10
    int128_t zmm11
    
    if ((rcx_4 & 4) != 0)
        if (arg4.d f<= 0f)
            zmm6 = zx.o(0)
        else
            zmm6 = 0x3f800000
            zmm6[0] = 1f f/ arg4.d
        
        int32_t i = 0
        
        if (rax[5] s> 0)
            int32_t* rbx_1 = nullptr
            int64_t r15_1 = 0
            
            do
                result = *(rax + 0x20)
                int32_t r8_1 = *(r15_1 + result)
                
                if (r8_1 != 0xffffffff)
                    float var_108[0x3][0x4]
                    zmm9, zmm10, zmm11 = sub_141f5e2b0(result_3, &var_108, r8_1)
                    int64_t rax_1 = *(rax + 0x30)
                    int32_t var_d0
                    float zmm0_1[0x4] = var_d0
                    int32_t var_d8
                    float zmm2_1[0x4] = var_d8
                    zmm0_1[0] = zmm0_1[0] f- *(rbx_1 + rax_1 + 8)
                    zmm2_1[0] = zmm2_1[0] f- *(rbx_1 + rax_1)
                    int32_t var_d4
                    int64_t zmm1_1
                    zmm1_1.d = var_d4.d f- *(rbx_1 + rax_1 + 4)
                    int64_t* rcx_6 = *(rax + 0x40)
                    zmm0_1[0] = zmm0_1[0] * zmm6[0]
                    zmm2_1[0] = zmm2_1[0] * zmm6[0]
                    result_1 = zmm0_1[0]
                    result = zx.q(result_1)
                    zmm1_1.d = zmm1_1.d f* zmm6[0]
                    *(rcx_6 + rbx_1) = (_mm_unpacklo_ps(zmm2_1, zmm1_1)).q
                    *(rcx_6 + rbx_1 + 8) = result.d
                
                i += 1
                r15_1 += 4
                rbx_1 = &rbx_1[3]
            while (i s< rax[5])
            
            rcx_4 = (*(arg1 + 0x40)).b
    
    if ((rcx_4 & 1) != 0 && arg2[0x1e] != 0)
        int32_t rax_3 = (*(*arg2 + 0x150))(arg2)
        int64_t rbx_2 = sx.q(rax_3)
        char var_198_1
        char rax_4
        
        if (rax_3 s> 0)
            int64_t rdx_3 = *arg2
            rax_4 = (*(rdx_3 + 0x158))(arg2, rdx_3)
            var_198_1 = 1
        
        if (rax_3 s<= 0 || rax_4 == 0)
            var_198_1 = 0
        
        void* rax_5 = arg2[3]
        int128_t* var_160_1
        uint32_t rax_6
        
        if ((*(rax_5 + 0x433) & 8) == 0 && data_143de5480 != 0)
            var_160_1 = 0x620
            rax_6.b = GetCurrentThreadId() == data_143de5470
        
        if ((*(rax_5 + 0x433) & 8) != 0 || data_143de5480 == 0 || rax_6.b != 0)
            var_160_1 = 0x1c0
        
        void* rax_7 = sub_1421b85d0(arg1, arg2)
        int32_t rcx_10 = arg2[0x23].d
        int64_t rdx_5 = arg2[0x1e]
        int32_t r8_2 = *(arg2 + 0x114)
        result = arg2[0x1f]
        int64_t rsi_1 = sx.q(rcx_10 - 1)
        int64_t var_178_1 = rdx_5
        int32_t var_194_1 = r8_2
        uint64_t result_2 = result
        
        if (rcx_10 - 1 s>= 0)
            int128_t var_68_1 = zmm9
            uint128_t var_78_1 = zmm10
            int128_t var_88_1 = zmm11
            int64_t temp1_1
            
            do
                void* rbx_5 = zx.q(zx.d(*(result + (rsi_1 << 1))) * r8_2) + rdx_5
                
                if ((*(rbx_5 + 0x5c) & 0x4000000) == 0)
                    int64_t var_170
                    float var_128[0x4]
                    char rax_10
                    int32_t zmm7_1
                    int32_t zmm8_1
                    int64_t zmm12_1
                    int32_t zmm13_1
                    uint128_t zmm14_1
                    int32_t zmm15_1
                    rax_10, zmm7_1, zmm8_1, zmm9, zmm10, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                        sub_1421f2bb0(arg1, arg2, rax, result_3, *(sx.q(arg3) + rbx_5), &var_170, 
                        &var_128, 0)
                    
                    if (rax_10 == 1)
                        *(rbx_5 + 0x10) = var_170
                        *(rbx_5 + 0x18) = result_1
                        
                        if (_finite(_mm_cvtps_pd((*(rbx_5 + 0x10)).q).q) != 0
                                && _finite(_mm_cvtps_pd((*(rbx_5 + 0x14)).q).q) != 0)
                            _finite(_mm_cvtps_pd((*(rbx_5 + 0x18)).q).q)
                        
                        if (var_198_1 != 0)
                            if ((*(arg1 + 0x40) & 2) != 0)
                                float zmm5_1[0x4] = data_14399f678.d
                                zmm6 = data_14399f678:4.d
                                zmm11 = data_14399f680
                                int32_t rax_15 = *(rax_7 + 4) * 0xbb38435 + 0x3619636b
                                *(rax_7 + 4) = rax_15
                                float zmm3[0x4] = rax_15 u>> 9 | 0x3f800000
                                zmm3[0] = zmm3[0] f- zmm7_1
                                zmm3[0] = zmm3[0] f* zmm10.d
                                uint128_t zmm0_2
                                zmm0_2.d = zmm3.d f* 0.159154937f
                                
                                if (zmm3[0] f< zmm12_1.d)
                                    zmm0_2.d = zmm0_2.d f- zmm8_1
                                else
                                    zmm0_2.d = zmm0_2.d f+ zmm8_1
                                
                                zmm0_2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0_2.d))).d f* zmm15_1
                                zmm3[0] = zmm3[0] f- zmm0_2.d
                                int32_t zmm4_1
                                
                                if (not(zmm3[0] <= 1.57079637f))
                                    zmm4_1 = zmm9.d
                                    zmm0_2.d = zmm10.d f- zmm3[0]
                                    zmm3 = zmm0_2
                                else if (zmm3[0] f>= zmm13_1)
                                    zmm4_1 = zmm7_1
                                else
                                    zmm4_1 = zmm9.d
                                    zmm0_2.d = zmm14_1.d f- zmm3[0]
                                    zmm3 = zmm0_2
                                
                                float zmm1_2[0x4] = 0x3638b88e
                                zmm3[0] = zmm3[0] * zmm3[0]
                                zmm0_2.d = zmm3.d f* 2.3889859e-08f
                                zmm1_2[0] = 2.75255616e-06f f- zmm0_2.d
                                zmm0_2.d = zmm3.d f* 2.60516146e-07f
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                zmm1_2[0] = zmm1_2[0] - 0.000198408743f
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                zmm1_2[0] = zmm1_2[0] + 0.00833333097f
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                zmm1_2[0] = zmm1_2[0] - 0.166666672f
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                zmm1_2[0] = zmm1_2[0] f+ zmm7_1
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                zmm5_1[0] = zmm5_1[0] * zmm1_2[0]
                                zmm6[0] = zmm6[0] * zmm1_2[0]
                                zmm11.d = zmm11.d f* zmm1_2[0]
                                zmm1_2 = 0x37cfb4c2
                                zmm1_2[0] = 2.47604949e-05f f- zmm0_2.d
                                float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
                                temp0_7[0] = zmm6[0]
                                float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
                                temp0_8[0] = zmm11.d
                                float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                zmm1_2[0] = zmm1_2[0] - 0.00138883782f
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                zmm1_2[0] = zmm1_2[0] + 0.0416666381f
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                zmm1_2[0] = zmm1_2[0] f- zmm8_1
                                zmm1_2[0] = zmm1_2[0] * zmm3[0]
                                float zmm2_2[0x4] = var_128
                                zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
                                zmm1_2[0] = zmm1_2[0] f+ zmm7_1
                                zmm1_2[0] = zmm1_2[0] f* zmm4_1
                                temp0_9[0] = zmm1_2[0]
                                float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
                                float temp0_13[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x1b), zmm0_2)
                                float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x4e)
                                zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), temp0_11)
                                float temp0_17[0x4] = __mulps_xmmps_memps(temp0_13, data_143f505c0)
                                float temp0_18[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xb1)
                                float temp0_19[0x4] = _mm_add_ps(temp0_17, zmm0_2)
                                float temp0_21[0x4] =
                                    _mm_mul_ps(temp0_14, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55))
                                float temp0_23[0x4] =
                                    _mm_mul_ps(temp0_18, _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa))
                                float temp0_24[0x4] = __mulps_xmmps_memps(temp0_21, data_143f505b0)
                                float temp0_25[0x4] = __mulps_xmmps_memps(temp0_23, data_143f505a0)
                                var_128 = _mm_add_ps(_mm_add_ps(temp0_19, temp0_24), temp0_25)
                            
                            int64_t var_190
                            sub_140ad3d90(&var_128, &var_190)
                            float rax_21
                            float zmm2_3[0x4]
                            float var_188
                            
                            if ((*(*(arg2[5] + 0x30) + 0x59) & 1) == 0)
                                rax_21 = var_188
                                zmm2_3 = zx.o(var_190)
                            else
                                float temp0_30[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_190.d, var_188[0].q), 
                                    _mm_unpacklo_ps(var_190:4.d, zmm12_1)[0].q)
                                float temp0_31[0x4] =
                                    __mulps_xmmps_memps(*(var_160_1 + rax_5), data_143f50590)
                                float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc9)
                                float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xd2)
                                float temp0_34[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xd2)
                                float temp0_35[0x4] = _mm_mul_ps(temp0_32, temp0_34)
                                float temp0_36[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc9)
                                float temp0_37[0x4] = _mm_mul_ps(temp0_33, temp0_36)
                                float temp0_38[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xff)
                                float temp0_39[0x4] = _mm_sub_ps(temp0_37, temp0_35)
                                float temp0_40[0x4] = _mm_add_ps(temp0_39, temp0_39)
                                float temp0_41[0x4] = _mm_mul_ps(temp0_38, temp0_40)
                                float temp0_43[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xc9), temp0_34)
                                float temp0_44[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xd2)
                                float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_30)
                                float temp0_48[0x4] = _mm_add_ps(
                                    _mm_sub_ps(_mm_mul_ps(temp0_44, temp0_36), temp0_43), temp0_45)
                                rax_21 = _mm_shuffle_ps(temp0_48, temp0_48, 0xaa)[0]
                                float temp0_51[0x4] = _mm_unpacklo_ps(temp0_48, 
                                    _mm_shuffle_ps(temp0_48, temp0_48, 0x55)[0].q)
                                zmm2_3 = temp0_51
                                var_190 = temp0_51.q
                                var_188 = rax_21
                            *(rbx_2 + rbx_5 + 0x18) = zmm2_3.q
                            *(rbx_2 + rbx_5 + 0x20) = rax_21
                    
                    rdx_5 = var_178_1
                    r8_2 = var_194_1
                
                temp1_1 = rsi_1
                rsi_1 -= 1
                result = result_2
            while (temp1_1 - 1 s>= 0)

return result
