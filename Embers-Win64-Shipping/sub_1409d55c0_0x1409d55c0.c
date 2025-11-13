// 函数: sub_1409d55c0
// 地址: 0x1409d55c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1
int32_t var_158

if (arg1 + 0x528 != &var_158)
    *(arg1 + 0x528) = 0
    int64_t* rbx_1 = *(arg1 + 0x530)
    
    if (rbx_1 != 0)
        *(arg1 + 0x530) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (*(r13 + 0x520) s> 0)
    int32_t var_e8
    sub_1429cf900(&var_e8)
    void* rcx_3 = *(r13 + 0x28)
    var_e8 = *(rcx_3 + 8)
    int32_t rax_5 = *(rcx_3 + 0xe8) - *(rcx_3 + 0x114)
    int32_t rax_6 = *(r13 + 0x584)
    *(r13 + 0x580) = 0
    
    if (rax_6 s< 0 && rax_6 != 0)
        sub_1405dadb0(r13 + 0x578, 0)
    
    int32_t rax_7 = *(r13 + 0x594)
    *(r13 + 0x590) = 0
    
    if (rax_7 s< 0 && rax_7 != 0)
        sub_1405dadb0(r13 + 0x588, 0)
    
    void* rdi_1 = *(r13 + 0x28)
    void* rbx_2 = data_143f360e8
    void* const rcx_9
    
    if (*(rdi_1 + 0x158) == *(rdi_1 + 0x184))
    label_1409d5750:
        rcx_9 = nullptr
    else
        int32_t rax_10 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
        void* r8_3 = rdi_1 + 0x188
        void* rcx_7 = *(r8_3 + 8)
        
        if (rcx_7 != 0)
            r8_3 = rcx_7
        
        int32_t rax_12 = *(r8_3 + (((sx.q(*(rdi_1 + 0x198)) - 1) & sx.q(rax_10)) << 2))
        
        if (rax_12 == 0xffffffff)
        label_1409d5750_1:
            rcx_9 = nullptr
        else
            int64_t r8_4 = *(rdi_1 + 0x150)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_12) * 3
                rcx_9 = r8_4 + (rdx_4 << 3)
                
                if (*(r8_4 + (rdx_4 << 3)) == rbx_2)
                    break
                
                rax_12 = *(rcx_9 + 0x10)
                
                if (rax_12 == 0xffffffff)
                    goto label_1409d5750_2
            
            if (rax_12 == 0xffffffff)
            label_1409d5750_2:
                rcx_9 = nullptr
    
    void* rbx_3 = rcx_9 + 8
    
    if (rcx_9 == 0)
        rbx_3 = nullptr
    
    void* const rbx_4
    
    if (rbx_3 != 0)
        rbx_4 = *rbx_3
    
    if (rbx_3 == 0 || *(rbx_4 + 8) != 3)
        rbx_4 = nullptr
    
    void* r13_1 = *(r13 + 0x28)
    int32_t rcx_10 = 0
    int32_t r11_1 = *(r13_1 + 0x28)
    void* r9_1 = r13_1 + 0x10
    var_158 = 0
    int32_t var_154_1 = 1
    int32_t r8_5 = 0
    void* var_150 = r9_1
    int32_t var_148_1 = 0xffffffff
    int64_t var_144_1 = 0
    
    if (r11_1 != 0)
        void* rax_13 = *(r9_1 + 0x10)
        
        if (rax_13 != 0)
            r9_1 = rax_13
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_7 = *r9_1
        
        if (rdx_7 != 0)
        label_1409d57f9:
            int32_t rax_20 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
            int32_t var_154_2 = rax_20
            int32_t rax_21
            
            if (rax_20 == 0)
                rax_21 = 0x20
            else
                rax_21 = 0x1f - temp0_2
            
            var_144_1.d = r8_5 - rax_21 + 0x1f
            
            if (r8_5 - rax_21 + 0x1f s> r11_1)
                var_144_1.d = r11_1
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_10)
                r8_5 += 0x20
                rcx_10 += 1
                var_144_1:4.d = r8_5
                var_158 = rcx_10
                
                if (rdx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                var_148_1 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_1409d57f9
            
            var_144_1.d = r11_1
    
    int32_t rdx_9 = *(r13_1 + 0x28)
    double zmm2[0x2] = var_148_1.o
    int32_t rdi_2 = *(r13_1 + 0x28)
    double var_f8_1[0x2] = zmm2
    int128_t var_108_1 = var_158.o
    int32_t rsi_1 = 0xffffffff << (rdx_9.b & 0x1f)
    int32_t r8_8 = rdx_9 s>> 5
    int32_t r9_3 = rdx_9 & 0xffffffe0
    int64_t var_118_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_148_2 = rsi_1
    var_144_1.d = rdx_9
    int128_t var_138 = r13_1.o
    int128_t var_128_1 = var_108_1
    
    if (rdx_9 != rdi_2)
        void* rax_23 = *(r13_1 + 0x20)
        void* r10_1 = r13_1 + 0x10
        
        if (rax_23 != 0)
            r10_1 = rax_23
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(rdi_2 - 1)
        int32_t rdx_13 = *(r10_1 + (sx.q(r8_8) << 2)) & rsi_1
        
        if (rdx_13 != 0)
        label_1409d58d1:
            int32_t rax_30 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
            int32_t rax_31
            
            if (rax_30 == 0)
                rax_31 = 0x20
            else
                rax_31 = 0x1f - temp0_4
            
            var_144_1.d = r9_3 - rax_31 + 0x1f
            
            if (r9_3 - rax_31 + 0x1f s> rdi_2)
                var_144_1.d = rdi_2
        else
            while (true)
                int64_t rcx_15 = sx.q(r8_8)
                r9_3 += 0x20
                r8_8 += 1
                
                if (rcx_15.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r10_1 + (rcx_15 << 2) + 4)
                var_148_2 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_1409d58d1
            
            var_144_1.d = rdi_2
    
    int128_t zmm6
    int128_t var_58_1 = zmm6
    
    while (true)
        int32_t rax_33 = var_128_1:0xc.d
        int64_t rcx_17 = var_128_1.q
        
        if (rax_33 == (var_148_2.q u>> 0x20).d && rcx_17 == r13_1 + 0x10 && var_138.q == r13_1)
            break
        
        int32_t rdi_3 = data_143a1c6b4
        
        if (rax_33 s< *(rcx_17 + 0x18))
            rdi_3 = rax_33
        
        zmm6 = *(**(rbx_4 + 0x18) + (sx.q(rdi_3) << 2))
        
        if (not(zmm6.d f<= 9.99999994e-09f))
            int64_t rsi_2 = sx.q(*(r13 + 0x580))
            int32_t rax_35 = (rsi_2 + 1).d
            *(r13 + 0x580) = rax_35
            
            if (rax_35 s> *(r13 + 0x584))
                sub_1405a4cf0(r13 + 0x578)
            
            zmm6.d = zmm6.d f* 10f
            *(*(r13 + 0x578) + (rsi_2 << 2)) = rdi_3
            int64_t rdi_4 = sx.q(*(r13 + 0x590))
            int32_t rax_37 = (rdi_4 + 1).d
            *(r13 + 0x590) = rax_37
            
            if (rax_37 s> *(r13 + 0x594))
                sub_1406105e0(r13 + 0x588)
            
            *(*(r13 + 0x588) + (rdi_4 << 2)) = zmm6.d
        
        var_128_1:8.d &= not.d(var_138:0xc.d)
        sub_14059bdd0(&var_138:8)
    
    int32_t rax_41 = *(arg1 + 0x564)
    *(arg1 + 0x560) = 0
    
    if (rax_41 s< 0 && rax_41 != 0)
        sub_1405dadb0(arg1 + 0x558, 0)
    
    int32_t rax_42 = *(arg1 + 0x574)
    *(arg1 + 0x570) = 0
    
    if (rax_42 s< 0 && rax_42 != 0)
        sub_1405dadb0(arg1 + 0x568, 0)
    
    void* rdi_5 = *(arg1 + 0x28)
    void* rbx_5 = data_143f36128
    void* const rcx_27
    
    if (*(rdi_5 + 0x208) == *(rdi_5 + 0x234))
    label_1409d5aa0:
        rcx_27 = nullptr
    else
        int32_t rax_45 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
        void* r8_9 = rdi_5 + 0x238
        void* rcx_25 = *(r8_9 + 8)
        
        if (rcx_25 != 0)
            r8_9 = rcx_25
        
        int32_t rax_47 = *(r8_9 + (((sx.q(*(rdi_5 + 0x248)) - 1) & sx.q(rax_45)) << 2))
        
        if (rax_47 == 0xffffffff)
        label_1409d5aa0_1:
            rcx_27 = nullptr
        else
            int64_t r8_10 = *(rdi_5 + 0x200)
            
            while (true)
                int64_t rdx_20 = sx.q(rax_47) * 3
                rcx_27 = r8_10 + (rdx_20 << 3)
                
                if (*(r8_10 + (rdx_20 << 3)) == rbx_5)
                    break
                
                rax_47 = *(rcx_27 + 0x10)
                
                if (rax_47 == 0xffffffff)
                    goto label_1409d5aa0_2
            
            if (rax_47 == 0xffffffff)
            label_1409d5aa0_2:
                rcx_27 = nullptr
    
    void* rdi_6 = rcx_27 + 8
    
    if (rcx_27 == 0)
        rdi_6 = nullptr
    
    void* const rdi_7
    
    if (rdi_6 != 0)
        rdi_7 = *rdi_6
    
    if (rdi_6 == 0 || *(rdi_7 + 8) != 3)
        rdi_7 = nullptr
    
    int32_t rcx_28 = 0
    void* r14_4 = *(arg1 + 0x28) + 0x70
    var_158 = 0
    int32_t r11_2 = *(r14_4 + 0x28)
    void* r9_5 = r14_4 + 0x10
    void* arg_10 = r14_4
    int32_t r8_11 = 0
    int32_t var_154_3 = 1
    var_150 = r9_5
    int32_t var_148_3 = 0xffffffff
    int64_t var_144_2 = 0
    
    if (r11_2 != 0)
        void* rax_48 = *(r9_5 + 0x10)
        
        if (rax_48 != 0)
            r9_5 = rax_48
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(r11_2 - 1)
        int32_t rdx_23 = *r9_5
        
        if (rdx_23 != 0)
        label_1409d5b49:
            int32_t rax_55 = ((rdx_23 - 1) & rdx_23) ^ rdx_23
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_55)
            int32_t var_154_4 = rax_55
            int32_t rax_56
            
            if (rax_55 == 0)
                rax_56 = 0x20
            else
                rax_56 = 0x1f - temp0_5
            
            var_144_2.d = r8_11 - rax_56 + 0x1f
            
            if (r8_11 - rax_56 + 0x1f s> r11_2)
                var_144_2.d = r11_2
        else
            while (true)
                int64_t rdx_24 = sx.q(rcx_28)
                r8_11 += 0x20
                rcx_28 += 1
                var_144_2:4.d = r8_11
                var_158 = rcx_28
                
                if (rdx_24.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    break
                
                rdx_23 = *(r9_5 + (rdx_24 << 2) + 4)
                var_148_3 = 0xffffffff
                
                if (rdx_23 != 0)
                    goto label_1409d5b49
            
            var_144_2.d = r11_2
    
    int32_t rdx_25 = *(r14_4 + 0x28)
    void* r13_2 = r14_4 + 0x10
    zmm2 = var_148_3.o
    int32_t rsi_5 = *(r13_2 + 0x18)
    double var_f8_2[0x2] = zmm2
    int128_t var_108_2 = var_158.o
    int32_t rbx_6 = 0xffffffff << (rdx_25.b & 0x1f)
    int32_t r8_14 = rdx_25 s>> 5
    int32_t r9_7 = rdx_25 & 0xffffffe0
    int64_t var_118_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_148_4 = rbx_6
    var_144_2.d = rdx_25
    var_138 = r14_4.o
    int128_t var_128_2 = var_108_2
    
    if (rdx_25 != rsi_5)
        void* rax_58 = *(r13_2 + 0x10)
        void* r10_2 = r13_2
        
        if (rax_58 != 0)
            r10_2 = rax_58
        
        int32_t temp12_1
        int32_t temp13_1
        temp12_1:temp13_1 = sx.q(rsi_5 - 1)
        int32_t rdx_29 = *(r10_2 + (sx.q(r8_14) << 2)) & rbx_6
        
        if (rdx_29 != 0)
        label_1409d5c23:
            int32_t rax_65 = ((rdx_29 - 1) & rdx_29) ^ rdx_29
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_65)
            int32_t rax_66
            
            if (rax_65 == 0)
                rax_66 = 0x20
            else
                rax_66 = 0x1f - temp0_7
            
            var_144_2.d = r9_7 - rax_66 + 0x1f
            
            if (r9_7 - rax_66 + 0x1f s> rsi_5)
                var_144_2.d = rsi_5
        else
            while (true)
                int64_t rcx_33 = sx.q(r8_14)
                r9_7 += 0x20
                r8_14 += 1
                
                if (rcx_33.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                    break
                
                rdx_29 = *(r10_2 + (rcx_33 << 2) + 4)
                var_148_4 = 0xffffffff
                
                if (rdx_29 != 0)
                    goto label_1409d5c23
            
            var_144_2.d = rsi_5
    
    while (true)
        int32_t rcx_35 = var_128_2:0xc.d
        int64_t rdx_30 = var_128_2.q
        
        if (rcx_35 == (var_148_4.q u>> 0x20).d && rdx_30 == r13_2 && var_138.q == r14_4)
            break
        
        int32_t rax_68 = data_143a1c6bc
        
        if (rcx_35 s< *(rdx_30 + 0x18))
            rax_68 = rcx_35
        
        int64_t rdx_31 = sx.q(rax_68)
        zmm6 = *(**(rdi_7 + 0x18) + (rdx_31 << 2))
        
        if (not(zmm6.d f<= 9.99999994e-09f))
            void* r8_15 = arg1 + 0x558
            int64_t rsi_6 = sx.q(*(r8_15 + 8))
            int64_t rdx_32 = rdx_31 * 3
            int64_t rcx_37 = *(*(arg1 + 0x28) + 0x70)
            int32_t rax_71 = (rsi_6 + 1).d
            int32_t rbx_7 = *(rcx_37 + (rdx_32 << 3) + 4)
            int32_t r14_5 = *(rcx_37 + (rdx_32 << 3))
            *(r8_15 + 8) = rax_71
            
            if (rax_71 s> *(r8_15 + 0xc))
                sub_1405a4cf0(r8_15)
                r8_15 = arg1 + 0x558
            
            *(*r8_15 + (rsi_6 << 2)) = r14_5
            int64_t rsi_7 = sx.q(*(r8_15 + 8))
            int32_t rax_73 = (rsi_7 + 1).d
            *(r8_15 + 8) = rax_73
            
            if (rax_73 s> *(r8_15 + 0xc))
                sub_1405a4cf0(r8_15)
                r8_15 = arg1 + 0x558
            
            zmm6.d = zmm6.d f* 10f
            *(*r8_15 + (rsi_7 << 2)) = rbx_7
            int64_t rbx_8 = sx.q(*(arg1 + 0x570))
            int32_t rax_75 = (rbx_8 + 1).d
            *(arg1 + 0x570) = rax_75
            
            if (rax_75 s> *(arg1 + 0x574))
                sub_1406105e0(arg1 + 0x568)
            
            r14_4 = arg_10
            *(*(arg1 + 0x568) + (rbx_8 << 2)) = zmm6.d
        
        var_128_2:8.d &= not.d(var_138:0xc.d)
        sub_14059bdd0(&var_138:8)
    
    r13 = arg1
    void* rsi_8 = r13 + 0x538
    int64_t rbx_9 = sx.q(*(rsi_8 + 8))
    
    if (rax_5 s> rbx_9.d)
        *(rsi_8 + 8) = rax_5
        
        if (rax_5 s> *(rsi_8 + 0xc))
            sub_1405a4cf0(rsi_8)
        
        memset(*rsi_8 + (rbx_9 << 2), 0, sx.q(rax_5 - rbx_9.d) << 2)
    else if (rax_5 s< rbx_9.d)
        int32_t rcx_45 = rbx_9.d
        
        if (rcx_45 != rax_5)
            *(rsi_8 + 8) = rbx_9.d - (rcx_45 - rax_5)
    
    int32_t rax_80 = *(r13 + 0x554)
    *(r13 + 0x550) = 0
    
    if (rax_80 s< 0 && rax_80 != 0)
        sub_1405dadb0(r13 + 0x548, 0)
    
    int32_t rax_81 = *(r13 + 0x5a4)
    *(r13 + 0x5a0) = 0
    
    if (rax_81 s< 0 && rax_81 != 0)
        sub_1405dadb0(r13 + 0x598, 0)
    
    int32_t rcx_49 = 0
    void* rdi_11 = *(r13 + 0x28) + 0xe0
    var_158 = 0
    int32_t r11_3 = *(rdi_11 + 0x28)
    void* r9_9 = rdi_11 + 0x10
    void* arg_20 = rdi_11
    int32_t r8_18 = 0
    int32_t var_154_5 = 1
    var_150 = r9_9
    int32_t var_148_5 = 0xffffffff
    int64_t var_144_3 = 0
    
    if (r11_3 != 0)
        void* rax_82 = *(r9_9 + 0x10)
        
        if (rax_82 != 0)
            r9_9 = rax_82
        
        int32_t temp17_1
        int32_t temp18_1
        temp17_1:temp18_1 = sx.q(r11_3 - 1)
        int32_t rdx_39 = *r9_9
        
        if (rdx_39 != 0)
        label_1409d5eb9:
            int32_t rax_89 = ((rdx_39 - 1) & rdx_39) ^ rdx_39
            uint64_t rflags_5
            int32_t temp0_8
            temp0_8, rflags_5 = _bit_scan_reverse(rax_89)
            int32_t var_154_6 = rax_89
            int32_t rax_90
            
            if (rax_89 == 0)
                rax_90 = 0x20
            else
                rax_90 = 0x1f - temp0_8
            
            var_144_3.d = r8_18 - rax_90 + 0x1f
            
            if (r8_18 - rax_90 + 0x1f s> r11_3)
                var_144_3.d = r11_3
        else
            while (true)
                int64_t rdx_40 = sx.q(rcx_49)
                r8_18 += 0x20
                rcx_49 += 1
                var_144_3:4.d = r8_18
                var_158 = rcx_49
                
                if (rdx_40.d s>= (temp18_1 + (temp17_1 & 0x1f)) s>> 5)
                    break
                
                rdx_39 = *(r9_9 + (rdx_40 << 2) + 4)
                var_148_5 = 0xffffffff
                
                if (rdx_39 != 0)
                    goto label_1409d5eb9
            
            var_144_3.d = r11_3
    
    int32_t rdx_45 = *(rdi_11 + 0x28)
    void* r10_3 = rdi_11 + 0x10
    int32_t rbx_11 = *(r10_3 + 0x18)
    zmm2 = var_148_5.o
    int128_t var_108_3 = var_158.o
    int32_t r8_21 = rdx_45 s>> 5
    int32_t r9_11 = rdx_45 & 0xffffffe0
    double var_f8_3[0x2] = zmm2
    int64_t var_118_3 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    void* arg_8
    arg_8.d = rdx_45
    arg_10 = r10_3
    var_138 = rdi_11.o
    int128_t var_128_3 = var_108_3
    
    if (rdx_45 != rbx_11)
        void* rax_92 = *(r10_3 + 0x10)
        
        if (rax_92 != 0)
            r10_3 = rax_92
        
        int32_t temp19_1
        int32_t temp20_1
        temp19_1:temp20_1 = sx.q(rbx_11 - 1)
        int32_t rdx_44 = *(r10_3 + (sx.q(r8_21) << 2)) & 0xffffffff << (rdx_45.b & 0x1f)
        
        if (rdx_44 != 0)
        label_1409d5f8e:
            int32_t rax_99 = ((rdx_44 - 1) & rdx_44) ^ rdx_44
            uint64_t rflags_6
            int32_t temp0_10
            temp0_10, rflags_6 = _bit_scan_reverse(rax_99)
            int32_t rax_100
            
            if (rax_99 == 0)
                rax_100 = 0x20
            else
                rax_100 = 0x1f - temp0_10
            
            rdx_45 = r9_11 - rax_100 + 0x1f
            arg_8.d = rdx_45
            
            if (rdx_45 s> rbx_11)
                rdx_45 = rbx_11
                arg_8.d = rbx_11
        else
            while (true)
                int64_t rcx_54 = sx.q(r8_21)
                r9_11 += 0x20
                r8_21 += 1
                
                if (rcx_54.d s>= (temp20_1 + (temp19_1 & 0x1f)) s>> 5)
                    break
                
                rdx_44 = *(r10_3 + (rcx_54 << 2) + 4)
                
                if (rdx_44 != 0)
                    goto label_1409d5f8e
            
            rdx_45 = rbx_11
            arg_8.d = rbx_11
        
        r10_3 = arg_10
    
    void* r12_4 = nullptr
    
    while (true)
        int32_t rax_101 = var_128_3:0xc.d
        int64_t rcx_56 = var_128_3.q
        
        if (rax_101 == rdx_45 && rcx_56 == r10_3 && var_138.q == rdi_11)
            break
        
        int32_t rbx_12 = data_143a1c6c8
        
        if (rax_101 s< *(rcx_56 + 0x18))
            rbx_12 = rax_101
        
        TEB* gsbase
        
        if (data_143cee088
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143cee088)
            
            if (data_143cee088 == 0xffffffff)
                atexit(sub_142cb9250)
                _Init_thread_footer(&data_143cee088)
        
        void* rdi_12 = *(r13 + 0x28)
        int32_t rcx_57 = data_143cee080
        int64_t rsi_9 = sx.q(rbx_12) * 5
        int64_t r10_4 = sx.q(*(*(rdi_12 + 0xe0) + (rsi_9 << 3) + 8))
        
        if (r10_4.d s> rcx_57)
            bool cond:24_1 = r10_4.d s<= data_143cee084
            rcx_57 = r10_4.d
            data_143cee080 = rcx_57
            
            if (not(cond:24_1))
                sub_1405a4cf0(&data_143cee078)
                rcx_57 = data_143cee080
        else if (r10_4.d s< rcx_57)
            int32_t rbx_14 = rcx_57 - r10_4.d
            
            if (rcx_57 != r10_4.d)
                int32_t rax_107 = rcx_57 - rbx_14
                
                if (rax_107 != r10_4.d)
                    int64_t r9_14 = data_143cee078
                    memmove(r9_14 + (r10_4 << 2), r9_14 + (sx.q(rbx_14 + r10_4.d) << 2), 
                        (rax_107 - r10_4.d) << 2)
                    rcx_57 = data_143cee080
                
                data_143cee080 = rcx_57 - rbx_14
                sub_1405dac90(&data_143cee078)
                rcx_57 = data_143cee080
        
        int64_t rax_110 = *(rdi_12 + 0xe0)
        int64_t r8_25 = 0
        int32_t* r9_15 = *(rax_110 + (rsi_9 << 3))
        uint64_t r10_6 = sx.q(*(rax_110 + (rsi_9 << 3) + 8)) << 2 u>> 2
        
        if (r9_15 u> &r9_15[sx.q(*(rax_110 + (rsi_9 << 3) + 8))])
            r10_6 = 0
        
        if (r10_6 != 0)
            do
                int64_t rax_113 = sx.q(*r9_15)
                r9_15 = &r9_15[1]
                *(data_143cee078 + (r8_25 << 2)) = *(*(rdi_12 + 0x38) + rax_113 * 0x18)
                r8_25 += 1
            while (r8_25 != r10_6)
            
            rcx_57 = data_143cee080
        
        rsi_8 = r13 + 0x538
        int64_t i = 0
        *(r12_4 + *rsi_8) = rcx_57
        
        if (rcx_57 s> 0)
            do
                int64_t rbx_15 = sx.q(*(r13 + 0x550))
                int32_t rsi_10 = *(data_143cee078 + (i << 2))
                int32_t rax_118 = (rbx_15 + 1).d
                *(r13 + 0x550) = rax_118
                
                if (rax_118 s> *(r13 + 0x554))
                    sub_1405a4cf0(r13 + 0x548)
                
                *(*(r13 + 0x548) + (rbx_15 << 2)) = rsi_10
                int64_t rbx_16 = sx.q(*(r13 + 0x5a0))
                int32_t rsi_11 = *(r13 + 0x5a0)
                int32_t rax_120 = (rbx_16 + 1).d
                *(r13 + 0x5a0) = rax_120
                
                if (rax_120 s> *(r13 + 0x5a4))
                    sub_1405a4cf0(r13 + 0x598)
                
                i += 1
                *(*(r13 + 0x598) + (rbx_16 << 2)) = rsi_11
            while (i s< sx.q(rcx_57))
            
            rsi_8 = r13 + 0x538
        
        var_128_3:8.d &= not.d(var_138:0xc.d)
        sub_14059bdd0(&var_138:8)
        rdx_45 = arg_8.d
        r10_3 = arg_10
        r12_4 += 4
        rdi_11 = arg_20
    
    int32_t rax_124 = *(r13 + 0x5b0)
    
    if (rax_124 s< 1)
        bool cond:26_1 = *(r13 + 0x5b4) s>= 1
        *(r13 + 0x5b0) = 1
        
        if (not(cond:26_1))
            sub_1405a4f90(r13 + 0x5a8)
    else if (rax_124 s> 1 && rax_124 != 1)
        *(r13 + 0x5b0) = 0 + 1
    
    int32_t rcx_68 = *(r13 + 0x5b0)
    int32_t r8_26 = 0
    
    if (rcx_68 s> 0)
        int64_t rdx_52 = 0
        
        do
            int64_t rcx_67 = *(r13 + 0x5a8)
            rdx_52 += 0x10
            r8_26 += 1
            *(rdx_52 + rcx_67 - 0x10) = *(r13 + 0x5a0)
            *(rdx_52 + rcx_67 - 8) = *(r13 + 0x598)
            rcx_68 = *(r13 + 0x5b0)
        while (r8_26 s< rcx_68)
    
    int64_t var_e0_1 = *rsi_8
    int64_t var_d8_1 = *(r13 + 0x548)
    int32_t var_d0_1 = *(r13 + 0x570)
    int64_t var_c8_1 = *(r13 + 0x558)
    int64_t var_c0_1 = *(r13 + 0x568)
    int32_t var_b8_1 = *(r13 + 0x590)
    int64_t var_b0_1 = *(r13 + 0x578)
    int64_t var_a8_1 = *(r13 + 0x588)
    int32_t var_8c_1 = rcx_68
    int32_t var_a0_1 = 0
    int64_t var_98_1 = 0
    char var_90_1 = 1
    int64_t var_88_1 = *(r13 + 0x5a8)
    int32_t* rax_137 = j_sub_140a82f30(0x70)
    int32_t* rbx_21
    
    if (rax_137 == 0)
        rbx_21 = nullptr
    else
        rbx_21 = sub_1429cdff0(rax_137, 1, (arg_8.d & 0xfffffe15) | 0x15)
    
    if (sub_1429cfd40(rbx_21, &var_e8) == 0)
    label_1409d6373:
        
        if (rbx_21 != 0)
            sub_1429ce210(rbx_21)
            j_sub_140a74f90(rbx_21)
        
        rbx_21 = nullptr
    else
        if (sub_1429cf540(rbx_21) == 0)
            goto label_1409d6373
        
        if (sub_1429cfb00(rbx_21, &var_e8) == 0)
            goto label_1409d6373
        
        if (sub_1429cf430(rbx_21, 0, sub_1429cfd30, &var_e8) == 0)
            goto label_1409d6373
        
        if (sub_1429cf920(rbx_21, &var_e8) == 0)
            goto label_1409d6373
        
        if (sub_1429cee80(rbx_21) == 0)
            goto label_1409d6373
        
        if (sub_1429cfbc0(rbx_21, &var_e8) == 0)
            goto label_1409d6373
        
        if (sub_1429cf740(rbx_21) == 0)
            goto label_1409d6373
    
    void* rax_147
    int32_t r9_17
    rax_147, r9_17 = sub_14099c500(rbx_21)
    int32_t* r8_28 = rbx_21
    var_158.q = rbx_21
    var_150 = rax_147
    void* rdi_13 = rax_147
    
    if (r13 + 0x528 != &var_158)
        *(r13 + 0x528) = rbx_21
        var_158.q = 0
        r8_28, r9_17 = sub_14066a200(r13 + 0x530, &var_150)
        rdi_13 = var_150
    
    if (rdi_13 != 0)
        int32_t temp23_1 = *(rdi_13 + 8)
        *(rdi_13 + 8) -= 1
        
        if (temp23_1 == 1)
            r8_28, r9_17 = (**rdi_13)(rdi_13)
            int32_t temp24_1 = *(rdi_13 + 0xc)
            *(rdi_13 + 0xc) -= 1
            
            if (temp24_1 == 1)
                r8_28, r9_17 = (*(*rdi_13 + 8))(rdi_13, 1)
    
    sub_1429ce490(*(r13 + 0x528), (*(r13 + 0x520) & 0xf) | (arg_8.d & 0xffffffe0) | 0x20, r8_28, 
        r9_17)

return sub_1409bf2b0(r13) __tailcall
