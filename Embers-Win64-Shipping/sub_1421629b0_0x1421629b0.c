// 函数: sub_1421629b0
// 地址: 0x1421629b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(*(arg1 + 8)) * 0x38, sx.q(*(arg1 + 0xc)) * 0x38, r9)
int64_t r9_1 = *arg2
(*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0x28) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x2c) + 0x1f) u>> 5 << 2, 
    r9_1)
int64_t rdx_6 = sx.q(*(arg1 + 0x48)) << 2
(*(*arg2 + 8))(arg2, rdx_6, rdx_6)
int64_t r9_2 = *arg2
(*(r9_2 + 8))(arg2, sx.q(*(arg1 + 0x58)) * 0x14, sx.q(*(arg1 + 0x5c)) * 0x14, r9_2)
int64_t r9_3 = *arg2
(*(r9_3 + 8))(arg2, zx.q(*(arg1 + 0x78) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x7c) + 0x1f) u>> 5 << 2, 
    r9_3)
int64_t rdx_14 = sx.q(*(arg1 + 0x98)) << 2
(*(*arg2 + 8))(arg2, rdx_14, rdx_14)
int64_t r9_4 = *arg2
(*(r9_4 + 8))(arg2, sx.q(*(arg1 + 0xb0)) * 0xc, sx.q(*(arg1 + 0xb4)) * 0xc, r9_4)
int64_t r9_5 = *arg2
(*(r9_5 + 8))(arg2, zx.q(*(arg1 + 0xd0) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0xd4) + 0x1f) u>> 5 << 2, 
    r9_5)
int64_t rdx_22 = sx.q(*(arg1 + 0xf0)) << 2
(*(*arg2 + 8))(arg2, rdx_22, rdx_22)
int64_t r9_6 = *arg2
(*(r9_6 + 8))(arg2, sx.q(*(arg1 + 0x100)) * 0x60, sx.q(*(arg1 + 0x104)) * 0x60, r9_6)
int64_t r9_7 = *arg2
(*(r9_7 + 8))(arg2, zx.q(*(arg1 + 0x120) + 0x1f) u>> 5 << 2, 
    zx.q(*(arg1 + 0x124) + 0x1f) u>> 5 << 2, r9_7)
int64_t rdx_30 = sx.q(*(arg1 + 0x140)) << 2
(*(*arg2 + 8))(arg2, rdx_30, rdx_30)
int32_t var_94 = 1
int32_t var_88 = 0xffffffff
int32_t rdi = *(arg1 + 0x120)
int32_t rcx_12 = 0
int32_t var_98 = 0
int32_t r8_27 = 0
int64_t var_84 = 0

if (rdi != 0)
    void* rax_12 = *(arg1 + 0x118)
    void* r9_8 = arg1 + 0x108
    
    if (rax_12 != 0)
        r9_8 = rax_12
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_33 = *r9_8
    
    if (rdx_33 != 0)
    label_142162bf8:
        int32_t rax_19 = neg.d(rdx_33) & rdx_33
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_19)
        int32_t var_94_1 = rax_19
        int32_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0x20
        else
            rax_20 = 0x1f - temp0_2
        
        var_84.d = r8_27 - rax_20 + 0x1f
        
        if (r8_27 - rax_20 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rdx_34 = sx.q(rcx_12)
            r8_27 += 0x20
            rcx_12 += 1
            var_84:4.d = r8_27
            var_98 = rcx_12
            
            if (rdx_34.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_33 = *(r9_8 + (rdx_34 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_33 != 0)
                goto label_142162bf8
        
        var_84.d = rdi

int32_t rdx_35 = *(arg1 + 0x120)
int128_t var_38 = 0xffffffff
int32_t r13 = 0xffffffff << (rdx_35.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_30 = rdx_35 s>> 5
int32_t r9_10 = rdx_35 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r13
var_84.d = rdx_35
int128_t var_78 = (arg1 + 0xf8).o
int96_t var_68 = var_48:8.12

if (rdx_35 != rdi)
    void* rax_22 = *(arg1 + 0x118)
    void* r10_1 = arg1 + 0x108
    
    if (rax_22 != 0)
        r10_1 = rax_22
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_39 = *(r10_1 + (sx.q(r8_30) << 2)) & r13
    
    if (rdx_39 != 0)
    label_142162cc2:
        int32_t rax_29 = neg.d(rdx_39) & rdx_39
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_29)
        int32_t rax_30
        
        if (rax_29 == 0)
            rax_30 = 0x20
        else
            rax_30 = 0x1f - temp0_4
        
        var_84.d = r9_10 - rax_30 + 0x1f
        
        if (r9_10 - rax_30 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rcx_17 = sx.q(r8_30)
            r9_10 += 0x20
            r8_30 += 1
            
            if (rcx_17.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_39 = *(r10_1 + (rcx_17 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_39 != 0)
                goto label_142162cc2
        
        var_84.d = rdi

while (true)
    int32_t var_5c
    int64_t rax_32 = sx.q(var_5c)
    int64_t rdx_40 = var_78.q
    
    if (rax_32.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x108 && rdx_40 == arg1 + 0xf8)
        int64_t r9_14 = *arg2
        (*(r9_14 + 8))(arg2, sx.q(*(arg1 + 0x160)) * 0x14, sx.q(*(arg1 + 0x164)) * 0x14, r9_14, 
            var_98, arg1 + 0x108, var_88_2)
        int64_t r9_15 = *arg2
        (*(r9_15 + 8))(arg2, zx.q(*(arg1 + 0x180) + 0x1f) u>> 5 << 2, 
            zx.q(*(arg1 + 0x184) + 0x1f) u>> 5 << 2, r9_15)
        int64_t rdx_56 = sx.q(*(arg1 + 0x1a0)) << 2
        (*(*arg2 + 8))(arg2, rdx_56, rdx_56)
        int64_t r9_16 = *arg2
        (*(r9_16 + 8))(arg2, sx.q(*(arg1 + 0x1b0)) * 0x28, sx.q(*(arg1 + 0x1b4)) * 0x28, r9_16)
        int64_t r9_17 = *arg2
        (*(r9_17 + 8))(arg2, zx.q(*(arg1 + 0x1d0) + 0x1f) u>> 5 << 2, 
            zx.q(*(arg1 + 0x1d4) + 0x1f) u>> 5 << 2, r9_17)
        int64_t rdx_64 = sx.q(*(arg1 + 0x1f0)) << 2
        (*(*arg2 + 8))(arg2, rdx_64, rdx_64)
        int32_t var_94_2 = 1
        int32_t var_88_3 = 0xffffffff
        int32_t rdi_4 = *(arg1 + 0x1d0)
        int32_t rcx_29 = 0
        int32_t var_98_1 = 0
        int32_t r8_52 = 0
        int64_t var_84_1 = 0
        
        if (rdi_4 != 0)
            void* rax_44 = *(arg1 + 0x1c8)
            void* r9_18 = arg1 + 0x1b8
            
            if (rax_44 != 0)
                r9_18 = rax_44
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rdi_4 - 1)
            int32_t rdx_67 = *r9_18
            
            if (rdx_67 != 0)
            label_142162ef8:
                int32_t rax_51 = neg.d(rdx_67) & rdx_67
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_51)
                int32_t var_94_3 = rax_51
                int32_t rax_52
                
                if (rax_51 == 0)
                    rax_52 = 0x20
                else
                    rax_52 = 0x1f - temp0_5
                
                var_84_1.d = r8_52 - rax_52 + 0x1f
                
                if (r8_52 - rax_52 + 0x1f s> rdi_4)
                    var_84_1.d = rdi_4
            else
                while (true)
                    int64_t rdx_68 = sx.q(rcx_29)
                    r8_52 += 0x20
                    rcx_29 += 1
                    var_84_1:4.d = r8_52
                    var_98_1 = rcx_29
                    
                    if (rdx_68.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_67 = *(r9_18 + (rdx_68 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_67 != 0)
                        goto label_142162ef8
                
                var_84_1.d = rdi_4
        
        int32_t rdx_69 = *(arg1 + 0x1d0)
        int128_t var_38_1 = 0xffffffff
        int32_t r13_3 = 0xffffffff << (rdx_69.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_55 = rdx_69 s>> 5
        int32_t r9_20 = rdx_69 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = r13_3
        var_84_1.d = rdx_69
        var_78 = (arg1 + 0x1a8).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_69 != rdi_4)
            void* rax_54 = *(arg1 + 0x1c8)
            void* r10_3 = arg1 + 0x1b8
            
            if (rax_54 != 0)
                r10_3 = rax_54
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rdi_4 - 1)
            int32_t rdx_73 = *(r10_3 + (sx.q(r8_55) << 2)) & r13_3
            
            if (rdx_73 != 0)
            label_142162fc2:
                int32_t rax_61 = neg.d(rdx_73) & rdx_73
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_61)
                int32_t rax_62
                
                if (rax_61 == 0)
                    rax_62 = 0x20
                else
                    rax_62 = 0x1f - temp0_7
                
                var_84_1.d = r9_20 - rax_62 + 0x1f
                
                if (r9_20 - rax_62 + 0x1f s> rdi_4)
                    var_84_1.d = rdi_4
            else
                while (true)
                    int64_t rcx_34 = sx.q(r8_55)
                    r9_20 += 0x20
                    r8_55 += 1
                    
                    if (rcx_34.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_73 = *(r10_3 + (rcx_34 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_73 != 0)
                        goto label_142162fc2
                
                var_84_1.d = rdi_4
        
        while (true)
            int64_t rax_64 = sx.q(var_5c)
            int64_t* rdx_74 = var_78.q
            
            if (rax_64.d == (var_88_5.q u>> 0x20).d && var_68_1.q == arg1 + 0x1b8
                    && rdx_74 == arg1 + 0x1a8)
                (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x200)) << 5, sx.q(*(arg1 + 0x204)) << 5)
                int64_t r9_23 = *arg2
                (*(r9_23 + 8))(arg2, zx.q(*(arg1 + 0x220) + 0x1f) u>> 5 << 2, 
                    zx.q(*(arg1 + 0x224) + 0x1f) u>> 5 << 2, r9_23, var_98_1, arg1 + 0x1b8, 
                    var_88_5)
                int64_t rdx_88 = sx.q(*(arg1 + 0x240)) << 2
                (*(*arg2 + 8))(arg2, rdx_88, rdx_88)
                int32_t rsi_2 = 0
                int32_t var_94_4 = 1
                int32_t var_88_6 = 0xffffffff
                int32_t r11 = *(arg1 + 0x220)
                int32_t rcx_45 = 0
                int32_t var_98_2 = 0
                int32_t r8_69 = 0
                int64_t var_84_2 = 0
                
                if (r11 != 0)
                    void* rax_75 = *(arg1 + 0x218)
                    void* r9_24 = arg1 + 0x208
                    
                    if (rax_75 != 0)
                        r9_24 = rax_75
                    
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(r11 - 1)
                    int32_t rdx_91 = *r9_24
                    
                    if (rdx_91 != 0)
                    label_142163198:
                        int32_t rax_82 = neg.d(rdx_91) & rdx_91
                        uint64_t rflags_5
                        int32_t temp0_8
                        temp0_8, rflags_5 = _bit_scan_reverse(rax_82)
                        int32_t var_94_5 = rax_82
                        int32_t rax_83
                        
                        if (rax_82 == 0)
                            rax_83 = 0x20
                        else
                            rax_83 = 0x1f - temp0_8
                        
                        var_84_2.d = r8_69 - rax_83 + 0x1f
                        
                        if (r8_69 - rax_83 + 0x1f s> r11)
                            var_84_2.d = r11
                    else
                        while (true)
                            int64_t rdx_92 = sx.q(rcx_45)
                            r8_69 += 0x20
                            rcx_45 += 1
                            var_84_2:4.d = r8_69
                            var_98_2 = rcx_45
                            
                            if (rdx_92.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_91 = *(r9_24 + (rdx_92 << 2) + 4)
                            int32_t var_88_7 = 0xffffffff
                            
                            if (rdx_91 != 0)
                                goto label_142163198
                        
                        var_84_2.d = r11
                
                int32_t rdx_93 = *(arg1 + 0x220)
                var_84_2.d = rdx_93
                int32_t r9_25 = 0xffffffff << (rdx_93.b & 0x1f)
                int32_t var_88_8 = r9_25
                int128_t var_48_2 = var_98_2.o
                int32_t r9_27 = rdx_93 & 0xffffffe0
                int32_t r8_72 = rdx_93 s>> 5
                int128_t var_38_2 = 0xffffffff
                int64_t var_58_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                var_78 = (arg1 + 0x1f8).o
                int96_t var_68_2 = var_48_2:8.12
                
                if (rdx_93 != r11)
                    void* rax_85 = *(arg1 + 0x218)
                    void* r10_4 = arg1 + 0x208
                    
                    if (rax_85 != 0)
                        r10_4 = rax_85
                    
                    int32_t temp10_1
                    int32_t temp11_1
                    temp10_1:temp11_1 = sx.q(r11 - 1)
                    int32_t rdx_97 = *(r10_4 + (sx.q(r8_72) << 2)) & r9_25
                    
                    if (rdx_97 != 0)
                    label_142163272:
                        int32_t rax_92 = neg.d(rdx_97) & rdx_97
                        uint64_t rflags_6
                        int32_t temp0_10
                        temp0_10, rflags_6 = _bit_scan_reverse(rax_92)
                        int32_t rax_93
                        
                        if (rax_92 == 0)
                            rax_93 = 0x20
                        else
                            rax_93 = 0x1f - temp0_10
                        
                        var_84_2.d = r9_27 - rax_93 + 0x1f
                        
                        if (r9_27 - rax_93 + 0x1f s> r11)
                            var_84_2.d = r11
                    else
                        while (true)
                            int64_t rcx_50 = sx.q(r8_72)
                            r9_27 += 0x20
                            r8_72 += 1
                            
                            if (rcx_50.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_97 = *(r10_4 + (rcx_50 << 2) + 4)
                            var_88_8 = 0xffffffff
                            
                            if (rdx_97 != 0)
                                goto label_142163272
                        
                        var_84_2.d = r11
                
                while (true)
                    int64_t rax_95 = sx.q(var_5c)
                    int64_t rcx_52 = var_78.q
                    
                    if (rax_95.d == (var_88_8.q u>> 0x20).d && var_68_2.q == arg1 + 0x208
                            && rcx_52 == arg1 + 0x1f8)
                        int64_t r9_30 = *arg2
                        (*(r9_30 + 8))(arg2, sx.q(*(arg1 + 0x250)) * 0x18, 
                            sx.q(*(arg1 + 0x254)) * 0x18, r9_30, var_98_2, arg1 + 0x208, var_88_8)
                        int64_t r9_31 = *arg2
                        (*(r9_31 + 8))(arg2, zx.q(*(arg1 + 0x270) + 0x1f) u>> 5 << 2, 
                            zx.q(*(arg1 + 0x274) + 0x1f) u>> 5 << 2, r9_31)
                        int64_t rdx_107 = sx.q(*(arg1 + 0x290)) << 2
                        (*(*arg2 + 8))(arg2, rdx_107, rdx_107)
                        sub_14213fab0(arg1 + 0x2f0, arg2)
                        (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x368)) << 5, sx.q(*(arg1 + 0x36c)) << 5)
                        int64_t r9_32 = *arg2
                        (*(r9_32 + 8))(arg2, zx.q(*(arg1 + 0x388) + 0x1f) u>> 5 << 2, 
                            zx.q(*(arg1 + 0x38c) + 0x1f) u>> 5 << 2, r9_32)
                        int64_t rdx_116 = sx.q(*(arg1 + 0x3a8)) << 2
                        (*(*arg2 + 8))(arg2, rdx_116, rdx_116)
                        int32_t var_98_3 = 0
                        int32_t r10_5 = *(arg1 + 0x388)
                        int32_t var_94_6 = 1
                        int32_t rcx_62 = 0
                        void* var_90_3 = arg1 + 0x370
                        int32_t var_88_9 = 0xffffffff
                        var_84_2.d = 0
                        var_84_2:4.d = 0
                        
                        if (r10_5 != 0)
                            void* rax_105 = *(arg1 + 0x380)
                            void* r8_89 = arg1 + 0x370
                            
                            if (rax_105 != 0)
                                r8_89 = rax_105
                            
                            int32_t temp12_1
                            int32_t temp13_1
                            temp12_1:temp13_1 = sx.q(r10_5 - 1)
                            int32_t rdx_119 = *r8_89
                            
                            if (rdx_119 != 0)
                            label_142163446:
                                int32_t rax_112 = neg.d(rdx_119) & rdx_119
                                uint64_t rflags_7
                                int32_t temp0_11
                                temp0_11, rflags_7 = _bit_scan_reverse(rax_112)
                                int32_t var_94_7 = rax_112
                                int32_t rax_113
                                
                                if (rax_112 == 0)
                                    rax_113 = 0x20
                                else
                                    rax_113 = 0x1f - temp0_11
                                
                                var_84_2.d = rcx_62 - rax_113 + 0x1f
                                
                                if (rcx_62 - rax_113 + 0x1f s> r10_5)
                                    var_84_2.d = r10_5
                            else
                                while (true)
                                    int64_t rdx_120 = sx.q(rsi_2)
                                    rcx_62 += 0x20
                                    rsi_2 += 1
                                    var_84_2:4.d = rcx_62
                                    var_98_3 = rsi_2
                                    
                                    if (rdx_120.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_119 = *(r8_89 + (rdx_120 << 2) + 4)
                                    int32_t var_88_10 = 0xffffffff
                                    
                                    if (rdx_119 != 0)
                                        goto label_142163446
                                
                                var_84_2.d = r10_5
                        
                        int32_t rdx_122 = *(arg1 + 0x388)
                        int128_t var_38_3 = 0xffffffff
                        int32_t r15_4 = 0xffffffff << (rdx_122.b & 0x1f)
                        int128_t var_48_3 = var_98_3.o
                        int32_t r8_91 = rdx_122 s>> 5
                        int32_t r9_34 = rdx_122 & 0xffffffe0
                        int64_t var_58_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                        int32_t var_88_11 = r15_4
                        var_84_2.d = rdx_122
                        var_78 = (arg1 + 0x360).o
                        int96_t var_68_3 = var_48_3:8.12
                        
                        if (rdx_122 != r10_5)
                            void* rax_115 = *(arg1 + 0x380)
                            void* r10_6 = arg1 + 0x370
                            
                            if (rax_115 != 0)
                                r10_6 = rax_115
                            
                            int32_t temp14_1
                            int32_t temp15_1
                            temp14_1:temp15_1 = sx.q(r10_5 - 1)
                            int32_t rdx_126 = *(r10_6 + (sx.q(r8_91) << 2)) & r15_4
                            
                            if (rdx_126 != 0)
                            label_142163512:
                                int32_t rax_122 = neg.d(rdx_126) & rdx_126
                                uint64_t rflags_8
                                int32_t temp0_13
                                temp0_13, rflags_8 = _bit_scan_reverse(rax_122)
                                int32_t r12_1
                                
                                if (rax_122 == 0)
                                    r12_1 = 0x20
                                else
                                    r12_1 = 0x1f - temp0_13
                                
                                var_84_2.d = r9_34 - r12_1 + 0x1f
                                
                                if (r9_34 - r12_1 + 0x1f s> r10_5)
                                    var_84_2.d = r10_5
                            else
                                while (true)
                                    int64_t rcx_67 = sx.q(r8_91)
                                    r9_34 += 0x20
                                    r8_91 += 1
                                    
                                    if (rcx_67.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_126 = *(r10_6 + (rcx_67 << 2) + 4)
                                    var_88_11 = 0xffffffff
                                    
                                    if (rdx_126 != 0)
                                        goto label_142163512
                                
                                var_84_2.d = r10_5
                        
                        while (true)
                            int64_t rcx_69 = sx.q(var_5c)
                            int64_t* result = var_78.q
                            
                            if (rcx_69.d == (var_88_11.q u>> 0x20).d && var_68_3.q == arg1 + 0x370
                                    && result == arg1 + 0x360)
                                return result
                            
                            int64_t rax_124 = *result
                            int64_t rcx_70 = rcx_69 << 5
                            
                            if (*(rcx_70 + rax_124 + 8) != 0)
                                void* rax_125 = *(rcx_70 + rax_124 + 0x10)
                                
                                if (rax_125 != 0 && *(rax_125 + 8) s> 0)
                                    (*(*arg2 + 8))(arg2, 0x10, 0x10)
                            
                            var_68_3:8.d &= not.d(var_78:0xc.d)
                            sub_14059bdd0(&var_78:8)
                    
                    int64_t r9_29 = *arg2
                    void* rax_97 = (rax_95 << 5) + *rcx_52
                    (*(r9_29 + 8))(arg2, sx.q(*(rax_97 + 8)) * 2, sx.q(*(rax_97 + 0xc)) * 2, r9_29, 
                        var_98_2, arg1 + 0x208, var_88_8)
                    var_68_2:8.d &= not.d(var_78:0xc.d)
                    sub_14059bdd0(&var_78:8)
            
            int64_t rcx_36 = rax_64 * 5
            int64_t rax_65 = *rdx_74
            void* rdi_5 = rax_65 + (rcx_36 << 3)
            (*(*arg2 + 8))(arg2, sx.q(*(rdi_5 + 8)) * 2, sx.q(*(rax_65 + (rcx_36 << 3) + 0xc)) * 2)
            void* rdi_6 = *(rdi_5 + 0x10)
            
            if (rdi_6 != 0)
                (*(*arg2 + 8))(arg2, 0x30, 0x30)
                (*(*arg2 + 8))(arg2, sx.q(*(rdi_6 + 8)) * 2, sx.q(*(rdi_6 + 0xc)) * 2)
                int64_t r9_22 = *arg2
                (*(r9_22 + 8))(arg2, sx.q(*(rdi_6 + 0x20)) * 0x14, sx.q(*(rdi_6 + 0x24)) * 0x14, 
                    r9_22, var_98_1, arg1 + 0x1b8, var_88_5)
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    int64_t r9_12 = *arg2
    void* rdi_3 = rax_32 * 0x60 + *rdx_40
    (*(r9_12 + 8))(arg2, sx.q(*(rdi_3 + 0x10)) * 0xc, sx.q(*(rdi_3 + 0x14)) * 0xc, r9_12, var_98, 
        arg1 + 0x108, var_88_2)
    int64_t r9_13 = *arg2
    (*(r9_13 + 8))(arg2, zx.q(*(rdi_3 + 0x30) + 0x1f) u>> 5 << 2, 
        zx.q(*(rdi_3 + 0x34) + 0x1f) u>> 5 << 2, r9_13)
    int64_t rdx_48 = sx.q(*(rdi_3 + 0x50)) << 2
    (*(*arg2 + 8))(arg2, rdx_48, rdx_48)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
