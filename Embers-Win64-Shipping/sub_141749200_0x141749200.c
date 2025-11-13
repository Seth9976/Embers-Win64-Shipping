// 函数: sub_141749200
// 地址: 0x141749200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
uint128_t zmm9 = arg5
int32_t r9 = 0
int128_t zmm13 = zx.o(0)
int32_t r10 = 0
int32_t* r12 = arg3
*arg9 = 0xffffffff
int128_t zmm7 = zx.o(0)
uint32_t zmm12[0x4] = *arg1
uint128_t zmm8 = zx.o(0)
uint32_t zmm11[0x4] = *(arg1 + 4)
uint32_t zmm10[0x4] = *(arg1 + 8)
zmm12[0] = zmm12[0] f- zmm9.d
int32_t var_1f8 = 0
zmm10[0] = zmm10[0] f- zmm9.d
int32_t i_1 = 0xffffffff
zmm12[0] = zmm12[0] f- *arg2
uint32_t var_1d0 = arg4[0]
zmm10[0] = zmm10[0] f- arg2[2]
int32_t var_178 = 0
int64_t zmm4 = 0x7f7fffff
uint32_t zmm14[0x4] = zx.o(0)
uint32_t var_1f0 = zmm12[0]
int128_t zmm15 = zx.o(0)
zmm11[0] = zmm11[0] f- zmm9.d
uint32_t var_1e8 = zmm10[0]
uint32_t zmm1[0x4] = zmm9
zmm1[0] = zmm1[0] f+ arg1[1].d
int64_t r8 = 0
zmm11[0] = zmm11[0] f- arg2[1]
zmm1[0] = zmm1[0] f- arg2[1]
uint32_t var_1ec = zmm11[0]
uint32_t zmm0[0x4] = zmm9
zmm0[0] = zmm0[0] f+ *(arg1 + 0xc)
uint32_t var_18c = zmm1[0]
zmm0[0] = zmm0[0] f- *arg2
uint32_t var_190 = zmm0[0]
zmm0 = zmm9
zmm0[0] = zmm0[0] f+ *(arg1 + 0x14)
zmm0[0] = zmm0[0] f- arg2[2]
uint32_t var_188 = zmm0[0]
void* result

while (true)
    result = &var_1f0 + r8
    arg4 = *(arg3 - &var_1f0 + result)
    uint32_t zmm2[0x4] = *result
    
    if (_mm_and_ps(arg4, 0x7fffffff)[0] f> 9.99999994e-09f)
        zmm1 = 0x3f800000
        zmm1[0] = 1f f/ arg4[0]
        zmm2[0] = zmm2[0] f* zmm1[0]
        zmm1[0] = zmm1[0] f* *(&var_190 + r8)
    label_1417493e8:
        int64_t var_1cc
        int64_t var_130
        int64_t* rax_3
        int32_t r9_1
        
        if (r10 != 0)
            int32_t* rax_4
            int32_t r9_2
            
            if (r10 != 1)
                r9_2 = r9 | 4
                var_1cc = 0
                int32_t var_1c4_1 = 0x3f800000
                rax_4 = &var_1cc
            else
                r9_2 = r9 | 2
                int32_t var_14c = 0
                int64_t var_148_1 = 0x3f800000
                rax_4 = &var_14c
            
            r9_1 = r9_2 | 8
            int32_t var_128_1 = rax_4[2]
            rax_3 = &var_130
            var_130 = *rax_4
        else
            r9_1 = r9 | 1
            int64_t var_158 = 0x3f800000
            int32_t var_150_1 = r10
            rax_3 = &var_158
        
        int32_t rax_6 = rax_3[1].d
        int32_t rcx_1 = r9_1 & 0xfffffff7
        int64_t var_1e0 = *rax_3
        
        if ((r9_1.b & 8) == 0)
            rcx_1 = r9_1
        
        int32_t rdx_1 = rcx_1 & 0xfffffffb
        
        if ((rcx_1.b & 4) == 0)
            rdx_1 = rcx_1
        
        int32_t rcx_3 = rdx_1 & 0xfffffffd
        
        if ((rdx_1.b & 2) == 0)
            rcx_3 = rdx_1
        
        r9 = rcx_3 & 0xfffffffe
        result.b = rcx_3.b & 1
        
        if (result.b == 0)
            r9 = rcx_3
        
        if (zmm2[0] f<= zmm1[0])
            *(&var_1e0 + r8) = 0xbf800000
        else
            zmm0 = zmm2
            zmm2 = zmm1
            zmm1 = zmm0
        
        if (not(zmm2[0] f<= zmm8.d))
            zmm13 = rax_6
            zmm14 = var_1e0.d
            zmm15 = var_1e0:4.d
            var_178 = zmm13.d
        
        zmm1 = _mm_min_ss(zmm1[0], zmm4.d)
        zmm2 = _mm_max_ss(zmm2[0], zmm8.d)
        zmm4 = zmm1[0].q
        zmm8 = zmm2
        
        if (not(zmm8.d f> zmm1[0]))
            r10 += 1
            r8 += 4
            
            if (r10 s< 3)
                continue
            else if (not(zmm8.d f> var_1d0) && not(zmm1[0] f< 0f))
                uint32_t zmm5[0x4] = zmm2
                zmm4 = zmm2[0].q
                zmm5[0] = zmm5[0] f* *r12
                arg4 = zmm2
                zmm4.d = zmm4.d f* r12[1]
                arg4[0] = arg4[0] f* r12[2]
                zmm5[0] = zmm5[0] f+ *arg2
                zmm4.d = zmm4.d f+ arg2[1]
                arg4[0] = arg4[0] f+ arg2[2]
                uint32_t var_1d8_2
                int32_t rax_10
                uint32_t zmm6[0x4]
                
                if (not(zmm9.d f== 0f))
                    rax_10 = 0
                    
                    if (zmm5[0] f>= zmm12[0])
                        zmm6 = *(arg1 + 0xc)
                        
                        if (not(zmm5[0] f<= zmm6[0]))
                            zmm12 = zmm6
                            rax_10 = 1
                    else
                        zmm6 = zmm12
                        rax_10 = 1
                    
                    var_1e0.d = zmm12[0]
                    
                    if (zmm4.d f>= zmm11[0])
                        zmm2 = arg1[1].d
                        
                        if (not(zmm4.d f<= zmm2[0]))
                            zmm11 = zmm2
                            rax_10 += 1
                    else
                        zmm2 = zmm11
                        rax_10 += 1
                    
                    var_1e0:4.d = zmm11[0]
                    
                    if (arg4[0] f>= zmm10[0])
                        zmm1 = *(arg1 + 0x14)
                        
                        if (not(arg4[0] f<= zmm1[0]))
                            zmm10 = zmm1
                            rax_10 += 1
                    else
                        zmm1 = zmm10
                        rax_10 += 1
                    
                    var_1d8_2 = zmm10[0]
                
                if (zmm9.d f== 0f || rax_10 u< 2)
                    zmm0 = _mm_unpacklo_ps(zmm14, zmm15.q)
                    *arg6 = zmm8.d
                    *arg8 = zmm0.q
                    arg8[1].d = var_178
                    zmm14[0] = zmm14[0] f* zmm9.d
                    zmm15.d = zmm15.d f* zmm9.d
                    zmm13.d = zmm13.d f* zmm9.d
                    zmm5[0] = zmm5[0] f- zmm14[0]
                    zmm4.d = zmm4.d f- zmm15.d
                    arg4[0] = arg4[0] f- zmm13.d
                    *arg7 = (_mm_unpacklo_ps(zmm5, zmm4)).q
                    arg7[1].d = arg4[0]
                    result.b = 1
                else
                    int32_t* rsi
                    rsi.b = 0
                    uint64_t var_1b0
                    uint32_t var_1a4
                    
                    if (rax_10 != 3)
                        zmm0 = zx.o(var_1e0)
                        zmm2[0] = zmm2[0] f- zmm11[0]
                        zmm1[0] = zmm1[0] f- zmm10[0]
                        zmm6[0] = zmm6[0] f- zmm12[0]
                        int32_t var_1b8_2 = 0x1010303
                        char var_1b4_2 = 1
                        void** const var_1c0_2 = &data_142fc4eb0
                        uint32_t var_1a0_2 = zmm2[0]
                        uint32_t var_19c_2 = zmm1[0]
                        var_1a4 = zmm6[0]
                        var_1b0 = zmm0.q
                        uint128_t zmm0_2 = sub_141750780(&var_1a4)
                        int32_t* var_208_2 = arg9
                        uint128_t zmm1_2
                        zmm1_2.d = var_1a4.d f* zmm0_2.d
                        zmm1_2.d = zmm1_2.d f+ var_1b0.d
                        var_1cc.d = zmm1_2.d
                        zmm1_2.d = var_19c_2.d f* zmm0_2.d
                        int32_t var_198_2 = zmm0_2.d
                        zmm1_2.d = zmm1_2.d f+ var_1d8_2
                        int32_t var_194_2 = zmm9.d
                        var_1cc:4.d = var_1a0_2 f* zmm0_2.d f+ var_1b0:4.d
                        int32_t var_1c4_3 = zmm1_2.d
                        char rax_24
                        rax_24, zmm7, zmm9 = sub_14174bd50(zmm9, zmm0_2, &var_1a4, &var_1b0, 
                            &var_1cc, arg2, r12, var_1d0.d, 0, arg6, arg7, arg8)
                        rsi = zx.q(rax_24)
                        
                        if (rax_24 != 0)
                            goto label_1417498b0
                    else
                        zmm8 = zx.o(var_1e0)
                        int128_t* r15_1 = arg1 - &var_1f0
                        zmm13 = var_1d0
                        int32_t i = 0
                        int64_t rbx_1 = 0
                        void var_120
                        void var_f8
                        int32_t i_3
                        float zmm6_1
                        
                        do
                            var_1f0 = zmm12[0]
                            void* rax_11 = &var_1f0 + rbx_1
                            uint32_t var_1ec_1 = zmm11[0]
                            uint32_t var_1e8_1 = zmm10[0]
                            zmm0 = *(r15_1 + rax_11)
                            
                            if (not(zmm0[0] f!= *rax_11))
                                zmm0 = *(r15_1 + rax_11 + 0xc)
                            
                            *rax_11 = zmm0[0]
                            zmm0 = var_1f0
                            zmm1 = var_1ec_1
                            zmm0[0] = zmm0[0] f- zmm12[0]
                            zmm1[0] = zmm1[0] f- zmm11[0]
                            int32_t var_1b8_1 = 0x1010303
                            char var_1b4_1 = 1
                            void** const var_1c0_1 = &data_142fc4eb0
                            var_1b0 = zmm8.q
                            var_1a4 = zmm0[0]
                            zmm0 = var_1e8_1
                            zmm0[0] = zmm0[0] f- zmm10[0]
                            float var_1a0_1 = zmm1[0]
                            uint32_t var_19c_1 = zmm0[0]
                            uint128_t zmm0_1 = sub_141750780(&var_1a4)
                            uint128_t zmm1_1
                            zmm1_1.d = var_1a4.d f* zmm0_1.d
                            int64_t i_2 = sx.q(i)
                            zmm1_1.d = zmm1_1.d f+ var_1b0.d
                            int64_t rax_12 = i_2 * 3
                            int32_t var_198_1 = zmm0_1.d
                            int32_t var_194_1 = zmm9.d
                            var_1cc.d = zmm1_1.d
                            int32_t* var_208_1 = arg9
                            zmm1_1.d = var_19c_1.d f* zmm0_1.d
                            zmm1_1.d = zmm1_1.d f+ var_1d8_2
                            var_1cc:4.d = var_1a0_1 f* zmm0_1.d f+ var_1b0:4.d
                            int32_t var_1c4_2 = zmm1_1.d
                            char rax_16
                            rax_16, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
                                sub_14174bd50(zmm9, zmm0_1, &var_1a4, &var_1b0, &var_1cc, arg2, 
                                arg3, zmm13.d, zmm7.d, &var_130 + (i_2 << 2), 
                                &var_120 + (rax_12 << 2), &var_f8 + (rax_12 << 2))
                            i_3 = i_1
                            
                            if (rax_16 != 0
                                    && (i_3 == 0xffffffff || not(zmm6_1 f<= *(&var_130 + rbx_1))))
                                zmm6_1 = *(&var_130 + rbx_1)
                                i_3 = i
                                i_1 = i
                                
                                if (zmm6_1 f== zmm7.d)
                                    *arg6 = 0
                                    result = 1
                                    goto label_14174996c
                            
                            i += 1
                            rbx_1 += 4
                        while (i s< 3)
                        
                        if (i_3 != 0xffffffff)
                            rsi.b = 1
                            int64_t rcx_6 = sx.q(i_3) * 3
                            int32_t var_118[0x8]
                            int32_t rax_18 = var_118[rcx_6]
                            *arg7 = *(&var_120 + (rcx_6 << 2))
                            zmm0 = zx.o(*(&var_f8 + (rcx_6 << 2)))
                            arg7[1].d = rax_18
                            int32_t var_f0[0x8]
                            int32_t rax_19 = var_f0[rcx_6]
                            *arg6 = zmm6_1
                            *arg8 = zmm0.q
                            arg8[1].d = rax_19
                        label_1417498b0:
                            
                            if (not(zmm7.d f>= *arg6))
                                float zmm2_2 = *(arg8 + 4)
                                zmm1 = zmm9
                                zmm1[0] = zmm1[0] f* *arg8
                                float zmm3 = arg8[1].d
                                zmm0 = *arg7
                                zmm0[0] = zmm0[0] f- zmm1[0]
                                *arg7 = zmm0[0]
                                zmm0 = *(arg7 + 4)
                                zmm0[0] = zmm0[0] f- zmm2_2 f* zmm9.d
                                *(arg7 + 4) = zmm0[0]
                                zmm0 = arg7[1].d
                                zmm0[0] = zmm0[0] f- zmm3 f* zmm9.d
                                arg7[1].d = zmm0[0]
                    result = zx.q(rsi.b)
                
                break
    else if (not(zmm2[0] f> 0f) && not(0f f> *(&var_190 + r8)))
        zmm2 = zx.o(0)
        zmm1 = 0x7f7fffff
        goto label_1417493e8
    
    result.b = 0
    break

label_14174996c:
__security_check_cookie(rax_1 ^ &var_268)
return result
