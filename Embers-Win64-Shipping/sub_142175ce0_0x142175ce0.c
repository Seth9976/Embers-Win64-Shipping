// 函数: sub_142175ce0
// 地址: 0x142175ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140ce8e10(arg1, arg2)

if (*(arg2 + 0x2a) s< 0)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0xa8)) << 5, sx.q(*(arg1 + 0xac)) << 5)
    int64_t r9_1 = *arg2
    (*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0xc8) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0xcc) + 0x1f) u>> 5 << 2, r9_1)
    int64_t rdx_7 = sx.q(*(arg1 + 0xe8)) << 2
    (*(*arg2 + 8))(arg2, rdx_7, rdx_7)
    int64_t r9_2 = *arg2
    (*(r9_2 + 8))(arg2, sx.q(*(arg1 + 0xf8)) * 0x18, sx.q(*(arg1 + 0xfc)) * 0x18, r9_2)
    void* rcx_4 = *(arg1 + 0x150)
    
    if (rcx_4 != 0)
        sub_1421629b0(rcx_4, arg2)
    
    void* rcx_5 = *(arg1 + 0x160)
    
    if (rcx_5 != 0)
        sub_140bd9a80(rcx_5, arg2)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x2f0)) << 3, sx.q(*(arg1 + 0x2f4)) << 3)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x300)) << 3, sx.q(*(arg1 + 0x304)) << 3)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x310)) << 3, sx.q(*(arg1 + 0x314)) << 3)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x320)) << 3, sx.q(*(arg1 + 0x324)) << 3)
    int64_t r9_3 = *arg2
    (*(r9_3 + 8))(arg2, sx.q(*(arg1 + 0x330)) * 0x18, sx.q(*(arg1 + 0x334)) * 0x18, r9_3)
    int64_t r9_4 = *arg2
    (*(r9_4 + 8))(arg2, zx.q(*(arg1 + 0x350) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x354) + 0x1f) u>> 5 << 2, r9_4)
    int64_t rdx_27 = sx.q(*(arg1 + 0x370)) << 2
    (*(*arg2 + 8))(arg2, rdx_27, rdx_27)
    int32_t var_94_1 = 1
    int32_t var_88_1 = 0xffffffff
    int32_t r14_1 = *(arg1 + 0x350)
    int32_t rcx_13 = 0
    int32_t var_98_1 = 0
    int32_t r8_25 = 0
    int64_t var_84_1 = 0
    
    if (r14_1 != 0)
        void* rax_11 = *(arg1 + 0x348)
        void* r9_5 = arg1 + 0x338
        
        if (rax_11 != 0)
            r9_5 = rax_11
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r14_1 - 1)
        int32_t rdx_30 = *r9_5
        
        if (rdx_30 != 0)
        label_142175f58:
            int32_t rax_18 = neg.d(rdx_30) & rdx_30
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
            int32_t var_94_2 = rax_18
            int32_t rax_19
            
            if (rax_18 == 0)
                rax_19 = 0x20
            else
                rax_19 = 0x1f - temp0_2
            
            var_84_1.d = r8_25 - rax_19 + 0x1f
            
            if (r8_25 - rax_19 + 0x1f s> r14_1)
                var_84_1.d = r14_1
        else
            while (true)
                int64_t rdx_31 = sx.q(rcx_13)
                r8_25 += 0x20
                rcx_13 += 1
                var_84_1:4.d = r8_25
                var_98_1 = rcx_13
                
                if (rdx_31.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_30 = *(r9_5 + (rdx_31 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_30 != 0)
                    goto label_142175f58
            
            var_84_1.d = r14_1
    
    int32_t rdx_32 = *(arg1 + 0x350)
    int128_t var_38_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_32.b & 0x1f)
    int128_t var_48_1 = var_98_1.o
    int32_t r8_28 = rdx_32 s>> 5
    int32_t r9_7 = rdx_32 & 0xffffffe0
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_3 = r12_1
    var_84_1.d = rdx_32
    int128_t var_78 = (arg1 + 0x328).o
    int96_t var_68_1 = var_48_1:8.12
    
    if (rdx_32 != r14_1)
        void* rax_21 = *(arg1 + 0x348)
        void* r10_2 = arg1 + 0x338
        
        if (rax_21 != 0)
            r10_2 = rax_21
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r14_1 - 1)
        int32_t rdx_36 = *(r10_2 + (sx.q(r8_28) << 2)) & r12_1
        
        if (rdx_36 != 0)
        label_142176023:
            int32_t rax_28 = neg.d(rdx_36) & rdx_36
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_28)
            int32_t rax_29
            
            if (rax_28 == 0)
                rax_29 = 0x20
            else
                rax_29 = 0x1f - temp0_4
            
            var_84_1.d = r9_7 - rax_29 + 0x1f
            
            if (r9_7 - rax_29 + 0x1f s> r14_1)
                var_84_1.d = r14_1
        else
            while (true)
                int64_t rcx_18 = sx.q(r8_28)
                r9_7 += 0x20
                r8_28 += 1
                
                if (rcx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_36 = *(r10_2 + (rcx_18 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_36 != 0)
                    goto label_142176023
            
            var_84_1.d = r14_1
    
    int32_t var_5c
    
    while (true)
        int64_t rax_31 = sx.q(var_5c)
        int64_t* rdx_37 = var_78.q
        
        if (rax_31.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x338
                && rdx_37 == arg1 + 0x328)
            break
        
        void* r14_2 = *(*rdx_37 + rax_31 * 0x18 + 8)
        
        if (r14_2 != 0)
            (*(*arg2 + 8))(arg2, 0x40, 0x40)
            (*(*arg2 + 8))(arg2, sx.q(*(r14_2 + 0x28)) * 2, sx.q(*(r14_2 + 0x2c)) * 2)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    int64_t r9_9 = *arg2
    (*(r9_9 + 8))(arg2, sx.q(*(arg1 + 0x380)) * 0x18, sx.q(*(arg1 + 0x384)) * 0x18, r9_9, var_98_1, 
        arg1 + 0x338, var_88_3)
    int64_t r9_10 = *arg2
    (*(r9_10 + 8))(arg2, zx.q(*(arg1 + 0x3a0) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x3a4) + 0x1f) u>> 5 << 2, r9_10)
    int64_t rdx_47 = sx.q(*(arg1 + 0x3c0)) << 2
    (*(*arg2 + 8))(arg2, rdx_47, rdx_47)
    int64_t r9_11 = *arg2
    (*(r9_11 + 8))(arg2, sx.q(*(arg1 + 0x3d0)) * 0x28, sx.q(*(arg1 + 0x3d4)) * 0x28, r9_11)
    int64_t r9_12 = *arg2
    (*(r9_12 + 8))(arg2, zx.q(*(arg1 + 0x3f0) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x3f4) + 0x1f) u>> 5 << 2, r9_12)
    int64_t rdx_55 = sx.q(*(arg1 + 0x410)) << 2
    (*(*arg2 + 8))(arg2, rdx_55, rdx_55)
    int32_t var_94_3 = 1
    int32_t var_88_4 = 0xffffffff
    int32_t r11_1 = *(arg1 + 0x3f0)
    int32_t rcx_30 = 0
    int32_t var_98_2 = 0
    int32_t r8_45 = 0
    int64_t var_84_2 = 0
    
    if (r11_1 != 0)
        void* rax_43 = *(arg1 + 0x3e8)
        void* r9_13 = arg1 + 0x3d8
        
        if (rax_43 != 0)
            r9_13 = rax_43
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_58 = *r9_13
        
        if (rdx_58 != 0)
        label_142176228:
            int32_t rax_50 = neg.d(rdx_58) & rdx_58
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_50)
            int32_t var_94_4 = rax_50
            int32_t rax_51
            
            if (rax_50 == 0)
                rax_51 = 0x20
            else
                rax_51 = 0x1f - temp0_5
            
            var_84_2.d = r8_45 - rax_51 + 0x1f
            
            if (r8_45 - rax_51 + 0x1f s> r11_1)
                var_84_2.d = r11_1
        else
            while (true)
                int64_t rdx_59 = sx.q(rcx_30)
                r8_45 += 0x20
                rcx_30 += 1
                var_84_2:4.d = r8_45
                var_98_2 = rcx_30
                
                if (rdx_59.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_58 = *(r9_13 + (rdx_59 << 2) + 4)
                int32_t var_88_5 = 0xffffffff
                
                if (rdx_58 != 0)
                    goto label_142176228
            
            var_84_2.d = r11_1
    
    int32_t rdx_60 = *(arg1 + 0x3f0)
    var_84_2.d = rdx_60
    int32_t r9_14 = 0xffffffff << (rdx_60.b & 0x1f)
    int32_t var_88_6 = r9_14
    int128_t var_48_2 = var_98_2.o
    int32_t r9_16 = rdx_60 & 0xffffffe0
    int32_t r8_48 = rdx_60 s>> 5
    int128_t var_38_2 = 0xffffffff
    int64_t var_58_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_78 = (arg1 + 0x3c8).o
    int96_t var_68_2 = var_48_2:8.12
    
    if (rdx_60 != r11_1)
        void* rax_53 = *(arg1 + 0x3e8)
        void* r10_3 = arg1 + 0x3d8
        
        if (rax_53 != 0)
            r10_3 = rax_53
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_1 - 1)
        int32_t rdx_64 = *(r10_3 + (sx.q(r8_48) << 2)) & r9_14
        
        if (rdx_64 != 0)
        label_142176302:
            int32_t rax_60 = neg.d(rdx_64) & rdx_64
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_60)
            int32_t rax_61
            
            if (rax_60 == 0)
                rax_61 = 0x20
            else
                rax_61 = 0x1f - temp0_7
            
            var_84_2.d = r9_16 - rax_61 + 0x1f
            
            if (r9_16 - rax_61 + 0x1f s> r11_1)
                var_84_2.d = r11_1
        else
            while (true)
                int64_t rcx_35 = sx.q(r8_48)
                r9_16 += 0x20
                r8_48 += 1
                
                if (rcx_35.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_64 = *(r10_3 + (rcx_35 << 2) + 4)
                var_88_6 = 0xffffffff
                
                if (rdx_64 != 0)
                    goto label_142176302
            
            var_84_2.d = r11_1
    
    while (true)
        int64_t rax_63 = sx.q(var_5c)
        int64_t* rdx_65 = var_78.q
        
        if (rax_63.d == (var_88_6.q u>> 0x20).d && var_68_2.q == arg1 + 0x3d8
                && rdx_65 == arg1 + 0x3c8)
            break
        
        int64_t* rcx_38 = *(*rdx_65 + rax_63 * 0x28 + 8)
        
        if (rcx_38 != 0)
            (*(*rcx_38 + 0x18))(rcx_38, arg2)
        
        var_68_2:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x428)) << 5, sx.q(*(arg1 + 0x42c)) << 5)
    int64_t r9_18 = *arg2
    (*(r9_18 + 8))(arg2, zx.q(*(arg1 + 0x448) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x44c) + 0x1f) u>> 5 << 2, r9_18, var_98_2, arg1 + 0x3d8, var_88_6)
    int64_t rdx_74 = sx.q(*(arg1 + 0x468)) << 2
    (*(*arg2 + 8))(arg2, rdx_74, rdx_74)
    int32_t var_94_5 = 1
    int32_t r14_4 = *(arg1 + 0x448)
    int32_t rcx_43 = 0
    int32_t var_98_3 = 0
    int32_t r8_56 = 0
    int32_t var_88_7 = 0xffffffff
    int64_t var_84_3 = 0
    
    if (r14_4 != 0)
        void* rax_70 = *(arg1 + 0x440)
        void* r9_19 = arg1 + 0x430
        
        if (rax_70 != 0)
            r9_19 = rax_70
        
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(r14_4 - 1)
        int32_t rdx_77 = *r9_19
        
        if (rdx_77 != 0)
        label_142176458:
            int32_t rax_77 = neg.d(rdx_77) & rdx_77
            uint64_t rflags_5
            int32_t temp0_8
            temp0_8, rflags_5 = _bit_scan_reverse(rax_77)
            int32_t var_94_6 = rax_77
            int32_t rax_78
            
            if (rax_77 == 0)
                rax_78 = 0x20
            else
                rax_78 = 0x1f - temp0_8
            
            var_84_3.d = r8_56 - rax_78 + 0x1f
            
            if (r8_56 - rax_78 + 0x1f s> r14_4)
                var_84_3.d = r14_4
        else
            while (true)
                int64_t rdx_78 = sx.q(rcx_43)
                r8_56 += 0x20
                rcx_43 += 1
                var_84_3:4.d = r8_56
                var_98_3 = rcx_43
                
                if (rdx_78.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                    break
                
                rdx_77 = *(r9_19 + (rdx_78 << 2) + 4)
                int32_t var_88_8 = 0xffffffff
                
                if (rdx_77 != 0)
                    goto label_142176458
            
            var_84_3.d = r14_4
    
    int32_t rdx_79 = *(arg1 + 0x448)
    int128_t var_38_3 = 0xffffffff
    int32_t r12_5 = 0xffffffff << (rdx_79.b & 0x1f)
    int128_t var_48_3 = var_98_3.o
    int32_t r8_59 = rdx_79 s>> 5
    int32_t r9_21 = rdx_79 & 0xffffffe0
    int64_t var_58_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_9 = r12_5
    var_84_3.d = rdx_79
    var_78 = (arg1 + 0x420).o
    int96_t var_68_3 = var_48_3:8.12
    
    if (rdx_79 != r14_4)
        void* rax_80 = *(arg1 + 0x440)
        void* r10_5 = arg1 + 0x430
        
        if (rax_80 != 0)
            r10_5 = rax_80
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(r14_4 - 1)
        int32_t rdx_83 = *(r10_5 + (sx.q(r8_59) << 2)) & r12_5
        
        if (rdx_83 != 0)
        label_142176523:
            int32_t rax_87 = neg.d(rdx_83) & rdx_83
            uint64_t rflags_6
            int32_t temp0_10
            temp0_10, rflags_6 = _bit_scan_reverse(rax_87)
            int32_t rax_88
            
            if (rax_87 == 0)
                rax_88 = 0x20
            else
                rax_88 = 0x1f - temp0_10
            
            var_84_3.d = r9_21 - rax_88 + 0x1f
            
            if (r9_21 - rax_88 + 0x1f s> r14_4)
                var_84_3.d = r14_4
        else
            while (true)
                int64_t rcx_48 = sx.q(r8_59)
                r9_21 += 0x20
                r8_59 += 1
                
                if (rcx_48.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    break
                
                rdx_83 = *(r10_5 + (rcx_48 << 2) + 4)
                var_88_9 = 0xffffffff
                
                if (rdx_83 != 0)
                    goto label_142176523
            
            var_84_3.d = r14_4
    
    while (true)
        int64_t rcx_50 = sx.q(var_5c)
        int64_t* rax_90 = var_78.q
        
        if (rcx_50.d == (var_88_9.q u>> 0x20).d && var_68_3.q == arg1 + 0x430
                && rax_90 == arg1 + 0x420)
            break
        
        void* r14_5 = *((rcx_50 << 5) + *rax_90 + 8)
        
        if (r14_5 != 0)
            (*(*arg2 + 8))(arg2, 0xa8, 0xa8)
            sub_1422c0070(r14_5, arg2)
        
        var_68_3:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    int64_t r9_23 = *arg2
    (*(r9_23 + 8))(arg2, sx.q(*(arg1 + 0x478)) * 0x28, sx.q(*(arg1 + 0x47c)) * 0x28, r9_23, 
        var_98_3, arg1 + 0x430, var_88_9)
    int64_t r9_24 = *arg2
    (*(r9_24 + 8))(arg2, zx.q(*(arg1 + 0x498) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x49c) + 0x1f) u>> 5 << 2, r9_24)
    int64_t rdx_92 = sx.q(*(arg1 + 0x4b8)) << 2
    (*(*arg2 + 8))(arg2, rdx_92, rdx_92)
    int32_t var_94_7 = 1
    int32_t var_88_10 = 0xffffffff
    int32_t r14_6 = *(arg1 + 0x498)
    int32_t rcx_58 = 0
    int32_t var_98_4 = 0
    int32_t r8_67 = 0
    int64_t var_84_4 = 0
    
    if (r14_6 != 0)
        void* rax_98 = *(arg1 + 0x490)
        void* r9_25 = arg1 + 0x480
        
        if (rax_98 != 0)
            r9_25 = rax_98
        
        int32_t temp12_1
        int32_t temp13_1
        temp12_1:temp13_1 = sx.q(r14_6 - 1)
        int32_t rdx_95 = *r9_25
        
        if (rdx_95 != 0)
        label_1421766a8:
            int32_t rax_105 = neg.d(rdx_95) & rdx_95
            uint64_t rflags_7
            int32_t temp0_11
            temp0_11, rflags_7 = _bit_scan_reverse(rax_105)
            int32_t var_94_8 = rax_105
            int32_t rax_106
            
            if (rax_105 == 0)
                rax_106 = 0x20
            else
                rax_106 = 0x1f - temp0_11
            
            var_84_4.d = r8_67 - rax_106 + 0x1f
            
            if (r8_67 - rax_106 + 0x1f s> r14_6)
                var_84_4.d = r14_6
        else
            while (true)
                int64_t rdx_96 = sx.q(rcx_58)
                r8_67 += 0x20
                rcx_58 += 1
                var_84_4:4.d = r8_67
                var_98_4 = rcx_58
                
                if (rdx_96.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                    break
                
                rdx_95 = *(r9_25 + (rdx_96 << 2) + 4)
                int32_t var_88_11 = 0xffffffff
                
                if (rdx_95 != 0)
                    goto label_1421766a8
            
            var_84_4.d = r14_6
    
    int32_t rdx_97 = *(arg1 + 0x498)
    int128_t var_38_4 = 0xffffffff
    int32_t r12_8 = 0xffffffff << (rdx_97.b & 0x1f)
    int128_t var_48_4 = var_98_4.o
    int32_t r8_70 = rdx_97 s>> 5
    int32_t r9_27 = rdx_97 & 0xffffffe0
    int64_t var_58_4 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_12 = r12_8
    var_84_4.d = rdx_97
    var_78 = (arg1 + 0x470).o
    int96_t var_68_4 = var_48_4:8.12
    
    if (rdx_97 != r14_6)
        void* rax_108 = *(arg1 + 0x490)
        void* r10_7 = arg1 + 0x480
        
        if (rax_108 != 0)
            r10_7 = rax_108
        
        int32_t temp14_1
        int32_t temp15_1
        temp14_1:temp15_1 = sx.q(r14_6 - 1)
        int32_t rdx_101 = *(r10_7 + (sx.q(r8_70) << 2)) & r12_8
        
        if (rdx_101 != 0)
        label_142176773:
            int32_t rax_115 = neg.d(rdx_101) & rdx_101
            uint64_t rflags_8
            int32_t temp0_13
            temp0_13, rflags_8 = _bit_scan_reverse(rax_115)
            int32_t rax_116
            
            if (rax_115 == 0)
                rax_116 = 0x20
            else
                rax_116 = 0x1f - temp0_13
            
            var_84_4.d = r9_27 - rax_116 + 0x1f
            
            if (r9_27 - rax_116 + 0x1f s> r14_6)
                var_84_4.d = r14_6
        else
            while (true)
                int64_t rcx_63 = sx.q(r8_70)
                r9_27 += 0x20
                r8_70 += 1
                
                if (rcx_63.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                    break
                
                rdx_101 = *(r10_7 + (rcx_63 << 2) + 4)
                var_88_12 = 0xffffffff
                
                if (rdx_101 != 0)
                    goto label_142176773
            
            var_84_4.d = r14_6
    
    while (true)
        int64_t rax_118 = sx.q(var_5c)
        int64_t* rdx_102 = var_78.q
        
        if (rax_118.d == (var_88_12.q u>> 0x20).d && var_68_4.q == arg1 + 0x480
                && rdx_102 == arg1 + 0x470)
            break
        
        void* r14_7 = *(*rdx_102 + rax_118 * 0x28 + 8)
        
        if (r14_7 != 0)
            (*(*arg2 + 8))(arg2, 0x860, 0x860)
            sub_1422c0330(r14_7, arg2)
        
        var_68_4:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    int64_t r9_29 = *arg2
    (*(r9_29 + 8))(arg2, sx.q(*(arg1 + 0x4c8)) * 0x60, sx.q(*(arg1 + 0x4cc)) * 0x60, r9_29, 
        var_98_4, arg1 + 0x480, var_88_12)
    int64_t r9_30 = *arg2
    (*(r9_30 + 8))(arg2, zx.q(*(arg1 + 0x4e8) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x4ec) + 0x1f) u>> 5 << 2, r9_30)
    int64_t rdx_111 = sx.q(*(arg1 + 0x508)) << 2
    (*(*arg2 + 8))(arg2, rdx_111, rdx_111)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x520)) << 4, sx.q(*(arg1 + 0x524)) << 4)
    int64_t r9_31 = *arg2
    (*(r9_31 + 8))(arg2, zx.q(*(arg1 + 0x540) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x544) + 0x1f) u>> 5 << 2, r9_31)
    int64_t rdx_119 = sx.q(*(arg1 + 0x560)) << 2
    (*(*arg2 + 8))(arg2, rdx_119, rdx_119)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x570)) << 4, sx.q(*(arg1 + 0x574)) << 4)
    int64_t r9_32 = *arg2
    (*(r9_32 + 8))(arg2, zx.q(*(arg1 + 0x590) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x594) + 0x1f) u>> 5 << 2, r9_32)
    int64_t rdx_127 = sx.q(*(arg1 + 0x5b0)) << 2
    (*(*arg2 + 8))(arg2, rdx_127, rdx_127)
    int32_t var_94_9 = 1
    int32_t var_88_13 = 0xffffffff
    int32_t rsi_4 = 0
    void* var_90_5 = arg1 + 0x578
    int32_t var_98_5 = 0
    int32_t r10_8 = *(arg1 + 0x590)
    int32_t rcx_78 = 0
    var_84_4:4.d = 0
    var_84_4.d = 0
    
    if (r10_8 != 0)
        void* rax_130 = *(arg1 + 0x588)
        void* r8_92 = arg1 + 0x578
        
        if (rax_130 != 0)
            r8_92 = rax_130
        
        int32_t temp16_1
        int32_t temp17_1
        temp16_1:temp17_1 = sx.q(r10_8 - 1)
        int32_t rdx_130 = *r8_92
        
        if (rdx_130 != 0)
        label_1421769b6:
            int32_t rax_137 = neg.d(rdx_130) & rdx_130
            uint64_t rflags_9
            int32_t temp0_14
            temp0_14, rflags_9 = _bit_scan_reverse(rax_137)
            int32_t var_94_10 = rax_137
            int32_t rax_138
            
            if (rax_137 == 0)
                rax_138 = 0x20
            else
                rax_138 = 0x1f - temp0_14
            
            var_84_4.d = rcx_78 - rax_138 + 0x1f
            
            if (rcx_78 - rax_138 + 0x1f s> r10_8)
                var_84_4.d = r10_8
        else
            while (true)
                int64_t rdx_131 = sx.q(rsi_4)
                rcx_78 += 0x20
                rsi_4 += 1
                var_84_4:4.d = rcx_78
                var_98_5 = rsi_4
                
                if (rdx_131.d s>= (temp17_1 + (temp16_1 & 0x1f)) s>> 5)
                    break
                
                rdx_130 = *(r8_92 + (rdx_131 << 2) + 4)
                int32_t var_88_14 = 0xffffffff
                
                if (rdx_130 != 0)
                    goto label_1421769b6
            
            var_84_4.d = r10_8
    
    int32_t rdx_133 = *(arg1 + 0x590)
    int128_t var_38_5 = 0xffffffff
    int32_t r15_6 = 0xffffffff << (rdx_133.b & 0x1f)
    int128_t var_48_5 = var_98_5.o
    int32_t r8_94 = rdx_133 s>> 5
    int32_t r9_34 = rdx_133 & 0xffffffe0
    int64_t var_58_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_15 = r15_6
    var_84_4.d = rdx_133
    var_78 = (arg1 + 0x568).o
    int96_t var_68_5 = var_48_5:8.12
    
    if (rdx_133 != r10_8)
        void* rax_140 = *(arg1 + 0x588)
        void* r10_9 = arg1 + 0x578
        
        if (rax_140 != 0)
            r10_9 = rax_140
        
        int32_t temp18_1
        int32_t temp19_1
        temp18_1:temp19_1 = sx.q(r10_8 - 1)
        int32_t rdx_137 = *(r10_9 + (sx.q(r8_94) << 2)) & r15_6
        
        if (rdx_137 != 0)
        label_142176a82:
            int32_t rax_147 = neg.d(rdx_137) & rdx_137
            uint64_t rflags_10
            int32_t temp0_16
            temp0_16, rflags_10 = _bit_scan_reverse(rax_147)
            int32_t r13_1
            
            if (rax_147 == 0)
                r13_1 = 0x20
            else
                r13_1 = 0x1f - temp0_16
            
            var_84_4.d = r9_34 - r13_1 + 0x1f
            
            if (r9_34 - r13_1 + 0x1f s> r10_8)
                var_84_4.d = r10_8
        else
            while (true)
                int64_t rcx_83 = sx.q(r8_94)
                r9_34 += 0x20
                r8_94 += 1
                
                if (rcx_83.d s>= (temp19_1 + (temp18_1 & 0x1f)) s>> 5)
                    break
                
                rdx_137 = *(r10_9 + (rcx_83 << 2) + 4)
                var_88_15 = 0xffffffff
                
                if (rdx_137 != 0)
                    goto label_142176a82
            
            var_84_4.d = r10_8
    
    while (true)
        int64_t rcx_85 = sx.q(var_5c)
        result = var_78.q
        
        if (rcx_85.d == (var_88_15.q u>> 0x20).d && var_68_5.q == arg1 + 0x578
                && result == arg1 + 0x568)
            break
        
        void* rsi_6 = *(*result + rcx_85 * 0x10)
        
        if (rsi_6 != 0)
            (*(*arg2 + 8))(arg2, 0xe0, 0xe0)
            sub_141fabca0(rsi_6, arg2)
        
        var_68_5:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    if (*(arg1 + 0x6f0) != 0)
        (*(*arg2 + 8))(arg2, 0x140, 0x140)
        return sub_1421635c0(*(arg1 + 0x6f0), arg2)

return result
