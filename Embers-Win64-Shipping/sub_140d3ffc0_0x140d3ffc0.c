// 函数: sub_140d3ffc0
// 地址: 0x140d3ffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x18)
uint64_t result
result.b = (rbx u>> 0x20).d != 0
result.b |= sub_140b5b8a0(rbx.d, 0) == 0

if (result.b != 0)
    sub_140d3c660()
    void* arg_20 = &data_143e1dad0
    bool z_1
    
    if (0 == data_143e1adfc)
        data_143e1adfc = 0
        z_1 = true
    else
        data_143e1adfc
        z_1 = false
    
    bool rcx_1
    
    if (not(z_1) && data_143de5480 != 0)
        rcx_1 = GetCurrentThreadId() == data_143de5470
    
    CRITICAL_SECTION* lpCriticalSection
    
    if (z_1 || (data_143de5480 != 0 && rcx_1 == 0))
        lpCriticalSection = &data_143e1dad0
        EnterCriticalSection(&data_143e1dad0)
    else
        lpCriticalSection = nullptr
    
    int32_t rax_4 = sub_140b5ead0(rbx.d)
    int32_t r12_1 = rbx:4.d
    int64_t* r10_1 = &data_143e1daf8
    int64_t* var_168 = &data_143e1daf8
    int32_t r9_1 = r12_1 + rax_4
    int32_t rax_5 = data_143e1db00
    int32_t arg_10 = r9_1
    int32_t arg_8
    double zmm2[0x2]
    
    if (rax_5 != data_143e1db2c)
        void* rcx_3 = data_143e1db38
        void* r8_1 = &data_143e1db30
        
        if (rcx_3 != 0)
            r8_1 = rcx_3
        
        int32_t i = *(r8_1 + (((sx.q(data_143e1db40) - 1) & sx.q(r9_1)) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_2 = data_143e1daf8
            
            do
                int64_t i_2 = sx.q(i)
                int64_t rcx_5 = i_2 << 5
                
                if (*(rcx_5 + r8_2) == r9_1)
                    if (i != 0xffffffff)
                        int64_t rdx_4 = i_2 << 5
                        
                        if (rdx_4 != neg.q(r8_2))
                            if (rdx_4 + r8_2 != -8)
                                int64_t* r14_1 = *(rdx_4 + r8_2 + 0x10)
                                
                                if (r14_1 != 0 && *(rdx_4 + r8_2 + 8) == 0)
                                    sub_1409740e0(r14_1, arg1)
                                    
                                    if (r14_1[1].d - *(r14_1 + 0x34) s<= 2)
                                        int32_t rdx_7 = r14_1[5].d
                                        void* r10_2 = &r14_1[2]
                                        void* var_158_1 = r10_2
                                        int32_t rcx_7 = 0
                                        int32_t var_160_1 = 0
                                        int32_t r9_2 = 1
                                        int32_t var_15c_1 = 1
                                        int32_t var_150_1 = 0xffffffff
                                        int32_t r13_1 = 0
                                        int64_t var_14c_1 = 0
                                        int32_t r8_3 = 0
                                        
                                        if (rdx_7 != 0)
                                            void* rax_9 = *(r10_2 + 0x10)
                                            r13_1 = rdx_7
                                            
                                            if (rax_9 != 0)
                                                r10_2 = rax_9
                                            
                                            int32_t temp5_1
                                            int32_t temp6_1
                                            temp5_1:temp6_1 = sx.q(rdx_7 - 1)
                                            int32_t rdx_10 = *r10_2
                                            int32_t rax_13 = (temp6_1 + (temp5_1 & 0x1f)) s>> 5
                                            arg_8 = rax_13
                                            
                                            if (rdx_10 != 0)
                                            label_140d401f7:
                                                r9_2 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
                                                uint64_t rflags_1
                                                int32_t temp0_2
                                                temp0_2, rflags_1 = _bit_scan_reverse(r9_2)
                                                int32_t var_15c_2 = r9_2
                                                int32_t rax_14
                                                
                                                if (r9_2 == 0)
                                                    rax_14 = 0x20
                                                else
                                                    rax_14 = 0x1f - temp0_2
                                                
                                                int32_t rax_15 = r8_3 - rax_14 + 0x1f
                                                
                                                if (rax_15 s> r13_1)
                                                    rax_15 = r13_1
                                                
                                                r13_1 = rax_15
                                                var_14c_1.d = rax_15
                                            else
                                                while (true)
                                                    int64_t rdx_11 = sx.q(rcx_7)
                                                    r8_3 += 0x20
                                                    rcx_7 += 1
                                                    var_14c_1:4.d = r8_3
                                                    var_160_1 = rcx_7
                                                    
                                                    if (rdx_11.d s>= rax_13)
                                                        var_14c_1.d = r13_1
                                                        break
                                                    
                                                    rdx_10 = *(r10_2 + (rdx_11 << 2) + 4)
                                                    rax_13 = arg_8
                                                    var_150_1 = 0xffffffff
                                                    
                                                    if (rdx_10 != 0)
                                                        goto label_140d401f7
                                        
                                        zmm2 = var_150_1.o
                                        int128_t var_f8_1 = var_160_1.o
                                        int64_t* var_b0_1 = r14_1
                                        double var_e8_1[0x2] = zmm2
                                        *(rdx_4 + r8_2 + 8) = *(*r14_1 + sx.q(r13_1) * 0x10)
                                        zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                                        int128_t var_c8_1 = var_f8_1
                                        var_c8_1:8.d = not.d(r9_2) & 0xffffffff
                                        int128_t var_d8 = r14_1.o
                                        int64_t var_b8_1 = zmm2.q
                                        sub_14059bdd0(&var_d8:8)
                                        *(rdx_4 + r8_2 + 0x10) =
                                            *(*var_d8.q + sx.q(var_c8_1:0xc.d) * 0x10)
                                        sub_140d3a4c0(r14_1, 1)
                                    
                                    r14_1 = *(rdx_4 + r8_2 + 0x10)
                                    r9_1 = arg_10
                                    r10_1 = var_168
                                else if (arg1 == r14_1)
                                    r14_1 = nullptr
                                    *(rdx_4 + r8_2 + 0x10) = 0
                                else if (arg1 == *(rdx_4 + r8_2 + 8))
                                    *(rdx_4 + r8_2 + 8) = r14_1
                                    r14_1 = nullptr
                                    *(rdx_4 + r8_2 + 0x10) = 0
                                
                                int32_t rcx_13
                                
                                if (r14_1 == 0 || *(rdx_4 + r8_2 + 8) != 0)
                                    int32_t rcx_14
                                    rcx_14.b = *(rdx_4 + r8_2 + 8) != 0
                                    int32_t rax_23
                                    rax_23.b = r14_1 != 0
                                    rcx_13 = rcx_14 + rax_23
                                else
                                    rcx_13 = r14_1[1].d - *(r14_1 + 0x34)
                                
                                if (rcx_13 == 0)
                                    sub_140d3e2f0(r10_1, r9_1)
                            
                            r12_1 = rbx:4.d
                    
                    break
                
                i = *(rcx_5 + r8_2 + 0x18)
            while (i != 0xffffffff)
    
    int64_t r14_2 = *(arg1 + 0x20)
    
    if (r14_2 != 0)
        int32_t r14_4 = (r14_2 s>> 6).d + sub_140b5ead0(rbx.d) + r12_1
        sub_140b9ddc0(arg_20 + 0x78, *(arg_20 + 0x80) - *(arg_20 + 0xac), 0)
        int64_t rax_26 = sx.q(*(arg_20 + 0xc0))
        
        if (rax_26.d != 0)
            void* r8_5 = arg_20 + 0xb0
            void* rcx_18 = *(r8_5 + 8)
            
            if (rcx_18 != 0)
                r8_5 = rcx_18
            
            int32_t i_1 = *(r8_5 + (((rax_26 - 1) & sx.q(r14_4)) << 2))
            
            if (i_1 != 0xffffffff)
                int64_t r10_3 = *(arg_20 + 0x78)
                int32_t i_3 = i_1
                
                do
                    i_1 = *(r10_3 + sx.q(i_1) * 0x18 + 0x10)
                    
                    if (*(r10_3 + sx.q(i_3) * 0x18) == r14_4)
                        if (i_3 != 0xffffffff)
                            int32_t i_4 = i_1
                            int32_t i_5 = i_1
                            
                            while (true)
                                if (*(r10_3 + sx.q(i_3) * 0x18 + 8) == arg1)
                                    sub_1405c2fb0(arg_20 + 0x78, i_3)
                                    break
                                
                                i_3 = i_4
                                
                                if (i_5 == 0xffffffff)
                                    break
                                
                                while (true)
                                    i_1 = *(r10_3 + sx.q(i_1) * 0x18 + 0x10)
                                    i_4 = i_1
                                    
                                    if (*(r10_3 + sx.q(i_3) * 0x18) == r14_4)
                                        i_5 = i_4
                                        break
                                    
                                    i_3 = i_1
                                    
                                    if (i_1 == 0xffffffff)
                                        goto label_140d40424
                        
                        break
                    
                    i_3 = i_1
                while (i_1 != 0xffffffff)
        
    label_140d40424:
        int64_t* r9_7 = *(arg1 + 0x20)
        var_168 = r9_7
        uint32_t rcx_26 = (r9_7 u>> 4).d
        int32_t rdx_19 = (0x9e3779b9 - rcx_26) ^ rcx_26 << 8
        int32_t r10_6 = neg.d(rdx_19 + rcx_26) ^ rdx_19 u>> 0xd
        int32_t rcx_29 = (rcx_26 - rdx_19 - r10_6) ^ r10_6 u>> 0xc
        int32_t rdx_22 = (rdx_19 - rcx_29 - r10_6) ^ rcx_29 << 0x10
        int32_t r10_9 = (r10_6 - rdx_22 - rcx_29) ^ rdx_22 u>> 5
        int32_t rcx_32 = (rcx_29 - rdx_22 - r10_9) ^ r10_9 u>> 3
        int32_t rdx_25 = (rdx_22 - rcx_32 - r10_9) ^ rcx_32 << 0xa
        int32_t r10_12 = (r10_9 - rdx_25 - rcx_32) ^ rdx_25 u>> 0xf
        void* rbx_1
        
        if (*(arg_20 + 0xd0) == *(arg_20 + 0xfc))
        label_140d4050b:
            rbx_1 = sub_140d39130(arg_20 + 0xc8, r10_12, &var_168)
        else
            void* rcx_33 = *(arg_20 + 0x108)
            void* r8_9 = arg_20 + 0x100
            
            if (rcx_33 != 0)
                r8_9 = rcx_33
            
            int32_t rax_46 = *(r8_9 + (((sx.q(*(arg_20 + 0x110)) - 1) & sx.q(r10_12)) << 2))
            
            if (rax_46 == 0xffffffff)
            label_140d4050b_1:
                rbx_1 = sub_140d39130(arg_20 + 0xc8, r10_12, &var_168)
            else
                int64_t* rdx_32
                
                while (true)
                    rdx_32 = (sx.q(rax_46) << 5) + *(arg_20 + 0xc8)
                    
                    if (*rdx_32 == r9_7)
                        break
                    
                    rax_46 = rdx_32[3].d
                    
                    if (rax_46 == 0xffffffff)
                        goto label_140d4050b_2
                
                if (rax_46 == 0xffffffff || rdx_32 == 0)
                label_140d4050b_2:
                    rbx_1 = sub_140d39130(arg_20 + 0xc8, r10_12, &var_168)
                else
                    rbx_1 = &rdx_32[1]
        
        int64_t* r14_5 = *(rbx_1 + 8)
        int32_t r13_2 = 0
        
        if (r14_5 != 0 && *rbx_1 == 0)
            int32_t rax_48 = sub_1409740e0(r14_5, arg1)
            r13_2 = rax_48
            int32_t rcx_37 = r14_5[1].d - *(r14_5 + 0x34)
            arg_8 = rax_48
            
            if (rcx_37 s<= 2)
                int32_t rdx_35 = r14_5[5].d
                void* r10_13 = &r14_5[2]
                void* var_138_1 = r10_13
                int32_t rcx_38 = 0
                int32_t var_140_1 = 0
                int32_t r9_8 = 1
                int32_t var_13c_1 = 1
                int32_t var_130_1 = 0xffffffff
                int32_t r13_3 = 0
                int64_t var_12c_1 = 0
                int32_t r8_12 = 0
                
                if (rdx_35 != 0)
                    void* rax_49 = *(r10_13 + 0x10)
                    r13_3 = rdx_35
                    
                    if (rax_49 != 0)
                        r10_13 = rax_49
                    
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(rdx_35 - 1)
                    int32_t rdx_38 = *r10_13
                    
                    if (rdx_38 != 0)
                    label_140d405e0:
                        r9_8 = ((rdx_38 - 1) & rdx_38) ^ rdx_38
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(r9_8)
                        int32_t var_13c_2 = r9_8
                        int32_t rax_54
                        
                        if (r9_8 == 0)
                            rax_54 = 0x20
                        else
                            rax_54 = 0x1f - temp0_4
                        
                        int32_t rax_55 = r8_12 - rax_54 + 0x1f
                        
                        if (rax_55 s> r13_3)
                            rax_55 = r13_3
                        
                        r13_3 = rax_55
                        var_12c_1.d = rax_55
                    else
                        while (true)
                            int64_t rdx_39 = sx.q(rcx_38)
                            r8_12 += 0x20
                            rcx_38 += 1
                            var_12c_1:4.d = r8_12
                            var_140_1 = rcx_38
                            
                            if (rdx_39.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                var_12c_1.d = r13_3
                                break
                            
                            rdx_38 = *(r10_13 + (rdx_39 << 2) + 4)
                            int32_t var_130_2 = 0xffffffff
                            
                            if (rdx_38 != 0)
                                goto label_140d405e0
                
                int128_t var_f8_2 = var_140_1.o
                int64_t* var_80_1 = r14_5
                int128_t var_e8_2 = 0xffffffff
                *rbx_1 = *(*r14_5 + sx.q(r13_3) * 0x10)
                zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int128_t var_98_1 = var_f8_2
                var_98_1:8.d = not.d(r9_8) & 0xffffffff
                int128_t var_a8 = r14_5.o
                int64_t var_88_1 = zmm2.q
                sub_14059bdd0(&var_a8:8)
                *(rbx_1 + 8) = *(*var_a8.q + sx.q(var_98_1:0xc.d) * 0x10)
                sub_140d3a4c0(r14_5, 1)
                r13_2 = arg_8
            
            if (r13_2 != 1)
                goto label_140d406c1
        else if (arg1 == r14_5)
            *(rbx_1 + 8) = 0
        else if (arg1 != *rbx_1)
        label_140d406c1:
            int16_t* var_178
            int32_t var_170
            
            if (*(arg1 + 0x10) == 0)
                var_178 = nullptr
                var_170 = 0
                sub_1405947f0(&var_178, 5)
                int32_t rax_63 = var_170 + 5
                var_170 = rax_63
                
                if (rax_63 s> 0)
                    sub_140594770(&var_178)
                
                UnDecorator::getReferenceType(var_178, u"None", 0xa)
            else
                sub_140d21830(arg1, &var_178, 0, 0)
            
            int16_t* const rax_64 = &data_142d40450
            
            if (var_170 != 0)
                rax_64 = var_178
            
            int16_t* const var_188_1 = rax_64
            sub_140af98a0("Unknown", 0x2c4, 
                Internal Error: RemoveFromOuterMap NumRemoved = %d  for %s", zx.q(r13_2))
            int16_t* rcx_47 = var_178
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            sub_140afbb40()
        else
            *rbx_1 = r14_5
            *(rbx_1 + 8) = 0
        
        void* rdx_43 = *(rbx_1 + 8)
        int32_t rcx_49
        
        if (rdx_43 == 0 || *rbx_1 != 0)
            int32_t rcx_50
            rcx_50.b = *rbx_1 != 0
            int32_t rax_65
            rax_65.b = rdx_43 != 0
            rcx_49 = rcx_50 + rax_65
        else
            rcx_49 = *(rdx_43 + 8) - *(rdx_43 + 0x34)
        
        if (rcx_49 == 0)
            sub_140d3e3f0(arg_20 + 0xc8, *(arg1 + 0x20))
    
    int64_t r9_14 = *(arg1 + 0x10)
    uint32_t rcx_53 = (r9_14 u>> 4).d
    arg_10.q = r9_14
    int32_t rdx_47 = rcx_53 << 8 ^ (0x9e3779b9 - rcx_53)
    int32_t r10_16 = neg.d(rcx_53 + rdx_47) ^ rdx_47 u>> 0xd
    int32_t rcx_56 = (rcx_53 - rdx_47 - r10_16) ^ r10_16 u>> 0xc
    int32_t rdx_50 = (rdx_47 - rcx_56 - r10_16) ^ rcx_56 << 0x10
    int32_t r10_19 = (r10_16 - rdx_50 - rcx_56) ^ rdx_50 u>> 5
    int32_t rcx_59 = (rcx_56 - rdx_50 - r10_19) ^ r10_19 u>> 3
    int32_t rdx_53 = (rdx_50 - rcx_59 - r10_19) ^ rcx_59 << 0xa
    int32_t r10_22 = (r10_19 - rdx_53 - rcx_59) ^ rdx_53 u>> 0xf
    void* r14_6
    
    if (*(arg_20 + 0x120) == *(arg_20 + 0x14c))
    label_140d408bd:
        r14_6 = sub_140d39130(arg_20 + 0x118, r10_22, &arg_10)
    else
        void* rcx_60 = *(arg_20 + 0x158)
        void* r8_14 = arg_20 + 0x150
        
        if (rcx_60 != 0)
            r8_14 = rcx_60
        
        int32_t rax_81 = *(r8_14 + (((sx.q(*(arg_20 + 0x160)) - 1) & sx.q(r10_22)) << 2))
        
        if (rax_81 == 0xffffffff)
        label_140d408bd_1:
            r14_6 = sub_140d39130(arg_20 + 0x118, r10_22, &arg_10)
        else
            int64_t* rdx_60
            
            while (true)
                rdx_60 = (sx.q(rax_81) << 5) + *(arg_20 + 0x118)
                
                if (*rdx_60 == r9_14)
                    break
                
                rax_81 = rdx_60[3].d
                
                if (rax_81 == 0xffffffff)
                    goto label_140d408bd_2
            
            if (rax_81 == 0xffffffff || rdx_60 == 0)
            label_140d408bd_2:
                r14_6 = sub_140d39130(arg_20 + 0x118, r10_22, &arg_10)
            else
                r14_6 = &rdx_60[1]
    
    int64_t* rbx_2 = *(r14_6 + 8)
    
    if (rbx_2 != 0 && *r14_6 == 0)
        sub_1409740e0(rbx_2, arg1)
        
        if (rbx_2[1].d - *(rbx_2 + 0x34) s<= 2)
            int32_t rdx_63 = rbx_2[5].d
            void* r10_23 = &rbx_2[2]
            void* var_118_1 = r10_23
            int32_t rcx_63 = 0
            int32_t var_120_1 = 0
            int32_t r9_15 = 1
            int32_t var_11c_1 = 1
            int32_t var_110_1 = 0xffffffff
            int32_t r13_4 = 0
            int64_t var_10c_1 = 0
            int32_t r8_17 = 0
            
            if (rdx_63 != 0)
                void* rax_85 = *(r10_23 + 0x10)
                r13_4 = rdx_63
                
                if (rax_85 != 0)
                    r10_23 = rax_85
                
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rdx_63 - 1)
                int32_t rdx_66 = *r10_23
                
                if (rdx_66 != 0)
                label_140d4097e:
                    r9_15 = ((rdx_66 - 1) & rdx_66) ^ rdx_66
                    uint64_t rflags_3
                    int32_t temp0_6
                    temp0_6, rflags_3 = _bit_scan_reverse(r9_15)
                    int32_t var_11c_2 = r9_15
                    int32_t rcx_64
                    
                    if (r9_15 == 0)
                        rcx_64 = 0x20
                    else
                        rcx_64 = 0x1f - temp0_6
                    
                    int32_t rax_91 = r8_17 - rcx_64 + 0x1f
                    
                    if (rax_91 s> r13_4)
                        rax_91 = r13_4
                    
                    r13_4 = rax_91
                    var_10c_1.d = rax_91
                else
                    while (true)
                        int64_t rdx_67 = sx.q(rcx_63)
                        r8_17 += 0x20
                        rcx_63 += 1
                        var_10c_1:4.d = r8_17
                        var_120_1 = rcx_63
                        
                        if (rdx_67.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                            var_10c_1.d = r13_4
                            break
                        
                        rdx_66 = *(r10_23 + (rdx_67 << 2) + 4)
                        int32_t var_110_2 = 0xffffffff
                        
                        if (rdx_66 != 0)
                            goto label_140d4097e
            
            int128_t var_f8_3 = var_120_1.o
            int64_t* var_50_1 = rbx_2
            int128_t var_e8_3 = 0xffffffff
            *r14_6 = *(*rbx_2 + sx.q(r13_4) * 0x10)
            zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_68_1 = var_f8_3
            var_68_1:8.d = not.d(r9_15) & 0xffffffff
            int128_t var_78 = rbx_2.o
            int64_t var_58_1 = zmm2.q
            sub_14059bdd0(&var_78:8)
            *(r14_6 + 8) = *(*var_78.q + sx.q(var_68_1:0xc.d) * 0x10)
            sub_140d3a4c0(rbx_2, 1)
        
        rbx_2 = *(r14_6 + 8)
    else if (arg1 == rbx_2)
        rbx_2 = nullptr
        *(r14_6 + 8) = 0
    else if (arg1 == *r14_6)
        *r14_6 = rbx_2
        rbx_2 = nullptr
        *(r14_6 + 8) = 0
    
    int32_t rax_100
    
    if (rbx_2 == 0 || *r14_6 != 0)
        int32_t rax_101
        rax_101.b = rbx_2 != 0
        int32_t rsi_1
        rsi_1.b = *r14_6 != 0
        rax_100 = rax_101 + rsi_1
    else
        rax_100 = rbx_2[1].d - *(rbx_2 + 0x34)
    
    if (rax_100 == 0)
        sub_140d3e3f0(arg_20 + 0x118, *(arg1 + 0x10))
    
    void* rax_102 = sub_140bdf2e0()
    void* rdx_69 = *(arg1 + 0x10)
    result = sx.q(*(rax_102 + 0x38))
    
    if (result.d s<= *(rdx_69 + 0x38))
        uint64_t result_1 = result
        result = *(rdx_69 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_102 + 0x30)
            int64_t r9_20 = *(arg1 + 0x40)
            arg_8.q = r9_20
            
            if (r9_20 != 0)
                uint32_t rcx_70 = (r9_20 u>> 4).d
                int32_t r13_6 = (0x9e3779b9 - rcx_70) ^ rcx_70 << 8
                int32_t r10_26 = neg.d(rcx_70 + r13_6) ^ r13_6 u>> 0xd
                int32_t rcx_73 = (rcx_70 - r13_6 - r10_26) ^ r10_26 u>> 0xc
                int32_t r13_9 = (r13_6 - rcx_73 - r10_26) ^ rcx_73 << 0x10
                int32_t r10_29 = (r10_26 - r13_9 - rcx_73) ^ r13_9 u>> 5
                int32_t rcx_76 = (rcx_73 - r13_9 - r10_29) ^ r10_29 u>> 3
                int32_t r13_12 = (r13_9 - rcx_76 - r10_29) ^ rcx_76 << 0xa
                int32_t r10_32 = (r10_29 - r13_12 - rcx_76) ^ r13_12 u>> 0xf
                int64_t* rsi_2
                
                if (*(arg_20 + 0x170) == *(arg_20 + 0x19c))
                label_140d40bcd:
                    rsi_2 = sub_140d39010(arg_20 + 0x168, r10_32, &arg_8)
                else
                    void* rcx_77 = *(arg_20 + 0x1a8)
                    void* r8_21 = arg_20 + 0x1a0
                    
                    if (rcx_77 != 0)
                        r8_21 = rcx_77
                    
                    int32_t rax_119 =
                        *(r8_21 + (((sx.q(*(arg_20 + 0x1b0)) - 1) & sx.q(r10_32)) << 2))
                    
                    if (rax_119 == 0xffffffff)
                    label_140d40bcd_1:
                        rsi_2 = sub_140d39010(arg_20 + 0x168, r10_32, &arg_8)
                    else
                        int64_t* rcx_81
                        
                        while (true)
                            rcx_81 = sx.q(rax_119) * 0x60 + *(arg_20 + 0x168)
                            
                            if (*rcx_81 == r9_20)
                                break
                            
                            rax_119 = rcx_81[0xb].d
                            
                            if (rax_119 == 0xffffffff)
                                goto label_140d40bcd_2
                        
                        if (rax_119 == 0xffffffff || rcx_81 == 0)
                        label_140d40bcd_2:
                            rsi_2 = sub_140d39010(arg_20 + 0x168, r10_32, &arg_8)
                        else
                            rsi_2 = &rcx_81[1]
                
                sub_1409740e0(rsi_2, arg1)
                result = zx.q(rsi_2[1].d)
                
                if (result.d == *(rsi_2 + 0x34))
                    result = sub_140d3e570(arg_20 + 0x168, arg_8.q)
    
    if (lpCriticalSection != 0)
        return LeaveCriticalSection(lpCriticalSection)

return result
