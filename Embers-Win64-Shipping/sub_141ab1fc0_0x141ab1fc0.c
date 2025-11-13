// 函数: sub_141ab1fc0
// 地址: 0x141ab1fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
float zmm6[0x4]
result, zmm6 = sub_141e1c570(arg1 + 0x10, arg2, arg3)

if (not(9.99999975e-06f f>= *(arg1 + 0x54)))
    int64_t* r15_1 = arg2[3]
    
    if (*(arg1 + 0x61) == 0)
        *(arg1 + 0x61) = 1
        sub_141ea5640(arg1 + 0x24, r15_1)
        sub_141ea5640(arg1 + 0x34, r15_1)
        *(arg1 + 0x70) = 0
        
        if (*(arg1 + 0x74) s<= 0xffffffff)
            sub_1405dadb0(arg1 + 0x68, 0)
        
        result = sub_141ea6180(arg1 + 0x24, r15_1)
        
        if (result.b != 0)
            result = sub_141ea6180(arg1 + 0x34, r15_1)
            
            if (result.b != 0)
                int32_t rax = *(arg1 + 0x2c)
                int32_t rbx_1 = -1
                int32_t arg_8
                
                if (rax s>= 0)
                    arg_8 = *(arg1 + 0x30)
                else
                    int32_t rcx_6 = rax * 2
                    
                    if ((rcx_6 & 0xfffffffe) == 0xfffffffe)
                        arg_8 = 0xffffffff
                    else
                        arg_8 = *(r15_1[0x10] + (sx.q(rcx_6) s>> 1 << 2))
                
                int32_t rax_5 = *(arg1 + 0x3c)
                int32_t arg_18
                
                if (rax_5 s>= 0)
                    arg_18 = *(arg1 + 0x40)
                else
                    int32_t rcx_10 = rax_5 * 2
                    
                    if ((rcx_10 & 0xfffffffe) == 0xfffffffe)
                        arg_18 = 0xffffffff
                    else
                        arg_18 = *(r15_1[0x10] + (sx.q(rcx_10) s>> 1 << 2))
                
                result = sub_141e95bf0(r15_1, &arg_18, &arg_8)
                
                if (result.b != 0)
                    int32_t rax_10 = *(arg1 + 0x2c)
                    int32_t rdi_1
                    
                    if (rax_10 s>= 0)
                        rdi_1 = *(arg1 + 0x30)
                    else
                        int32_t rcx_15 = rax_10 * 2
                        
                        if ((rcx_15 & 0xfffffffe) == 0xfffffffe)
                            rdi_1 = -1
                        else
                            rdi_1 = *(r15_1[0x10] + (sx.q(rcx_15) s>> 1 << 2))
                    
                    int32_t rax_14 = *(arg1 + 0x3c)
                    
                    if (rax_14 s>= 0)
                        rbx_1 = *(arg1 + 0x40)
                    else
                        int32_t rcx_18 = rax_14 * 2
                        
                        if ((rcx_18 & 0xfffffffe) != 0xfffffffe)
                            rbx_1 = *(r15_1[0x10] + (sx.q(rcx_18) s>> 1 << 2))
                    
                    int64_t r13_1 = sx.q(*(arg1 + 0x70))
                    arg_8 = rbx_1
                    int32_t rax_18 = (r13_1 + 1).d
                    *(arg1 + 0x70) = rax_18
                    
                    if (rax_18 s> *(arg1 + 0x74))
                        sub_1405a4cf0(arg1 + 0x68)
                        rbx_1 = arg_8
                    
                    result = *(arg1 + 0x68)
                    *(result + (r13_1 << 2)) = rbx_1
                    
                    if (arg_8 != 0xffffffff)
                        sub_141ea4020(r15_1, &arg_18, &arg_8)
                        int32_t rax_19 = arg_18
                        
                        if (rax_19 != 0xffffffff)
                            while (rax_19 != rdi_1)
                                arg_8 = rax_19
                                void arg_20
                                int32_t* rax_20 = sub_141ea4020(r15_1, &arg_20, &arg_8)
                                int64_t rbx_2 = sx.q(*(arg1 + 0x70))
                                int32_t rax_21 = (rbx_2 + 1).d
                                arg_18 = *rax_20
                                *(arg1 + 0x70) = rax_21
                                
                                if (rax_21 s> *(arg1 + 0x74))
                                    sub_1405a4cf0(arg1 + 0x68)
                                
                                int64_t rdx_9 = *(arg1 + 0x68)
                                memmove(rdx_9 + 4, rdx_9, (rbx_2 << 2).d)
                                **(arg1 + 0x68) = arg_8
                                rax_19 = arg_18
                                
                                if (rax_19 == 0xffffffff)
                                    break
                        
                        int64_t rbx_3 = sx.q(*(arg1 + 0x70))
                        int32_t rax_23 = (rbx_3 + 1).d
                        *(arg1 + 0x70) = rax_23
                        
                        if (rax_23 s> *(arg1 + 0x74))
                            sub_1405a4cf0(arg1 + 0x68)
                        
                        int64_t rdx_11 = *(arg1 + 0x68)
                        memmove(rdx_11 + 4, rdx_11, (rbx_3 << 2).d)
                        result = *(arg1 + 0x68)
                        *result = rdi_1
    
    if (*(arg1 + 0x70) s>= 2)
        void* rax_24 = *arg2
        float zmm0_1[0x4] = *(arg1 + 0x4c)
        float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x48), 0)
        int32_t var_48_1 = zmm6[0]
        zmm6 = *(rax_24 + 0x610)
        float temp0_2[0x4] = _mm_rcp_ps(zmm6)
        float temp0_3[0x4] = __mulps_xmmps_memps(*(rax_24 + 0x5f0), data_143f2b8e0)
        float temp0_6[0x4] = __subps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x44), zmm0_1[0].q), temp0_1[0].q), 
            *(rax_24 + 0x600))
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x48)
        float zmm8[0x4] = __andps_xmmxud_memxud(temp0_6, data_143f2b820)
        float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_8)
        float temp0_15[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_7), temp0_12)
        float temp0_16[0x4] = _mm_mul_ps(temp0_2, temp0_2)
        float temp0_17[0x4] = _mm_add_ps(temp0_2, temp0_2)
        float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
        float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm6)
        float temp0_20[0x4] = _mm_mul_ps(temp0_9, temp0_18)
        float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
        float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_7)
        float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
        float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0_21)
        float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
        float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm6)
        float temp0_29[0x4] =
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f2b9a0), data_143f2b990, 2)
        float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_27)
        float temp0_33[0x4] =
            _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_8))
        zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
        int96_t var_f8_1 = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)[0].12
        sub_141ac0820(&var_e8, &arg2[1])
        int64_t rdx_13 = sx.q(**(arg1 + 0x68))
        int128_t var_d8
        
        if (*(rdx_13 + var_d8:8.q) == 0)
            sub_141a98300(&var_e8, rdx_13.d)
        
        int64_t r8_9 = var_e8
        float zmm3[0x4] = var_f8_1.d
        result = rdx_13 * 6
        float zmm1_1[0x4] = var_f8_1:8.d
        uint32_t rcx_32 = zx.d(*(arg1 + 0x60))
        float zmm2[0x4] = *(r8_9 + (result << 3) + 0x10)
        zmm3[0] = zmm3[0] - zmm2[0]
        float temp0_37[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_38[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float zmm4_2 = var_f8_1:4.d - temp0_37[0]
        zmm1_1[0] = zmm1_1[0] - temp0_38[0]
        zmm3[0] = zmm3[0] * zmm3[0]
        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
        int32_t zmm6_1 = _mm_sqrt_ss((zx.o(0)).d, zmm4_2 * zmm4_2 + zmm3[0] + zmm1_1[0])
        
        if (rcx_32 == 1)
            int64_t rdx_15 = sx.q(**(arg1 + 0x68))
            
            if (*(rdx_15 + var_d8:8.q) == 0)
                zmm6_1 = sub_141a98300(&var_e8, rdx_15.d)
                r8_9 = var_e8
            
            int96_t var_f8_2 = (*(r8_9 + rdx_15 * 0x30 + 0x10))[0].12
            int64_t rdx_16 = sx.q(*(*(arg1 + 0x68) + (sx.q(*(arg1 + 0x70)) << 2) - 4))
            
            if (*(rdx_16 + var_d8:8.q) == 0)
                zmm6_1 = sub_141a98300(&var_e8, rdx_16.d)
                r8_9 = var_e8
            
            result = rdx_16 * 6
            zmm2 = *(r8_9 + (result << 3) + 0x10)
            zmm2[0] = zmm2[0] f- var_f8_2.d
            float temp0_44[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            temp0_44[0] = temp0_44[0] f- var_f8_2:4.d
            float temp0_45[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            temp0_45[0] = temp0_45[0] f- var_f8_2:8.d
            zmm2[0] = zmm2[0] * zmm2[0]
            temp0_44[0] = temp0_44[0] * temp0_44[0]
            temp0_45[0] = temp0_45[0] * temp0_45[0]
            temp0_44[0] = temp0_44[0] + zmm2[0]
            temp0_44[0] = temp0_44[0] + temp0_45[0]
            zmm3 = _mm_sqrt_ss(0, temp0_44[0])
        else if (rcx_32 == 2)
            int32_t* rdx_14 = *(arg1 + 0x68)
            zmm3 = zx.o(0)
            result = sx.q(*(arg1 + 0x70))
            void* r8_8 = &rdx_14[result]
            
            if (rdx_14 != r8_8)
                int64_t r9_1 = arg2[1]
                
                do
                    result = sx.q(*rdx_14)
                    rdx_14 = &rdx_14[1]
                    zmm1_1 = *(r9_1 + result * 0x30 + 0x10)
                    float temp0_41[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                    temp0_41[0] = temp0_41[0] * temp0_41[0]
                    float temp0_42[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                    temp0_42[0] = temp0_42[0] * temp0_42[0]
                    temp0_41[0] = temp0_41[0] + zmm1_1[0]
                    temp0_41[0] = temp0_41[0] + temp0_42[0]
                    float temp0_43[0x4] = _mm_sqrt_ss(0, temp0_41[0])
                    zmm3[0] = zmm3[0] + temp0_43[0]
                while (rdx_14 != r8_8)
        else
            zmm3 = *(arg1 + 0x20)
        
        if (_mm_and_ps(zmm3, 0x7fffffff)[0] <= 9.99999994e-09f)
            zmm6_1 = 0x3f800000
        else
            zmm6_1 = zmm6_1 f/ zmm3[0]
        
        zmm1_1 = *(arg1 + 0x54)
        float zmm0_2[0x4] = 0x3f800000
        zmm0_2[0] = 1f - zmm1_1[0]
        zmm1_1[0] = zmm1_1[0] f* zmm6_1
        zmm1_1[0] = zmm1_1[0] + zmm0_2[0]
        zmm1_1[0] = zmm1_1[0] - 1f
        
        if (not(_mm_and_ps(zmm1_1, 0x7fffffff)[0] <= 9.99999994e-09f))
            int32_t* rdx_17 = *(arg1 + 0x68)
            result = sx.q(*(arg1 + 0x70))
            void* r8_10 = &rdx_17[result]
            
            if (rdx_17 != r8_10)
                float temp0_49[0x4] = _mm_unpacklo_ps(zmm1_1, 0)
                float temp0_51[0x4] =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q), temp0_49[0].q)
                
                do
                    result = sx.q(*rdx_17)
                    rdx_17 = &rdx_17[1]
                    void* rcx_41 = result * 0x30 + arg2[1]
                    *(rcx_41 + 0x10) = __mulps_xmmps_memps(temp0_51, *(rcx_41 + 0x10))
                while (rdx_17 != r8_10)
        
        int64_t var_b0
        
        if (var_b0 != 0)
            result = sub_140a74f90(var_b0)
        
        int64_t var_c0
        
        if (var_c0 != 0)
            result = sub_140a74f90(var_c0)
        
        int64_t rcx_44 = var_d8:8.q
        
        if (rcx_44 != 0)
            return sub_140a74f90(rcx_44)

return result
