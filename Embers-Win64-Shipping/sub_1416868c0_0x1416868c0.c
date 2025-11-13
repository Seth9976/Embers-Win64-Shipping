// 函数: sub_1416868c0
// 地址: 0x1416868c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = arg6
int128_t* rsi = arg3
float zmm4 = arg5
void* r12 = arg1
float zmm1 = *(arg1 + 0x9c) - zmm2
float zmm5 = *(arg1 + 0xa8) + zmm2
float var_13c = zmm2
float var_138 = zmm2
zmm2 = arg4 * arg3[1]
char arg_20 = 0
float var_1f8 = *(arg1 + 0x98) - zmm4
*(arg1 + 0x34)
float var_1f0 = zmm4 f+ *(arg1 + 0xa4)
float zmm0 = *arg2
*(arg1 + 0x30)
float var_1f4 = zmm1
zmm1 = arg2[1]
float var_140 = zmm4
float arg_18 = arg4 * *arg3 + zmm0
arg5 = zmm0
arg6 = zmm1
char rax
float zmm6_1
float zmm8_1
int128_t zmm9
int128_t zmm10
rax, zmm6_1, zmm8_1, zmm9, zmm10 = sub_141733fb0(&var_1f8, &arg5, &arg_18)

if (rax != 0)
    float zmm5_1 = 1f f/ *(r12 + 0x68)
    int32_t rcx_1 = 1
    float zmm4_1 = 1f f/ *(r12 + 0x6c)
    int128_t var_88_1 = zmm9
    float zmm2_1 = arg6 / zmm6_1 f- *(r12 + 0x54)
    int128_t var_98_1 = zmm10
    float zmm3 = arg5 / zmm8_1 f- *(r12 + 0x50)
    zmm9.d = 1f / zmm6_1
    zmm10.d = 1f / zmm8_1
    int32_t var_1e8 = int.d(zmm5_1 * zmm3)
    int32_t var_1e4 = int.d(zmm2_1 * zmm4_1)
    float zmm0_1
    
    for (int64_t i = 0; i s< 2; i += 2)
        zmm0_1 = i != 0 ? zmm2_1 : zmm3
        
        if (not(zmm0_1 >= 0f))
            (&var_1e8)[i] -= 1
        
        zmm0_1 = rcx_1 != 0 ? zmm2_1 : zmm3
        
        if (not(zmm0_1 >= 0f))
            (&var_1e4)[i] -= 1
        
        rcx_1 += 2
    
    int32_t rcx_2 = 1
    zmm3 = arg_18 f* zmm10.d f- *(r12 + 0x50)
    zmm2_1 = (zmm2 + zmm1) f* zmm9.d f- *(r12 + 0x54)
    arg5 = int.d(zmm3 * zmm5_1)
    arg6 = int.d(zmm2_1 * zmm4_1)
    
    for (int64_t i_1 = 0; i_1 s< 2; i_1 += 2)
        zmm0_1 = i_1 != 0 ? zmm2_1 : zmm3
        
        if (not(zmm0_1 >= 0f))
            (&arg5)[i_1] -= 1
        
        zmm0_1 = rcx_2 != 0 ? zmm2_1 : zmm3
        
        if (not(zmm0_1 >= 0f))
            (&arg6)[i_1] -= 1
        
        rcx_2 += 2
    
    int32_t rax_5 = *(r12 + 0x60)
    int32_t r13_1 = var_1e8
    
    if (r13_1 s>= rax_5)
        r13_1 = rax_5 - 1
    else if (r13_1 s< 0)
        r13_1 = 0
    
    int32_t rcx_3 = *(r12 + 0x64)
    int32_t r15_1 = var_1e4
    int32_t var_1c8_1 = r13_1
    
    if (r15_1 s>= rcx_3)
        r15_1 = rcx_3 - 1
    else if (r15_1 s< 0)
        r15_1 = 0
    
    float r10_1 = arg5
    int32_t var_1cc_1 = r15_1
    var_1e8 = r13_1
    var_1e4 = r15_1
    
    if (r10_1 s>= rax_5)
        r10_1 = rax_5 - 1
    else if (r10_1 s< 0)
        r10_1 = 0f
    
    float r9_1 = arg6
    
    if (r9_1 s>= rcx_3)
        r9_1 = rcx_3 - 1
    else if (r9_1 s< 0)
        r9_1 = 0f
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 i- r13_1)
    int32_t rcx_6 = (temp1_1 ^ temp0_1) - temp0_1
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_1 i- r15_1)
    int32_t r8_4 = neg.d((temp3_1 ^ temp2_1) - temp2_1)
    
    if (rcx_6 == 0)
        arg_20 = 1
    
    if (rcx_6 != 0 || r8_4 != 0)
        arg_20 = 0
    
    int32_t rax_12 = -1
    int32_t rdx_3 = -1
    
    if (r13_1 s< r10_1)
        rdx_3 = 1
    
    if (r15_1 s< r9_1)
        rax_12 = 1
    
    int32_t var_1c4_1 = r8_4 + rcx_6
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(rcx_6)
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r8_4)
    int32_t rdx_6
    
    if ((temp5_1 ^ temp4_1) - temp4_1 s<= (temp7_1 ^ temp6_1) - temp6_1)
        arg5.q = 1
        rdx_6 = 2
    else
        arg5 = 0f
        rdx_6 = 1
        arg6 = 1.40129846e-45f
    
    int64_t rdi_1 = arg5.q
    int64_t var_150_1 = rdi_1
    int32_t rcx_11 = rdx_6 & 0xfffffffd
    int64_t var_128_1 = rdi_1
    
    if ((rdx_6.b & 2) == 0)
        rcx_11 = rdx_6
    
    int32_t rdx_8 = rcx_11 & 0xfffffffe
    
    if ((rcx_11.b & 1) == 0)
        rdx_8 = rcx_11
    
    int32_t var_1d0_1 = rdx_8
    int32_t var_168
    sub_141704720(&var_168, *(r12 + 0x60))
    int64_t var_1a0 = var_1e8.q
    var_1f8.q = 0
    var_1f0.q = 1
    int32_t var_198_1 = 0xbf800000
    sub_140dbcb10(&var_1f8)
    uint64_t* r14_1 = var_1f8.q
    *r14_1 = var_1a0
    r14_1[1].d = var_198_1
    char* var_160
    char* r15_2 = var_160
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(var_168 * r15_1 + r13_1)
    int32_t rdx_12 = temp8_1 & 7
    int32_t rax_28 = temp9_1 + rdx_12
    int64_t rax_31 = sx.q(rax_28 s>> 3)
    r15_2[rax_31] |= 1 << ((rax_28.b & 7) - rdx_12.b)
    uint128_t zmm1_2 = *rsi
    rax_31.b = _mm_and_ps(zmm1_2, 0x7fffffff).d f<= 9.99999994e-09f
    arg5.b = rax_31.b
    uint128_t zmm0_2
    
    if (rax_31.b == 0)
        zmm0_2.d = 1f f/ zmm1_2.d
    else
        zmm0_2 = zx.o(0)
    
    zmm1_2 = *(rsi + 4)
    int32_t var_110 = zmm0_2.d
    rax_31.b = _mm_and_ps(zmm1_2, 0x7fffffff).d f<= 9.99999994e-09f
    arg5:1.b = rax_31.b
    
    if (rax_31.b == 0)
        zmm0_2.d = 1f f/ zmm1_2.d
    else
        zmm0_2 = zx.o(0)
    
    zmm1_2 = *(rsi + 8)
    int32_t var_10c_1 = zmm0_2.d
    rax_31.b = _mm_and_ps(zmm1_2, 0x7fffffff).d f<= 9.99999994e-09f
    arg5:2.b = rax_31.b
    float zmm7_1
    
    if (rax_31.b == 0)
        zmm7_1 = 1f f/ zmm1_2.d
    else
        zmm7_1 = (zx.o(0)).d
    
    float r13_2 = var_1f0
    float var_108_1 = zmm7_1
    
    if (r13_2 s> 0)
        int64_t rcx_15 = 0
        float rsi_1 = 0f
        
        do
            int64_t rax_32 = rcx_15 * 3
            rsi_1 += 1
            zmm0_2 = zx.o(*(r14_1 + (rax_32 << 2)))
            rcx_15 += 1
            bool cond:2_1 = *(r14_1 + (rax_32 << 2) + 8) > arg4
            arg_18 = rsi_1
            uint64_t var_1c0_1 = zmm0_2.q
            
            if (not(cond:2_1))
                float var_188
                int32_t var_184
                float var_180
                int32_t var_178
                float var_174
                int32_t var_170
                
                if (arg_20 == 0)
                    uint64_t rbx_5 = var_1c0_1
                    int64_t rax_49
                    uint128_t zmm6_3
                    uint128_t zmm8_3
                    rax_49, zmm6_3, zmm7_1, zmm8_3 =
                        sub_14173e0e0(r12, rbx_5, &var_178, &var_188, &var_140)
                    int32_t r8_11 = var_1d0_1
                    uint128_t zmm1_4
                    
                    if (rax_49.b == 0)
                    label_14168717f:
                        rax_49.b = 0
                    else
                        int32_t* rax_50 = arg2
                        float* rcx_25 = &arg5
                        r8_11 |= 4
                        int32_t rdx_25 = 0
                        var_1d0_1 = r8_11
                        int32_t zmm3_2 = zmm6_3.d
                        zmm0_2.d = var_178.d f- *rax_50
                        zmm1_4.d = var_174.d f- rax_50[1]
                        int32_t var_d8 = zmm0_2.d
                        zmm0_2.d = var_170.d f- rax_50[2]
                        int32_t var_d4_1 = zmm1_4.d
                        zmm1_4.d = var_188.d f- *rax_50
                        int32_t var_d0_1 = zmm0_2.d
                        zmm0_2.d = var_184.d f- rax_50[1]
                        var_1a0.d = zmm1_4.d
                        zmm1_4.d = var_180.d f- rax_50[2]
                        rax_49 = 0
                        var_1a0:4.d = zmm0_2.d
                        zmm0_2 = zmm8_3
                        int32_t var_198_2 = zmm1_4.d
                        
                        while (true)
                            int32_t zmm4_3 = zmm0_2.d
                            int32_t zmm2_3 = *(&var_d8 + rax_49)
                            int32_t zmm5_2 = zmm3_2
                            
                            if (*rcx_25 == 0)
                                zmm0_2 = *(&var_110 + rax_49)
                                zmm1_4 = zmm0_2
                                zmm0_2.d = zmm0_2.d f* *(&var_1a0 + rax_49)
                                zmm1_4.d = zmm1_4.d f* zmm2_3
                            else
                                if (zmm2_3 f> zmm6_3.d)
                                    goto label_14168717f
                                
                                if (zmm6_3.d f> *(&var_1a0 + rax_49))
                                    goto label_14168717f
                                
                                zmm1_4 = zmm6_3
                                zmm0_2 = zmm8_3
                            
                            zmm3_2 = zmm0_2.d
                            zmm0_2 = _mm_max_ss(zmm0_2.d, zmm1_4.d)
                            int32_t temp0_10 = _mm_min_ss(zmm3_2, zmm1_4.d)
                            zmm0_2 = _mm_min_ss(zmm0_2.d, zmm4_3)
                            zmm3_2 = _mm_max_ss(temp0_10, zmm5_2)
                            
                            if (zmm3_2 f> zmm0_2.d)
                                goto label_14168717f
                            
                            rdx_25 += 1
                            rcx_25 += 1
                            rax_49 += 4
                            
                            if (rdx_25 s>= 3)
                                if (zmm3_2 f> arg4)
                                    goto label_14168717f
                                
                                if (zmm0_2.d f< zmm6_3.d)
                                    goto label_14168717f
                                
                                rax_49.b = 1
                                break
                    
                    if ((r8_11.b & 4) != 0)
                        var_1d0_1 = r8_11 & 0xfffffffb
                    
                    bool rax_51
                    
                    if (rax_49.b != 0)
                        rax_51, zmm6_3, zmm7_1 = sub_14175c480(arg7, 
                            (zx.d(*(r12 + 0x46)) - 1) * var_1c0_1:4.d + var_1c0_1.d)
                    
                    if (rax_49.b != 0 && rax_51 == 0)
                        goto label_1416875b4
                    
                    if (not(zmm7_1 f>= zmm6_3.d))
                        int64_t rcx_27 = 0
                        int32_t temp10_1 = rdi_1.d
                        
                        if (temp10_1 == 0)
                            rcx_27 = 4
                        
                        int32_t* rax_52 = 0x30
                        
                        if (temp10_1 == 0)
                            rax_52 = 0x34
                        
                        void* rdx_30 = arg1
                        zmm1_4.d = (*(&var_140 + rcx_27)).d f/ *(rax_52 + rdx_30)
                        int32_t rcx_28 = int.d(zmm1_4.d)
                        
                        if (zmm1_4.d f>= zmm6_3.d)
                            if (rcx_28 != 0x80000000
                                    && not(_mm_cvtepi32_ps(zx.o(rcx_28)).d f== zmm1_4.d))
                                zmm1_4 = _mm_cvtepi32_ps(zx.o(rcx_28 +
                                    ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1_4, zmm1_4.q)) & 1) ^ 1)))
                        else if (rcx_28 != 0x80000000
                                && not(_mm_cvtepi32_ps(zx.o(rcx_28)).d f== zmm1_4.d))
                            zmm1_4 = _mm_cvtepi32_ps(zx.o(rcx_28
                                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_4, zmm1_4.q)) & 1)))
                        
                        int32_t r9_5 = int.d(zmm1_4.d)
                        int32_t r12_2 = 0
                        int32_t var_1b0_1 = r9_5
                        
                        if (r9_5 s> 0)
                            int32_t rsi_5 = rbx_5:4.d
                            int32_t r14_4 = rbx_5.d
                            int64_t r10_2 = var_1f8.q
                            
                            do
                                r14_4 += rdi_1.d
                                rsi_5 += var_150_1:4.d
                                uint64_t var_1d8_1
                                var_1d8_1.d = r14_4
                                var_1d8_1:4.d = rsi_5
                                
                                if (r14_4 s< 0)
                                    break
                                
                                if (rsi_5 s< 0)
                                    break
                                
                                if (r14_4 s> *(rdx_30 + 0x60) - 1)
                                    break
                                
                                if (rsi_5 s> *(rdx_30 + 0x64) - 1)
                                    break
                                
                                int32_t temp13_1
                                int32_t temp14_1
                                temp13_1:temp14_1 = sx.q(rsi_5 * var_168 + r14_4)
                                int32_t rdx_32 = temp13_1 & 7
                                int32_t rax_67 = temp14_1 + rdx_32
                                int32_t rax_69 = (rax_67 & 7) - rdx_32
                                int64_t r8_13 = sx.q(rax_67 s>> 3)
                                
                                if ((var_160[r8_13] u>> rax_69.b & 1) == 0)
                                    int64_t r15_3 = sx.q(r13_2)
                                    var_160[r8_13] |= (1 << (rax_69 u% 0x20)).b
                                    r13_2 = (r15_3 + 1).d
                                    int32_t var_c0_1 = 0
                                    var_1f0 = r13_2
                                    
                                    if (r13_2 s> zmm5)
                                        sub_140dbcb10(&var_1f8)
                                        r9_5 = var_1b0_1
                                        r10_2 = var_1f8.q
                                        r13_2 = var_1f0
                                    
                                    int64_t rcx_36 = r15_3 * 3
                                    *(r10_2 + (rcx_36 << 2)) = var_1d8_1
                                    *(r10_2 + (rcx_36 << 2) + 8) = var_c0_1
                                
                                rdx_30 = arg1
                                r12_2 += 1
                            while (r12_2 s< r9_5)
                            
                            rbx_5 = var_1c0_1
                            r14_1 = var_1f8.q
                        
                        float r10_3 = var_1f0
                        int32_t r15_4 = 0
                        
                        if (r9_5 s> 0)
                            int32_t rbx_7 = rbx_5:4.d
                            int32_t rsi_6 = rbx_5.d
                            
                            do
                                rsi_6 += neg.d(rdi_1.d)
                                rbx_7 += neg.d(var_150_1:4.d)
                                uint64_t var_1d8_2
                                var_1d8_2.d = rsi_6
                                var_1d8_2:4.d = rbx_7
                                
                                if (rsi_6 s< 0)
                                    break
                                
                                if (rbx_7 s< 0)
                                    break
                                
                                if (rsi_6 s> *(rdx_30 + 0x60) - 1)
                                    break
                                
                                if (rbx_7 s> *(rdx_30 + 0x64) - 1)
                                    break
                                
                                int32_t temp15_1
                                int32_t temp16_1
                                temp15_1:temp16_1 = sx.q(rbx_7 * var_168 + rsi_6)
                                int32_t rdx_36 = temp15_1 & 7
                                int32_t rax_80 = temp16_1 + rdx_36
                                int32_t rax_82 = (rax_80 & 7) - rdx_36
                                int64_t r8_14 = sx.q(rax_80 s>> 3)
                                
                                if ((var_160[r8_14] u>> rax_82.b & 1) == 0)
                                    int64_t r14_5 = sx.q(r10_3)
                                    var_160[r8_14] |= (1 << (rax_82 u% 0x20)).b
                                    r10_3 = (r14_5 + 1).d
                                    int32_t var_b4_1 = 0
                                    var_1f0 = r10_3
                                    
                                    if (r10_3 s> zmm5)
                                        sub_140dbcb10(&var_1f8)
                                        r9_5 = var_1b0_1
                                        r10_3 = var_1f0
                                    
                                    int64_t rcx_43 = r14_5 * 3
                                    r14_1 = var_1f8.q
                                    *(r14_1 + (rcx_43 << 2)) = var_1d8_2
                                    *(r14_1 + (rcx_43 << 2) + 8) = var_b4_1
                                
                                rdx_30 = arg1
                                r15_4 += 1
                            while (r15_4 s< r9_5)
                            
                            rdi_1 = var_128_1
                        
                        int32_t rdx_39 = var_1c8_1
                        int32_t rcx_44 = var_1cc_1
                        
                        if (rdx_39 != r10_1 || rcx_44 != r9_1)
                            int32_t r8_15 = var_1c4_1
                            int32_t rax_85 = r8_15 * 2
                            
                            if (rax_85 s>= r8_4)
                                r8_15 += r8_4
                                rdx_39 += rdx_3
                                var_1c8_1 = rdx_39
                                var_1e8 = rdx_39
                                var_1c4_1 = r8_15
                            
                            if (rax_85 s<= rcx_6)
                                rcx_44 += rax_12
                                var_1cc_1 = rcx_44
                                var_1e4 = rcx_44
                                var_1c4_1 = r8_15 + rcx_6
                            
                            r15_2 = var_160
                            int32_t temp11_1
                            int32_t temp12_1
                            temp11_1:temp12_1 = sx.q(var_168 * rcx_44 + rdx_39)
                            int32_t rdx_41 = temp11_1 & 7
                            int32_t rax_90 = temp12_1 + rdx_41
                            int32_t rax_92 = (rax_90 & 7) - rdx_41
                            int64_t r8_17 = sx.q(rax_90 s>> 3)
                            
                            if ((r15_2[r8_17] u>> rax_92.b & 1) == 0)
                                int64_t rbx_8 = sx.q(r10_3)
                                int64_t rax_93 = var_1e8.q
                                r15_2[r8_17] |= (1 << (rax_92 u% 0x20)).b
                                int32_t r10_4 = (rbx_8 + 1).d
                                int32_t var_a8_1 = 0xbf800000
                                var_1f0 = r10_4
                                
                                if (r10_4 s> zmm5)
                                    sub_140dbcb10(&var_1f8)
                                    r14_1 = var_1f8.q
                                
                                int64_t rcx_51 = rbx_8 * 3
                                *(r14_1 + (rcx_51 << 2)) = rax_93
                                *(r14_1 + (rcx_51 << 2) + 8) = var_a8_1
                        else
                            r15_2 = var_160
                        
                        r13_2 = var_1f0
                        rsi_1 = arg_18
                        r12 = arg1
                else
                    int32_t rbx_2 = var_1c0_1.d
                    
                    if (sub_14175c480(arg7, 
                        (zx.d(*(r12 + 0x46)) - 1) * (var_1c0_1 u>> 0x20).d + rbx_2) == 0)
                    label_1416875b4:
                        
                        if (r14_1 != 0)
                            sub_140a74f90(r14_1)
                        
                        j_sub_140a74f90(r15_2)
                        return 1
                    
                    TEB* gsbase
                    
                    if (data_143ef7ad0 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143ef7ad0)
                        
                        if (data_143ef7ad0 == 0xffffffff)
                            __builtin_memcpy(&data_143ef7a90, 
                                "\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\xff\xff\xff\xff\x01\x"
                            "00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00"
                            "00\x00\x00\x00\x00\xff\xff\xff\xff\x01\x00\x00\x00\x00\x00\x00\x00\x01"
                            "00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
                                0x40)
                            atexit(sub_142ce9ba0)
                            _Init_thread_footer(&data_143ef7ad0)
                    
                    int128_t* i_2 = &data_143ef7a90
                    int64_t rdi_2 = var_1f8.q
                    
                    do
                        int32_t r14_3 = *i_2 + rbx_2
                        int32_t rsi_3 = *(i_2 + 4) + var_1c0_1:4.d
                        int32_t var_fc_1 = rsi_3
                        int64_t rbx_3 = r14_3.q
                        char rax_40
                        float zmm6_2
                        uint128_t zmm8_2
                        rax_40, zmm6_2, zmm8_2 =
                            sub_14173e0e0(arg1, rbx_3, &var_178, &var_188, &var_140)
                        
                        if (rax_40 != 0)
                            int32_t r8_8 = rsi_3 * var_168 + r14_3
                            int32_t rax_41 = r8_8
                            int32_t rcx_19 = r8_8 & 7
                            
                            if (r8_8 s< 0)
                                rax_41 = r8_8 + 7
                                rcx_19 -= 8
                            
                            if ((var_160[sx.q(rax_41 s>> 3)] u>> rcx_19.b & 1) == 0)
                                float* rcx_20 = &arg5
                                float zmm3_1 = zmm6_2
                                zmm0_2.d = var_178.d f- *arg2
                                float zmm1_3 = var_174 - arg2[1]
                                int32_t var_f8 = zmm0_2.d
                                zmm0_2.d = var_170.d f- arg2[2]
                                float var_f4_1 = zmm1_3
                                int32_t var_f0_1 = zmm0_2.d
                                zmm0_2.d = var_184.d f- arg2[1]
                                float var_120 = var_188 - *arg2
                                int64_t rax_45 = 0
                                int32_t var_11c_1 = zmm0_2.d
                                int32_t rdx_20 = 0
                                zmm0_2 = zmm8_2
                                float var_118_1 = var_180 - arg2[2]
                                
                                while (true)
                                    int32_t zmm2_2 = zmm0_2.d
                                    zmm1_3 = *(&var_f8 + rax_45)
                                    float zmm4_2 = zmm3_1
                                    
                                    if (*rcx_20 == 0)
                                        zmm0_2 = *(&var_110 + rax_45)
                                        zmm1_3 = zmm1_3 f* zmm0_2.d
                                        zmm0_2.d = zmm0_2.d f* *(&var_120 + rax_45)
                                    else
                                        if (zmm1_3 > zmm6_2)
                                            break
                                        
                                        if (zmm6_2 f> *(&var_120 + rax_45))
                                            break
                                        
                                        zmm1_3 = zmm6_2
                                        zmm0_2 = zmm8_2
                                    
                                    zmm3_1 = zmm0_2.d
                                    zmm0_2 = _mm_max_ss(zmm0_2.d, zmm1_3)
                                    zmm3_1 = _mm_min_ss(zmm3_1, zmm1_3)
                                    zmm0_2 = _mm_min_ss(zmm0_2.d, zmm2_2)
                                    zmm3_1 = _mm_max_ss(zmm3_1, zmm4_2)
                                    
                                    if (zmm3_1 f> zmm0_2.d)
                                        break
                                    
                                    rdx_20 += 1
                                    rcx_20 += 1
                                    rax_45 += 4
                                    
                                    if (rdx_20 s>= 3)
                                        if (not(zmm3_1 > arg4) && not(zmm0_2.d f< zmm6_2))
                                            int32_t rdx_22 = r8_8 & 7
                                            
                                            if (r8_8 s< 0)
                                                r8_8 += 7
                                                rdx_22 -= 8
                                            
                                            int64_t rcx_21 = sx.q(r8_8 s>> 3)
                                            int64_t rbx_4 = sx.q(r13_2)
                                            r13_2 = (rbx_4 + 1).d
                                            var_160[rcx_21] |= (1 << (rdx_22 u% 0x20)).b
                                            var_1f0 = r13_2
                                            
                                            if (r13_2 s> zmm5)
                                                sub_140dbcb10(&var_1f8)
                                                r13_2 = var_1f0
                                                rdi_2 = var_1f8.q
                                            
                                            int64_t rcx_23 = rbx_4 * 3
                                            *(rdi_2 + (rcx_23 << 2)) = rbx_3
                                            *(rdi_2 + (rcx_23 << 2) + 8) = zmm3_1
                                        
                                        break
                        
                        rbx_2 = var_1c0_1.d
                        i_2 += 8
                    while (i_2 != &data_143ef7ad0)
                    
                    rdi_1 = var_128_1
                    r14_1 = var_1f8.q
                    r15_2 = var_160
                    rsi_1 = arg_18
                    r12 = arg1
        while (rsi_1 s< r13_2)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    j_sub_140a74f90(r15_2)

return 0
