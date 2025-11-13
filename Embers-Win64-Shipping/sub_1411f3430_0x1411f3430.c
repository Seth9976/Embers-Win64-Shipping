// 函数: sub_1411f3430
// 地址: 0x1411f3430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
void* r13 = arg3
uint64_t result = *arg2
int64_t* rdi = arg2
void* r12 = *(result + 0x20)
int64_t rsi = sx.q(*(r12 + 0x18f0))

if (data_1439b6100 == 0 || arg2[1] == 0)
    if (data_143e75b5c != 0)
    label_1411f34a0:
        
        if (rsi.d s> 0)
            int32_t rbx_1 = arg2[0x2a9].d
            result = sub_1422e5a30(rdi)
            
            if (rbx_1 s>= 3 && result.d == 0)
                double zmm1[0x2] = data_1439b6108
                uint128_t zmm2 = data_1439b6104
                float temp0_1[0x4] = __minss_xmmss_memss(data_1439b55ac[0], 0x477de800)
                uint128_t zmm6
                uint128_t var_48_1 = zmm6
                int64_t rsi_1 = 0
                uint128_t zmm7
                uint128_t var_58_1 = zmm7
                double zmm9[0x2] = zmm1
                zmm9[0].d = zmm9[0].d f* zmm2.d
                float zmm10[0x4] = 0x3f800000
                zmm9[0].d = zmm9[0].d f+ temp0_1[0]
                float zmm11[0x4] = 0x3f800000
                zmm9[0].d = zmm9[0].d f* zmm9[0].d
                int64_t var_368
                int32_t var_360
                void* var_358
                float var_2a8[0x4]
                double var_278[0x2]
                float var_268[0x4]
                double var_258[0x2]
                void* var_d8
                int64_t var_c8
                float zmm0[0x4]
                
                if (rsi s> 0)
                    int128_t zmm8
                    int128_t var_68_1 = zmm8
                    
                    while (true)
                        zmm1[0].d = zmm1[0].d f* zmm2.d
                        void* rbx_2 = *(*(r12 + 0x18e8) + (rsi_1 << 3))
                        int128_t* rdx_1 = *(rbx_2 + 8) + 0xc0
                        zmm1[0].d = zmm1[0].d f+ *(rdx_1 + 0x18)
                        zmm6.d = (*rdx_1).d f- *(rdi + 0x60c)
                        zmm7.d = (*(rdx_1 + 4)).d f- rdi[0xc2].d
                        zmm8.d = (*(rdx_1 + 8)).d f- *(rdi + 0x614)
                        var_360 = zmm1[0].d
                        result, zmm6, zmm7 = sub_141f8daa0(&rdi[0x17e], rdx_1, &var_360)
                        
                        if (result.b != 0)
                            zmm6.d = zmm6.d f* zmm6.d
                            zmm7.d = zmm7.d f* zmm7.d
                            zmm8.d = zmm8.d f* zmm8.d
                            zmm6.d = zmm6.d f+ zmm7.d
                            zmm6.d = zmm6.d f+ zmm8.d
                            
                            if (not(zmm6.d f>= zmm9[0].d))
                                int64_t* rcx_2 = *(rbx_2 + 8)
                                int128_t* var_378_1 = &var_2a8
                                __builtin_memset(&var_368, 0, 0x18)
                                __builtin_memset(&var_2a8, 0, 0x20)
                                float var_288_1[0x4] = *(rcx_2 + 0x80)
                                var_278 = *(rcx_2 + 0x90)
                                var_268 = *(rcx_2 + 0xa0)
                                var_258 = *(rcx_2 + 0xb0)
                                float var_228[0x4] = zx.o(0)
                                int64_t var_248
                                __builtin_memset(&var_248, 0, 0x1c)
                                int32_t var_218 = 0xffffffff
                                result = (*(*rcx_2 + 0xa0))(zx.o(0), &var_358, &var_368, &var_360, 
                                    var_378_1)
                                void* r9_2 = var_358
                                
                                if (r9_2 != 0)
                                    result = *(r9_2 + 0x78)
                                    
                                    if (*(result + 0x10) != 0)
                                        int32_t rdx_3 = *arg1
                                        int64_t var_240
                                        int32_t rax_6 = var_240.d
                                        int64_t var_238
                                        
                                        if ((arg1[2] - rdx_3) * (arg1[3] - arg1[1]) != 0)
                                            int32_t rcx_6 = var_240:4.d
                                            
                                            if (rdx_3 s<= rax_6)
                                                rax_6 = rdx_3
                                            
                                            *arg1 = rax_6
                                            
                                            if (arg1[1] s<= rcx_6)
                                                rcx_6 = arg1[1]
                                            
                                            arg1[1] = rcx_6
                                            int32_t rcx_7 = var_238.d
                                            
                                            if (arg1[2] s>= rcx_7)
                                                rcx_7 = arg1[2]
                                            
                                            arg1[2] = rcx_7
                                            int32_t rcx_8 = var_238:4.d
                                            
                                            if (arg1[3] s>= rcx_8)
                                                rcx_8 = arg1[3]
                                            
                                            arg1[3] = rcx_8
                                        else
                                            zmm2 = var_288_1[0]
                                            zmm11 = zx.o(0)
                                            zmm0 = var_288_1[1]
                                            zmm1 = var_288_1[2]
                                            *arg1 = rax_6
                                            arg1[1] = var_240:4.d
                                            zmm2.d = zmm2.d f* zmm2.d
                                            arg1[2] = var_238.d
                                            zmm0[0] = zmm0[0] * zmm0[0]
                                            arg1[3] = var_238:4.d
                                            zmm1[0].d = zmm1[0].d f* zmm1[0].d
                                            zmm2.d = zmm2.d f+ zmm0[0]
                                            zmm2.d = zmm2.d f+ zmm1[0].d
                                            
                                            if (not(zmm2.d f<= 9.99999994e-09f))
                                                zmm11 = _mm_sqrt_ss(zmm11[0], zmm2.d)
                                        
                                        int64_t r11_1 = var_368
                                        int64_t rbx_3 = var_360.q
                                        uint32_t rcx_10 = (r9_2 u>> 4).d
                                        var_d8 = r9_2
                                        int64_t var_d0_1 = r11_1
                                        int32_t rdx_5 = (0x9e3779b9 - rcx_10) ^ rcx_10 << 8
                                        var_c8 = rbx_3
                                        int32_t r10_3 = neg.d(rcx_10 + rdx_5) ^ rdx_5 u>> 0xd
                                        int32_t rcx_13 = (rcx_10 - rdx_5 - r10_3) ^ r10_3 u>> 0xc
                                        int32_t rdx_8 = (rdx_5 - rcx_13 - r10_3) ^ rcx_13 << 0x10
                                        int32_t r10_6 = (r10_3 - rdx_8 - rcx_13) ^ rdx_8 u>> 5
                                        int32_t rcx_16 = (rcx_13 - rdx_8 - r10_6) ^ r10_6 u>> 3
                                        int32_t rdx_11 = (rdx_8 - rcx_16 - r10_6) ^ rcx_16 << 0xa
                                        int32_t r10_9 = (r10_6 - rdx_11 - rcx_16) ^ rdx_11 u>> 0xf
                                        void* rbx_4
                                        
                                        if (arg1[0xc] == arg1[0x17])
                                        label_1411f384e:
                                            rbx_4 = sub_141113a70(&arg1[0xa], r10_9, &var_d8)
                                        else
                                            void* rcx_17 = *(arg1 + 0x68)
                                            void* r8_2 = &arg1[0x18]
                                            
                                            if (rcx_17 != 0)
                                                r8_2 = rcx_17
                                            
                                            int32_t rax_26 = *(r8_2
                                                + (((sx.q(arg1[0x1c]) - 1) & sx.q(r10_9)) << 2))
                                            
                                            if (rax_26 == 0xffffffff)
                                            label_1411f384e_1:
                                                rbx_4 = sub_141113a70(&arg1[0xa], r10_9, &var_d8)
                                            else
                                                int64_t* rcx_21
                                                
                                                while (true)
                                                    rcx_21 = sx.q(rax_26) * 0x30 + *(arg1 + 0x28)
                                                    
                                                    if (*rcx_21 == r9_2 && rcx_21[1] == r11_1
                                                            && rcx_21[2] == rbx_3)
                                                        break
                                                    
                                                    rax_26 = rcx_21[5].d
                                                    
                                                    if (rax_26 == 0xffffffff)
                                                        goto label_1411f384e_2
                                                
                                                if (rax_26 == 0xffffffff || rcx_21 == 0)
                                                label_1411f384e_2:
                                                    rbx_4 =
                                                        sub_141113a70(&arg1[0xa], r10_9, &var_d8)
                                                else
                                                    rbx_4 = &rcx_21[3]
                                        
                                        int64_t rdi_1 = sx.q(*(rbx_4 + 8))
                                        int32_t rcx_23 = (rdi_1 + 1).d
                                        *(rbx_4 + 8) = rcx_23
                                        
                                        if (rcx_23 s> *(rbx_4 + 0xc))
                                            sub_140775640(rbx_4)
                                        
                                        result = &var_2a8
                                        rdi = arg2
                                        float (* rdx_20)[0x4] = rdi_1 * 0xa0 + *rbx_4
                                        *rdx_20 = var_2a8
                                        double var_298[0x2]
                                        rdx_20[1] = var_298
                                        rdx_20[2] = var_288_1
                                        rdx_20[3] = var_278
                                        rdx_20[4] = var_268
                                        rdx_20[5] = var_258
                                        rdx_20[6] = var_248.o
                                        rdx_20[7] = var_238.o
                                        rdx_20[8] = var_228
                                        rdx_20[9] = var_218.o
                        
                        rsi_1 += 1
                        
                        if (rsi_1 s>= rsi)
                            break
                        
                        zmm2 = data_1439b6104
                        zmm1 = data_1439b6108
                    
                    r13 = arg3
                
                if (data_1439b6100 != 0)
                    void* rbx_5 = rdi[1]
                    
                    if (rbx_5 != 0 && data_143e5102c != 0)
                        result = zx.q(arg1[0xc] - arg1[0x17])
                        
                        if (result.d s> 0)
                            if (*(rbx_5 + 0xb10) == 0)
                                void*** rax_29 = j_sub_140a82f30(0x40)
                                
                                if (rax_29 == 0)
                                    rax_29 = nullptr
                                else
                                    rax_29[1].d = 0xffffffff
                                    *(rax_29 + 0xc) = 4
                                    *rax_29 = &data_142f34e98
                                    __builtin_memset(&rax_29[2], 0, 0x30)
                                
                                *(rbx_5 + 0xb10) = rax_29
                            
                            zmm0 = data_1439b610c
                            int32_t r9_3 = 1
                            zmm0[0] = zmm0[0] / zmm11[0]
                            int32_t rax_30 = int.d(zmm0[0])
                            
                            if (rax_30 s>= 1)
                                r9_3 = rax_30
                            
                            arg1[4] = r9_3
                            int64_t rax_31 = *(arg1 + 8)
                            var_360.q = rax_31
                            int32_t temp0_3 = divs.dp.d(sx.q(rax_31.d), r9_3)
                            var_360 = temp0_3
                            int32_t var_35c
                            int32_t var_35c_1 = divs.dp.d(sx.q(var_35c), r9_3)
                            int64_t rax_37 = *arg1
                            var_368 = rax_37
                            int32_t temp0_5 = divs.dp.d(sx.q(rax_37.d), r9_3)
                            var_368.d = temp0_5
                            int32_t rax_40 = var_368:4.d
                            arg1[5] = temp0_5
                            var_368:4.d = divs.dp.d(sx.q(rax_40), r9_3)
                            arg1[6] = (var_368 u>> 0x20).d
                            int64_t rax_45 = var_360.q
                            arg1[7] = temp0_3
                            arg1[8] = (rax_45 u>> 0x20).d
                            int32_t r9_4 = arg1[4]
                            int64_t rcx_26 = *arg1
                            *arg1 = r9_4 * divs.dp.d(sx.q(rcx_26.d), r9_4)
                            arg1[1] = r9_4 * divs.dp.d(sx.q((rcx_26 u>> 0x20).d), r9_4)
                            int64_t* rcx_30 = *(rbx_5 + 0xb10)
                            int32_t r8_8 = arg1[7] - arg1[5]
                            int32_t rdx_28 = arg1[8] - arg1[6]
                            int32_t rax_53 = rcx_30[7].d
                            bool cond:2_1 = r8_8 s>= rax_53
                            
                            if (r8_8 s> rax_53)
                                goto label_1411f3a92
                            
                            if (rdx_28 s> *(rcx_30 + 0x3c))
                                cond:2_1 = r8_8 s>= rax_53
                            label_1411f3a92:
                                
                                if (cond:2_1)
                                    rax_53 = r8_8
                                
                                rcx_30[7].d = rax_53
                                int32_t rax_54 = *(rcx_30 + 0x3c)
                                
                                if (rdx_28 s>= rax_54)
                                    rax_54 = rdx_28
                                
                                bool cond:3_1 = rcx_30[1].d == 0xffffffff
                                *(rcx_30 + 0x3c) = rax_54
                                
                                if (cond:3_1)
                                    (*(*rcx_30 + 0x28))()
                                else
                                    sub_1419ba620(rcx_30)
                            
                            var_d8:4.d = 1
                            var_c8.d = 0xffffffff
                            int32_t r11_2 = arg1[0x14]
                            void* r9_6 = &arg1[0xe]
                            void* var_d0_2 = r9_6
                            int32_t rcx_31 = 0
                            var_d8.d = 0
                            int32_t r8_9 = 0
                            var_c8 = 0
                            
                            if (r11_2 != 0)
                                void* rax_56 = *(r9_6 + 0x10)
                                
                                if (rax_56 != 0)
                                    r9_6 = rax_56
                                
                                int32_t temp38_1
                                int32_t temp39_1
                                temp38_1:temp39_1 = sx.q(r11_2 - 1)
                                int32_t rdx_31 = *r9_6
                                
                                if (rdx_31 != 0)
                                label_1411f3b51:
                                    int32_t rax_63 = neg.d(rdx_31) & rdx_31
                                    uint64_t rflags_1
                                    int32_t temp0_9
                                    temp0_9, rflags_1 = _bit_scan_reverse(rax_63)
                                    var_d8:4.d = rax_63
                                    int32_t rax_64
                                    
                                    if (rax_63 == 0)
                                        rax_64 = 0x20
                                    else
                                        rax_64 = 0x1f - temp0_9
                                    
                                    var_c8:4.d = r8_9 - rax_64 + 0x1f
                                    
                                    if (r8_9 - rax_64 + 0x1f s> r11_2)
                                        var_c8:4.d = r11_2
                                else
                                    while (true)
                                        int64_t rdx_32 = sx.q(rcx_31)
                                        r8_9 += 0x20
                                        rcx_31 += 1
                                        int32_t var_c0_1 = r8_9
                                        var_d8.d = rcx_31
                                        
                                        if (rdx_32.d s>= (temp39_1 + (temp38_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_31 = *(r9_6 + (rdx_32 << 2) + 4)
                                        var_c8.d = 0xffffffff
                                        
                                        if (rdx_31 != 0)
                                            goto label_1411f3b51
                                    
                                    var_c8:4.d = r11_2
                            
                            double zmm4[0x2] = var_c8.o
                            void* var_2b0_1 = &arg1[0xa]
                            double var_330_1 = zmm4[0]
                            float var_340[0x4] = var_d8.o
                            int16_t var_310_1 = 0
                            float zmm3[0x4] = var_340
                            void* rax_66 = zmm3[0].q
                            var_340 = zmm3
                            void* var_348_1
                            var_348_1.o = (&arg1[0xa]).o
                            double rcx_33 = zmm4[0]
                            float var_2b8[0x4]
                            var_2b8[0].q = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
                            var_330_1:8.o = var_2b8
                            
                            if ((rcx_33 u>> 0x20).d s< *(rax_66 + 0x18))
                                int32_t i = var_330_1:4.d
                                
                                do
                                    int32_t j = 0
                                    int64_t r10_11 = sx.q(i) * 6
                                    int64_t r11_3 = *var_348_1
                                    
                                    if (*(r11_3 + (r10_11 << 3) + 0x20) s> 0)
                                        int64_t r8_11 = 0
                                        
                                        do
                                            int32_t rax_69 = arg1[1]
                                            r8_11 += 0xa0
                                            zmm1 = 0x3f800000
                                            int64_t rdx_33 = *(r11_3 + (r10_11 << 3) + 0x18)
                                            j += 1
                                            float temp0_11[0x4] = _mm_cvtepi32_ps(zx.o(arg1[4]))
                                            int64_t rcx_35 = *(r8_11 + rdx_33 - 0x38)
                                            var_368 = rcx_35
                                            int32_t rcx_36 = rcx_35.d - *arg1
                                            var_368:4.d -= rax_69
                                            zmm1[0].d = 1f / temp0_11[0]
                                            var_368.d = rcx_36
                                            zmm0 = zx.o((var_368 u>> 0x20).d)
                                            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_36))
                                            float temp0_13[0x4] = _mm_cvtepi32_ps(zmm0)
                                            zmm2.d = zmm2.d f* zmm1[0].d
                                            temp0_13[0] = temp0_13[0] f* zmm1[0].d
                                            *(r8_11 + rdx_33 - 0x40) = zmm2.d
                                            *(r8_11 + rdx_33 - 0x3c) = temp0_13[0]
                                        while (j s< *(r11_3 + (r10_11 << 3) + 0x20))
                                    
                                    var_330_1.d &= not.d(var_340[1])
                                    sub_14059bdd0(&var_340)
                                    i = var_330_1:4.d
                                while (i s< *(var_340[2].q + 0x18))
                                
                                if (var_310_1.b != 0 && var_310_1:1.b != 0)
                                    sub_1411dd6b0(&arg1[0xa], arg1[0xc] - arg1[0x17], 1)
                            
                            void* rdx_36 = *(rbx_5 + 0xb10)
                            zmm0 = 0x3f800000
                            int64_t rax_75 = *(rdx_36 + 0x38)
                            zmm7 = _mm_cvtepi32_ps(zx.o(rax_75.d))
                            void* rax_77 = *(rdx_36 + 0x10)
                            zmm0[0] = 1f f/ zmm7.d
                            var_d8 = *(rax_77 + 8)
                            int64_t rcx_40 = *(*(rdx_36 + 0x18) + 8)
                            int64_t rcx_41 = *(*(rdx_36 + 0x20) + 8)
                            void*** rcx_44 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_80 = &rcx_44[5]
                            zmm6 = _mm_cvtepi32_ps(zx.o((rax_75 u>> 0x20).d))
                            var_368.d = zmm0[0]
                            zmm0 = 0x3f800000
                            zmm0[0] = 1f f/ zmm6.d
                            var_368:4.d = zmm0[0]
                            
                            if (rax_80 u> *(r13 + 0x38))
                                zmm6 = sub_140b0e3d0(r13 + 0x30, 0x30)
                                rcx_44 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_80 = &rcx_44[5]
                            
                            *(r13 + 0x30) = rax_80
                            void**** rax_81 = *(r13 + 8)
                            *(r13 + 0x14) += 1
                            zmm1 = data_142d3f5a0
                            *rax_81 = rcx_44
                            *(r13 + 8) = &rcx_44[1]
                            rcx_44[1] = 0
                            *rcx_44 = &data_142d54998
                            *(rcx_44 + 0x1c) = zmm7.d
                            rcx_44[4].d = zmm6.d
                            rcx_44[2] = 0
                            rcx_44[3].d = 0
                            *(rcx_44 + 0x24) = 0x3f800000
                            void* var_1f8 = var_d8
                            int64_t var_1e0_1 = rcx_40
                            int64_t var_1c8_1 = rcx_41
                            int32_t var_120_1 = 0
                            int32_t var_11c
                            __builtin_memset(&var_11c, 0xff, 0x14)
                            double var_108_1[0x2] = zmm1
                            int64_t var_f8
                            __builtin_memset(&var_f8, 0, 0x1a)
                            int64_t var_1f0_1 = 0
                            int32_t var_1e8_1 = 0xffffffff
                            int16_t var_1e4_1 = 0x900
                            int64_t var_1d8_1 = 0
                            int32_t var_1d0_1 = 0xffffffff
                            int16_t var_1cc_1 = 0x900
                            int64_t var_1c0_1 = 0
                            int32_t var_1b8_1 = 0xffffffff
                            int16_t var_1b4_1 = 0x900
                            int64_t var_138
                            __builtin_memset(&var_138, 0, 0x11)
                            int32_t var_124_1 = 0
                            void var_1b0
                            memset(&var_1b0, 0, 0x78)
                            int64_t rbx_8 = (*(r13 + 0x30) + 1) & 0xfffffffffffffffe
                            int64_t rax_86 = rbx_8 + 0x24
                            
                            if (rax_86 u> *(r13 + 0x38))
                                sub_140b0e3d0(r13 + 0x30, 0x26)
                                rbx_8 = (*(r13 + 0x30) + 1) & 0xfffffffffffffffe
                                rax_86 = rbx_8 + 0x24
                            
                            wchar16 const* const rcx_50 = u"SetupHeightfields"
                            *(r13 + 0x30) = rax_86
                            wchar16 const i_1
                            
                            do
                                i_1 = *rcx_50
                                *(rcx_50 + rbx_8 - u"SetupHeightfields") = i_1
                                rcx_50 = &rcx_50[1]
                            while (i_1 != 0)
                            void*** rcx_53 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_87 = &rcx_53[0x27]
                            
                            if (rax_87 u> *(r13 + 0x38))
                                sub_140b0e3d0(r13 + 0x30, 0x140)
                                rcx_53 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_87 = &rcx_53[0x27]
                            
                            *(r13 + 0x30) = rax_87
                            void**** rax_88 = *(r13 + 8)
                            *(r13 + 0x14) += 1
                            *rax_88 = rcx_53
                            *(r13 + 8) = &rcx_53[1]
                            sub_1405d11b0(rcx_53, &var_1f8, rbx_8)
                            *(r13 + 0x1c4) = 1
                            sub_1405d19b0(r13, &var_1f8)
                            int64_t var_e8
                            *(r13 + 0x178) = var_e8:7.b
                            *(r13 + 0x179) = 0
                            *(r13 + 0x1c4) = 1
                            __builtin_memset(&var_2a8, 0, 0x30)
                            __builtin_memset(&var_258[1]:4, 0, 0x43)
                            var_268 = zx.o(0)
                            int16_t var_208_1 = 0
                            sub_140fdc870(r13, &var_2a8)
                            int64_t rbx_11 = data_1439b6268
                            int64_t rcx_60 = *(r13 + 0x30) + 7
                            var_278[1] = data_14395da18
                            void*** rcx_61 = rcx_60 & 0xfffffffffffffff8
                            var_268[0].q = data_14395d9e8
                            var_278[0] = data_14395da00
                            void* rax_94 = &rcx_61[5]
                            
                            if (rax_94 u> *(r13 + 0x38))
                                sub_140b0e3d0(r13 + 0x30, 0x30)
                                rcx_61 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_94 = &rcx_61[5]
                            
                            *(r13 + 0x30) = rax_94
                            int64_t* rax_95 = *(r13 + 8)
                            *(r13 + 0x14) += 1
                            *rax_95 = rcx_61
                            *(r13 + 8) = &rcx_61[1]
                            rcx_61[1] = 0
                            *rcx_61 = &data_142d56618
                            rcx_61[2].d = 0
                            rcx_61[3] = rbx_11
                            rcx_61[4].d = 0
                            void* var_2f8
                            sub_1419a2ec0(rdi[0xa2a], &var_2f8, &data_143e79c50, 0)
                            void* r12_1 = var_2f8
                            void* var_2e8
                            sub_1419a2ec0(rdi[0xa2a], &var_2e8, &data_143e79d50, 0)
                            void* rcx_67 = var_2e8
                            var_2a8[0].q = data_143a2fe60
                            int64_t rax_98 = 0
                            var_358 = rcx_67
                            
                            if (r12_1 != 0)
                                int64_t rdx_44 = sx.q(*(r12_1 + 0x10c))
                                void* var_2f0
                                int64_t* rbx_12 = *(var_2f0 + 0x10)
                                int64_t rax_100 = rbx_12[3]
                                
                                if (*(rax_100 + (rdx_44 << 3)) == 0)
                                    sub_1419ccf30(rbx_12, rdx_44.d)
                                    rax_100 = rbx_12[3]
                                    rcx_67 = var_358
                                
                                rax_98 = *(rax_100 + (rdx_44 << 3))
                            
                            var_2a8[2].q = rax_98
                            int64_t rax_101 = 0
                            
                            if (rcx_67 != 0)
                                int64_t rdx_45 = sx.q(*(rcx_67 + 0x10c))
                                void* var_2e0
                                int64_t* rbx_13 = *(var_2e0 + 0x10)
                                int64_t rax_103 = rbx_13[3]
                                
                                if (*(rax_103 + (rdx_45 << 3)) == 0)
                                    sub_1419ccf30(rbx_13, rdx_45.d)
                                    rax_103 = rbx_13[3]
                                
                                rax_101 = *(rax_103 + (rdx_45 << 3))
                            
                            int128_t var_288_2
                            var_288_2.q = rax_101
                            var_258[1].d = 0
                            sub_1419870b0(r13, &var_2a8, 2)
                            var_348_1:4.d = 1
                            int32_t r10_12 = arg1[0x14]
                            void* r9_7 = &arg1[0xe]
                            var_340[0].q = r9_7
                            int32_t rcx_71 = 0
                            var_348_1.d = 0
                            int32_t r8_14 = 0
                            var_340[2] = 0xffffffff
                            var_340[3].q = 0
                            
                            if (r10_12 != 0)
                                void* rax_104 = *(r9_7 + 0x10)
                                
                                if (rax_104 != 0)
                                    r9_7 = rax_104
                                
                                int32_t temp40_1
                                int32_t temp41_1
                                temp40_1:temp41_1 = sx.q(r10_12 - 1)
                                int32_t rdx_49 = *r9_7
                                
                                if (rdx_49 != 0)
                                label_1411f41cb:
                                    int32_t rax_111 = neg.d(rdx_49) & rdx_49
                                    uint64_t rflags_2
                                    int32_t temp0_16
                                    temp0_16, rflags_2 = _bit_scan_reverse(rax_111)
                                    var_348_1:4.d = rax_111
                                    int32_t rsi_2
                                    
                                    if (rax_111 == 0)
                                        rsi_2 = 0x20
                                    else
                                        rsi_2 = 0x1f - temp0_16
                                    
                                    var_340[3] = r8_14 - rsi_2 + 0x1f
                                    
                                    if (r8_14 - rsi_2 + 0x1f s> r10_12)
                                        var_340[3] = r10_12
                                else
                                    while (true)
                                        int64_t rdx_50 = sx.q(rcx_71)
                                        r8_14 += 0x20
                                        rcx_71 += 1
                                        var_330_1.d = r8_14
                                        var_348_1.d = rcx_71
                                        
                                        if (rdx_50.d s>= (temp41_1 + (temp40_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_49 = *(r9_7 + (rdx_50 << 2) + 4)
                                        var_340[2] = 0xffffffff
                                        
                                        if (rdx_49 != 0)
                                            goto label_1411f41cb
                                    
                                    var_340[3] = r10_12
                            
                            float zmm2_1[0x4] = var_340
                            float var_2c0_1[0x4] = zmm2_1
                            uint128_t var_2d0_1 = var_348_1.o
                            var_348_1.o = (&arg1[0xa]).o
                            uint32_t rax_114 = (zmm2_1[0].q u>> 0x20).d
                            var_330_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0].q)).q
                            var_340 = var_2d0_1
                            
                            if (rax_114 s< r10_12)
                                int64_t zmm6_1 = var_368
                                int32_t i_2 = var_330_1:4.d
                                
                                do
                                    int64_t* rcx_75 = sx.q(i_2) * 0x30 + *var_348_1 + 0x18
                                    
                                    if (rcx_75[1].d s> 0)
                                        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(arg1[4]))
                                        zmm10[0] = zmm10[0] f/ zmm0_1.d
                                        int32_t rax_118
                                        rax_118, zmm10 = sub_1411fc900(rcx_75, zmm6_1, zmm10)
                                        int64_t rsi_3 = *(r13 + 0x188)
                                        var_368.d = rax_118
                                        sub_141080be0(r12_1, r13, rsi_3, arg2[2])
                                        int64_t rax_119 = data_1439b6250
                                        
                                        if (*(r12_1 + 0x11a) u> 0)
                                            int64_t rcx_78 = *(r13 + 0x30) + 7
                                            var_360 = zx.d(*(r12_1 + 0x118))
                                            void*** rcx_79 = rcx_78 & 0xfffffffffffffff8
                                            void* rax_121 = &rcx_79[5]
                                            
                                            if (rax_121 u> *(r13 + 0x38))
                                                sub_140b0e3d0(r13 + 0x30, 0x30)
                                                rcx_79 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                                                rax_121 = &rcx_79[5]
                                            
                                            *(r13 + 0x30) = rax_121
                                            void**** rax_122 = *(r13 + 8)
                                            *(r13 + 0x14) += 1
                                            *rax_122 = rcx_79
                                            *(r13 + 8) = &rcx_79[1]
                                            rcx_79[1] = 0
                                            *rcx_79 = &data_142d5ebf8
                                            rcx_79[3].d = var_360
                                            rcx_79[4] = rax_119
                                            rcx_79[2] = rsi_3
                                        
                                        int64_t rsi_4 = *(r13 + 0x1a0)
                                        int64_t rax_127 = *var_348_1
                                        int64_t rcx_84 = sx.q(i_2) * 6
                                        void* rbx_15 = *(rax_127 + (rcx_84 << 3) + 8)
                                        void* rdi_5 = *(rax_127 + (rcx_84 << 3))
                                        sub_141080ac0(var_358, r13, rsi_4, arg2[2])
                                        zmm6_1 = sub_1411b9dc0(var_358 + 0x118, r13, rsi_4, rdi_5, 
                                            rbx_15, nullptr)
                                        void*** rcx_90 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rax_129 = &rcx_90[4]
                                        
                                        if (rax_129 u> *(r13 + 0x38))
                                            zmm6_1 = sub_140b0e3d0(r13 + 0x30, 0x28)
                                            rcx_90 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                                            rax_129 = &rcx_90[4]
                                        
                                        *(r13 + 0x30) = rax_129
                                        int64_t* rax_130 = *(r13 + 8)
                                        *(r13 + 0x14) += 1
                                        *rax_130 = rcx_90
                                        *(r13 + 8) = &rcx_90[1]
                                        rcx_90[1] = 0
                                        *rcx_90 = &data_142d54988
                                        rcx_90[3].d = var_368.d
                                        rcx_90[2].d = 0
                                        *(rcx_90 + 0x14) = 2
                                    
                                    var_330_1.d &= not.d(var_340[1])
                                    sub_14059bdd0(&var_340)
                                    i_2 = var_330_1:4.d
                                while (i_2 s< *(var_340[2].q + 0x18))
                            
                            sub_141096650(r13)
                            void** rbx_18 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_136 = &rbx_18[3]
                            
                            if (rax_136 u> *(r13 + 0x38))
                                sub_140b0e3d0(r13 + 0x30, 0x20)
                                rbx_18 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_136 = &rbx_18[3]
                            
                            *(r13 + 0x30) = rax_136
                            *rbx_18 = var_d8
                            rbx_18[1] = rcx_40
                            rbx_18[2] = rcx_41
                            void*** rcx_99 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_140 = &rcx_99[5]
                            
                            if (rax_140 u> *(r13 + 0x38))
                                sub_140b0e3d0(r13 + 0x30, 0x30)
                                rcx_99 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_140 = &rcx_99[5]
                            
                            *(r13 + 0x30) = rax_140
                            void** rax_141 = *(r13 + 8)
                            *(r13 + 0x14) += 1
                            *rax_141 = rcx_99
                            *(r13 + 8) = &rcx_99[1]
                            rcx_99[1] = 0
                            *rcx_99 = &data_142d549c8
                            rcx_99[2].d = 3
                            rcx_99[3] = rbx_18
                            rcx_99[4].d = 0
                            int64_t var_f0
                            result = sub_1405d1550(&var_f0)
else if (data_143e5102c != 0 || data_143e75b5c != 0)
    goto label_1411f34a0

__security_check_cookie(rax_1 ^ &var_398)
return result
