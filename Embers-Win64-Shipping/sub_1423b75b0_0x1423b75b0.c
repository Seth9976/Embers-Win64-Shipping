// 函数: sub_1423b75b0
// 地址: 0x1423b75b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg1
int64_t* rbp = arg2

if (result != 0)
    int64_t i_1 = sx.q(*(result + 0x18))
    uint64_t j_2 = zx.q(arg2[1].d)
    int32_t rdx = 0
    int32_t rbx_1 = (i_1 << 2).d
    arg1[2].d = 0
    float zmm6[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
    float var_d8_1[0x4] = zmm6
    
    if (*(arg1 + 0x14) != rbx_1)
        sub_1405c5570(&arg1[1], rbx_1)
        rdx = arg1[2].d
    
    result = zx.q(rbx_1 + rdx)
    arg1[2].d = result.d
    
    if (result.d s> *(arg1 + 0x14))
        result = sub_1405a4d70(&arg1[1])
    
    int32_t rbx_2 = 0
    float zmm5[0x4] = zx.o(0)
    arg4 = zx.o(0)
    float var_108_1[0x4] = zmm5
    float zmm1[0x4]
    
    if (i_1 s> 0)
        float zmm7[0x4]
        float var_48_1[0x4] = zmm7
        int64_t rdx_2 = 0
        float zmm8[0x4]
        float var_58_1[0x4] = zmm8
        float zmm9[0x4]
        float var_68_1[0x4] = zmm9
        float zmm10[0x4]
        float var_78_1[0x4] = zmm10
        float zmm11[0x4]
        float var_88_1[0x4] = zmm11
        float zmm12[0x4]
        float var_98_1[0x4] = zmm12
        float zmm13[0x4]
        float var_a8_1[0x4] = zmm13
        float zmm14[0x4]
        float var_b8_1[0x4] = zmm14
        uint32_t zmm15[0x4] = data_143f5a0a0
        int64_t i
        
        do
            zmm9 = arg4
            zmm10 = arg4
            int128_t* rcx_3 = sx.q(rbx_2) * 0xf0 + *(*arg1 + 0x10)
            zmm12 = *rcx_3
            zmm13 = rcx_3[1]
            zmm14 = rcx_3[2]
            zmm11 = rcx_3[9]
            
            if (j_2.d s> 0)
                void* rax_2 = *(arg3 + 0x20)
                float temp0_2[0x4] = __cmpps_xmmps_memps_immb(arg4, rcx_3[0xa], 4)
                int128_t* r10_1 = *rbp
                char r11_1 = *(arg5 + 0x25)
                void* r8 = arg3
                
                if (rax_2 != 0)
                    r8 = rax_2
                
                int128_t* rax_3 = nullptr
                float temp0_3[0x4] = __cmpps_xmmps_memps_immb(zmm6, rcx_3[0xe], 1)
                void* r9_1 = r10_1 + 8
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    float zmm4[0x4] = *(r9_1 - 4)
                    zmm7 = *(rax_3 + r8)
                    zmm8 = *(rax_3 + r8 + 4)
                    zmm5 = *r10_1
                    zmm6 = *r9_1
                    float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
                    float temp0_7[0x4] = _mm_sub_ps(temp0_4, zmm13)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                    
                    if (r11_1 == 0)
                        float temp0_26[0x4] = _mm_mul_ps(temp0_7, temp0_7)
                        float temp0_27[0x4] = _mm_sub_ps(temp0_8, zmm12)
                        float temp0_28[0x4] = _mm_sub_ps(temp0_9, zmm14)
                        float temp0_29[0x4] = _mm_mul_ps(temp0_27, temp0_27)
                        float temp0_30[0x4] = _mm_mul_ps(temp0_28, temp0_28)
                        arg4 = _mm_sub_ps(_mm_add_ps(_mm_add_ps(temp0_26, temp0_29), temp0_30), 
                            _mm_mul_ps(zmm11, zmm11))
                    else
                        arg4 = _mm_and_ps(temp0_7, zmm15)
                        float temp0_11[0x4] = _mm_sub_ps(temp0_8, zmm12)
                        float temp0_12[0x4] = _mm_sub_ps(temp0_9, zmm14)
                        float zmm2[0x4] = _mm_and_ps(temp0_11, zmm15)
                        zmm1 = _mm_and_ps(temp0_12, zmm15)
                        float temp0_16[0x4] = _mm_sub_ps(zmm2, __minps_xmmps_memps(zmm2, rcx_3[6]))
                        float temp0_17[0x4] = __minps_xmmps_memps(arg4, rcx_3[7])
                        float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_16)
                        float temp0_19[0x4] = _mm_sub_ps(arg4, temp0_17)
                        float temp0_20[0x4] = __minps_xmmps_memps(zmm1, rcx_3[8])
                        float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_19)
                        float temp0_22[0x4] = _mm_sub_ps(zmm1, temp0_20)
                        arg4 = _mm_add_ps(_mm_add_ps(temp0_21, temp0_18), 
                            _mm_mul_ps(temp0_22, temp0_22))
                    
                    float zmm0[0x4] = rcx_3[0xb]
                    float temp0_35[0x4] = __subps_xmmps_memps(temp0_8, rcx_3[3])
                    float temp0_36[0x4] = __subps_xmmps_memps(temp0_4, rcx_3[4])
                    float temp0_37[0x4] = __subps_xmmps_memps(temp0_9, rcx_3[5])
                    float temp0_38[0x4] = _mm_max_ps(zmm0, arg4)
                    r10_1 += 0x28
                    r9_1 += 0x28
                    rax_3 += 8
                    arg4 = zx.o(0)
                    float temp0_39[0x4] = _mm_mul_ps(temp0_35, temp0_35)
                    float temp0_40[0x4] = _mm_mul_ps(temp0_36, temp0_36)
                    float temp0_41[0x4] = _mm_mul_ps(temp0_37, temp0_37)
                    float temp0_42[0x4] = __maxps_xmmps_memps(temp0_38, data_143f5a0b0)
                    float temp0_43[0x4] = _mm_add_ps(temp0_40, temp0_39)
                    float temp0_44[0x4] = _mm_rsqrt_ps(temp0_42)
                    float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_41)
                    float temp0_46[0x4] = _mm_mul_ps(temp0_44, temp0_5)
                    float temp0_47[0x4] = _mm_mul_ps(temp0_46, temp0_6)
                    float temp0_48[0x4] = _mm_max_ps(temp0_46, zmm9)
                    zmm9 = temp0_48
                    zmm1 = __andps_xmmxud_memxud(zx.o(0) ^ temp0_48, temp0_2)
                    zmm0 = rcx_3[0xc]
                    zmm5 = _mm_max_ps(var_108_1, zmm1 ^ arg4)
                    var_108_1 = zmm5
                    zmm10 = _mm_max_ps(
                        __andps_xmmxud_memxud(
                            _mm_and_ps(
                                _mm_cmpeq_ps(_mm_min_ps(rcx_3[0xd], _mm_max_ps(zmm0, temp0_45)), 
                                    temp0_45, 0), 
                                temp0_47 ^ arg4) ^ arg4 ^ arg4, 
                            temp0_3) ^ arg4, 
                        zmm10)
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                zmm6 = var_d8_1
                rbp = arg2
            
            result = arg1[1]
            float temp0_57[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
            float temp0_58[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
            rbx_2 += 1
            *(rdx_2 + result + 8) = temp0_57[0]
            *(rdx_2 + result + 0xc) = temp0_58[0]
            float temp0_59[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
            float temp0_60[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
            *(rdx_2 + result) = zmm9[0]
            *(rdx_2 + result + 4) = zmm10[0]
            float temp0_61[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
            float temp0_62[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
            *(rdx_2 + result + 0x18) = temp0_61[0]
            *(rdx_2 + result + 0x1c) = temp0_62[0]
            *(rdx_2 + result + 0x10) = temp0_59[0]
            *(rdx_2 + result + 0x14) = temp0_60[0]
            rdx_2 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (not(zx.o(0)[0] f>= *(arg5 + 0x30)))
        zmm1 = _mm_max_ss(_mm_shuffle_ps(zmm5, zmm5, 0x55)[0], zmm5[0])
        float temp0_65[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        
        if (not(zmm1[0] >= temp0_65[0]))
            zmm1 = temp0_65
        
        result = *arg1
        float temp0_66[0x4] = _mm_max_ss(zmm5[3][0], zmm1[0])
        temp0_66[0] = temp0_66[0] f* *(result + 0x120)
        arg1[3].d = temp0_66[0]

return result
