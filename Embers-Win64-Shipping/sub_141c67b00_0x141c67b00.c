// 函数: sub_141c67b00
// 地址: 0x141c67b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* result)[0x4]

if (*(arg1 + 0x130) == 0)
    sub_141c699c0(arg1)
    result = *(arg1 + 0x88)
    float rcx_8 = (*result)[0x256]
    *(arg1 + 0x120) = rcx_8
    
    if (rcx_8 s<= 8)
        int32_t temp0_2 = divs.dp.d(sx.q(arg2[1].d), rcx_8)
        int32_t rcx_9 = rcx_8 i* temp0_2
        int32_t rbx_2 = 0
        *(arg1 + 0x124) = rcx_9
        *(arg1 + 0xf8) = 0
        
        if (rcx_9 s> *(arg1 + 0xfc))
            sub_140775b10(arg1 + 0xf0, rcx_9)
            rbx_2 = *(arg1 + 0xf8)
        
        int64_t rdi_2 = sx.q(*(arg1 + 0x124))
        int32_t rax_12 = rbx_2 + rdi_2.d
        *(arg1 + 0xf8) = rax_12
        
        if (rax_12 s> *(arg1 + 0xfc))
            sub_140775270(arg1 + 0xf0)
        
        memset(*(arg1 + 0xf0) + (sx.q(rbx_2) << 2), 0, rdi_2 << 2)
        int64_t rax_14 = *(arg1 + 0xf0)
        int32_t rax_15 = data_143f34a18
        sub_140b34200("SubmixChildren", rax_15)
        int32_t* var_200 = nullptr
        int32_t rbx_3 = *(arg1 + 0x50)
        int64_t var_1f8_1 = 0
        int32_t rcx_14 = 0
        int32_t var_1e0_1 = 0
        int32_t r8_4 = 0
        int32_t var_1dc_1 = 1
        void* var_1d8_1 = arg1 + 0x38
        int32_t var_1d0_1 = 0xffffffff
        int64_t var_1cc_1 = 0
        
        if (rbx_3 != 0)
            void* rax_16 = *(arg1 + 0x48)
            void* r9_1 = arg1 + 0x38
            
            if (rax_16 != 0)
                r9_1 = rax_16
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(rbx_3 - 1)
            int32_t rdx_11 = *r9_1
            
            if (rdx_11 != 0)
            label_141c67d8b:
                int32_t rax_23 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
                uint64_t rflags_1
                int32_t temp0_3
                temp0_3, rflags_1 = _bit_scan_reverse(rax_23)
                int32_t var_1dc_2 = rax_23
                int32_t var_108_1 = temp0_3
                int32_t rax_24
                
                if (rax_23 == 0)
                    rax_24 = 0x20
                else
                    rax_24 = 0x1f - temp0_3
                
                var_1cc_1.d = r8_4 - rax_24 + 0x1f
                
                if (r8_4 - rax_24 + 0x1f s> rbx_3)
                    var_1cc_1.d = rbx_3
            else
                while (true)
                    int64_t rdx_12 = sx.q(rcx_14)
                    r8_4 += 0x20
                    rcx_14 += 1
                    var_1cc_1:4.d = r8_4
                    var_1e0_1 = rcx_14
                    
                    if (rdx_12.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                    int32_t var_1d0_2 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_141c67d8b
                
                var_1cc_1.d = rbx_3
        
        int32_t rdx_13 = *(arg1 + 0x50)
        int32_t var_164_1 = rdx_13
        int128_t var_198 = var_1e0_1.o
        int32_t rdi_3 = 0xffffffff << (rdx_13 & 0x1f).b
        int64_t var_188_1 = 0xffffffff
        int32_t r8_7 = rdx_13 s>> 5
        int32_t r9_3 = rdx_13 & 0xffffffe0
        int64_t var_a0_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int32_t var_178_1 = r8_7
        int32_t var_168_1 = rdi_3
        int32_t var_160_1 = r9_3
        int128_t zmm1_1 = var_198
        int128_t var_c0 = (arg1 + 0x28).o
        int128_t var_b0_1 = zmm1_1
        
        if (rdx_13 != rbx_3)
            void* rax_28 = *(arg1 + 0x48)
            void* r10_1 = arg1 + 0x38
            
            if (rax_28 != 0)
                r10_1 = rax_28
            
            int32_t temp10_1
            int32_t temp11_1
            temp10_1:temp11_1 = sx.q(rbx_3 - 1)
            int32_t rdx_17 = *(r10_1 + (sx.q(r8_7) << 2)) & rdi_3
            int32_t var_164_3
            
            if (rdx_17 != 0)
            label_141c67e7f:
                int32_t rax_34 = ((rdx_17 - 1) & rdx_17) ^ rdx_17
                uint64_t rflags_2
                int32_t temp0_5
                temp0_5, rflags_2 = _bit_scan_reverse(rax_34)
                int32_t var_104_1 = temp0_5
                int32_t rax_35
                
                if (rax_34 == 0)
                    rax_35 = 0x20
                else
                    rax_35 = 0x1f - temp0_5
                
                int32_t var_164_2 = r9_3 - rax_35 + 0x1f
                
                if (r9_3 - rax_35 + 0x1f s> rbx_3)
                    var_164_3 = rbx_3
            else
                while (true)
                    int64_t rcx_18 = sx.q(r8_7)
                    r9_3 += 0x20
                    r8_7 += 1
                    int32_t var_160_2 = r9_3
                    int32_t var_178_2 = r8_7
                    
                    if (rcx_18.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_17 = *(r10_1 + (rcx_18 << 2) + 4)
                    var_168_1 = 0xffffffff
                    
                    if (rdx_17 != 0)
                        goto label_141c67e7f
                
                var_164_3 = rbx_3
        
        while (true)
            int64_t rdx_18 = sx.q(var_b0_1:0xc.d)
            int32_t rax_27
            
            if (rdx_18.d != (var_168_1.q u>> 0x20).d || var_b0_1.q != arg1 + 0x38)
                rax_27.b = 0
            else
                rax_27.b = 1
            
            int64_t rcx_20 = var_c0.q
            
            if (rax_27.b == 0 || rcx_20 != arg1 + 0x28)
                rax_27.b = 1
            else
                rax_27.b = 0
            
            if (rax_27.b == 0)
                break
            
            int32_t* rsi_4 = rdx_18 * 0x38 + *rcx_20
            int64_t* rbx_4 = *(rsi_4 + 0x10)
            
            if (rbx_4 == 0)
                goto label_141c67f2b
            
            int32_t rax_36 = 0
            bool z_1
            
            if (0 == rbx_4[1].d)
                rbx_4[1].d = 0
                z_1 = true
            else
                rax_36 = rbx_4[1].d
                z_1 = false
            
            if (z_1)
            label_141c67f28:
                rbx_4 = nullptr
            label_141c67f2b:
                int64_t rdi_4 = sx.q(var_1f8_1.d)
                int32_t rax_38 = (rdi_4 + 1).d
                var_1f8_1.d = rax_38
                
                if (rax_38 s> var_1f8_1:4.d)
                    sub_1405a4cf0(&var_200)
                
                var_200[rdi_4] = *rsi_4
            else
                while (true)
                    bool z_2
                    
                    if (rax_36 == rbx_4[1].d)
                        rbx_4[1].d = rax_36 + 1
                        z_2 = true
                    else
                        rbx_4[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    rax_36 = 0
                    bool z_3
                    
                    if (0 == rbx_4[1].d)
                        rbx_4[1].d = 0
                        z_3 = true
                    else
                        rax_36 = rbx_4[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141c67f28
                
                int64_t rcx_27 = *(rsi_4 + 8)
                
                if (rcx_27 == 0)
                    goto label_141c67f2b
                
                sub_141c67b00(rcx_27, arg1 + 0xf0)
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_42 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_42 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            var_b0_1:8.d &= not.d(var_c0:0xc.d)
            sub_14059bdd0(&var_c0:8)
        
        int32_t* rbx_5 = var_200
        int64_t rdi_5 = 0
        void* rcx_28 = &rbx_5[sx.q(var_1f8_1.d)]
        uint64_t rsi_8 = (rcx_28 - rbx_5 + 3) u>> 2
        
        if (rbx_5 u> rcx_28)
            rsi_8 = 0
        
        if (rsi_8 != 0)
            do
                sub_141c6bae0(arg1 + 0x28, *rbx_5)
                rdi_5 += 1
                rbx_5 = &rbx_5[1]
            while (rdi_5 != rsi_8)
        
        int32_t* rbx_6 = var_200
        
        if (rbx_6 != 0)
            sub_140a74f90(rbx_6)
        
        sub_140b38680("SubmixChildren", rax_15)
        int32_t r12_2 = data_143f34a18
        sub_140b34200("SubmixSource", r12_2)
        int32_t var_1bc_1 = 1
        int32_t r11_3 = *(arg1 + 0xb8)
        void* var_1b8_1 = arg1 + 0xa0
        int32_t rcx_31 = 0
        int32_t var_1c0_1 = 0
        int32_t r8_8 = 0
        int32_t var_1b0_1 = 0xffffffff
        int64_t var_1ac_1 = 0
        
        if (r11_3 != 0)
            void* rax_47 = *(arg1 + 0xb0)
            void* r9_5 = arg1 + 0xa0
            
            if (rax_47 != 0)
                r9_5 = rax_47
            
            int32_t temp12_1
            int32_t temp13_1
            temp12_1:temp13_1 = sx.q(r11_3 - 1)
            int32_t rdx_26 = *r9_5
            
            if (rdx_26 != 0)
            label_141c680c9:
                int32_t rax_54 = ((rdx_26 - 1) & rdx_26) ^ rdx_26
                uint64_t rflags_3
                int32_t temp0_8
                temp0_8, rflags_3 = _bit_scan_reverse(rax_54)
                int32_t var_1bc_2 = rax_54
                int32_t var_100_1 = temp0_8
                int32_t rax_55
                
                if (rax_54 == 0)
                    rax_55 = 0x20
                else
                    rax_55 = 0x1f - temp0_8
                
                var_1ac_1.d = r8_8 - rax_55 + 0x1f
                
                if (r8_8 - rax_55 + 0x1f s> r11_3)
                    var_1ac_1.d = r11_3
            else
                while (true)
                    int64_t rdx_27 = sx.q(rcx_31)
                    r8_8 += 0x20
                    rcx_31 += 1
                    var_1ac_1:4.d = r8_8
                    var_1c0_1 = rcx_31
                    
                    if (rdx_27.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_26 = *(r9_5 + (rdx_27 << 2) + 4)
                    int32_t var_1b0_2 = 0xffffffff
                    
                    if (rdx_26 != 0)
                        goto label_141c680c9
                
                var_1ac_1.d = r11_3
        
        int32_t rdx_28 = *(arg1 + 0xb8)
        int32_t var_144_1 = rdx_28
        uint128_t var_90_1 = var_1c0_1.o
        int32_t rdi_6 = 0xffffffff << (rdx_28 & 0x1f).b
        int128_t var_80_1 = 0xffffffff
        int32_t r8_11 = rdx_28 s>> 5
        int32_t r9_7 = rdx_28 & 0xffffffe0
        var_188_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int32_t var_158_1 = r8_11
        int32_t var_148_1 = rdi_6
        int32_t var_140_1 = r9_7
        void* var_1a0_1
        var_1a0_1.o = (arg1 + 0x90).o
        var_198 = var_90_1
        
        if (rdx_28 != r11_3)
            void* rax_59 = *(arg1 + 0xb0)
            void* r10_2 = arg1 + 0xa0
            
            if (rax_59 != 0)
                r10_2 = rax_59
            
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q(r11_3 - 1)
            int32_t rdx_32 = *(r10_2 + (sx.q(r8_11) << 2)) & rdi_6
            int32_t var_144_3
            
            if (rdx_32 != 0)
            label_141c681ce:
                int32_t rax_65 = ((rdx_32 - 1) & rdx_32) ^ rdx_32
                uint64_t rflags_4
                int32_t temp0_10
                temp0_10, rflags_4 = _bit_scan_reverse(rax_65)
                int32_t var_fc_1 = temp0_10
                int32_t rax_66
                
                if (rax_65 == 0)
                    rax_66 = 0x20
                else
                    rax_66 = 0x1f - temp0_10
                
                int32_t var_144_2 = r9_7 - rax_66 + 0x1f
                
                if (r9_7 - rax_66 + 0x1f s> r11_3)
                    var_144_3 = r11_3
            else
                while (true)
                    int64_t rcx_35 = sx.q(r8_11)
                    r9_7 += 0x20
                    r8_11 += 1
                    int32_t var_140_2 = r9_7
                    int32_t var_158_2 = r8_11
                    
                    if (rcx_35.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_32 = *(r10_2 + (rcx_35 << 2) + 4)
                    var_148_1 = 0xffffffff
                    
                    if (rdx_32 != 0)
                        goto label_141c681ce
                
                var_144_3 = r11_3
        
        while (true)
            int64_t rcx_37 = sx.q(var_188_1:4.d)
            int32_t rax_58
            
            if (rcx_37.d != (var_148_1.q u>> 0x20).d || var_198:8.q != arg1 + 0xa0)
                rax_58.b = 0
            else
                rax_58.b = 1
            
            if (rax_58.b == 0 || var_1a0_1 != arg1 + 0x90)
                rax_58.b = 1
            else
                rax_58.b = 0
            
            if (rax_58.b == 0)
                break
            
            int64_t rax_67 = *var_1a0_1
            int64_t rcx_38 = rcx_37 * 3
            int64_t* rdx_34 = *(rax_67 + (rcx_38 << 3))
            float zmm3_1 = *(rax_67 + (rcx_38 << 3) + 8)
            int64_t r8_12 = *rdx_34
            
            if (not(zmm3_1 <= 0f))
                int64_t rax_68 = sx.q(*(rdx_34 + 0x8c))
                void* rdx_36 = rax_68 * 0x3f0 + *(r8_12 + 0xc8)
                char rax_69 = *(rdx_36 + 0x3d0)
                void* rcx_40 = rax_68 * 0x2f0 + *(r8_12 + 0xd8)
                
                if ((rax_69 & 0x10) == 0 && (*(rdx_36 + 0x3d1) & 0x10) == 0 && (rax_69 & 8) != 0
                        && *(rcx_40 + 0x270) != 0)
                    sub_141c3d480(*(rcx_40 + 0x260), *(arg1 + 0xf0), 
                        int.d(_mm_min_ss(_mm_cvtepi32_ps(zx.o(*(rcx_40 + 0x268))).d, 
                            _mm_cvtepi32_ps(zx.o(*(arg1 + 0xf8))).d).d), 
                        zmm3_1)
            
            var_188_1.d &= not.d(var_198:4.d)
            sub_14059bdd0(&var_198)
        
        sub_140b38680("SubmixSource", r12_2)
        CRITICAL_SECTION* lpCriticalSection_2 = arg1 + 0x370
        CRITICAL_SECTION* lpCriticalSection_3 = lpCriticalSection_2
        EnterCriticalSection(lpCriticalSection_2)
        void* arg_8
        
        if (*(arg1 + 0x80) s> 0)
            int32_t rax_72 = data_143f34a18
            sub_140b34200("SubmixEffectProcessing", rax_72)
            int64_t* rcx_44 = *(arg1 + 0x88)
            int64_t var_138 = 0
            int64_t var_118_1 = 0
            (*(*rcx_44 + 0xc8))(rcx_44)
            int32_t r8_14 = *(arg1 + 0x120)
            void* rcx_45 = *(arg1 + 0x88)
            int32_t var_12c_1 = r8_14
            void* rdx_41 = *(arg1 + 0x78)
            int32_t var_130_1 = divs.dp.d(sx.q(*(arg1 + 0x124)), r8_14)
            int32_t var_128_1 = *(rcx_45 + 0x958)
            int64_t var_120_1 = *(rcx_45 + 0xa90) + 0xb8
            int64_t rax_80 = sx.q(*(arg1 + 0x80))
            int64_t var_110_1 = *(rcx_45 + 0x360)
            int64_t* var_e8 = arg1 + 0xe0
            int32_t var_e0_1 = r8_14
            void* rbx_10 = rdx_41 + rax_80 * 0x18
            
            if (rdx_41 != rbx_10)
                void* rdi_7 = rdx_41
                void* rax_81 = rbx_10
                
                do
                    int64_t* rbx_11 = *(rdi_7 + 0x10)
                    int64_t* r13_1 = *(rdi_7 + 8)
                    
                    if (rbx_11 != 0)
                        rbx_11[1].d += 1
                    
                    if (r13_1 != 0)
                        int32_t rdx_42 = *(arg1 + 0x124)
                        *(arg1 + 0xe8) = 0
                        
                        if (rdx_42 s> *(arg1 + 0xec))
                            sub_140775b10(arg1 + 0xe0, rdx_42)
                        
                        int32_t rax_82 = *(arg1 + 0x124)
                        int64_t rsi_10 = sx.q(*(arg1 + 0xe8))
                        arg_8.d = rax_82
                        int32_t rax_83 = rax_82 + rsi_10.d
                        *(arg1 + 0xe8) = rax_83
                        
                        if (rax_83 s> *(arg1 + 0xec))
                            sub_140775270(arg1 + 0xe0)
                        
                        memset(*(arg1 + 0xe0) + (rsi_10 << 2), 0, sx.q(arg_8.d) << 2)
                        int32_t rax_85 = (*(*r13_1 + 0x30))(r13_1)
                        arg_8.d = rax_85
                        int64_t* rsi_12
                        float zmm0_6[0x4]
                        
                        if (rax_85 == 0xffffffff || rax_85 == *(arg1 + 0x120))
                            rsi_12 = arg1 + 0xf0
                            int64_t* var_118_3 = rsi_12
                            int32_t var_12c_3 = *(arg1 + 0x120)
                            zmm0_6 = sub_142371a20(r13_1, &var_138, &var_e8)
                        else
                            *(arg1 + 0x108) = 0
                            
                            if (*(arg1 + 0x10c) s<= 0xffffffff)
                                sub_140775b10(arg1 + 0x100, 0)
                                rax_85 = arg_8.d
                            
                            int32_t rcx_53 = rax_85 * temp0_2 + *(arg1 + 0x108)
                            *(arg1 + 0x108) = rcx_53
                            
                            if (rcx_53 s> *(arg1 + 0x10c))
                                sub_140775270(arg1 + 0x100)
                            
                            sub_141c5abe0(*(arg1 + 0x120), arg1 + 0xf0, zx.q(arg_8.d), arg1 + 0x100)
                            int32_t var_12c_2 = arg_8.d
                            int64_t* var_118_2 = arg1 + 0x100
                            sub_142371a20(r13_1, &var_138, &var_e8)
                            zmm0_6 = sub_141c5abe0(arg_8.d, arg1 + 0x100, zx.q(*(arg1 + 0x120)), 
                                arg1 + 0xf0)
                            rsi_12 = arg1 + 0xf0
                        
                        (*(*r13_1 + 0x40))(r13_1)
                        
                        if (not(zmm0_6[0] <= 0f))
                            sub_141c3d3d0(rsi_12, arg1 + 0xe0, zmm0_6[0])
                        
                        memcpy(rax_14, *(arg1 + 0xe0), *(arg1 + 0x124) << 2)
                        
                        if (rbx_11 != 0)
                            goto label_141c68582
                        
                        rax_81 = rbx_10
                    else if (rbx_11 != 0)
                    label_141c68582:
                        rbx_11[1].d -= 1
                        
                        if (rbx_11[1].d == 1)
                            (**rbx_11)(rbx_11)
                            int32_t rax_92 = *(rbx_11 + 0xc)
                            *(rbx_11 + 0xc) -= 1
                            
                            if (rax_92 == 1)
                                (*(*rbx_11 + 8))(rbx_11, 1)
                        
                        rax_81 = rbx_10
                    
                    rdi_7 += 0x18
                while (rdi_7 != rax_81)
                
                lpCriticalSection_2 = arg1 + 0x370
            
            sub_140b38680("SubmixEffectProcessing", rax_72)
        
        if ((*(arg1 + 0x32c) & 2) != 0)
            memset(rax_14, 0, sx.q(*(arg1 + 0x124)) << 2)
        
        EnterCriticalSection(arg1 + 0x348)
        
        if ((*(arg1 + 0x32c) & 1) != 0)
            int64_t r12_4 = sx.q(*(arg1 + 0x124))
            int64_t r15_4 = sx.q(*(arg1 + 0x320))
            int32_t rax_94 = (r12_4 + r15_4).d
            *(arg1 + 0x320) = rax_94
            
            if (rax_94 s> *(arg1 + 0x324))
                sub_140775270(arg1 + 0x318)
            
            memcpy(*(arg1 + 0x318) + (r15_4 << 2), rax_14, (r12_4 << 2).d)
        
        if (arg1 != -0x348)
            LeaveCriticalSection(arg1 + 0x348)
        
        void* rsi_13 = arg1 + 0xf0
        uint128_t zmm7
        
        if (*(arg1 + 0x2b8) != 0)
            sub_141c65070(arg1, rsi_13, *(arg1 + 0x120), arg1 + 0x2c0)
            sub_141c43ba0(*(arg1 + 0x2b8), *(arg1 + 0x2c0), *(arg1 + 0x2c8))
            zmm7 = sub_141c3e5b0(*(arg1 + 0x2b8), 1, 1)
        
        bool z_4
        
        if (0 == *(arg1 + 0x330))
            *(arg1 + 0x330) = 0
            z_4 = true
        else
            *(arg1 + 0x330)
            z_4 = false
        
        int32_t arg_18
        
        if (not(z_4))
            void* lpCriticalSection = arg1 + 0x290
            int32_t r13_2 = *(arg1 + 0xf8)
            arg_18.q = *rsi_13
            EnterCriticalSection(lpCriticalSection)
            __builtin_strncpy(arg1 + 0x254, "                                ", 0x20)
            int32_t r12_5 = 0
            arg_8 = arg1 + 0x254
            int32_t rax_98 = *(arg1 + 0x120)
            
            if (rax_98 s> 0)
                do
                    int32_t rsi_14 = r12_5
                    void* r15_5 = *(arg1 + 0x278) + sx.q(r12_5) * 0x28
                    
                    if (r12_5 s< r13_2)
                        do
                            sub_141c3faf0(r15_5, *(arg_18.q + (sx.q(rsi_14) << 2)))
                            rsi_14 += *(arg1 + 0x120)
                        while (rsi_14 s< r13_2)
                    
                    float* r8_30 = arg_8
                    r12_5 += 1
                    *r8_30 = sub_141c39c30(r15_5)[0]
                    rax_98 = *(arg1 + 0x120)
                    arg_8 = &r8_30[1]
                while (r12_5 s< rax_98)
                
                lpCriticalSection = arg1 + 0x290
                rsi_13 = arg1 + 0xf0
            
            *(arg1 + 0x288) = rax_98
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
        
        uint128_t var_68_1 = zmm7
        
        if ((*(arg1 + 0x32c) & 4) != 0)
            float zmm1_3[0x4] = *(arg1 + 0x248)
            zmm1_3[0] = zmm1_3[0] f* *(arg1 + 0x250)
            zmm1_3[0] = zmm1_3[0] f* *(arg1 + 0x24c)
            zmm1_3[0] = zmm1_3[0] - zmm1_3[0]
            
            if (_mm_and_ps(zmm1_3, 0x7fffffff)[0] > 9.99999994e-09f)
                sub_141c37820(rsi_13, zmm1_3, zmm1_3)
                uint32_t zmm0_7[0x4] = *(arg1 + 0x250)
                *(arg1 + 0x24c) = zmm0_7[0]
                zmm0_7[0] = zmm0_7[0] f* *(arg1 + 0x248)
                zmm0_7[0] = zmm0_7[0] f- 1f
                
                if (not(_mm_and_ps(zmm0_7, 0x7fffffff)[0] f> 9.99999994e-09f))
                    *(arg1 + 0x32c) &= 0xfb
            else
                sub_141c3da90(rsi_13, zmm1_3[0])
        
        result = sub_141c3d390(rsi_13, arg2)
        void* r15_6 = *(arg1 + 0x398)
        
        if (r15_6 != 0)
            void* rax_101 = sub_1425a1cd0()
            void* rdx_58 = *(r15_6 + 0x10)
            result = sx.q(*(rax_101 + 0x38))
            
            if (result.d s<= *(rdx_58 + 0x38))
                float (* result_1)[0x4] = result
                result = *(rdx_58 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_101 + 0x30)
                    int32_t rax_102 = data_143f34a18
                    arg_8.d = rax_102
                    int128_t zmm0_8 = sub_140b34200("SubmixBufferListeners", rax_102)
                    int64_t* rcx_80 = *(arg1 + 0x88)
                    (*(*rcx_80 + 0xc8))(rcx_80)
                    void* lpCriticalSection_1 = arg1 + 0x2f0
                    arg_18.q = lpCriticalSection_1
                    zmm7 = _mm_cvtepi32_ps(zx.o(*(*(arg1 + 0x88) + 0xc)))
                    EnterCriticalSection(lpCriticalSection_1)
                    int64_t* rsi_15 = *(arg1 + 0x2e0)
                    uint64_t r12_7 = sx.q(*(arg1 + 0x2e8)) << 3 u>> 3
                    
                    if (rsi_15 u> &rsi_15[sx.q(*(arg1 + 0x2e8))])
                        r12_7 = 0
                    
                    if (r12_7 != 0)
                        int64_t rdi_8 = 0
                        
                        do
                            int64_t* rcx_82 = *rsi_15
                            (**rcx_82)(rcx_82, r15_6, *arg2, zx.q(arg2[1].d), *(arg1 + 0x120), 
                                int.d(zmm7.d), zmm0_8.q)
                            rdi_8 += 1
                            rsi_15 = &rsi_15[1]
                        while (rdi_8 != r12_7)
                        
                        lpCriticalSection_1 = arg_18.q
                        lpCriticalSection_2 = lpCriticalSection_3
                    
                    if (lpCriticalSection_1 != 0)
                        LeaveCriticalSection(lpCriticalSection_1)
                    
                    result = sub_140b38680("SubmixBufferListeners", arg_8.d)
        
        if (lpCriticalSection_2 != 0)
            return LeaveCriticalSection(lpCriticalSection_2)
else
    EnterCriticalSection(arg1 + 0x198)
    int32_t rsi_1 = 0
    int64_t* rcx_1 = *(arg1 + 0x178)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x18))(rcx_1)
    else
        int64_t* rcx_2 = *(arg1 + 0x130)
        int64_t* var_f8
        int64_t* rax_1 = (*(*rcx_2 + 0x30))(rcx_2, &var_f8)
        
        if (arg1 + 0x178 != rax_1)
            int64_t* rcx_3 = *(arg1 + 0x178)
            *(arg1 + 0x178) = *rax_1
            *rax_1 = 0
            
            if (rcx_3 != 0)
                (**rcx_3)(rcx_3, 1)
        
        int64_t* rcx_4 = var_f8
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
    
    result = sub_141c689e0(arg1, *(arg1 + 0x178))
    int64_t* rcx_6 = *(arg1 + 0x140)
    
    if (rcx_6 != 0)
        int64_t var_d8 = *(arg1 + 0x178)
        void* var_d0_1 = arg1 + 0x150
        void* rax_7 = *(arg1 + 0x88)
        
        if (rax_7 != 0)
            rsi_1 = *(rax_7 + 0x14)
        
        int32_t var_c8_1 = rsi_1
        uint128_t zmm0_1
        
        if (rax_7 == 0)
            zmm0_1 = zx.o(0)
        else
            zmm0_1 = _mm_cvtepi32_ps(zx.o(*(rax_7 + 0xc)))
        
        int32_t var_c4_1 = zmm0_1.d
        int64_t* var_f0 = arg2
        result = (*(*rcx_6 + 0x10))(rcx_6, &var_d8, &var_f0)
    
    if (arg1 != -0x198)
        return LeaveCriticalSection(arg1 + 0x198)

return result
