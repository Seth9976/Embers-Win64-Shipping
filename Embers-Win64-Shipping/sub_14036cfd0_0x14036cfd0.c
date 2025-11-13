// 函数: sub_14036cfd0
// 地址: 0x14036cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38[0x4] = arg10
float var_48[0x4] = arg9
float var_58[0x4] = arg8
float var_68[0x4] = arg7
float var_78[0x4] = arg6
float var_88[0x4] = arg5
int32_t zmm9[0x4]
int32_t var_98[0x4] = zmm9
float zmm8[0x4]
float var_a8[0x4] = zmm8
float zmm7[0x4]
float var_b8[0x4] = zmm7
float zmm6[0x4]
float var_c8[0x4] = zmm6
int128_t* result = arg11
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
    label_14036d3ca:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rsi), 0), data_142e11d00)
        zmm2 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg2), 0), zmm0)
        uint64_t rdx_1 = r10_5 * 0xc
        arg5 = *(arg12 + rdx_1)
        arg7 = *(arg12 + rdx_1 + 0x10)
        zmm0 = *(arg12 + rdx_1 + 0x20)
        float temp0_77[0x4] = _mm_shuffle_ps(arg7, arg5, 0x10)
        float temp0_78[0x4] = _mm_shuffle_ps(arg7, zmm0, 0x9e)
        float temp0_79[0x4] = _mm_insert_ps(arg7, arg5, 0x8c)
        float temp0_80[0x4] = _mm_shuffle_ps(arg5, temp0_78, 0x8c)
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_77, temp0_78, 0xd2)
        float temp0_82[0x4] = _mm_shuffle_ps(temp0_79, zmm0, 0xc4)
        int64_t rbx_3 = sx.q(rsi << 2)
        float var_1f8_2[0x4] = zmm2
        uint64_t rsi_8 = zx.q(_mm_movemask_ps(zmm2))
        
        if ((zx.q(rsi_8.d) & 0xfffffff9) != 9)
            if ((rsi_8.b & 1) != 0)
                var_168 = *(arg4 + rbx_3)
            
            if ((rsi_8.b & 2) == 0)
                if ((rsi_8.b & 4) != 0)
                    goto label_14036d805
                
                goto label_14036d46d
            
            int32_t var_164_1 = *(arg4 + rbx_3 + 4)
            int32_t var_15c_1
            
            if ((rsi_8.b & 4) == 0)
            label_14036d46d:
                
                if ((rsi_8.b & 8) != 0)
                    var_15c_1 = *(arg4 + rbx_3 + 0xc)
            else
            label_14036d805:
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
            float var_178_2[0x4] = temp0_82
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
            float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_80)
            float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_80)
            float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_80)
            var_168.o = temp0_88
            float var_158_2[0x4] = temp0_90
            float var_148_2[0x4] = temp0_92
            float var_138_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_80)
            zmm1 = result[rbx_5 * 4 + 1].d
            zmm7 = *(&result[rbx_5 * 4] + 0x14)
            zmm5 = *(&result[rbx_5 * 4] + 0x18)
            zmm6 = *(&result[rbx_5 * 4] + 0x1c)
            float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_81)
            float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_81)
            float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_81)
            float var_108_2[0x4] = temp0_96
            float var_f8_2[0x4] = temp0_98
            float var_e8_2[0x4] = temp0_100
            float var_d8_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_81)
            zmm6 = result[rbx_5 * 4 + 2].d
            zmm4 = *(&result[rbx_5 * 4] + 0x24)
            float temp0_104[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_82)
            float temp0_106[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_82)
            zmm8 = result[rbx_5 * 4 + 3].d
            float temp0_109[0x4] =
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), var_1e8_1), temp0_104)
            zmm6 = *(&result[rbx_5 * 4] + 0x34)
            float var_1d8_1[0x4]
            float temp0_112[0x4] =
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), var_1d8_1), temp0_106)
            float temp0_114[0x4] = _mm_add_ps(_mm_add_ps(temp0_96, temp0_88), temp0_109)
            zmm2 = *(&result[rbx_5 * 4] + 0x28)
            float temp0_116[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_82)
            float temp0_117[0x4] = _mm_add_ps(temp0_98, temp0_90)
            zmm3 = *(&result[rbx_5 * 4] + 0x38)
            float var_1c8_1[0x4]
            float temp0_119[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), var_1c8_1)
            char temp1_1 = rdi_3.b & 1
            
            if (temp1_1 == 0)
                zmm0 = _mm_add_ps(temp0_92, temp0_100)
                zmm2 = _mm_add_ps(temp0_116, temp0_119)
                zmm7 = _mm_add_ps(temp0_117, temp0_112)
                
                if (temp1_1 != 0)
                    goto label_14036d6a2
                
                goto label_14036d63b
            
            arg9 = _mm_blend_ps(arg9, temp0_114, 1)
            zmm0 = _mm_add_ps(temp0_92, temp0_100)
            zmm2 = _mm_add_ps(temp0_116, temp0_119)
            zmm7 = _mm_add_ps(temp0_117, temp0_112)
            
            if (temp1_1 != 0)
            label_14036d6a2:
                arg10 = _mm_blend_ps(arg10, zmm7, 1)
                zmm0 = _mm_add_ps(zmm0, zmm2)
                
                if (temp1_1 == 0)
                    goto label_14036d640
                
                goto label_14036d6ae
            
        label_14036d63b:
            zmm0 = _mm_add_ps(zmm0, zmm2)
            bool cond:12_1
            bool cond:13_1
            bool cond:16_1
            bool cond:17_1
            
            if (temp1_1 == 0)
            label_14036d640:
                char temp5_1 = rdi_3.b & 2
                cond:12_1 = temp5_1 != 0
                cond:13_1 = temp5_1 == 0
                cond:16_1 = temp5_1 == 0
                cond:17_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                    goto label_14036d6bb
                
                goto label_14036d646
            
        label_14036d6ae:
            arg8 = _mm_blend_ps(arg8, zmm0, 1)
            char temp4_1 = rdi_3.b & 2
            cond:12_1 = temp4_1 != 0
            cond:13_1 = temp4_1 == 0
            cond:16_1 = temp4_1 == 0
            cond:17_1 = temp4_1 != 0
            
            if (temp4_1 != 0)
            label_14036d6bb:
                arg9 = _mm_blend_ps(arg9, temp0_114, 2)
                
                if (cond:13_1)
                    goto label_14036d648
                
                goto label_14036d6c4
            
        label_14036d646:
            
            if (not(cond:12_1))
            label_14036d648:
                
                if (cond:17_1)
                    goto label_14036d6d1
                
                goto label_14036d64e
            
        label_14036d6c4:
            arg10 = _mm_blend_ps(arg10, zmm7, 2)
            bool cond:20_1
            bool cond:21_1
            bool cond:24_1
            bool cond:25_1
            
            if (not(cond:16_1))
            label_14036d6d1:
                arg8 = _mm_blend_ps(arg8, zmm0, 2)
                char temp9_1 = rdi_3.b & 4
                cond:20_1 = temp9_1 == 0
                cond:21_1 = temp9_1 != 0
                cond:24_1 = temp9_1 != 0
                cond:25_1 = temp9_1 == 0
                
                if (temp9_1 == 0)
                    goto label_14036d658
                
                goto label_14036d6e2
            
        label_14036d64e:
            char temp8_1 = rdi_3.b & 4
            cond:20_1 = temp8_1 == 0
            cond:21_1 = temp8_1 != 0
            cond:24_1 = temp8_1 != 0
            cond:25_1 = temp8_1 == 0
            
            if (temp8_1 != 0)
            label_14036d6e2:
                arg9 = _mm_blend_ps(arg9, temp0_114, 4)
                
                if (not(cond:20_1))
                label_14036d6ef:
                    arg10 = _mm_blend_ps(arg10, zmm7, 4)
                    
                    if (cond:25_1)
                        goto label_14036d664
                    
                    goto label_14036d6fc
            else
            label_14036d658:
                
                if (cond:21_1)
                    goto label_14036d6ef
            
            bool cond:28_1
            bool cond:30_1
            bool cond:31_1
            bool cond:29_1
            
            if (cond:24_1)
            label_14036d6fc:
                arg8 = _mm_blend_ps(arg8, zmm0, 4)
                char temp12_1 = rdi_3.b & 8
                cond:28_1 = temp12_1 != 0
                cond:29_1 = temp12_1 == 0
                cond:30_1 = temp12_1 == 0
                cond:31_1 = temp12_1 != 0
                
                if (temp12_1 != 0)
                label_14036d70d:
                    arg9 = _mm_blend_ps(arg9, temp0_114, 8)
                    
                    if (cond:29_1)
                        goto label_14036d674
                    
                    goto label_14036d71a
            else
            label_14036d664:
                char temp13_1 = rdi_3.b & 8
                cond:28_1 = temp13_1 != 0
                cond:29_1 = temp13_1 == 0
                cond:30_1 = temp13_1 == 0
                cond:31_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_14036d70d
            uint64_t rdi_4
            
            if (cond:28_1)
            label_14036d71a:
                arg10 = _mm_blend_ps(arg10, zmm7, 8)
                rdi_4 = not.q(rdi_3)
                
                if (not(cond:30_1))
                label_14036d72a:
                    arg8 = _mm_blend_ps(arg8, zmm0, 8)
                    rsi_8 &= rdi_4
                    
                    if (rsi_8 == 0)
                        break
                    
                    continue
            else
            label_14036d674:
                rdi_4 = not.q(rdi_3)
                
                if (cond:31_1)
                    goto label_14036d72a
            
            rsi_8 &= rdi_4
            
            if (rsi_8 == 0)
                break
        
        result = r10_5 * 3
        float temp0_140[0x4] = _mm_insert_ps(arg9, arg10, 0x30)
        float temp0_141[0x4] = _mm_shuffle_ps(arg10, arg8, 0x49)
        float temp0_142[0x4] = _mm_blend_ps(temp0_140, temp0_141, 4)
        *(arg1 + rdx_1) = _mm_shuffle_ps(temp0_142, temp0_142, 0x6c)
        float temp0_144[0x4] = _mm_blend_ps(temp0_141, arg9, 4)
        *(arg1 + (result << 2) + 0x10) = _mm_shuffle_ps(temp0_144, temp0_144, 0x6c)
        float temp0_147[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg10, arg9, 0x33), arg8, 0xe2)
        *(arg1 + (result << 2) + 0x20) = _mm_shuffle_ps(temp0_147, temp0_147, 0xd2)
else
    while (true)
        uint64_t r11_1 = zx.q(rsi)
        uint64_t r14_1 = r11_1 * 3
        arg8 = *(arg12 + (r14_1 << 2))
        arg10 = *(arg12 + (r14_1 << 2) + 0x10)
        zmm0 = *(arg12 + (r14_1 << 2) + 0x20)
        float temp0_1[0x4] = _mm_shuffle_ps(arg10, arg8, 0x10)
        float temp0_2[0x4] = _mm_shuffle_ps(arg10, zmm0, 0x9e)
        float temp0_3[0x4] = _mm_insert_ps(arg10, arg8, 0x8c)
        arg8 = _mm_shuffle_ps(arg8, temp0_2, 0x8c)
        arg9 = _mm_shuffle_ps(temp0_1, temp0_2, 0xd2)
        arg10 = _mm_shuffle_ps(temp0_3, zmm0, 0xc4)
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
            float var_178_1[0x4] = arg10
            float var_1e8[0x4]
            __builtin_memcpy(&var_1e8, 
                "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80"
            "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x
                    3f", 
                0x40)
            zmm2 = result[rsi_4 * 4].d
            zmm1 = *(&result[rsi_4 * 4] + 4)
            zmm7 = *(&result[rsi_4 * 4] + 8)
            zmm0 = *(&result[rsi_4 * 4] + 0xc)
            float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg8)
            float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg8)
            float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), arg8)
            var_168.o = temp0_11
            float var_158_1[0x4] = temp0_13
            float var_148_1[0x4] = temp0_15
            float var_138_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg8)
            zmm3 = result[rsi_4 * 4 + 1].d
            zmm0 = *(&result[rsi_4 * 4] + 0x14)
            zmm4 = *(&result[rsi_4 * 4] + 0x18)
            zmm6 = *(&result[rsi_4 * 4] + 0x1c)
            float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), arg9)
            float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg9)
            float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), arg9)
            float var_108_1[0x4] = temp0_19
            float var_f8_1[0x4] = temp0_21
            float var_e8_1[0x4] = temp0_23
            float var_d8_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg9)
            zmm6 = result[rsi_4 * 4 + 2].d
            zmm5 = *(&result[rsi_4 * 4] + 0x24)
            float temp0_27[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), arg10)
            float temp0_29[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm5, zmm5, 0), arg10)
            zmm8 = result[rsi_4 * 4 + 3].d
            float temp0_32[0x4] =
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), var_1e8), temp0_27)
            zmm6 = *(&result[rsi_4 * 4] + 0x34)
            float var_1d8[0x4]
            float temp0_35[0x4] =
                _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), var_1d8), temp0_29)
            float temp0_37[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_11), temp0_32)
            zmm2 = *(&result[rsi_4 * 4] + 0x28)
            float temp0_39[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), arg10)
            float temp0_40[0x4] = _mm_add_ps(temp0_21, temp0_13)
            zmm1 = *(&result[rsi_4 * 4] + 0x38)
            float var_1c8[0x4]
            float temp0_42[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), var_1c8)
            char temp0_43 = rbx_1.b & 1
            
            if (temp0_43 == 0)
                zmm7 = _mm_add_ps(temp0_15, temp0_23)
                zmm2 = _mm_add_ps(temp0_39, temp0_42)
                zmm0 = _mm_add_ps(temp0_40, temp0_35)
                
                if (temp0_43 != 0)
                    goto label_14036d2c2
                
                goto label_14036d266
            
            arg6 = _mm_blend_ps(arg6, temp0_37, 1)
            zmm7 = _mm_add_ps(temp0_15, temp0_23)
            zmm2 = _mm_add_ps(temp0_39, temp0_42)
            zmm0 = _mm_add_ps(temp0_40, temp0_35)
            
            if (temp0_43 != 0)
            label_14036d2c2:
                arg7 = _mm_blend_ps(arg7, zmm0, 1)
                zmm7 = _mm_add_ps(zmm7, zmm2)
                
                if (temp0_43 == 0)
                    goto label_14036d26b
                
                goto label_14036d2ce
            
        label_14036d266:
            zmm7 = _mm_add_ps(zmm7, zmm2)
            bool cond:6_1
            bool cond:7_1
            bool cond:10_1
            bool cond:11_1
            
            if (temp0_43 == 0)
            label_14036d26b:
                char temp3_1 = rbx_1.b & 2
                cond:6_1 = temp3_1 != 0
                cond:7_1 = temp3_1 == 0
                cond:10_1 = temp3_1 == 0
                cond:11_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_14036d2da
                
                goto label_14036d270
            
        label_14036d2ce:
            arg5 = _mm_blend_ps(arg5, zmm7, 1)
            char temp2_1 = rbx_1.b & 2
            cond:6_1 = temp2_1 != 0
            cond:7_1 = temp2_1 == 0
            cond:10_1 = temp2_1 == 0
            cond:11_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
            label_14036d2da:
                arg6 = _mm_blend_ps(arg6, temp0_37, 2)
                
                if (cond:7_1)
                    goto label_14036d272
                
                goto label_14036d2e3
            
        label_14036d270:
            
            if (not(cond:6_1))
            label_14036d272:
                
                if (cond:11_1)
                    goto label_14036d2ec
                
                goto label_14036d274
            
        label_14036d2e3:
            arg7 = _mm_blend_ps(arg7, zmm0, 2)
            bool cond:14_1
            bool cond:15_1
            bool cond:18_1
            bool cond:19_1
            
            if (not(cond:10_1))
            label_14036d2ec:
                arg5 = _mm_blend_ps(arg5, zmm7, 2)
                char temp7_1 = rbx_1.b & 4
                cond:14_1 = temp7_1 == 0
                cond:15_1 = temp7_1 != 0
                cond:18_1 = temp7_1 != 0
                cond:19_1 = temp7_1 == 0
                
                if (temp7_1 == 0)
                    goto label_14036d279
                
                goto label_14036d2f8
            
        label_14036d274:
            char temp6_1 = rbx_1.b & 4
            cond:14_1 = temp6_1 == 0
            cond:15_1 = temp6_1 != 0
            cond:18_1 = temp6_1 != 0
            cond:19_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
            label_14036d2f8:
                arg6 = _mm_blend_ps(arg6, temp0_37, 4)
                
                if (not(cond:14_1))
                label_14036d305:
                    arg7 = _mm_blend_ps(arg7, zmm0, 4)
                    
                    if (cond:19_1)
                        goto label_14036d285
                    
                    goto label_14036d312
            else
            label_14036d279:
                
                if (cond:15_1)
                    goto label_14036d305
            
            bool cond:22_1
            bool cond:26_1
            bool cond:27_1
            bool cond:23_1
            
            if (cond:18_1)
            label_14036d312:
                arg5 = _mm_blend_ps(arg5, zmm7, 4)
                char temp10_1 = rbx_1.b & 8
                cond:22_1 = temp10_1 != 0
                cond:23_1 = temp10_1 == 0
                cond:26_1 = temp10_1 == 0
                cond:27_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                label_14036d322:
                    arg6 = _mm_blend_ps(arg6, temp0_37, 8)
                    
                    if (cond:23_1)
                        goto label_14036d294
                    
                    goto label_14036d32f
            else
            label_14036d285:
                char temp11_1 = rbx_1.b & 8
                cond:22_1 = temp11_1 != 0
                cond:23_1 = temp11_1 == 0
                cond:26_1 = temp11_1 == 0
                cond:27_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                    goto label_14036d322
            uint64_t rbx_2
            
            if (cond:22_1)
            label_14036d32f:
                arg7 = _mm_blend_ps(arg7, zmm0, 8)
                rbx_2 = not.q(rbx_1)
                
                if (not(cond:26_1))
                label_14036d33f:
                    arg5 = _mm_blend_ps(arg5, zmm7, 8)
                    rdi_1 &= rbx_2
                    
                    if (rdi_1 == 0)
                        break
                    
                    continue
            else
            label_14036d294:
                rbx_2 = not.q(rbx_1)
                
                if (cond:27_1)
                    goto label_14036d33f
            
            rdi_1 &= rbx_2
            
            if (rdi_1 == 0)
                break
        
        float temp0_64[0x4] = _mm_insert_ps(arg6, arg7, 0x30)
        float temp0_65[0x4] = _mm_shuffle_ps(arg7, arg5, 0x49)
        float temp0_66[0x4] = _mm_blend_ps(temp0_64, temp0_65, 4)
        *(arg1 + (r14_1 << 2)) = _mm_shuffle_ps(temp0_66, temp0_66, 0x6c)
        float temp0_68[0x4] = _mm_blend_ps(temp0_65, arg6, 4)
        *(arg1 + (r14_1 << 2) + 0x10) = _mm_shuffle_ps(temp0_68, temp0_68, 0x6c)
        float temp0_71[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg7, arg6, 0x33), arg5, 0xe2)
        *(arg1 + (r14_1 << 2) + 0x20) = _mm_shuffle_ps(temp0_71, temp0_71, 0xd2)
        rsi = r11_1.d + 4
        
        if (rsi s>= r10_4)
            break
    
    r10_5 = zx.q(rsi)
    
    if (rsi s< arg2)
        goto label_14036d3ca
return result
