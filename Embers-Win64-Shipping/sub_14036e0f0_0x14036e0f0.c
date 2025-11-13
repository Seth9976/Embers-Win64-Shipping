// 函数: sub_14036e0f0
// 地址: 0x14036e0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38[0x4] = arg7
float var_48[0x4] = arg6
float var_58[0x4] = arg5
float zmm12[0x4]
float var_68[0x4] = zmm12
float zmm11[0x4]
float var_78[0x4] = zmm11
float zmm10[0x4]
float var_88[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_98[0x4] = zmm9
float zmm8[0x4]
float var_a8[0x4] = zmm8
float zmm7[0x4]
float var_b8[0x4] = zmm7
float zmm6[0x4]
float var_c8[0x4] = zmm6
int128_t* result = arg8
int32_t r10_4 = ((arg2 s>> 0x1f u>> 0x1e) + arg2) & 0xfffffffc
int32_t rsi = 0
int32_t var_168
uint64_t r10_5
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r10_4 s<= 0)
    r10_5 = 0
    
    if (0 s< arg2)
    label_14036e53b:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rsi), 0), data_142e11d00)
        zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg2), 0), zmm0)
        uint64_t rdx_1 = r10_5 * 0xc
        zmm10 = *(arg9 + rdx_1)
        zmm12 = *(arg9 + rdx_1 + 0x10)
        zmm0 = *(arg9 + rdx_1 + 0x20)
        float temp0_83[0x4] = _mm_shuffle_ps(zmm12, zmm10, 0x10)
        float temp0_84[0x4] = _mm_shuffle_ps(zmm12, zmm0, 0x9e)
        float temp0_85[0x4] = _mm_shuffle_ps(zmm12, zmm10, 0x21)
        float temp0_86[0x4] = _mm_shuffle_ps(zmm10, temp0_84, 0x8c)
        float temp0_87[0x4] = _mm_shuffle_ps(temp0_83, temp0_84, 0xd2)
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_85, zmm0, 0xc2)
        int64_t rbx_3 = sx.q(rsi << 2)
        float var_1f8_2[0x4] = zmm2
        uint64_t rsi_8 = zx.q(_mm_movemask_ps(zmm2))
        
        if ((zx.q(rsi_8.d) & 0xfffffff9) != 9)
            if ((rsi_8.b & 1) != 0)
                var_168 = *(arg4 + rbx_3)
            
            if ((rsi_8.b & 2) == 0)
                if ((rsi_8.b & 4) != 0)
                    goto label_14036e9aa
                
                goto label_14036e5dc
            
            int32_t var_164_1 = *(arg4 + rbx_3 + 4)
            int32_t var_15c_1
            
            if ((rsi_8.b & 4) == 0)
            label_14036e5dc:
                
                if ((rsi_8.b & 8) != 0)
                    var_15c_1 = *(arg4 + rbx_3 + 0xc)
            else
            label_14036e9aa:
                int32_t var_160_1 = *(arg4 + rbx_3 + 8)
                
                if ((rsi_8.b & 8) != 0)
                    var_15c_1 = *(arg4 + rbx_3 + 0xc)
            zmm9 = var_168.o
        else
            zmm9 = *(arg4 + rbx_3)
        
        int32_t var_128[0x4] = zmm9
        
        while (true)
            uint64_t rbx_4
            uint64_t rflags_2
            
            if (rsi_8 == 0)
                rbx_4 = 0x40
            else
                rbx_4, rflags_2 = _bit_scan_forward(rsi_8)
            int64_t rbx_5 = sx.q(var_128[rbx_4])
            uint64_t rdi_3 = zx.q(_mm_movemask_ps(
                _mm_cmpeq_epi32(_mm_shuffle_epi32(zx.o(rbx_5.d), 0), zmm9) & var_1f8_2))
            float var_178_2[0x4] = temp0_88
            float var_1e8_1[0x4]
            __builtin_memcpy(&var_1e8_1, 
                "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80"
            "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x
                    3f", 
                0x40)
            zmm2 = result[rbx_5 * 4].d
            zmm3 = *(&result[rbx_5 * 4] + 4)
            zmm0 = *(&result[rbx_5 * 4] + 8)
            zmm1 = *(&result[rbx_5 * 4] + 0xc)
            float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_86)
            float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_86)
            float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_86)
            var_168.o = temp0_94
            float var_158_2[0x4] = temp0_96
            float var_148_2[0x4] = temp0_98
            float var_138_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_86)
            zmm1 = result[rbx_5 * 4 + 1].d
            zmm7 = *(&result[rbx_5 * 4] + 0x14)
            zmm5 = *(&result[rbx_5 * 4] + 0x18)
            zmm6 = *(&result[rbx_5 * 4] + 0x1c)
            float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_87)
            float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_87)
            float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_87)
            float var_108_2[0x4] = temp0_102
            float var_f8_2[0x4] = temp0_104
            float var_e8_2[0x4] = temp0_106
            float var_d8_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_87)
            zmm6 = result[rbx_5 * 4 + 2].d
            zmm4 = *(&result[rbx_5 * 4] + 0x24)
            float temp0_110[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_88)
            float temp0_112[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_88)
            zmm8 = result[rbx_5 * 4 + 3].d
            float temp0_115[0x4] =
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), var_1e8_1), temp0_110)
            zmm6 = *(&result[rbx_5 * 4] + 0x34)
            float var_1d8_1[0x4]
            float temp0_118[0x4] =
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), var_1d8_1), temp0_112)
            float temp0_120[0x4] = _mm_add_ps(_mm_add_ps(temp0_102, temp0_94), temp0_115)
            zmm2 = *(&result[rbx_5 * 4] + 0x28)
            float temp0_122[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_88)
            float temp0_123[0x4] = _mm_add_ps(temp0_104, temp0_96)
            zmm3 = *(&result[rbx_5 * 4] + 0x38)
            float var_1c8_1[0x4]
            float temp0_125[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), var_1c8_1)
            char temp1_1 = rdi_3.b & 1
            
            if (temp1_1 == 0)
                zmm0 = _mm_add_ps(temp0_98, temp0_106)
                zmm2 = _mm_add_ps(temp0_122, temp0_125)
                zmm7 = _mm_add_ps(temp0_123, temp0_118)
                
                if (temp1_1 != 0)
                    goto label_14036e810
                
                goto label_14036e7ab
            
            arg6[0] = temp0_120[0]
            zmm0 = _mm_add_ps(temp0_98, temp0_106)
            zmm2 = _mm_add_ps(temp0_122, temp0_125)
            zmm7 = _mm_add_ps(temp0_123, temp0_118)
            
            if (temp1_1 != 0)
            label_14036e810:
                arg7[0] = zmm7[0]
                zmm0 = _mm_add_ps(zmm0, zmm2)
                
                if (temp1_1 == 0)
                    goto label_14036e7b0
                
                goto label_14036e81a
            
        label_14036e7ab:
            zmm0 = _mm_add_ps(zmm0, zmm2)
            bool cond:12_1
            bool cond:13_1
            bool cond:16_1
            bool cond:17_1
            
            if (temp1_1 == 0)
            label_14036e7b0:
                char temp5_1 = rdi_3.b & 2
                cond:12_1 = temp5_1 != 0
                cond:13_1 = temp5_1 == 0
                cond:16_1 = temp5_1 == 0
                cond:17_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                    goto label_14036e832
                
                goto label_14036e7b6
            
        label_14036e81a:
            arg5[0] = zmm0[0]
            char temp4_1 = rdi_3.b & 2
            cond:12_1 = temp4_1 != 0
            cond:13_1 = temp4_1 == 0
            cond:16_1 = temp4_1 == 0
            cond:17_1 = temp4_1 != 0
            
            if (temp4_1 != 0)
            label_14036e832:
                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_120, arg6, 1), arg6, 0xe2)
                
                if (cond:13_1)
                    goto label_14036e7bc
                
                goto label_14036e845
            
        label_14036e7b6:
            
            if (not(cond:12_1))
            label_14036e7bc:
                
                if (cond:17_1)
                    goto label_14036e85c
                
                goto label_14036e7c2
            
        label_14036e845:
            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg7, 1), arg7, 0xe2)
            bool cond:20_1
            bool cond:21_1
            bool cond:24_1
            bool cond:25_1
            
            if (not(cond:16_1))
            label_14036e85c:
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg5, 1), arg5, 0xe2)
                char temp9_1 = rdi_3.b & 4
                cond:20_1 = temp9_1 == 0
                cond:21_1 = temp9_1 != 0
                cond:24_1 = temp9_1 != 0
                cond:25_1 = temp9_1 == 0
                
                if (temp9_1 == 0)
                    goto label_14036e7cc
                
                goto label_14036e872
            
        label_14036e7c2:
            char temp8_1 = rdi_3.b & 4
            cond:20_1 = temp8_1 == 0
            cond:21_1 = temp8_1 != 0
            cond:24_1 = temp8_1 != 0
            cond:25_1 = temp8_1 == 0
            
            if (temp8_1 != 0)
            label_14036e872:
                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_120, arg6, 0x32), 0x84)
                
                if (not(cond:20_1))
                label_14036e885:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm7, arg7, 0x32), 0x84)
                    
                    if (cond:25_1)
                        goto label_14036e7d8
                    
                    goto label_14036e898
            else
            label_14036e7cc:
                
                if (cond:21_1)
                    goto label_14036e885
            
            bool cond:28_1
            bool cond:30_1
            bool cond:31_1
            bool cond:29_1
            
            if (cond:24_1)
            label_14036e898:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm0, arg5, 0x32), 0x84)
                char temp12_1 = rdi_3.b & 8
                cond:28_1 = temp12_1 != 0
                cond:29_1 = temp12_1 == 0
                cond:30_1 = temp12_1 == 0
                cond:31_1 = temp12_1 != 0
                
                if (temp12_1 != 0)
                label_14036e8ac:
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_120, arg6, 0x23), 0x24)
                    
                    if (cond:29_1)
                        goto label_14036e7e8
                    
                    goto label_14036e8bc
            else
            label_14036e7d8:
                char temp13_1 = rdi_3.b & 8
                cond:28_1 = temp13_1 != 0
                cond:29_1 = temp13_1 == 0
                cond:30_1 = temp13_1 == 0
                cond:31_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_14036e8ac
            uint64_t rdi_4
            
            if (cond:28_1)
            label_14036e8bc:
                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm7, arg7, 0x23), 0x24)
                rdi_4 = not.q(rdi_3)
                
                if (not(cond:30_1))
                label_14036e8cf:
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm0, arg5, 0x23), 0x24)
                    rsi_8 &= rdi_4
                    
                    if (rsi_8 == 0)
                        break
                    
                    continue
            else
            label_14036e7e8:
                rdi_4 = not.q(rdi_3)
                
                if (cond:31_1)
                    goto label_14036e8cf
            
            rsi_8 &= rdi_4
            
            if (rsi_8 == 0)
                break
        
        result = r10_5 * 3
        float temp0_152[0x4] = _mm_shuffle_ps(arg6, arg7, 0x24)
        float temp0_153[0x4] = _mm_shuffle_ps(arg7, arg5, 0x49)
        *(arg1 + rdx_1) = _mm_shuffle_ps(temp0_152, _mm_shuffle_ps(temp0_153, arg6, 0x12), 0x8c)
        *(arg1 + (result << 2) + 0x10) =
            _mm_shuffle_ps(temp0_153, _mm_shuffle_ps(arg6, arg7, 0x62), 0x8c)
        float temp0_159[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg7, arg6, 0x33), arg5, 0xe2)
        *(arg1 + (result << 2) + 0x20) = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
else
    while (true)
        uint64_t r11_1 = zx.q(rsi)
        uint64_t r14_1 = r11_1 * 3
        zmm10 = *(arg9 + (r14_1 << 2))
        zmm12 = *(arg9 + (r14_1 << 2) + 0x10)
        zmm0 = *(arg9 + (r14_1 << 2) + 0x20)
        float temp0_1[0x4] = _mm_shuffle_ps(zmm12, zmm10, 0x10)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm12, zmm0, 0x9e)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm12, zmm10, 0x21)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm10, temp0_2, 0x8c)
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_1, temp0_2, 0xd2)
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, zmm0, 0xc2)
        zmm0 = *(arg4 + sx.q(rsi << 2))
        float var_1f8_1[0x4] = zmm0
        float var_118[0x4] = zmm0
        uint64_t rdi_1 = 0xf
        
        while (true)
            uint64_t rsi_3
            uint64_t rflags_1
            
            if (rdi_1 == 0)
                rsi_3 = 0x40
            else
                rsi_3, rflags_1 = _bit_scan_forward(rdi_1)
            int64_t rsi_4 = sx.q(var_118[rsi_3])
            uint64_t rbx_1 = zx.q(_mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                _mm_shuffle_epi32(zx.o(rsi_4.d), 0), var_1f8_1)))
            float var_178_1[0x4] = temp0_6
            float var_1e8[0x4]
            __builtin_memcpy(&var_1e8, 
                "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80"
            "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x
                    3f", 
                0x40)
            zmm5 = result[rsi_4 * 4].d
            zmm6 = *(&result[rsi_4 * 4] + 4)
            zmm7 = *(&result[rsi_4 * 4] + 8)
            zmm0 = *(&result[rsi_4 * 4] + 0xc)
            float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_4)
            float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_4)
            float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_4)
            var_168.o = temp0_11
            float var_158_1[0x4] = temp0_13
            float var_148_1[0x4] = temp0_15
            float var_138_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_4)
            zmm4 = result[rsi_4 * 4 + 1].d
            zmm0 = *(&result[rsi_4 * 4] + 0x14)
            zmm3 = *(&result[rsi_4 * 4] + 0x18)
            zmm1 = *(&result[rsi_4 * 4] + 0x1c)
            float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_5)
            float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_5)
            float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_5)
            float var_108_1[0x4] = temp0_19
            float var_f8_1[0x4] = temp0_21
            float var_e8_1[0x4] = temp0_23
            float var_d8_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_5)
            zmm1 = result[rsi_4 * 4 + 2].d
            zmm2 = *(&result[rsi_4 * 4] + 0x24)
            float temp0_27[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_6)
            float temp0_29[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_6)
            zmm8 = result[rsi_4 * 4 + 3].d
            float temp0_32[0x4] =
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), var_1e8), temp0_27)
            zmm1 = *(&result[rsi_4 * 4] + 0x34)
            float var_1d8[0x4]
            float temp0_35[0x4] =
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), var_1d8), temp0_29)
            float temp0_37[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_11), temp0_32)
            zmm5 = *(&result[rsi_4 * 4] + 0x28)
            float temp0_39[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_6)
            float temp0_40[0x4] = _mm_add_ps(temp0_21, temp0_13)
            zmm6 = *(&result[rsi_4 * 4] + 0x38)
            float var_1c8[0x4]
            float temp0_42[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), var_1c8)
            char temp0_43 = rbx_1.b & 1
            
            if (temp0_43 == 0)
                zmm7 = _mm_add_ps(temp0_15, temp0_23)
                zmm5 = _mm_add_ps(temp0_39, temp0_42)
                zmm0 = _mm_add_ps(temp0_40, temp0_35)
                
                if (temp0_43 != 0)
                    goto label_14036e3f0
                
                goto label_14036e386
            
            arg6[0] = temp0_37[0]
            zmm7 = _mm_add_ps(temp0_15, temp0_23)
            zmm5 = _mm_add_ps(temp0_39, temp0_42)
            zmm0 = _mm_add_ps(temp0_40, temp0_35)
            
            if (temp0_43 != 0)
            label_14036e3f0:
                arg7[0] = zmm0[0]
                zmm7 = _mm_add_ps(zmm7, zmm5)
                
                if (temp0_43 == 0)
                    goto label_14036e38b
                
                goto label_14036e3fa
            
        label_14036e386:
            zmm7 = _mm_add_ps(zmm7, zmm5)
            bool cond:6_1
            bool cond:7_1
            bool cond:10_1
            bool cond:11_1
            
            if (temp0_43 == 0)
            label_14036e38b:
                char temp3_1 = rbx_1.b & 2
                cond:6_1 = temp3_1 != 0
                cond:7_1 = temp3_1 == 0
                cond:10_1 = temp3_1 == 0
                cond:11_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_14036e411
                
                goto label_14036e390
            
        label_14036e3fa:
            arg5[0] = zmm7[0]
            char temp2_1 = rbx_1.b & 2
            cond:6_1 = temp2_1 != 0
            cond:7_1 = temp2_1 == 0
            cond:10_1 = temp2_1 == 0
            cond:11_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
            label_14036e411:
                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_37, arg6, 1), arg6, 0xe2)
                
                if (cond:7_1)
                    goto label_14036e396
                
                goto label_14036e428
            
        label_14036e390:
            
            if (not(cond:6_1))
            label_14036e396:
                
                if (cond:11_1)
                    goto label_14036e43f
                
                goto label_14036e39c
            
        label_14036e428:
            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg7, 1), arg7, 0xe2)
            bool cond:14_1
            bool cond:15_1
            bool cond:18_1
            bool cond:19_1
            
            if (not(cond:10_1))
            label_14036e43f:
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg5, 1), arg5, 0xe2)
                char temp7_1 = rbx_1.b & 4
                cond:14_1 = temp7_1 == 0
                cond:15_1 = temp7_1 != 0
                cond:18_1 = temp7_1 != 0
                cond:19_1 = temp7_1 == 0
                
                if (temp7_1 == 0)
                    goto label_14036e3a5
                
                goto label_14036e454
            
        label_14036e39c:
            char temp6_1 = rbx_1.b & 4
            cond:14_1 = temp6_1 == 0
            cond:15_1 = temp6_1 != 0
            cond:18_1 = temp6_1 != 0
            cond:19_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
            label_14036e454:
                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_37, arg6, 0x32), 0x84)
                
                if (not(cond:14_1))
                label_14036e467:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm0, arg7, 0x32), 0x84)
                    
                    if (cond:19_1)
                        goto label_14036e3b1
                    
                    goto label_14036e47a
            else
            label_14036e3a5:
                
                if (cond:15_1)
                    goto label_14036e467
            
            bool cond:22_1
            bool cond:26_1
            bool cond:27_1
            bool cond:23_1
            
            if (cond:18_1)
            label_14036e47a:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm7, arg5, 0x32), 0x84)
                char temp10_1 = rbx_1.b & 8
                cond:22_1 = temp10_1 != 0
                cond:23_1 = temp10_1 == 0
                cond:26_1 = temp10_1 == 0
                cond:27_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                label_14036e48d:
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_37, arg6, 0x23), 0x24)
                    
                    if (cond:23_1)
                        goto label_14036e3c0
                    
                    goto label_14036e49d
            else
            label_14036e3b1:
                char temp11_1 = rbx_1.b & 8
                cond:22_1 = temp11_1 != 0
                cond:23_1 = temp11_1 == 0
                cond:26_1 = temp11_1 == 0
                cond:27_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                    goto label_14036e48d
            uint64_t rbx_2
            
            if (cond:22_1)
            label_14036e49d:
                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm0, arg7, 0x23), 0x24)
                rbx_2 = not.q(rbx_1)
                
                if (not(cond:26_1))
                label_14036e4b0:
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm7, arg5, 0x23), 0x24)
                    rdi_1 &= rbx_2
                    
                    if (rdi_1 == 0)
                        break
                    
                    continue
            else
            label_14036e3c0:
                rbx_2 = not.q(rbx_1)
                
                if (cond:27_1)
                    goto label_14036e4b0
            
            rdi_1 &= rbx_2
            
            if (rdi_1 == 0)
                break
        
        float temp0_70[0x4] = _mm_shuffle_ps(arg6, arg7, 0x24)
        float temp0_71[0x4] = _mm_shuffle_ps(arg7, arg5, 0x49)
        *(arg1 + (r14_1 << 2)) =
            _mm_shuffle_ps(temp0_70, _mm_shuffle_ps(temp0_71, arg6, 0x12), 0x8c)
        *(arg1 + (r14_1 << 2) + 0x10) =
            _mm_shuffle_ps(temp0_71, _mm_shuffle_ps(arg6, arg7, 0x62), 0x8c)
        float temp0_77[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg7, arg6, 0x33), arg5, 0xe2)
        *(arg1 + (r14_1 << 2) + 0x20) = _mm_shuffle_ps(temp0_77, temp0_77, 0xd2)
        rsi = r11_1.d + 4
        
        if (rsi s>= r10_4)
            break
    
    r10_5 = zx.q(rsi)
    
    if (rsi s< arg2)
        goto label_14036e53b
return result
