// 函数: sub_141fc7880
// 地址: 0x141fc7880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int512_t zmm1
result, zmm1 = sub_142175ce0(arg1, arg2)

if (*(arg2 + 0x2a) s< 0)
    int64_t r9_1 = *arg2
    (*(r9_1 + 8))(arg2, sx.q(*(arg1 + 0x7a8)) * 0x18, sx.q(*(arg1 + 0x7ac)) * 0x18, r9_1)
    int64_t r9_2 = *arg2
    (*(r9_2 + 8))(arg2, zx.q(*(arg1 + 0x7c8) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x7cc) + 0x1f) u>> 5 << 2, r9_2)
    int64_t rdx_7 = sx.q(*(arg1 + 0x7e8)) << 2
    (*(*arg2 + 8))(arg2, rdx_7, rdx_7)
    int32_t var_94_1 = 1
    int64_t var_84_1 = 0
    int32_t r12_1 = *(arg1 + 0x7c8)
    int32_t rcx_3 = 0
    int32_t var_98_1 = 0
    int32_t var_88_1 = 0xffffffff
    int32_t r8_8 = 0
    
    if (r12_1 != 0)
        void* rax_3 = *(arg1 + 0x7c0)
        void* r9_3 = arg1 + 0x7b0
        
        if (rax_3 != 0)
            r9_3 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r12_1 - 1)
        int32_t rdx_10 = *r9_3
        
        if (rdx_10 != 0)
        label_141fc79c5:
            int32_t rax_10 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_94_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            var_84_1.d = r8_8 - rax_11 + 0x1f
            
            if (r8_8 - rax_11 + 0x1f s> r12_1)
                var_84_1.d = r12_1
        else
            while (true)
                int64_t rdx_11 = sx.q(rcx_3)
                r8_8 += 0x20
                rcx_3 += 1
                var_84_1:4.d = r8_8
                var_98_1 = rcx_3
                
                if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r9_3 + (rdx_11 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_141fc79c5
            
            var_84_1.d = r12_1
    
    int32_t rdx_12 = *(arg1 + 0x7c8)
    var_84_1.d = rdx_12
    int32_t r9_4 = 0xffffffff << (rdx_12.b & 0x1f)
    int32_t var_88_3 = r9_4
    int128_t var_48_1 = var_98_1.o
    int32_t r9_6 = rdx_12 & 0xffffffe0
    int32_t r8_11 = rdx_12 s>> 5
    int128_t var_38_1 = 0xffffffff
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    zmm1.o = var_48_1
    int128_t var_78 = (arg1 + 0x7a0).o
    int96_t var_68_1 = zmm1.12
    
    if (rdx_12 != r12_1)
        void* rax_13 = *(arg1 + 0x7c0)
        void* r10_2 = arg1 + 0x7b0
        
        if (rax_13 != 0)
            r10_2 = rax_13
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r12_1 - 1)
        int32_t rdx_16 = *(r10_2 + (sx.q(r8_11) << 2)) & r9_4
        
        if (rdx_16 != 0)
        label_141fc7a8f:
            int32_t rax_20 = neg.d(rdx_16) & rdx_16
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t rax_21
            
            if (rax_20 == 0)
                rax_21 = 0x20
            else
                rax_21 = 0x1f - temp0_4
            
            var_84_1.d = r9_6 - rax_21 + 0x1f
            
            if (r9_6 - rax_21 + 0x1f s> r12_1)
                var_84_1.d = r12_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_11)
                r9_6 += 0x20
                r8_11 += 1
                
                if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_16 = *(r10_2 + (rcx_8 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_16 != 0)
                    goto label_141fc7a8f
            
            var_84_1.d = r12_1
    
    int32_t var_5c
    
    while (true)
        int64_t rax_23 = sx.q(var_5c)
        int64_t* rdx_17 = var_78.q
        
        if (rax_23.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x7b0
                && rdx_17 == arg1 + 0x7a0)
            break
        
        zmm1 = sub_140a1d9d0(arg2, *rdx_17 + rax_23 * 0x18, zmm1)
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    int64_t r9_8 = *arg2
    (*(r9_8 + 8))(arg2, sx.q(*(arg1 + 0x7f8)) * 0xc, sx.q(*(arg1 + 0x7fc)) * 0xc, r9_8, var_98_1, 
        arg1 + 0x7b0, var_88_3)
    int64_t r9_9 = *arg2
    (*(r9_9 + 8))(arg2, zx.q(*(arg1 + 0x818) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x81c) + 0x1f) u>> 5 << 2, r9_9)
    int64_t rdx_26 = sx.q(*(arg1 + 0x838)) << 2
    (*(*arg2 + 8))(arg2, rdx_26, rdx_26)
    int32_t var_94_3 = 1
    int32_t var_88_4 = 0xffffffff
    int32_t r12_4 = *(arg1 + 0x868)
    int32_t rcx_16 = 0
    int32_t var_98_2 = 0
    int32_t r8_19 = 0
    int64_t var_84_2 = 0
    
    if (r12_4 != 0)
        void* rax_30 = *(arg1 + 0x860)
        void* r9_10 = arg1 + 0x850
        
        if (rax_30 != 0)
            r9_10 = rax_30
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r12_4 - 1)
        int32_t rdx_29 = *r9_10
        
        if (rdx_29 != 0)
        label_141fc7bf5:
            int32_t rax_37 = neg.d(rdx_29) & rdx_29
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
            int32_t var_94_4 = rax_37
            int32_t rax_38
            
            if (rax_37 == 0)
                rax_38 = 0x20
            else
                rax_38 = 0x1f - temp0_5
            
            var_84_2.d = r8_19 - rax_38 + 0x1f
            
            if (r8_19 - rax_38 + 0x1f s> r12_4)
                var_84_2.d = r12_4
        else
            while (true)
                int64_t rdx_30 = sx.q(rcx_16)
                r8_19 += 0x20
                rcx_16 += 1
                var_84_2:4.d = r8_19
                var_98_2 = rcx_16
                
                if (rdx_30.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_29 = *(r9_10 + (rdx_30 << 2) + 4)
                int32_t var_88_5 = 0xffffffff
                
                if (rdx_29 != 0)
                    goto label_141fc7bf5
            
            var_84_2.d = r12_4
    
    int32_t rdx_31 = *(arg1 + 0x868)
    var_84_2.d = rdx_31
    int32_t r9_11 = 0xffffffff << (rdx_31.b & 0x1f)
    int32_t var_88_6 = r9_11
    int128_t var_48_2 = var_98_2.o
    int32_t r9_13 = rdx_31 & 0xffffffe0
    int32_t r8_22 = rdx_31 s>> 5
    int128_t var_38_2 = 0xffffffff
    int64_t var_58_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    zmm1.o = var_48_2
    var_78 = (arg1 + 0x840).o
    int96_t var_68_2 = zmm1.12
    
    if (rdx_31 != r12_4)
        void* rax_40 = *(arg1 + 0x860)
        void* r10_4 = arg1 + 0x850
        
        if (rax_40 != 0)
            r10_4 = rax_40
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r12_4 - 1)
        int32_t rdx_35 = *(r10_4 + (sx.q(r8_22) << 2)) & r9_11
        
        if (rdx_35 != 0)
        label_141fc7cbf:
            int32_t rax_47 = neg.d(rdx_35) & rdx_35
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_47)
            int32_t r13_1
            
            if (rax_47 == 0)
                r13_1 = 0x20
            else
                r13_1 = 0x1f - temp0_7
            
            var_84_2.d = r9_13 - r13_1 + 0x1f
            
            if (r9_13 - r13_1 + 0x1f s> r12_4)
                var_84_2.d = r12_4
        else
            while (true)
                int64_t rcx_21 = sx.q(r8_22)
                r9_13 += 0x20
                r8_22 += 1
                
                if (rcx_21.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_35 = *(r10_4 + (rcx_21 << 2) + 4)
                var_88_6 = 0xffffffff
                
                if (rdx_35 != 0)
                    goto label_141fc7cbf
            
            var_84_2.d = r12_4
    
    while (true)
        int64_t rax_49 = sx.q(var_5c)
        int64_t* rdx_36 = var_78.q
        
        if (rax_49.d == (var_88_6.q u>> 0x20).d && var_68_2.q == arg1 + 0x850
                && rdx_36 == arg1 + 0x840)
            break
        
        sub_141fabe60(rax_49 * 0xc8 + *rdx_36 + 0x10, arg2)
        var_68_2:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xa10)) << 5, sx.q(*(arg1 + 0xa14)) << 5)
    int64_t r9_15 = *arg2
    (*(r9_15 + 8))(arg2, zx.q(*(arg1 + 0xa30) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0xa34) + 0x1f) u>> 5 << 2, r9_15, var_98_2, arg1 + 0x850, var_88_6)
    int64_t rdx_45 = sx.q(*(arg1 + 0xa50)) << 2
    (*(*arg2 + 8))(arg2, rdx_45, rdx_45)
    int32_t var_94_5 = 1
    int32_t var_88_7 = 0xffffffff
    int32_t r11_1 = *(arg1 + 0xa30)
    int32_t rcx_29 = 0
    int32_t var_98_3 = 0
    int32_t r8_30 = 0
    int64_t var_84_3 = 0
    
    if (r11_1 != 0)
        void* rax_56 = *(arg1 + 0xa28)
        void* r9_16 = arg1 + 0xa18
        
        if (rax_56 != 0)
            r9_16 = rax_56
        
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(r11_1 - 1)
        int32_t rdx_48 = *r9_16
        
        if (rdx_48 != 0)
        label_141fc7e15:
            int32_t rax_63 = neg.d(rdx_48) & rdx_48
            uint64_t rflags_5
            int32_t temp0_8
            temp0_8, rflags_5 = _bit_scan_reverse(rax_63)
            int32_t var_94_6 = rax_63
            int32_t rax_64
            
            if (rax_63 == 0)
                rax_64 = 0x20
            else
                rax_64 = 0x1f - temp0_8
            
            var_84_3.d = r8_30 - rax_64 + 0x1f
            
            if (r8_30 - rax_64 + 0x1f s> r11_1)
                var_84_3.d = r11_1
        else
            while (true)
                int64_t rdx_49 = sx.q(rcx_29)
                r8_30 += 0x20
                rcx_29 += 1
                var_84_3:4.d = r8_30
                var_98_3 = rcx_29
                
                if (rdx_49.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                    break
                
                rdx_48 = *(r9_16 + (rdx_49 << 2) + 4)
                int32_t var_88_8 = 0xffffffff
                
                if (rdx_48 != 0)
                    goto label_141fc7e15
            
            var_84_3.d = r11_1
    
    int32_t rdx_50 = *(arg1 + 0xa30)
    var_84_3.d = rdx_50
    int32_t r9_17 = 0xffffffff << (rdx_50.b & 0x1f)
    int32_t var_88_9 = r9_17
    int128_t var_48_3 = var_98_3.o
    int32_t r9_19 = rdx_50 & 0xffffffe0
    int32_t r8_33 = rdx_50 s>> 5
    int128_t var_38_3 = 0xffffffff
    int64_t var_58_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    zmm1.o = var_48_3
    var_78 = (arg1 + 0xa08).o
    int96_t var_68_3 = zmm1.12
    
    if (rdx_50 != r11_1)
        void* rax_66 = *(arg1 + 0xa28)
        void* r10_5 = arg1 + 0xa18
        
        if (rax_66 != 0)
            r10_5 = rax_66
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(r11_1 - 1)
        int32_t rdx_54 = *(r10_5 + (sx.q(r8_33) << 2)) & r9_17
        
        if (rdx_54 != 0)
        label_141fc7ee0:
            int32_t rax_73 = neg.d(rdx_54) & rdx_54
            uint64_t rflags_6
            int32_t temp0_10
            temp0_10, rflags_6 = _bit_scan_reverse(rax_73)
            int32_t rax_74
            
            if (rax_73 == 0)
                rax_74 = 0x20
            else
                rax_74 = 0x1f - temp0_10
            
            var_84_3.d = r9_19 - rax_74 + 0x1f
            
            if (r9_19 - rax_74 + 0x1f s> r11_1)
                var_84_3.d = r11_1
        else
            while (true)
                int64_t rcx_34 = sx.q(r8_33)
                r9_19 += 0x20
                r8_33 += 1
                
                if (rcx_34.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    break
                
                rdx_54 = *(r10_5 + (rcx_34 << 2) + 4)
                var_88_9 = 0xffffffff
                
                if (rdx_54 != 0)
                    goto label_141fc7ee0
            
            var_84_3.d = r11_1
    
    while (true)
        int64_t rcx_36 = sx.q(var_5c)
        int64_t* rax_76 = var_78.q
        
        if (rcx_36.d == (var_88_9.q u>> 0x20).d && var_68_3.q == arg1 + 0xa18
                && rax_76 == arg1 + 0xa08)
            break
        
        int64_t rax_77 = *rax_76
        int64_t r9_21 = *arg2
        int64_t rcx_37 = rcx_36 << 5
        (*(r9_21 + 8))(arg2, sx.q(*(rcx_37 + rax_77 + 0x10)) << 3, 
            sx.q(*(rcx_37 + rax_77 + 0x14)) << 3, r9_21, var_98_3, arg1 + 0xa18, var_88_9)
        var_68_3:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xa60)) << 5, sx.q(*(arg1 + 0xa64)) << 5)
    void* i = *(arg1 + 0xa58)
    
    for (void* r12_11 = (sx.q(*(arg1 + 0xa60)) << 5) + i; i != r12_11; i += 0x20)
        (*(*arg2 + 8))(arg2, sx.q(*(i + 8)), sx.q(*(i + 0xc)))
    
    int64_t r9_22 = *arg2
    (*(r9_22 + 8))(arg2, sx.q(*(arg1 + 0xca0)) * 0x60, sx.q(*(arg1 + 0xca4)) * 0x60, r9_22, 
        var_98_3, arg1 + 0xa18, var_88_9)
    int64_t r9_23 = *arg2
    (*(r9_23 + 8))(arg2, zx.q(*(arg1 + 0xcc0) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0xcc4) + 0x1f) u>> 5 << 2, r9_23)
    int64_t rdx_67 = sx.q(*(arg1 + 0xce0)) << 2
    (*(*arg2 + 8))(arg2, rdx_67, rdx_67)
    int32_t var_94_7 = 1
    int32_t rdi_4 = *(arg1 + 0xcc0)
    int32_t rcx_45 = 0
    int32_t var_98_4 = 0
    int32_t r8_46 = 0
    int32_t var_88_10 = 0xffffffff
    int64_t var_84_4 = 0
    
    if (rdi_4 != 0)
        void* rax_85 = *(arg1 + 0xcb8)
        void* r9_24 = arg1 + 0xca8
        
        if (rax_85 != 0)
            r9_24 = rax_85
        
        int32_t temp12_1
        int32_t temp13_1
        temp12_1:temp13_1 = sx.q(rdi_4 - 1)
        int32_t rdx_70 = *r9_24
        
        if (rdx_70 != 0)
        label_141fc80a5:
            int32_t rax_92 = neg.d(rdx_70) & rdx_70
            uint64_t rflags_7
            int32_t temp0_11
            temp0_11, rflags_7 = _bit_scan_reverse(rax_92)
            int32_t var_94_8 = rax_92
            int32_t rax_93
            
            if (rax_92 == 0)
                rax_93 = 0x20
            else
                rax_93 = 0x1f - temp0_11
            
            var_84_4.d = r8_46 - rax_93 + 0x1f
            
            if (r8_46 - rax_93 + 0x1f s> rdi_4)
                var_84_4.d = rdi_4
        else
            while (true)
                int64_t rdx_71 = sx.q(rcx_45)
                r8_46 += 0x20
                rcx_45 += 1
                var_84_4:4.d = r8_46
                var_98_4 = rcx_45
                
                if (rdx_71.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                    break
                
                rdx_70 = *(r9_24 + (rdx_71 << 2) + 4)
                int32_t var_88_11 = 0xffffffff
                
                if (rdx_70 != 0)
                    goto label_141fc80a5
            
            var_84_4.d = rdi_4
    
    int32_t rdx_72 = *(arg1 + 0xcc0)
    int128_t var_38_4 = 0xffffffff
    int32_t r12_12 = 0xffffffff << (rdx_72.b & 0x1f)
    int128_t var_48_4 = var_98_4.o
    int32_t r8_49 = rdx_72 s>> 5
    int32_t r9_26 = rdx_72 & 0xffffffe0
    int64_t var_58_4 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_12 = r12_12
    var_84_4.d = rdx_72
    zmm1.o = var_48_4
    var_78 = (arg1 + 0xc98).o
    int96_t var_68_4 = zmm1.12
    
    if (rdx_72 != rdi_4)
        void* rax_95 = *(arg1 + 0xcb8)
        void* r10_7 = arg1 + 0xca8
        
        if (rax_95 != 0)
            r10_7 = rax_95
        
        int32_t temp14_1
        int32_t temp15_1
        temp14_1:temp15_1 = sx.q(rdi_4 - 1)
        int32_t rdx_76 = *(r10_7 + (sx.q(r8_49) << 2)) & r12_12
        
        if (rdx_76 != 0)
        label_141fc816f:
            int32_t rax_102 = neg.d(rdx_76) & rdx_76
            uint64_t rflags_8
            int32_t temp0_13
            temp0_13, rflags_8 = _bit_scan_reverse(rax_102)
            int32_t rax_103
            
            if (rax_102 == 0)
                rax_103 = 0x20
            else
                rax_103 = 0x1f - temp0_13
            
            var_84_4.d = r9_26 - rax_103 + 0x1f
            
            if (r9_26 - rax_103 + 0x1f s> rdi_4)
                var_84_4.d = rdi_4
        else
            while (true)
                int64_t rcx_50 = sx.q(r8_49)
                r9_26 += 0x20
                r8_49 += 1
                
                if (rcx_50.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                    break
                
                rdx_76 = *(r10_7 + (rcx_50 << 2) + 4)
                var_88_12 = 0xffffffff
                
                if (rdx_76 != 0)
                    goto label_141fc816f
            
            var_84_4.d = rdi_4
    
    while (true)
        int64_t rax_105 = sx.q(var_5c)
        int64_t rdx_77 = var_78.q
        
        if (rax_105.d == (var_88_12.q u>> 0x20).d && var_68_4.q == arg1 + 0xca8
                && rdx_77 == arg1 + 0xc98)
            break
        
        int64_t r9_28 = *arg2
        void* rdi_7 = rax_105 * 0x60 + *rdx_77
        (*(r9_28 + 8))(arg2, sx.q(*(rdi_7 + 0x10)) * 0x28, sx.q(*(rdi_7 + 0x14)) * 0x28, r9_28, 
            var_98_4, arg1 + 0xca8, var_88_12)
        int64_t r9_29 = *arg2
        (*(r9_29 + 8))(arg2, zx.q(*(rdi_7 + 0x30) + 0x1f) u>> 5 << 2, 
            zx.q(*(rdi_7 + 0x34) + 0x1f) u>> 5 << 2, r9_29)
        int64_t rdx_85 = sx.q(*(rdi_7 + 0x50)) << 2
        (*(*arg2 + 8))(arg2, rdx_85, rdx_85)
        var_68_4:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xa70)) << 4, sx.q(*(arg1 + 0xa74)) << 4)
    int64_t r9_30 = *arg2
    (*(r9_30 + 8))(arg2, zx.q(*(arg1 + 0xa90) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0xa94) + 0x1f) u>> 5 << 2, r9_30, var_98_4, arg1 + 0xca8, var_88_12)
    int64_t rdx_93 = sx.q(*(arg1 + 0xab0)) << 2
    (*(*arg2 + 8))(arg2, rdx_93, rdx_93)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xac0)) << 4, sx.q(*(arg1 + 0xac4)) << 4)
    int64_t r9_31 = *arg2
    (*(r9_31 + 8))(arg2, zx.q(*(arg1 + 0xae0) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0xae4) + 0x1f) u>> 5 << 2, r9_31)
    int64_t rdx_101 = sx.q(*(arg1 + 0xb00)) << 2
    (*(*arg2 + 8))(arg2, rdx_101, rdx_101)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xb18)) << 2, sx.q(*(arg1 + 0xb1c)) << 2)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xb28)) << 4, sx.q(*(arg1 + 0xb2c)) << 4)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xbd8)) * 2, sx.q(*(arg1 + 0xbdc)) * 2)
    int64_t r9_32 = *arg2
    (*(r9_32 + 8))(arg2, sx.q(*(arg1 + 0xc38)) * 0x18, sx.q(*(arg1 + 0xc3c)) * 0x18, r9_32)
    void* i_1 = *(arg1 + 0xc30)
    void* r12_15 = i_1 + sx.q(*(arg1 + 0xc38)) * 0x18
    int32_t r15_4 = 0
    
    for (; i_1 != r12_15; i_1 += 0x18)
        (*(*arg2 + 8))(arg2, sx.q(*(i_1 + 8)) * 2, sx.q(*(i_1 + 0xc)) * 2)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xc48)) << 4, sx.q(*(arg1 + 0xc4c)) << 4)
    void* i_2 = *(arg1 + 0xc40)
    
    for (void* r12_18 = (sx.q(*(arg1 + 0xc48)) << 4) + i_2; i_2 != r12_18; i_2 += 0x10)
        (*(*arg2 + 8))(arg2, sx.q(*(i_2 + 8)) * 2, sx.q(*(i_2 + 0xc)) * 2)
    
    int64_t r9_33 = *arg2
    (*(r9_33 + 8))(arg2, sx.q(*(arg1 + 0xc68)) * 0x28, sx.q(*(arg1 + 0xc6c)) * 0x28, r9_33)
    int64_t r9_34 = *arg2
    (*(r9_34 + 8))(arg2, sx.q(*(arg1 + 0xc80)) * 0x18, sx.q(*(arg1 + 0xc84)) * 0x18, r9_34)
    void* i_3 = *(arg1 + 0xc78)
    
    for (void* r12_19 = i_3 + sx.q(*(arg1 + 0xc80)) * 0x18; i_3 != r12_19; i_3 += 0x18)
        (*(*arg2 + 8))(arg2, sx.q(*(i_3 + 8)) * 2, sx.q(*(i_3 + 0xc)) * 2)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xd08)) << 4, sx.q(*(arg1 + 0xd0c)) << 4)
    int64_t r9_35 = *arg2
    (*(r9_35 + 8))(arg2, sx.q(*(arg1 + 0xd18)) * 0xc, sx.q(*(arg1 + 0xd1c)) * 0xc, r9_35)
    int64_t r9_36 = *arg2
    (*(r9_36 + 8))(arg2, zx.q(*(arg1 + 0xd38) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0xd3c) + 0x1f) u>> 5 << 2, r9_36)
    int64_t rdx_131 = sx.q(*(arg1 + 0xd58)) << 2
    (*(*arg2 + 8))(arg2, rdx_131, rdx_131)
    int64_t r9_37 = *arg2
    (*(r9_37 + 8))(arg2, sx.q(*(arg1 + 0xd68)) * 0x18, sx.q(*(arg1 + 0xd6c)) * 0x18, r9_37)
    void* i_4 = *(arg1 + 0xd60)
    
    for (void* r12_20 = i_4 + sx.q(*(arg1 + 0xd68)) * 0x18; i_4 != r12_20; i_4 += 0x18)
        (*(*arg2 + 8))(arg2, sx.q(*(i_4 + 8)) * 2, sx.q(*(i_4 + 0xc)) * 2)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xd78)) << 5, sx.q(*(arg1 + 0xd7c)) << 5)
    int64_t r9_38 = *arg2
    (*(r9_38 + 8))(arg2, zx.q(*(arg1 + 0xd98) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0xd9c) + 0x1f) u>> 5 << 2, r9_38)
    int64_t rdx_143 = sx.q(*(arg1 + 0xdb8)) << 2
    (*(*arg2 + 8))(arg2, rdx_143, rdx_143)
    int32_t r10_8 = *(arg1 + 0xd98)
    int32_t var_98_5 = 0
    int32_t rcx_84 = 0
    int32_t var_94_9 = 1
    int32_t var_88_13 = 0xffffffff
    var_84_4.d = 0
    var_84_4:4.d = 0
    
    if (r10_8 != 0)
        void* rax_140 = *(arg1 + 0xd90)
        void* r8_111 = arg1 + 0xd80
        
        if (rax_140 != 0)
            r8_111 = rax_140
        
        int32_t temp16_1
        int32_t temp17_1
        temp16_1:temp17_1 = sx.q(r10_8 - 1)
        int32_t rdx_146 = *r8_111
        
        if (rdx_146 != 0)
        label_141fc86a5:
            int32_t rax_147 = neg.d(rdx_146) & rdx_146
            uint64_t rflags_9
            int32_t temp0_14
            temp0_14, rflags_9 = _bit_scan_reverse(rax_147)
            int32_t var_94_10 = rax_147
            int32_t rax_148
            
            if (rax_147 == 0)
                rax_148 = 0x20
            else
                rax_148 = 0x1f - temp0_14
            
            var_84_4.d = rcx_84 - rax_148 + 0x1f
            
            if (rcx_84 - rax_148 + 0x1f s> r10_8)
                var_84_4.d = r10_8
        else
            while (true)
                int64_t rdx_147 = sx.q(r15_4)
                rcx_84 += 0x20
                r15_4 += 1
                var_84_4:4.d = rcx_84
                var_98_5 = r15_4
                
                if (rdx_147.d s>= (temp17_1 + (temp16_1 & 0x1f)) s>> 5)
                    break
                
                rdx_146 = *(r8_111 + (rdx_147 << 2) + 4)
                int32_t var_88_14 = 0xffffffff
                
                if (rdx_146 != 0)
                    goto label_141fc86a5
            
            var_84_4.d = r10_8
    
    int32_t rdx_149 = *(arg1 + 0xd98)
    int32_t r14_1 = 0xffffffff << (rdx_149.b & 0x1f)
    int128_t var_38_5 = 0xffffffff
    var_84_4.d = rdx_149
    zmm1.o = var_98_5.o
    int64_t temp0_15 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_78 = (arg1 + 0xd70).o
    int96_t var_68_5 = zmm1.12
    int64_t var_58_5 = temp0_15
    
    while (true)
        int64_t rax_150 = sx.q(var_5c)
        int64_t rcx_88 = var_78.q
        
        if (rax_150.d == (r14_1.q u>> 0x20).d && var_68_5.q == arg1 + 0xd80
                && rcx_88 == arg1 + 0xd70)
            break
        
        int64_t r9_39 = *arg2
        void* rax_152 = (rax_150 << 5) + *rcx_88
        (*(r9_39 + 8))(arg2, sx.q(*(rax_152 + 8)) * 2, sx.q(*(rax_152 + 0xc)) * 2, r9_39, var_98_5, 
            arg1 + 0xd80, r14_1)
        var_68_5:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    sub_141fabaf0(arg1 + 0xdc0, arg2)
    int64_t rdx_154 = sx.q(*(arg1 + 0xe08)) << 2
    (*(*arg2 + 8))(arg2, rdx_154, rdx_154)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xe18)) << 2, sx.q(*(arg1 + 0xe1c)) << 2)
    sub_141faba90(arg1 + 0xe30, arg2)
    int64_t rdx_159 = sx.q(*(arg1 + 0xe78)) << 2
    (*(*arg2 + 8))(arg2, rdx_159, rdx_159)
    int64_t r9_40 = *arg2
    (*(r9_40 + 8))(arg2, sx.q(*(arg1 + 0xe90)) * 0xc, sx.q(*(arg1 + 0xe94)) * 0xc, r9_40, var_98_5, 
        arg1 + 0xd80, r14_1)
    sub_142163a40(arg1 + 0xea0, arg2)
    int64_t r9_41 = *arg2
    (*(r9_41 + 8))(arg2, sx.q(*(arg1 + 0xf98)) * 0xc, sx.q(*(arg1 + 0xf9c)) * 0xc, r9_41)
    sub_141fabb60(arg1 + 0xfc8, arg2)
    int64_t r9_42 = *arg2
    (*(r9_42 + 8))(arg2, sx.q(*(arg1 + 0x10c0)) * 0x28, sx.q(*(arg1 + 0x10c4)) * 0x28, r9_42)
    result = sx.q(*(arg1 + 0x10c0))
    void* i_5 = *(arg1 + 0x10b8)
    
    for (void* rsi_1 = i_5 + result * 0x28; i_5 != rsi_1; i_5 += 0x28)
        result = (*(*arg2 + 8))(arg2, sx.q(*(i_5 + 8)), sx.q(*(i_5 + 0xc)))

return result
