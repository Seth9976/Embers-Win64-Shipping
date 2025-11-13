// 函数: sub_1423f25a0
// 地址: 0x1423f25a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("TimerManager")

if (*(arg1 + 0x150) != data_143de5458)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    void* rcx_1 = *(arg1 + 0x158)
    char rdx_1 = 0
    int128_t zmm7
    zmm7.q = float.d(performanceCount)
    int32_t r14_1 = 0
    char var_f8_1 = 0
    int32_t var_f4_1 = 0
    uint128_t zmm0_1
    zmm0_1.q = fconvert.d(arg2.d)
    zmm7.q = zmm7.q f* data_143d796f8
    zmm0_1.q = zmm0_1.q f+ *(arg1 + 0x140)
    *(arg1 + 0x140) = zmm0_1.q
    int64_t performanceCount_2
    
    if (rcx_1 == 0)
        performanceCount_2 = 0
    else
        performanceCount_2 = sub_14202bfe0(rcx_1)
        rdx_1 = 0
    
    performanceCount = performanceCount_2
    int32_t var_f0
    uint128_t zmm1
    
    if (*(arg1 + 0x48) s> 0)
        void* rbx_1 = arg1 + 8
        void* rsi_1 = arg1 + 0x40
        
        while (true)
            int32_t* rcx_2 = *rsi_1
            char* rdi_3 = (zx.q(*rcx_2) & 0xffffff) * 0x90 + *rbx_1
            
            if (rdi_3[1] != 4)
                if (*(rdi_3 + 8) f>= *(arg1 + 0x140))
                    break
                
                if (rdx_1 != 0)
                    var_f4_1 = r14_1 + 1
                    
                    if (r14_1 + 1 s<= data_143a3027c)
                        sub_140b19e60()
                        sub_1423d83e0(&data_1439a8bd0, rdi_3)
                
                int32_t rax_19
                
                if (performanceCount_2 == 0)
                    rax_19 = -1
                else
                    rax_19 = sub_142434f50(performanceCount_2, rdi_3[0x80])
                
                int32_t zmm6_1
                int64_t zmm7_1
                int64_t zmm8_1
                zmm6_1, zmm7_1, zmm8_1 = sub_142428200(&var_f0, rax_19, performanceCount_2)
                int32_t var_90_1 = *(rbx_1 + 8) - *(rbx_1 + 0x34)
                void* var_98 = rbx_1
                sub_1423cd060(rsi_1, arg1 + 0x148, &var_98, 0)
                bool cond:5_1 = (*rdi_3 & 1) == 0
                rdi_3[1] = 3
                int32_t r15_2
                uint128_t zmm1_1
                
                if (cond:5_1)
                    r15_2 = 1
                else
                    zmm1_1.q = *(arg1 + 0x140) f- *(rdi_3 + 8)
                    zmm1_1.q = zmm1_1.q f/ _mm_cvtps_pd((*(rdi_3 + 4)).q).q
                    r15_2 = int.d(_mm_cvtpd_ps(zmm1_1).d) + 1
                
                int32_t r14_3 = 0
                
                if (r15_2 s> 0)
                    while (true)
                        if (*(rdi_3 + 0x18) == 0)
                        label_1423f28e9:
                            int32_t rcx_15
                            rcx_15.b = sub_140b5b8a0(*(rdi_3 + 0x28), 0) == 0
                            
                            if ((*(rdi_3 + 0x2c) != 0 | rcx_15.b) == 0)
                            label_1423f2947:
                                
                                if (*(rdi_3 + 0x30) != 0)
                                    void* rax_31 = *(rdi_3 + 0x40)
                                    void* rcx_21 = &rdi_3[0x50]
                                    
                                    if (rax_31 != 0)
                                        rcx_21 = rax_31
                                    
                                    (*(rdi_3 + 0x30))((*(*rcx_21 + 8))(rcx_21))
                            else
                                void* rax_27 = sub_140d3c6e0(&rdi_3[0x20])
                                
                                if (rax_27 == 0)
                                    goto label_1423f2947
                                
                                if (sub_140d1fd20(rax_27, *(rdi_3 + 0x28)) == 0)
                                    goto label_1423f2947
                                
                                int64_t* rax_29 = sub_140d3c6e0(&rdi_3[0x20])
                                int64_t rax_30
                                rax_30, zmm6_1 = sub_140d1fd30(rax_29, *(rdi_3 + 0x28))
                                (*(*rax_29 + 0x210))(rax_29, rax_30, 0)
                                rbx_1 = arg1 + 8
                        else
                            int64_t* rcx_13 = *(rdi_3 + 0x10)
                            
                            if (rcx_13 == 0)
                                goto label_1423f28e9
                            
                            if ((*(*rcx_13 + 0x28))(rcx_13) == 0)
                                goto label_1423f28e9
                            
                            if (*(rdi_3 + 0x18) == 0)
                                (*(*nullptr + 0x48))(0)
                            else
                                int64_t* rcx_14 = *(rdi_3 + 0x10)
                                (*(*rcx_14 + 0x48))(rcx_14)
                        
                        int64_t r9_3 = *(arg1 + 0x148)
                        
                        if (r9_3 != 0)
                            uint64_t r8_7 = zx.q(r9_3.d) & 0xffffff
                            
                            if (r8_7.d s< *(arg1 + 0x10))
                                void* rax_34 = *(arg1 + 0x28)
                                void* rdi_6 = arg1 + 0x18
                                
                                if (rax_34 != 0)
                                    rdi_6 = rax_34
                                
                                if (test_bit(*(rdi_6 + (zx.q(r8_7.d) u>> 5 << 2)), r8_7.d & 0x1f))
                                    rdi_3 = r8_7 * 0x90 + *rbx_1
                                    
                                    if (*(rdi_3 + 0x70) == r9_3)
                                        char rax_37 = rdi_3[1]
                                        
                                        if (rax_37 != 4)
                                            if (rax_37 != 3)
                                                break
                                            
                                            r14_3 += 1
                                            
                                            if (r14_3 s>= r15_2)
                                                break
                                            
                                            continue
                        
                        rdi_3 = nullptr
                        break
                    
                    rsi_1 = arg1 + 0x40
                
                uint128_t zmm0_2
                
                if (data_143f5b290.d f<= zmm6_1 || var_f8_1 != 0)
                    r14_1 = var_f4_1
                label_1423f2a61:
                    
                    if (rdi_3 != 0)
                        char rax_39 = *rdi_3
                        char rax_40
                        
                        if ((rax_39 & 1) != 0 && (rax_39 & 2) != 0)
                            rax_40 = sub_1423e6710(&rdi_3[0x10])
                        
                        if ((rax_39 & 1) == 0 || ((rax_39 & 2) != 0 && rax_40 == 0))
                            sub_1423ec100(arg1, *(arg1 + 0x148))
                        else
                            rdi_3[1] = 1
                            zmm0_2.d = _mm_cvtepi32_ps(zx.o(r15_2)).d f* *(rdi_3 + 4)
                            zmm0_2.q = _mm_cvtps_pd(zmm0_2.q).q f+ *(rdi_3 + 8)
                            *(rdi_3 + 8) = zmm0_2.q
                            int64_t rdi_9 = sx.q(*(arg1 + 0x48))
                            int32_t rax_41 = (rdi_9 + 1).d
                            *(arg1 + 0x48) = rax_41
                            
                            if (rax_41 s> *(arg1 + 0x4c))
                                sub_1405a4d70(rsi_1)
                            
                            *(*rsi_1 + (rdi_9 << 3)) = *(arg1 + 0x148)
                            int64_t r10_2 = *rsi_1
                            int32_t i_2 = *(arg1 + 0x48) - 1
                            
                            if (i_2 s> 0)
                                int32_t i
                                
                                do
                                    int64_t rdi_10 = *rbx_1
                                    int32_t temp7_1
                                    int32_t temp8_1
                                    temp7_1:temp8_1 = sx.q(i_2 - 1)
                                    i = (temp8_1 - temp7_1) s>> 1
                                    uint64_t* r9_4 = r10_2 + (sx.q(i_2) << 3)
                                    uint64_t* r8_8 = r10_2 + (sx.q(i) << 3)
                                    
                                    if (*(rdi_10 + (zx.q(*r8_8) & 0xffffff) * 0x90 + 8) f<=
                                            *((zx.q(*r9_4) & 0xffffff) * 0x90 + rdi_10 + 8))
                                        break
                                    
                                    if (r9_4 != r8_8)
                                        zmm1_1 = zx.o(*r9_4)
                                        *r9_4 = *r8_8
                                        *r8_8 = zmm1_1.q
                                    
                                    i_2 = i
                                while (i s> 0)
                        
                        *(arg1 + 0x148) = 0
                else
                    int64_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    zmm1_1.q = float.d(performanceCount_1)
                    r14_1 = var_f4_1
                    zmm0_2 = _mm_cvtps_pd(data_143f5b290.q)
                    zmm1_1.q = zmm1_1.q f* data_143d796f8
                    zmm1_1.q = zmm1_1.q f- zmm7_1
                    zmm1_1.q = zmm1_1.q f* zmm8_1
                    
                    if (zmm1_1.q f< zmm0_2.q)
                        goto label_1423f2a61
                    
                    r14_1 += 1
                    var_f8_1 = 1
                    var_f4_1 = r14_1
                    
                    if (rdi_3 != 0)
                        sub_140b19e60()
                        sub_1423d83e0(&data_1439a8bd0, rdi_3)
                        goto label_1423f2a61
                sub_1424294e0(&var_f0)
            else
                int32_t rbx_2 = *(rsi_1 + 8)
                int64_t rdi_4 = *rcx_2
                int32_t rax_4 = rbx_2 - 1
                
                if (rax_4 s>= 1)
                    rax_4 = 1
                
                if (rax_4 != 0)
                    memcpy(rcx_2, &rcx_2[sx.q(rbx_2 - rax_4) * 2], rax_4 << 3)
                    rbx_2 = *(rsi_1 + 8)
                
                uint64_t r11_1 = 0
                *(rsi_1 + 8) = rbx_2 - 1
                int64_t rsi_2 = *rsi_1
                
                if (rbx_2 - 1 s> 1)
                    uint64_t r8_3
                    
                    do
                        int64_t r10_1 = *(arg1 + 8)
                        r8_3 = zx.q(((r11_1 << 1) + 1).d)
                        int32_t r9_1 = (r8_3 + 1).d
                        
                        if (r9_1 s< rbx_2 - 1)
                            if (*(r10_1 + (zx.q(*(rsi_2 + (sx.q(r9_1) << 3))) & 0xffffff) * 0x90
                                    + 8) f> *(r10_1
                                    + (zx.q(*(rsi_2 + (sx.q(r8_3.d) << 3))) & 0xffffff) * 0x90
                                    + 8))
                                r9_1 = r8_3.d
                            
                            r8_3 = zx.q(r9_1)
                        
                        int32_t* rdx_5 = rsi_2 + (sx.q(r8_3.d) << 3)
                        int32_t* r9_2 = rsi_2 + (sx.q(r11_1.d) << 3)
                        
                        if (*(r10_1 + (zx.q(*r9_2) & 0xffffff) * 0x90 + 8) f<=
                                *(r10_1 + (zx.q(*rdx_5) & 0xffffff) * 0x90 + 8))
                            break
                        
                        if (r9_2 != rdx_5)
                            zmm1 = zx.o(*r9_2)
                            *r9_2 = *rdx_5
                            *rdx_5 = zmm1.q
                        
                        r11_1 = zx.q(r8_3.d)
                    while (((r8_3 << 1) + 1).d s< rbx_2 - 1)
                
                sub_1423ec100(arg1, rdi_4)
            
            rbx_1 = arg1 + 8
            rdx_1 = var_f8_1
            rsi_1 = arg1 + 0x40
            performanceCount_2 = performanceCount
            
            if (*(arg1 + 0x48) s<= 0)
                break
    
    *(arg1 + 0x150) = data_143de5458
    
    if (*(arg1 + 0xa8) - *(arg1 + 0xd4) s> 0)
        int32_t rcx_40 = 0
        int32_t var_ec_1 = 1
        var_f0 = 0
        int32_t r10_3 = *(arg1 + 0xc8)
        int32_t rdi_11 = 0
        void* var_e8_1 = arg1 + 0xb0
        int64_t var_dc_1 = 0
        int32_t var_e0_1 = 0xffffffff
        
        if (r10_3 != 0)
            void* rax_49 = *(arg1 + 0xc0)
            void* r8_9 = arg1 + 0xb0
            
            if (rax_49 != 0)
                r8_9 = rax_49
            
            int32_t temp0_6
            int32_t temp1_1
            temp0_6:temp1_1 = sx.q(r10_3 - 1)
            int32_t rdx_25 = *r8_9
            
            if (rdx_25 != 0)
            label_1423f2c66:
                int32_t rax_56 = neg.d(rdx_25) & rdx_25
                uint64_t rflags_1
                int32_t temp0_7
                temp0_7, rflags_1 = _bit_scan_reverse(rax_56)
                int32_t var_ec_2 = rax_56
                int32_t rax_57
                
                if (rax_56 == 0)
                    rax_57 = 0x20
                else
                    rax_57 = 0x1f - temp0_7
                
                var_dc_1.d = rdi_11 - rax_57 + 0x1f
                
                if (rdi_11 - rax_57 + 0x1f s> r10_3)
                    var_dc_1.d = r10_3
            else
                while (true)
                    int64_t rdx_26 = sx.q(rcx_40)
                    rdi_11 += 0x20
                    rcx_40 += 1
                    var_dc_1:4.d = rdi_11
                    var_f0 = rcx_40
                    
                    if (rdx_26.d s>= (temp1_1 + (temp0_6 & 0x1f)) s>> 5)
                        break
                    
                    rdx_25 = *(r8_9 + (rdx_26 << 2) + 4)
                    var_e0_1 = 0xffffffff
                    
                    if (rdx_25 != 0)
                        goto label_1423f2c66
                
                var_dc_1.d = r10_3
        
        int32_t rdx_27 = *(arg1 + 0xc8)
        double zmm2[0x2] = var_e0_1.o
        double var_70_1[0x2] = zmm2
        int32_t rsi_3 = 0xffffffff << (rdx_27.b & 0x1f)
        uint128_t var_80_1 = var_f0.o
        int32_t rdi_14 = rdx_27 s>> 5
        int32_t r8_11 = rdx_27 & 0xffffffe0
        int64_t var_a0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_e0_2 = rsi_3
        var_dc_1.d = rdx_27
        uint128_t var_c0 = (arg1 + 0xa0).o
        uint128_t var_b0_1 = var_80_1
        
        if (rdx_27 != r10_3)
            void* rax_59 = *(arg1 + 0xc0)
            void* r9_5 = arg1 + 0xb0
            
            if (rax_59 != 0)
                r9_5 = rax_59
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_3 - 1)
            int32_t rdx_31 = *(r9_5 + (sx.q(rdi_14) << 2)) & rsi_3
            
            if (rdx_31 != 0)
            label_1423f2d31:
                int32_t rax_66 = neg.d(rdx_31) & rdx_31
                uint64_t rflags_2
                int32_t temp0_9
                temp0_9, rflags_2 = _bit_scan_reverse(rax_66)
                int32_t r11_2
                
                if (rax_66 == 0)
                    r11_2 = 0x20
                else
                    r11_2 = 0x1f - temp0_9
                
                var_dc_1.d = r8_11 - r11_2 + 0x1f
                
                if (r8_11 - r11_2 + 0x1f s> r10_3)
                    var_dc_1.d = r10_3
            else
                while (true)
                    int64_t rcx_45 = sx.q(rdi_14)
                    r8_11 += 0x20
                    rdi_14 += 1
                    
                    if (rcx_45.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_31 = *(r9_5 + (rcx_45 << 2) + 4)
                    var_e0_2 = 0xffffffff
                    
                    if (rdx_31 != 0)
                        goto label_1423f2d31
                
                var_dc_1.d = r10_3
        
        while (true)
            int64_t rax_68 = sx.q(var_b0_1:0xc.d)
            int64_t* rdi_15 = var_c0.q
            
            if (rax_68.d == (var_e0_2.q u>> 0x20).d && var_b0_1.q == arg1 + 0xb0
                    && rdi_15 == arg1 + 0xa0)
                break
            
            int64_t rdi_17 = *(*rdi_15 + rax_68 * 0x10)
            void* rcx_49 = (zx.q(rdi_17.d) & 0xffffff) * 0x90 + *(arg1 + 8)
            zmm0_1.q = *(arg1 + 0x140) f+ *(rcx_49 + 8)
            *(rcx_49 + 1) = 1
            *(rcx_49 + 8) = zmm0_1.q
            int64_t rsi_4 = sx.q(*(arg1 + 0x48))
            int32_t rax_72 = (rsi_4 + 1).d
            *(arg1 + 0x48) = rax_72
            
            if (rax_72 s> *(arg1 + 0x4c))
                sub_1405a4d70(arg1 + 0x40)
            
            *(*(arg1 + 0x40) + (rsi_4 << 3)) = rdi_17
            int64_t r10_4 = *(arg1 + 0x40)
            int32_t i_3 = *(arg1 + 0x48) - 1
            
            if (i_3 s> 0)
                int32_t i_1
                
                do
                    int64_t rdi_18 = *(arg1 + 8)
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(i_3 - 1)
                    i_1 = (temp5_1 - temp4_1) s>> 1
                    uint64_t* r9_6 = r10_4 + (sx.q(i_3) << 3)
                    uint64_t* r8_13 = r10_4 + (sx.q(i_1) << 3)
                    
                    if (*(rdi_18 + (zx.q(*r8_13) & 0xffffff) * 0x90 + 8) f<=
                            *(rdi_18 + (zx.q(*r9_6) & 0xffffff) * 0x90 + 8))
                        break
                    
                    if (r9_6 != r8_13)
                        zmm1 = zx.o(*r9_6)
                        *r9_6 = *r8_13
                        *r8_13 = zmm1.q
                    
                    i_3 = i_1
                while (i_1 s> 0)
            
            var_b0_1:8.d &= not.d(var_c0:0xc.d)
            sub_14059bdd0(&var_c0:8)
        
        if (*(arg1 + 0xa8) != *(arg1 + 0xd4))
            int32_t rax_80 = *(arg1 + 0xac)
            *(arg1 + 0xa8) = 0
            
            if (rax_80 s< 0 && rax_80 != 0)
                sub_1405a5410(arg1 + 0xa0, 0)
            
            *(arg1 + 0xd0) = 0xffffffff
            *(arg1 + 0xd4) = 0
            sub_140774790(arg1 + 0xb0)
            int64_t rcx_63 = sx.q(*(arg1 + 0xe8))
            void* rdi_19 = arg1 + 0xd8
            void* rdx_36 = *(rdi_19 + 8)
            
            if (rcx_63 s> 0)
                if (rdx_36 != 0)
                    rdi_19 = rdx_36
                
                __builtin_memset(rdi_19, 0xffffffff, rcx_63 << 2)

return sub_140b37f60("TimerManager") __tailcall
