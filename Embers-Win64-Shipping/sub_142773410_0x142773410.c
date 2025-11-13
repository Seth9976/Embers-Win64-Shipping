// 函数: sub_142773410
// 地址: 0x142773410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0xa0)
int32_t var_110 = 0
int32_t var_128 = 0
int64_t* rcx = *(result + 0x28)

if (rcx == 0)
    *(arg1 + 0xb0) = 6
else
    result = (*(*rcx + 0x20))(rcx, &var_110, &var_128)
    
    if (result.d s< 0)
        *(arg1 + 0xb0) = 6
    else
        void* r8_2 = *(arg1 + 0xa0)
        int32_t r10_1 = *(r8_2 + 0x88)
        int32_t rax_3 = *(r8_2 + 0x78) - r10_1 + var_128
        int32_t temp2_1 = *(r8_2 + 0x78)
        uint32_t temp1_1 = modu.dp.d(0:rax_3, temp2_1)
        result = zx.q(divu.dp.d(0:rax_3, temp2_1))
        
        if (temp1_1 != 0)
            int32_t arg_18 = 0
            int64_t var_f8 = 0
            int32_t arg_20 = 0
            int64_t var_100 = 0
            int64_t* rcx_1 = *(r8_2 + 0x28)
            result = (*(*rcx_1 + 0x40))(rcx_1, zx.q(r10_1), zx.q(temp1_1), &var_f8, &arg_18, 
                &var_100, &arg_20, 0)
            
            if (result.d s>= 0)
                int32_t r8_4 = arg_18
                int32_t r10_2 = arg_20
                int32_t rdx_4 = *(arg1 + 0xc4)
                int32_t rsi = *(arg1 + 0xc0)
                int32_t var_10c = r10_2
                int32_t var_108 = r8_4
                int32_t var_114 = rsi
                
                if (r10_2 + rsi + r8_4 u> rdx_4)
                    *(arg1 + 0xc0) = 0
                    
                    if (*(arg1 + 0xc4) != rdx_4)
                        arg2 = sub_1405c5510(arg1 + 0xb8, rdx_4)
                        r8_4 = arg_18
                        r10_2 = arg_20
                    
                    rsi = *(arg1 + 0xc0)
                    rdx_4 = *(arg1 + 0xc4)
                    var_114 = rsi
                    *(arg1 + 0xb0) = 3
                
                int32_t rax_8 = *(arg1 + 0x138)
                int32_t rcx_3 = *(arg1 + 0x13c)
                int32_t r9_2 = rdx_4
                
                if (r8_4 u<= rdx_4)
                    r9_2 = r8_4
                
                int32_t rdx_5 = rdx_4 - r9_2
                arg_18 = r9_2
                
                if (r10_2 u<= rdx_5)
                    rdx_5 = r10_2
                
                uint64_t r8_6 = zx.q(rax_8 - rcx_3)
                arg_20 = rdx_5
                
                if (rcx_3 s> rax_8)
                    r8_6 = zx.q(r8_6.d + *(arg1 + 0x130))
                
                int32_t rax_11 = r9_2 + (r8_6 << 1).d + rdx_5 + *(arg1 + 0xc0)
                *(arg1 + 0xc0) = rax_11
                
                if (rax_11 s> *(arg1 + 0xc4))
                    arg2 = sub_1405daba0(arg1 + 0xb8)
                
                int32_t rax_12 = *(arg1 + 0x138)
                int32_t rdx_7 = *(arg1 + 0x13c)
                int32_t rcx_6 = rax_12 - rdx_7
                int64_t r15 = var_f8
                int64_t rsi_2 = sx.q(rsi) + *(arg1 + 0xb8)
                
                if (rdx_7 s> rax_12)
                    rcx_6 += *(arg1 + 0x130)
                
                int32_t r14 = *(arg1 + 0x130)
                int32_t r8_7 = *(arg1 + 0x138)
                int32_t temp1_2 = mods.dp.d(sx.q(rdx_7), r14)
                int32_t rax_16 = r8_7 - temp1_2
                *(arg1 + 0x13c) = temp1_2
                int32_t r12 = r14 + rax_16
                
                if (temp1_2 s<= r8_7)
                    r12 = rax_16
                
                if (rcx_6 s<= r12)
                    r12 = rcx_6
                
                int32_t arg_10 = r12
                
                if (r12 != 0)
                    int64_t r9_3 = *(arg1 + 0x128) + (sx.q(temp1_2) << 1)
                    int64_t rcx_8 = rsi_2
                    int64_t rdx_10
                    int32_t r8_8
                    
                    if (temp1_2 s> r8_7)
                        int32_t r14_1 = r14 - temp1_2
                        int64_t rbx_1 = sx.q(r14_1) * 2
                        memcpy(rcx_8, r9_3, rbx_1.d)
                        rdx_10 = *(arg1 + 0x128)
                        rcx_8 = rbx_1 + rsi_2
                        r8_8 = r12 - r14_1
                    else
                        r8_8 = r12
                        rdx_10 = r9_3
                    
                    arg2 = memcpy(rcx_8, rdx_10, r8_8 * 2)
                    *(arg1 + 0x13c) += r12
                else
                    r12 = 0
                    arg_10 = 0
                
                int64_t rax_22 = rsi_2 + (sx.q(r12) << 1)
                TEB* gsbase
                void* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
                
                if (data_143f87a40 s> *(rbx_2 + 0x14))
                    int64_t r8_22
                    r8_22, arg2 = _Init_thread_header(&data_143f87a40)
                    
                    if (data_143f87a40 == 0xffffffff)
                        int64_t* rcx_40 = data_143db18d0
                        
                        if (rcx_40 == 0)
                            sub_140a53c40()
                            rcx_40 = data_143db18d0
                        
                        r8_22.b = 1
                        data_143f87a38 =
                            (*(*rcx_40 + 0xb0))(rcx_40, voice.SilenceDetectionThreshold", r8_22)
                        arg2 = _Init_thread_footer(&data_143f87a40)
                
                int64_t* rcx_10 = data_143f87a38
                (*(*rcx_10 + 0x98))(rcx_10)
                float var_124 = arg2[0]
                
                if (data_143f87a50 s> *(rbx_2 + 0x14))
                    int64_t r8_23
                    r8_23, arg2 = _Init_thread_header(&data_143f87a50)
                    
                    if (data_143f87a50 == 0xffffffff)
                        int64_t* rcx_41 = data_143db18d0
                        
                        if (rcx_41 == 0)
                            sub_140a53c40()
                            rcx_41 = data_143db18d0
                        
                        r8_23.b = 1
                        data_143f87a48 =
                            (*(*rcx_41 + 0xb0))(rcx_41, voice.MicNoiseGateThreshold", r8_23)
                        arg2 = _Init_thread_footer(&data_143f87a50)
                
                int64_t* rcx_11 = data_143f87a48
                (*(*rcx_11 + 0x98))(rcx_11)
                float var_120 = arg2[0]
                
                if (data_143f87a60 s> *(rbx_2 + 0x14))
                    int64_t r8_24
                    r8_24, arg2 = _Init_thread_header(&data_143f87a60)
                    
                    if (data_143f87a60 == 0xffffffff)
                        int64_t* rcx_42 = data_143db18d0
                        
                        if (rcx_42 == 0)
                            sub_140a53c40()
                            rcx_42 = data_143db18d0
                        
                        r8_24.b = 1
                        data_143f87a58 =
                            (*(*rcx_42 + 0xb0))(rcx_42, voice.MicNoiseAttackTime", r8_24)
                        arg2 = _Init_thread_footer(&data_143f87a60)
                
                int64_t* rcx_12 = data_143f87a58
                (*(*rcx_12 + 0x98))(rcx_12)
                uint32_t var_11c = arg2[0]
                
                if (data_143f87a70 s> *(rbx_2 + 0x14))
                    int64_t r8_25
                    r8_25, arg2 = _Init_thread_header(&data_143f87a70)
                    
                    if (data_143f87a70 == 0xffffffff)
                        int64_t* rcx_43 = data_143db18d0
                        
                        if (rcx_43 == 0)
                            sub_140a53c40()
                            rcx_43 = data_143db18d0
                        
                        r8_25.b = 1
                        data_143f87a68 =
                            (*(*rcx_43 + 0xb0))(rcx_43, voice.MicNoiseReleaseTime", r8_25)
                        arg2 = _Init_thread_footer(&data_143f87a70)
                
                int64_t* rcx_13 = data_143f87a68
                (*(*rcx_13 + 0x98))(rcx_13)
                uint32_t var_118 = arg2[0]
                
                if (data_143f87a80 s> *(rbx_2 + 0x14))
                    int64_t r8_26
                    r8_26, arg2 = _Init_thread_header(&data_143f87a80)
                    
                    if (data_143f87a80 == 0xffffffff)
                        int64_t* rcx_44 = data_143db18d0
                        
                        if (rcx_44 == 0)
                            sub_140a53c40()
                            rcx_44 = data_143db18d0
                        
                        r8_26.b = 1
                        data_143f87a78 = (*(*rcx_44 + 0xb0))(rcx_44, u"voice.MicInputGain", r8_26)
                        arg2 = _Init_thread_footer(&data_143f87a80)
                
                int64_t* rcx_14 = data_143f87a78
                (*(*rcx_14 + 0x98))(rcx_14)
                uint32_t zmm13[0x4] = arg2
                
                if (data_143f87a90 s> *(rbx_2 + 0x14))
                    int64_t r8_27
                    r8_27, arg2 = _Init_thread_header(&data_143f87a90)
                    
                    if (data_143f87a90 == 0xffffffff)
                        int64_t* rcx_45 = data_143db18d0
                        
                        if (rcx_45 == 0)
                            sub_140a53c40()
                            rcx_45 = data_143db18d0
                        
                        r8_27.b = 1
                        data_143f87a88 = (*(*rcx_45 + 0xb0))(rcx_45, u"voice.MicStereoBias", r8_27)
                        arg2 = _Init_thread_footer(&data_143f87a90)
                
                int64_t* rcx_15 = data_143f87a88
                (*(*rcx_15 + 0x98))(rcx_15)
                uint32_t zmm3[0x4] = 0xbf800000
                
                if (not(arg2[0] f< -1f))
                    zmm3 = _mm_min_ss(arg2[0], 0x3f800000)
                
                zmm3[0] = zmm3[0] f* 0.785398185f
                uint32_t zmm8[0x4] = zx.o(0)
                uint32_t zmm4[0x4] = 0x3fa2f983
                zmm3[0] = zmm3[0] f+ 2.3561945f
                zmm3[0] = zmm3[0] f+ 0.785398185f
                uint32_t zmm7[0x4] = 0x3fa2f983
                uint32_t zmm1[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
                zmm1[0] = zmm1[0] f* 0.405284703f
                zmm7[0] = 1.27323949f f- zmm1[0]
                zmm7[0] = zmm7[0] f* zmm3[0]
                
                if (zmm7[0] f>= 0f)
                    zmm7 = _mm_min_ss(zmm7[0], 0x3f800000)
                else
                    zmm7 = zx.o(0)
                
                arg2 = _mm_and_ps(zmm3, 0x7fffffff)
                arg2[0] = arg2[0] f* 0.405284703f
                zmm4[0] = 1.27323949f f- arg2[0]
                zmm4[0] = zmm4[0] f* zmm3[0]
                
                if (not(zmm4[0] f< 0f))
                    zmm8 = _mm_min_ss(zmm4[0], 0x3f800000)
                
                uint64_t r12_2 = zx.q(arg_18 u>> 1)
                arg2 = _mm_max_ss(zmm8[0], zmm7[0])
                int64_t rax_36 = *(arg1 + 0xd0)
                uint32_t zmm11[0x4] = 0x3f800000
                int16_t rbx_3 = 0
                int32_t i = 0
                zmm11[0] = 1f f/ arg2[0]
                char arg_8 = 0
                *(arg1 + 0xd8) = rax_36
                
                if (r12_2.d != 0)
                    int32_t j_4 = *(arg1 + 0xe4)
                    uint64_t j_2 = zx.q(j_4)
                    
                    do
                        int64_t i_4 = sx.q(i)
                        
                        if (j_4 s> 0)
                            int64_t rax_37 = r15 + (i_4 << 1)
                            uint64_t j
                            
                            do
                                rbx_3 += *rax_37
                                rax_37 += 2
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                        
                        sub_141c3fac0(arg1 + 0x140, rbx_3)
                        int32_t temp1_3 = mods.dp.d(sx.q(*(arg1 + 0x120)), *(arg1 + 0x118))
                        *(arg1 + 0x120) = temp1_3 + 1
                        *(*(arg1 + 0x110) + (sx.q(temp1_3) << 1)) = rbx_3
                        *(arg1 + 0x118)
                        *(arg1 + 0x124) = mods.dp.d(sx.q(*(arg1 + 0x124)), *(arg1 + 0x118)) + 1
                        *(arg1 + 0x168) = sub_141c39c30(arg1 + 0x140) > var_124
                        bool cond:10_1 = sub_141c39c30(arg1 + 0x140)[0] f> var_120
                        char rax_45 = *(arg1 + 0x18c)
                        void* rcx_19
                        rcx_19.b = cond:10_1
                        uint32_t zmm0_1[0x4]
                        uint32_t zmm1_1[0x4]
                        
                        if (rcx_19.b == 0)
                            if (rax_45 == 0)
                                rbx_3 = 0
                            else
                                rbx_3 = 0
                                int32_t rax_47
                                
                                if (*(arg1 + 0x188) == 0)
                                    zmm0_1 = var_118
                                    zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0x178)
                                    rax_47 = int.d(zmm0_1[0])
                                else
                                    *(arg1 + 0x188) = 0
                                    rax_47 = 0
                                
                                *(arg1 + 0x17c) = rax_47
                                bool cond:18_1 = *(arg1 + 0x17c) != 0
                                *(arg1 + 0x184) = 0
                                
                                if (cond:18_1)
                                    zmm1_1 = *(arg1 + 0x170)
                                    *(arg1 + 0x174) = (zmm1_1 ^ 0x80000000)[0]
                                    *(arg1 + 0x16c) = zmm1_1[0]
                                else
                                    *(arg1 + 0x170) = 0
                        else if (rax_45 != 0)
                            rbx_3 = 0
                        else
                            rbx_3 = 0
                            int32_t rax_46
                            
                            if (*(arg1 + 0x188) == 0)
                                zmm0_1 = var_11c
                                zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0x178)
                                rax_46 = int.d(zmm0_1[0])
                            else
                                *(arg1 + 0x188) = 0
                                rax_46 = 0
                            
                            *(arg1 + 0x17c) = rax_46
                            bool cond:19_1 = *(arg1 + 0x17c) != 0
                            *(arg1 + 0x184) = 0
                            
                            if (cond:19_1)
                                zmm1_1 = *(arg1 + 0x170)
                                zmm0_1 = 0x3f800000
                                zmm0_1[0] = 1f f- zmm1_1[0]
                                *(arg1 + 0x174) = zmm0_1[0]
                                *(arg1 + 0x16c) = zmm1_1[0]
                            else
                                *(arg1 + 0x170) = 0x3f800000
                        
                        bool cond:22_1 = *(arg1 + 0x168) == 0
                        *(arg1 + 0x18c) = rcx_19.b
                        
                        if (cond:22_1)
                            arg_8 = 1
                        else
                            int32_t rax_48 = *(arg1 + 0x184)
                            int32_t rcx_20 = *(arg1 + 0x17c)
                            uint128_t zmm2_1
                            
                            if (arg_8 == 0)
                                if (rax_48 s< rcx_20)
                                    zmm2_1 = _mm_cvtepi32_ps(zx.o(rax_48))
                                    *(arg1 + 0x184) = rax_48 + 1
                                    zmm2_1.d = zmm2_1.d f* *(arg1 + 0x174)
                                    zmm2_1.d = zmm2_1.d f/ _mm_cvtepi32_ps(zx.o(rcx_20))[0]
                                    zmm2_1.d = zmm2_1.d f+ *(arg1 + 0x16c)
                                    *(arg1 + 0x170) = zmm2_1.d
                                else
                                    zmm2_1 = *(arg1 + 0x170)
                                
                                int32_t rax_60 = *(arg1 + 0xe4)
                                int32_t rcx_23 = 0
                                zmm2_1.d = zmm2_1.d f* zmm13[0]
                                
                                if (rax_60 s> 0)
                                    int16_t* rdx_21 = r15 + (i_4 << 1)
                                    
                                    do
                                        if ((rcx_23.b & 1) != 0)
                                            zmm0_1 = zmm8
                                        else
                                            zmm0_1 = zmm7
                                        
                                        int32_t rax_58 = sx.d(*rdx_21)
                                        zmm11[0] = zmm11[0] f* zmm0_1[0]
                                        zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_58))
                                        zmm11[0] = zmm11[0] f* zmm2_1.d
                                        zmm0_1[0] = zmm0_1[0] f* 3.05185094e-05f
                                        zmm11[0] = zmm11[0] f* zmm0_1[0]
                                        
                                        if (zmm11[0] f>= -2f)
                                            zmm1_1 = _mm_min_ss(zmm11[0], 0x40000000)
                                        else
                                            zmm1_1 = 0xc0000000
                                        
                                        zmm1_1[0] = zmm1_1[0] f* 32767f
                                        rcx_23 += 1
                                        *rdx_21 = (int.d(zmm1_1[0])).w
                                        rdx_21 = &rdx_21[1]
                                        rax_60 = *(arg1 + 0xe4)
                                    while (rcx_23 s< rax_60)
                                
                                memcpy(rax_22 + (i_4 << 1), r15 + (i_4 << 1), rax_60 * 2)
                                arg_10 += *(arg1 + 0xe4)
                            else
                                if (rax_48 s< rcx_20)
                                    zmm2_1 = _mm_cvtepi32_ps(zx.o(rax_48))
                                    *(arg1 + 0x184) = rax_48 + 1
                                    zmm2_1.d = zmm2_1.d f* *(arg1 + 0x174)
                                    zmm2_1.d = zmm2_1.d f/ _mm_cvtepi32_ps(zx.o(rcx_20))[0]
                                    zmm2_1.d = zmm2_1.d f+ *(arg1 + 0x16c)
                                    *(arg1 + 0x170) = zmm2_1.d
                                else
                                    zmm2_1 = *(arg1 + 0x170)
                                
                                int32_t j_5 = *(arg1 + 0xe4)
                                int32_t rcx_21 = 0
                                zmm2_1.d = zmm2_1.d f* zmm13[0]
                                
                                if (j_5 s> 0)
                                    int16_t* rdx_18 = r15 + (i_4 << 1)
                                    
                                    do
                                        if ((rcx_21.b & 1) != 0)
                                            zmm0_1 = zmm8
                                        else
                                            zmm0_1 = zmm7
                                        
                                        int32_t rax_50 = sx.d(*rdx_18)
                                        zmm11[0] = zmm11[0] f* zmm0_1[0]
                                        zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_50))
                                        zmm11[0] = zmm11[0] f* zmm2_1.d
                                        zmm0_1[0] = zmm0_1[0] f* 3.05185094e-05f
                                        zmm11[0] = zmm11[0] f* zmm0_1[0]
                                        
                                        if (zmm11[0] f>= -2f)
                                            zmm1_1 = _mm_min_ss(zmm11[0], 0x40000000)
                                        else
                                            zmm1_1 = 0xc0000000
                                        
                                        zmm1_1[0] = zmm1_1[0] f* 32767f
                                        rcx_21 += 1
                                        *rdx_18 = (int.d(zmm1_1[0])).w
                                        rdx_18 = &rdx_18[1]
                                        j_5 = *(arg1 + 0xe4)
                                    while (rcx_21 s< j_5)
                                
                                int64_t j_3 = sx.q(j_5)
                                
                                if (j_5 s> 0)
                                    void* r9_4 = r15 + (i_4 << 1)
                                    int64_t j_1
                                    
                                    do
                                        r9_4 += 2
                                        int64_t rcx_22 = *(arg1 + 0x128)
                                        int32_t temp1_5 =
                                            mods.dp.d(sx.q(*(arg1 + 0x138)), *(arg1 + 0x130))
                                        *(arg1 + 0x138) = temp1_5 + 1
                                        *(rcx_22 + (sx.q(temp1_5) << 1)) = *(r9_4 - 2)
                                        j_1 = j_3
                                        j_3 -= 1
                                    while (j_1 != 1)
                                
                                if (*(arg1 + 0xe0) == 0)
                                    *(arg1 + 0xd0) = *(arg1 + 0xc8)
                                    *(arg1 + 0xe0) = 1
                        
                        j_4 = *(arg1 + 0xe4)
                        *(arg1 + 0xc8) += 1
                        i += j_4
                        j_2 = zx.q(j_4)
                    while (i s< r12_2.d)
                
                int32_t r15_1 = 0
                int64_t r14_2 = var_100
                uint32_t r12_4 = arg_20 u>> 1
                
                if (r12_4 != 0)
                    int32_t i_6 = *(arg1 + 0xe4)
                    void* r8_14 = arg1 + 0x140
                    uint64_t i_3 = zx.q(i_6)
                    
                    do
                        int64_t rsi_3 = sx.q(r15_1)
                        
                        if (i_6 s> 0)
                            int64_t rax_64 = r14_2 + (rsi_3 << 1)
                            uint64_t i_1
                            
                            do
                                rbx_3 += *rax_64
                                rax_64 += 2
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                        
                        sub_141c3fac0(r8_14, rbx_3)
                        int32_t temp1_6 = mods.dp.d(sx.q(*(arg1 + 0x120)), *(arg1 + 0x118))
                        *(arg1 + 0x120) = temp1_6 + 1
                        *(*(arg1 + 0x110) + (sx.q(temp1_6) << 1)) = rbx_3
                        *(arg1 + 0x118)
                        *(arg1 + 0x124) = mods.dp.d(sx.q(*(arg1 + 0x124)), *(arg1 + 0x118)) + 1
                        *(arg1 + 0x168) = sub_141c39c30(arg1 + 0x140) > var_124
                        bool cond:12_1 = sub_141c39c30(arg1 + 0x140)[0] f> var_120
                        char rax_72 = *(arg1 + 0x18c)
                        void* rcx_29
                        rcx_29.b = cond:12_1
                        uint32_t zmm0_3[0x4]
                        uint32_t zmm1_2[0x4]
                        
                        if (rcx_29.b == 0)
                            if (rax_72 == 0)
                                rbx_3 = 0
                            else
                                rbx_3 = 0
                                int32_t rax_74
                                
                                if (*(arg1 + 0x188) == 0)
                                    zmm0_3 = var_118
                                    zmm0_3[0] = zmm0_3[0] f* *(arg1 + 0x178)
                                    rax_74 = int.d(zmm0_3[0])
                                else
                                    *(arg1 + 0x188) = 0
                                    rax_74 = 0
                                
                                *(arg1 + 0x17c) = rax_74
                                bool cond:20_1 = *(arg1 + 0x17c) != 0
                                *(arg1 + 0x184) = 0
                                
                                if (cond:20_1)
                                    zmm1_2 = *(arg1 + 0x170)
                                    *(arg1 + 0x174) = (zmm1_2 ^ 0x80000000)[0]
                                    *(arg1 + 0x16c) = zmm1_2[0]
                                else
                                    *(arg1 + 0x170) = 0
                        else if (rax_72 != 0)
                            rbx_3 = 0
                        else
                            rbx_3 = 0
                            int32_t rax_73
                            
                            if (*(arg1 + 0x188) == 0)
                                zmm0_3 = var_11c
                                zmm0_3[0] = zmm0_3[0] f* *(arg1 + 0x178)
                                rax_73 = int.d(zmm0_3[0])
                            else
                                *(arg1 + 0x188) = 0
                                rax_73 = 0
                            
                            *(arg1 + 0x17c) = rax_73
                            bool cond:21_1 = *(arg1 + 0x17c) != 0
                            *(arg1 + 0x184) = 0
                            
                            if (cond:21_1)
                                zmm1_2 = *(arg1 + 0x170)
                                zmm0_3 = 0x3f800000
                                zmm0_3[0] = 1f f- zmm1_2[0]
                                *(arg1 + 0x174) = zmm0_3[0]
                                *(arg1 + 0x16c) = zmm1_2[0]
                            else
                                *(arg1 + 0x170) = 0x3f800000
                        
                        bool cond:23_1 = *(arg1 + 0x168) == 0
                        *(arg1 + 0x18c) = rcx_29.b
                        
                        if (cond:23_1)
                            arg_8 = 1
                        else
                            int32_t rax_75 = *(arg1 + 0x184)
                            int32_t rcx_30 = *(arg1 + 0x17c)
                            uint128_t zmm2_2
                            
                            if (arg_8 == 0)
                                if (rax_75 s< rcx_30)
                                    zmm2_2 = _mm_cvtepi32_ps(zx.o(rax_75))
                                    *(arg1 + 0x184) = rax_75 + 1
                                    zmm2_2.d = zmm2_2.d f* *(arg1 + 0x174)
                                    zmm2_2.d = zmm2_2.d f/ _mm_cvtepi32_ps(zx.o(rcx_30))[0]
                                    zmm2_2.d = zmm2_2.d f+ *(arg1 + 0x16c)
                                    *(arg1 + 0x170) = zmm2_2.d
                                else
                                    zmm2_2 = *(arg1 + 0x170)
                                
                                int32_t rax_87 = *(arg1 + 0xe4)
                                int32_t rcx_33 = 0
                                zmm2_2.d = zmm2_2.d f* zmm13[0]
                                
                                if (rax_87 s> 0)
                                    int16_t* rdx_32 = r14_2 + (rsi_3 << 1)
                                    
                                    do
                                        if ((rcx_33.b & 1) != 0)
                                            zmm0_3 = zmm8
                                        else
                                            zmm0_3 = zmm7
                                        
                                        int32_t rax_85 = sx.d(*rdx_32)
                                        zmm11[0] = zmm11[0] f* zmm0_3[0]
                                        zmm0_3 = _mm_cvtepi32_ps(zx.o(rax_85))
                                        zmm11[0] = zmm11[0] f* zmm2_2.d
                                        zmm0_3[0] = zmm0_3[0] f* 3.05185094e-05f
                                        zmm11[0] = zmm11[0] f* zmm0_3[0]
                                        
                                        if (zmm11[0] f>= -2f)
                                            zmm1_2 = _mm_min_ss(zmm11[0], 0x40000000)
                                        else
                                            zmm1_2 = 0xc0000000
                                        
                                        zmm1_2[0] = zmm1_2[0] f* 32767f
                                        rcx_33 += 1
                                        *rdx_32 = (int.d(zmm1_2[0])).w
                                        rdx_32 = &rdx_32[1]
                                        rax_87 = *(arg1 + 0xe4)
                                    while (rcx_33 s< rax_87)
                                
                                memcpy((rsi_3 << 1) + rax_22 + (r12_2 << 1), r14_2 + (rsi_3 << 1), 
                                    rax_87 * 2)
                                arg_10 += *(arg1 + 0xe4)
                            else
                                if (rax_75 s< rcx_30)
                                    zmm2_2 = _mm_cvtepi32_ps(zx.o(rax_75))
                                    *(arg1 + 0x184) = rax_75 + 1
                                    zmm2_2.d = zmm2_2.d f* *(arg1 + 0x174)
                                    zmm2_2.d = zmm2_2.d f/ _mm_cvtepi32_ps(zx.o(rcx_30))[0]
                                    zmm2_2.d = zmm2_2.d f+ *(arg1 + 0x16c)
                                    *(arg1 + 0x170) = zmm2_2.d
                                else
                                    zmm2_2 = *(arg1 + 0x170)
                                
                                int32_t i_7 = *(arg1 + 0xe4)
                                int32_t rcx_31 = 0
                                zmm2_2.d = zmm2_2.d f* zmm13[0]
                                
                                if (i_7 s> 0)
                                    int16_t* rdx_29 = r14_2 + (rsi_3 << 1)
                                    
                                    do
                                        if ((rcx_31.b & 1) != 0)
                                            zmm0_3 = zmm8
                                        else
                                            zmm0_3 = zmm7
                                        
                                        int32_t rax_77 = sx.d(*rdx_29)
                                        zmm11[0] = zmm11[0] f* zmm0_3[0]
                                        zmm0_3 = _mm_cvtepi32_ps(zx.o(rax_77))
                                        zmm11[0] = zmm11[0] f* zmm2_2.d
                                        zmm0_3[0] = zmm0_3[0] f* 3.05185094e-05f
                                        zmm11[0] = zmm11[0] f* zmm0_3[0]
                                        
                                        if (zmm11[0] f>= -2f)
                                            zmm1_2 = _mm_min_ss(zmm11[0], 0x40000000)
                                        else
                                            zmm1_2 = 0xc0000000
                                        
                                        zmm1_2[0] = zmm1_2[0] f* 32767f
                                        rcx_31 += 1
                                        *rdx_29 = (int.d(zmm1_2[0])).w
                                        rdx_29 = &rdx_29[1]
                                        i_7 = *(arg1 + 0xe4)
                                    while (rcx_31 s< i_7)
                                
                                int64_t i_5 = sx.q(i_7)
                                
                                if (i_7 s> 0)
                                    void* r9_5 = r14_2 + (rsi_3 << 1)
                                    int64_t i_2
                                    
                                    do
                                        r9_5 += 2
                                        int64_t rcx_32 = *(arg1 + 0x128)
                                        int32_t temp1_8 =
                                            mods.dp.d(sx.q(*(arg1 + 0x138)), *(arg1 + 0x130))
                                        *(arg1 + 0x138) = temp1_8 + 1
                                        *(rcx_32 + (sx.q(temp1_8) << 1)) = *(r9_5 - 2)
                                        i_2 = i_5
                                        i_5 -= 1
                                    while (i_2 != 1)
                                
                                if (*(arg1 + 0xe0) == 0)
                                    *(arg1 + 0xd0) = *(arg1 + 0xc8)
                                    *(arg1 + 0xe0) = 1
                        
                        i_6 = *(arg1 + 0xe4)
                        r8_14 = arg1 + 0x140
                        *(arg1 + 0xc8) += 1
                        r15_1 += i_6
                        i_3 = zx.q(i_6)
                    while (r15_1 s< r12_4)
                
                if (*(arg1 + 0xe0) == 0)
                    *(arg1 + 0xd0) = *(arg1 + 0xc8)
                
                uint64_t r14_3 = zx.q(arg_10)
                *(arg1 + 0xe0) = 0
                int64_t rbx_4 = sx.q(*(arg1 + 0xc0))
                int32_t rax_92 = var_114 + (r14_3 << 1).d
                
                if (rax_92 s> rbx_4.d)
                    *(arg1 + 0xc0) = rax_92
                    
                    if (rax_92 s> *(arg1 + 0xc4))
                        sub_1405daba0(arg1 + 0xb8)
                    
                    memset(rbx_4 + *(arg1 + 0xb8), 0, sx.q(rax_92 - rbx_4.d))
                else if (rax_92 s< rbx_4.d && rax_92 != rbx_4.d)
                    *(arg1 + 0xc0) = rax_92
                
                int64_t* rcx_39 = *(*(arg1 + 0xa0) + 0x28)
                int32_t* var_148_1
                var_148_1.d = var_10c
                (*(*rcx_39 + 0x58))(rcx_39, var_f8, zx.q(var_108), var_100, var_148_1)
                void* r8_20 = *(arg1 + 0xa0)
                *(r8_20 + 0x88) = modu.dp.d(0:(arg_18 + *(r8_20 + 0x88)), *(r8_20 + 0x78))
                void* r8_21 = *(arg1 + 0xa0)
                int32_t rax_98 = arg_20 + *(r8_21 + 0x88)
                int32_t temp2_3 = *(r8_21 + 0x78)
                *(r8_21 + 0x88) = modu.dp.d(0:rax_98, temp2_3)
                int32_t rbx_5
                rbx_5.b = r14_3.d s<= 0
                *(arg1 + 0xb0) = rbx_5 + 2
                return zx.q(divu.dp.d(0:rax_98, temp2_3))
            
            *(arg1 + 0xb0) = 6

return result
