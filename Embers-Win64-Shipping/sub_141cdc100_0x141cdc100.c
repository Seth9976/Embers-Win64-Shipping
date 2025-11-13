// 函数: sub_141cdc100
// 地址: 0x141cdc100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x28)
int32_t var_94 = 1
int32_t var_98 = 0
void* var_90 = arg1 + 0x10
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int64_t var_84 = 0
int32_t r9 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_141cdc1ba:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_84:4.d = r9
            var_98 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141cdc1ba
        
        var_84.d = r11

int32_t rdx_2 = *(arg1 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_2 s>> 5
int32_t r9_3 = rdx_2 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_2
int128_t result_1 = arg1.o
int96_t var_68 = var_48:8.12

if (rdx_2 != r11)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_2 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_2) << 2)) & r14
    
    if (rdx_6 != 0)
    label_141cdc292:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141cdc292
        
        var_84.d = r11

while (true)
    int64_t rdx_7 = var_68.q
    int32_t var_5c
    
    if (var_5c == (var_88_2.q u>> 0x20).d && rdx_7 == arg1 + 0x10 && result_1.q == arg1)
        int32_t var_94_2 = 1
        int32_t r11_1 = *(arg1 + 0x60)
        void* r9_9 = arg1 + 0x48
        void* var_90_1 = r9_9
        int32_t rcx_14 = 0
        int32_t var_98_1 = 0
        int32_t r8_5 = 0
        int32_t var_88_3 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r11_1 != 0)
            void* rax_30 = *(r9_9 + 0x10)
            
            if (rax_30 != 0)
                r9_9 = rax_30
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_12 = *r9_9
            
            if (rdx_12 != 0)
            label_141cdc408:
                int32_t rax_37 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_37)
                int32_t var_94_3 = rax_37
                int32_t rax_38
                
                if (rax_37 == 0)
                    rax_38 = 0x20
                else
                    rax_38 = 0x1f - temp0_5
                
                var_84_1.d = r8_5 - rax_38 + 0x1f
                
                if (r8_5 - rax_38 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rdx_13 = sx.q(rcx_14)
                    r8_5 += 0x20
                    rcx_14 += 1
                    var_84_1:4.d = r8_5
                    var_98_1 = rcx_14
                    
                    if (rdx_13.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_12 = *(r9_9 + (rdx_13 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_141cdc408
                
                var_84_1.d = r11_1
        
        int32_t rdx_14 = *(arg1 + 0x60)
        int32_t rdi_1 = *(arg1 + 0x60)
        int128_t var_38_1 = 0xffffffff
        int128_t var_48_1 = var_98_1.o
        int32_t r14_1 = 0xffffffff << (rdx_14.b & 0x1f)
        int32_t r8_8 = rdx_14 s>> 5
        int32_t r9_11 = rdx_14 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = r14_1
        var_84_1.d = rdx_14
        result_1 = (arg1 + 0x38).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_14 != rdi_1)
            void* rax_40 = *(arg1 + 0x58)
            void* r10_6 = arg1 + 0x48
            
            if (rax_40 != 0)
                r10_6 = rax_40
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rdi_1 - 1)
            int32_t rdx_18 = *(r10_6 + (sx.q(r8_8) << 2)) & r14_1
            
            if (rdx_18 != 0)
            label_141cdc4e2:
                int32_t rax_47 = neg.d(rdx_18) & rdx_18
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_47)
                int32_t rax_48
                
                if (rax_47 == 0)
                    rax_48 = 0x20
                else
                    rax_48 = 0x1f - temp0_7
                
                var_84_1.d = r9_11 - rax_48 + 0x1f
                
                if (r9_11 - rax_48 + 0x1f s> rdi_1)
                    var_84_1.d = rdi_1
            else
                while (true)
                    int64_t rcx_19 = sx.q(r8_8)
                    r9_11 += 0x20
                    r8_8 += 1
                    
                    if (rcx_19.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_18 = *(r10_6 + (rcx_19 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_18 != 0)
                        goto label_141cdc4e2
                
                var_84_1.d = rdi_1
        
        while (true)
            int64_t rdx_19 = var_68_1.q
            
            if (var_5c == (var_88_5.q u>> 0x20).d && rdx_19 == arg1 + 0x48
                    && result_1.q == arg1 + 0x38)
                int32_t var_94_4 = 1
                int32_t r11_2 = *(arg1 + 0x98)
                void* r9_15 = arg1 + 0x80
                void* var_90_2 = r9_15
                int32_t rcx_28 = 0
                int32_t var_98_2 = 0
                int32_t r8_11 = 0
                int32_t var_88_6 = 0xffffffff
                int64_t var_84_2 = 0
                
                if (r11_2 != 0)
                    void* rax_58 = *(r9_15 + 0x10)
                    
                    if (rax_58 != 0)
                        r9_15 = rax_58
                    
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(r11_2 - 1)
                    int32_t rdx_24 = *r9_15
                    
                    if (rdx_24 != 0)
                    label_141cdc638:
                        int32_t rax_65 = neg.d(rdx_24) & rdx_24
                        uint64_t rflags_5
                        int32_t temp0_8
                        temp0_8, rflags_5 = _bit_scan_reverse(rax_65)
                        int32_t var_94_5 = rax_65
                        int32_t rax_66
                        
                        if (rax_65 == 0)
                            rax_66 = 0x20
                        else
                            rax_66 = 0x1f - temp0_8
                        
                        var_84_2.d = r8_11 - rax_66 + 0x1f
                        
                        if (r8_11 - rax_66 + 0x1f s> r11_2)
                            var_84_2.d = r11_2
                    else
                        while (true)
                            int64_t rdx_25 = sx.q(rcx_28)
                            r8_11 += 0x20
                            rcx_28 += 1
                            var_84_2:4.d = r8_11
                            var_98_2 = rcx_28
                            
                            if (rdx_25.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_24 = *(r9_15 + (rdx_25 << 2) + 4)
                            int32_t var_88_7 = 0xffffffff
                            
                            if (rdx_24 != 0)
                                goto label_141cdc638
                        
                        var_84_2.d = r11_2
                
                int32_t rdx_26 = *(arg1 + 0x98)
                int32_t rdi_4 = *(arg1 + 0x98)
                int128_t var_38_2 = 0xffffffff
                int128_t var_48_2 = var_98_2.o
                int32_t r14_2 = 0xffffffff << (rdx_26.b & 0x1f)
                int32_t r8_14 = rdx_26 s>> 5
                int32_t r9_17 = rdx_26 & 0xffffffe0
                int64_t var_58_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int32_t var_88_8 = r14_2
                var_84_2.d = rdx_26
                result_1 = (arg1 + 0x70).o
                int96_t var_68_2 = var_48_2:8.12
                
                if (rdx_26 != rdi_4)
                    void* rax_68 = *(arg1 + 0x90)
                    void* r10_7 = arg1 + 0x80
                    
                    if (rax_68 != 0)
                        r10_7 = rax_68
                    
                    int32_t temp10_1
                    int32_t temp11_1
                    temp10_1:temp11_1 = sx.q(rdi_4 - 1)
                    int32_t rdx_30 = *(r10_7 + (sx.q(r8_14) << 2)) & r14_2
                    
                    if (rdx_30 != 0)
                    label_141cdc712:
                        int32_t rax_75 = neg.d(rdx_30) & rdx_30
                        uint64_t rflags_6
                        int32_t temp0_10
                        temp0_10, rflags_6 = _bit_scan_reverse(rax_75)
                        int32_t rax_76
                        
                        if (rax_75 == 0)
                            rax_76 = 0x20
                        else
                            rax_76 = 0x1f - temp0_10
                        
                        var_84_2.d = r9_17 - rax_76 + 0x1f
                        
                        if (r9_17 - rax_76 + 0x1f s> rdi_4)
                            var_84_2.d = rdi_4
                    else
                        while (true)
                            int64_t rcx_33 = sx.q(r8_14)
                            r9_17 += 0x20
                            r8_14 += 1
                            
                            if (rcx_33.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_30 = *(r10_7 + (rcx_33 << 2) + 4)
                            var_88_8 = 0xffffffff
                            
                            if (rdx_30 != 0)
                                goto label_141cdc712
                        
                        var_84_2.d = rdi_4
                
                while (true)
                    int64_t rdx_31 = var_68_2.q
                    
                    if (var_5c == (var_88_8.q u>> 0x20).d && rdx_31 == arg1 + 0x80
                            && result_1.q == arg1 + 0x70)
                        int32_t var_94_6 = 1
                        int32_t r11_3 = *(arg1 + 0xd0)
                        void* r9_21 = arg1 + 0xb8
                        void* var_90_3 = r9_21
                        int32_t rcx_44 = 0
                        int32_t var_98_3 = 0
                        int32_t r8_17 = 0
                        int32_t var_88_9 = 0xffffffff
                        int64_t var_84_3 = 0
                        
                        if (r11_3 != 0)
                            void* rax_87 = *(r9_21 + 0x10)
                            
                            if (rax_87 != 0)
                                r9_21 = rax_87
                            
                            int32_t temp12_1
                            int32_t temp13_1
                            temp12_1:temp13_1 = sx.q(r11_3 - 1)
                            int32_t rdx_36 = *r9_21
                            
                            if (rdx_36 != 0)
                            label_141cdc878:
                                int32_t rax_94 = neg.d(rdx_36) & rdx_36
                                uint64_t rflags_7
                                int32_t temp0_11
                                temp0_11, rflags_7 = _bit_scan_reverse(rax_94)
                                int32_t var_94_7 = rax_94
                                int32_t rax_95
                                
                                if (rax_94 == 0)
                                    rax_95 = 0x20
                                else
                                    rax_95 = 0x1f - temp0_11
                                
                                var_84_3.d = r8_17 - rax_95 + 0x1f
                                
                                if (r8_17 - rax_95 + 0x1f s> r11_3)
                                    var_84_3.d = r11_3
                            else
                                while (true)
                                    int64_t rdx_37 = sx.q(rcx_44)
                                    r8_17 += 0x20
                                    rcx_44 += 1
                                    var_84_3:4.d = r8_17
                                    var_98_3 = rcx_44
                                    
                                    if (rdx_37.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_36 = *(r9_21 + (rdx_37 << 2) + 4)
                                    int32_t var_88_10 = 0xffffffff
                                    
                                    if (rdx_36 != 0)
                                        goto label_141cdc878
                                
                                var_84_3.d = r11_3
                        
                        int32_t rdx_38 = *(arg1 + 0xd0)
                        int32_t rsi_4 = *(arg1 + 0xd0)
                        int128_t var_38_3 = 0xffffffff
                        int128_t var_48_3 = var_98_3.o
                        int32_t r14_3 = 0xffffffff << (rdx_38.b & 0x1f)
                        int32_t r8_20 = rdx_38 s>> 5
                        int32_t r9_23 = rdx_38 & 0xffffffe0
                        int64_t var_58_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                        int32_t var_88_11 = r14_3
                        var_84_3.d = rdx_38
                        result_1 = (arg1 + 0xa8).o
                        int96_t var_68_3 = var_48_3:8.12
                        
                        if (rdx_38 != rsi_4)
                            void* rax_97 = *(arg1 + 0xc8)
                            void* r10_8 = arg1 + 0xb8
                            
                            if (rax_97 != 0)
                                r10_8 = rax_97
                            
                            int32_t temp14_1
                            int32_t temp15_1
                            temp14_1:temp15_1 = sx.q(rsi_4 - 1)
                            int32_t rdx_42 = *(r10_8 + (sx.q(r8_20) << 2)) & r14_3
                            
                            if (rdx_42 != 0)
                            label_141cdc952:
                                int32_t rax_104 = neg.d(rdx_42) & rdx_42
                                uint64_t rflags_8
                                int32_t temp0_13
                                temp0_13, rflags_8 = _bit_scan_reverse(rax_104)
                                int32_t rax_105
                                
                                if (rax_104 == 0)
                                    rax_105 = 0x20
                                else
                                    rax_105 = 0x1f - temp0_13
                                
                                var_84_3.d = r9_23 - rax_105 + 0x1f
                                
                                if (r9_23 - rax_105 + 0x1f s> rsi_4)
                                    var_84_3.d = rsi_4
                            else
                                while (true)
                                    int64_t rcx_49 = sx.q(r8_20)
                                    r9_23 += 0x20
                                    r8_20 += 1
                                    
                                    if (rcx_49.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_42 = *(r10_8 + (rcx_49 << 2) + 4)
                                    var_88_11 = 0xffffffff
                                    
                                    if (rdx_42 != 0)
                                        goto label_141cdc952
                                
                                var_84_3.d = rsi_4
                        
                        while (true)
                            int64_t rdx_43 = var_68_3.q
                            
                            if (var_5c == (var_88_11.q u>> 0x20).d && rdx_43 == arg1 + 0xb8
                                    && result_1.q == arg1 + 0xa8)
                                int32_t rcx_57 = 0
                                int32_t var_94_8 = 1
                                int32_t var_98_4 = 0
                                int32_t r8_22 = 0
                                int32_t var_88_12 = 0xffffffff
                                int64_t var_84_4 = 0
                                int32_t r11_4 = *(arg1 + 0x108)
                                void* r9_26 = arg1 + 0xf0
                                void* var_90_4 = r9_26
                                
                                if (r11_4 != 0)
                                    void* rax_112 = *(r9_26 + 0x10)
                                    
                                    if (rax_112 != 0)
                                        r9_26 = rax_112
                                    
                                    int32_t temp16_1
                                    int32_t temp17_1
                                    temp16_1:temp17_1 = sx.q(r11_4 - 1)
                                    int32_t rdx_49 = *r9_26
                                    
                                    if (rdx_49 != 0)
                                    label_141cdca98:
                                        int32_t rax_119 = neg.d(rdx_49) & rdx_49
                                        uint64_t rflags_9
                                        int32_t temp0_14
                                        temp0_14, rflags_9 = _bit_scan_reverse(rax_119)
                                        int32_t var_94_9 = rax_119
                                        int32_t rax_120
                                        
                                        if (rax_119 == 0)
                                            rax_120 = 0x20
                                        else
                                            rax_120 = 0x1f - temp0_14
                                        
                                        var_84_4.d = r8_22 - rax_120 + 0x1f
                                        
                                        if (r8_22 - rax_120 + 0x1f s> r11_4)
                                            var_84_4.d = r11_4
                                    else
                                        while (true)
                                            int64_t rdx_50 = sx.q(rcx_57)
                                            r8_22 += 0x20
                                            rcx_57 += 1
                                            var_84_4:4.d = r8_22
                                            var_98_4 = rcx_57
                                            
                                            if (rdx_50.d s>= (temp17_1 + (temp16_1 & 0x1f)) s>> 5)
                                                break
                                            
                                            rdx_49 = *(r9_26 + (rdx_50 << 2) + 4)
                                            int32_t var_88_13 = 0xffffffff
                                            
                                            if (rdx_49 != 0)
                                                goto label_141cdca98
                                        
                                        var_84_4.d = r11_4
                                
                                int32_t rdx_51 = *(arg1 + 0x108)
                                int32_t rdi_8 = *(arg1 + 0x108)
                                int128_t var_38_4 = 0xffffffff
                                int128_t var_48_4 = var_98_4.o
                                int32_t rsi_7 = 0xffffffff << (rdx_51.b & 0x1f)
                                int32_t r8_25 = rdx_51 s>> 5
                                int32_t r9_28 = rdx_51 & 0xffffffe0
                                int64_t var_58_4 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                                int32_t var_88_14 = rsi_7
                                var_84_4.d = rdx_51
                                result_1 = (arg1 + 0xe0).o
                                int96_t var_68_4 = var_48_4:8.12
                                
                                if (rdx_51 != rdi_8)
                                    void* rax_122 = *(arg1 + 0x100)
                                    void* r10_10 = arg1 + 0xf0
                                    
                                    if (rax_122 != 0)
                                        r10_10 = rax_122
                                    
                                    int32_t temp18_1
                                    int32_t temp19_1
                                    temp18_1:temp19_1 = sx.q(rdi_8 - 1)
                                    int32_t rdx_55 = *(r10_10 + (sx.q(r8_25) << 2)) & rsi_7
                                    
                                    if (rdx_55 != 0)
                                    label_141cdcb72:
                                        int32_t rax_129 = neg.d(rdx_55) & rdx_55
                                        uint64_t rflags_10
                                        int32_t temp0_16
                                        temp0_16, rflags_10 = _bit_scan_reverse(rax_129)
                                        int32_t rax_130
                                        
                                        if (rax_129 == 0)
                                            rax_130 = 0x20
                                        else
                                            rax_130 = 0x1f - temp0_16
                                        
                                        var_84_4.d = r9_28 - rax_130 + 0x1f
                                        
                                        if (r9_28 - rax_130 + 0x1f s> rdi_8)
                                            var_84_4.d = rdi_8
                                    else
                                        while (true)
                                            int64_t rcx_62 = sx.q(r8_25)
                                            r9_28 += 0x20
                                            r8_25 += 1
                                            
                                            if (rcx_62.d s>= (temp19_1 + (temp18_1 & 0x1f)) s>> 5)
                                                break
                                            
                                            rdx_55 = *(r10_10 + (rcx_62 << 2) + 4)
                                            var_88_14 = 0xffffffff
                                            
                                            if (rdx_55 != 0)
                                                goto label_141cdcb72
                                        
                                        var_84_4.d = rdi_8
                                
                                while (true)
                                    int64_t rdx_56 = var_68_4.q
                                    
                                    if (var_5c == (var_88_14.q u>> 0x20).d && rdx_56 == arg1 + 0xf0
                                            && result_1.q == arg1 + 0xe0)
                                        int32_t var_94_10 = 1
                                        int32_t r11_5 = *(arg1 + 0x140)
                                        void* r9_34 = arg1 + 0x128
                                        void* var_90_5 = r9_34
                                        int32_t rcx_73 = 0
                                        int32_t var_98_5 = 0
                                        int32_t r8_28 = 0
                                        int32_t var_88_15 = 0xffffffff
                                        int64_t var_84_5 = 0
                                        
                                        if (r11_5 != 0)
                                            void* rax_143 = *(r9_34 + 0x10)
                                            
                                            if (rax_143 != 0)
                                                r9_34 = rax_143
                                            
                                            int32_t temp20_1
                                            int32_t temp21_1
                                            temp20_1:temp21_1 = sx.q(r11_5 - 1)
                                            int32_t rdx_62 = *r9_34
                                            
                                            if (rdx_62 != 0)
                                            label_141cdcd08:
                                                int32_t rax_150 = neg.d(rdx_62) & rdx_62
                                                uint64_t rflags_11
                                                int32_t temp0_17
                                                temp0_17, rflags_11 = _bit_scan_reverse(rax_150)
                                                int32_t var_94_11 = rax_150
                                                int32_t rax_151
                                                
                                                if (rax_150 == 0)
                                                    rax_151 = 0x20
                                                else
                                                    rax_151 = 0x1f - temp0_17
                                                
                                                var_84_5.d = r8_28 - rax_151 + 0x1f
                                                
                                                if (r8_28 - rax_151 + 0x1f s> r11_5)
                                                    var_84_5.d = r11_5
                                            else
                                                while (true)
                                                    int64_t rdx_63 = sx.q(rcx_73)
                                                    r8_28 += 0x20
                                                    rcx_73 += 1
                                                    var_84_5:4.d = r8_28
                                                    var_98_5 = rcx_73
                                                    
                                                    if (rdx_63.d s>= (temp21_1 + (temp20_1 & 0x1f))
                                                            s>> 5)
                                                        break
                                                    
                                                    rdx_62 = *(r9_34 + (rdx_63 << 2) + 4)
                                                    int32_t var_88_16 = 0xffffffff
                                                    
                                                    if (rdx_62 != 0)
                                                        goto label_141cdcd08
                                                
                                                var_84_5.d = r11_5
                                        
                                        int32_t rdx_64 = *(arg1 + 0x140)
                                        int32_t rsi_8 = *(arg1 + 0x140)
                                        int128_t var_38_5 = 0xffffffff
                                        int128_t var_48_5 = var_98_5.o
                                        int32_t r15_4 = 0xffffffff << (rdx_64.b & 0x1f)
                                        int128_t result = (arg1 + 0x118).o
                                        int32_t r8_31 = rdx_64 s>> 5
                                        int32_t r9_36 = rdx_64 & 0xffffffe0
                                        int64_t var_58_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                                        int32_t var_88_17 = r15_4
                                        var_84_5.d = rdx_64
                                        result_1 = result
                                        int96_t var_68_5 = var_48_5:8.12
                                        
                                        if (rdx_64 != rsi_8)
                                            void* rax_153 = *(arg1 + 0x138)
                                            void* r10_12 = arg1 + 0x128
                                            
                                            if (rax_153 != 0)
                                                r10_12 = rax_153
                                            
                                            int32_t temp22_1
                                            int32_t temp23_1
                                            temp22_1:temp23_1 = sx.q(rsi_8 - 1)
                                            int32_t rdx_68 = *(r10_12 + (sx.q(r8_31) << 2)) & r15_4
                                            
                                            if (rdx_68 != 0)
                                            label_141cdcde2:
                                                int32_t rax_160 = neg.d(rdx_68) & rdx_68
                                                uint64_t rflags_12
                                                int32_t temp0_19
                                                temp0_19, rflags_12 = _bit_scan_reverse(rax_160)
                                                int32_t r12_1
                                                
                                                if (rax_160 == 0)
                                                    r12_1 = 0x20
                                                else
                                                    r12_1 = 0x1f - temp0_19
                                                
                                                var_84_5.d = r9_36 - r12_1 + 0x1f
                                                
                                                if (r9_36 - r12_1 + 0x1f s> rsi_8)
                                                    var_84_5.d = rsi_8
                                            else
                                                while (true)
                                                    int64_t rcx_78 = sx.q(r8_31)
                                                    r9_36 += 0x20
                                                    r8_31 += 1
                                                    
                                                    if (rcx_78.d s>= (temp23_1 + (temp22_1 & 0x1f))
                                                            s>> 5)
                                                        break
                                                    
                                                    rdx_68 = *(r10_12 + (rcx_78 << 2) + 4)
                                                    var_88_17 = 0xffffffff
                                                    
                                                    if (rdx_68 != 0)
                                                        goto label_141cdcde2
                                                
                                                var_84_5.d = rsi_8
                                        
                                        while (true)
                                            int64_t rdx_69 = var_68_5.q
                                            
                                            if (var_5c == (var_88_17.q u>> 0x20).d
                                                    && rdx_69 == arg1 + 0x128
                                                    && result_1.q == arg1 + 0x118)
                                                return result
                                            
                                            int64_t r8_32 = 0
                                            int32_t rax_162 = data_143a1c6c4
                                            
                                            if (var_5c s< *(rdx_69 + 0x18))
                                                rax_162 = var_5c
                                            
                                            int64_t* rcx_83 = (sx.q(rax_162) << 4) + *(arg1 + 0x118)
                                            int32_t* rdx_70 = *rcx_83
                                            uint64_t r9_39 = sx.q(rcx_83[1].d) << 2 u>> 2
                                            
                                            if (rdx_70 u> &rdx_70[rcx_83[1]])
                                                r9_39 = 0
                                            
                                            if (r9_39 != 0)
                                                do
                                                    int64_t rcx_84 = sx.q(*rdx_70)
                                                    rdx_70 = &rdx_70[1]
                                                    r8_32 += 1
                                                    rdx_70[-1] = *(arg2[0x1c] + (rcx_84 << 3))
                                                while (r8_32 != r9_39)
                                            
                                            var_68_5:8.d &= not.d(result_1:0xc.d)
                                            sub_14059bdd0(&result_1:8)
                                    
                                    int64_t r8_26 = 0
                                    int32_t rax_132 = data_143a1c6c8
                                    
                                    if (var_5c s< *(rdx_56 + 0x18))
                                        rax_132 = var_5c
                                    
                                    int64_t rax_133 = *(arg1 + 0xe0)
                                    int64_t rdx_57 = sx.q(rax_132) * 5
                                    int64_t* r10_11 = rax_133 + (rdx_57 << 3)
                                    int32_t* rdx_58 = *r10_11
                                    uint64_t r9_31 = sx.q(*(rax_133 + (rdx_57 << 3) + 8)) << 2 u>> 2
                                    
                                    if (rdx_58 u> &rdx_58[sx.q(*(rax_133 + (rdx_57 << 3) + 8))])
                                        r9_31 = 0
                                    
                                    if (r9_31 != 0)
                                        do
                                            int64_t rcx_66 = sx.q(*rdx_58)
                                            rdx_58 = &rdx_58[1]
                                            r8_26 += 1
                                            rdx_58[-1] = *(arg2[7] + (rcx_66 << 3))
                                        while (r8_26 != r9_31)
                                    
                                    int64_t r8_27 = 0
                                    int32_t* rdx_59 = r10_11[2]
                                    uint64_t r9_33 = sx.q(r10_11[3].d) << 2 u>> 2
                                    
                                    if (rdx_59 u> &rdx_59[r10_11[3]])
                                        r9_33 = 0
                                    
                                    if (r9_33 != 0)
                                        do
                                            int64_t rcx_68 = sx.q(*rdx_59)
                                            rdx_59 = &rdx_59[1]
                                            r8_27 += 1
                                            rdx_59[-1] = *(arg2[0x15] + (rcx_68 << 3))
                                        while (r8_27 != r9_33)
                                    
                                    r10_11[4].d = *(arg2[0x23] + (sx.q(r10_11[4].d) << 3))
                                    var_68_4:8.d &= not.d(result_1:0xc.d)
                                    sub_14059bdd0(&result_1:8)
                            
                            int64_t r9_25 = 3
                            int32_t rax_107 = data_143a1c6c0
                            int64_t r8_21 = 0
                            
                            if (var_5c s< *(rdx_43 + 0x18))
                                rax_107 = var_5c
                            
                            int32_t* rdx_46 = (sx.q(rax_107) << 4) + *(arg1 + 0xa8)
                            void* r10_9 = &rdx_46[3]
                            
                            if (rdx_46 u> r10_9)
                                r9_25 = 0
                            
                            if (rdx_46 u<= r10_9)
                                do
                                    int64_t rcx_52 = sx.q(*rdx_46)
                                    rdx_46 = &rdx_46[1]
                                    r8_21 += 1
                                    rdx_46[-1] = *(arg2[7] + (rcx_52 << 3))
                                while (r8_21 != r9_25)
                            
                            int32_t rax_111 = not.d(result_1:0xc.d)
                            *r10_9 = *(arg2[0x1c] + (sx.q(*r10_9) << 3))
                            var_68_3:8.d &= rax_111
                            sub_14059bdd0(&result_1:8)
                    
                    int32_t rax_78 = data_143a1c6bc
                    
                    if (var_5c s< *(rdx_31 + 0x18))
                        rax_78 = var_5c
                    
                    int64_t rax_79 = *(arg1 + 0x70)
                    int64_t rdx_32 = sx.q(rax_78) * 3
                    int32_t* r8_15 = rax_79 + (rdx_32 << 3)
                    *r8_15 = *(*arg2 + (sx.q(*(rax_79 + (rdx_32 << 3))) << 3))
                    r8_15[1] = *(*arg2 + (sx.q(r8_15[1]) << 3))
                    int32_t* rdx_33 = *(r8_15 + 8)
                    int64_t r8_16 = 0
                    uint64_t r9_20 = sx.q(r8_15[4]) << 2 u>> 2
                    
                    if (rdx_33 u> &rdx_33[sx.q(r8_15[4])])
                        r9_20 = 0
                    
                    if (r9_20 != 0)
                        do
                            int64_t rcx_41 = sx.q(*rdx_33)
                            rdx_33 = &rdx_33[1]
                            r8_16 += 1
                            rdx_33[-1] = *(arg2[0x15] + (rcx_41 << 3))
                        while (r8_16 != r9_20)
                    
                    var_68_2:8.d &= not.d(result_1:0xc.d)
                    sub_14059bdd0(&result_1:8)
            
            int32_t rax_50 = data_143a1c6b8
            
            if (var_5c s< *(rdx_19 + 0x18))
                rax_50 = var_5c
            
            int64_t rax_51 = *(arg1 + 0x38)
            int64_t rdx_20 = sx.q(rax_50) * 3
            int32_t* r8_9 = rax_51 + (rdx_20 << 3)
            *r8_9 = *(*arg2 + (sx.q(*(rax_51 + (rdx_20 << 3))) << 3))
            int32_t* rdx_21 = *(r8_9 + 8)
            int64_t r8_10 = 0
            uint64_t r9_14 = sx.q(r8_9[4]) << 2 u>> 2
            
            if (rdx_21 u> &rdx_21[sx.q(r8_9[4])])
                r9_14 = 0
            
            if (r9_14 != 0)
                do
                    int64_t rcx_25 = sx.q(*rdx_21)
                    rdx_21 = &rdx_21[1]
                    r8_10 += 1
                    rdx_21[-1] = *(arg2[0x15] + (rcx_25 << 3))
                while (r8_10 != r9_14)
            
            var_68_1:8.d &= not.d(result_1:0xc.d)
            sub_14059bdd0(&result_1:8)
    
    int64_t r8_3 = 0
    int32_t rax_21 = data_143a1c6b4
    
    if (var_5c s< *(rdx_7 + 0x18))
        rax_21 = var_5c
    
    int64_t* r10_5 = (sx.q(rax_21) << 5) + *arg1
    int32_t* rdx_8 = *r10_5
    uint64_t r9_6 = sx.q(r10_5[1].d) << 2 u>> 2
    
    if (rdx_8 u> &rdx_8[r10_5[1]])
        r9_6 = 0
    
    if (r9_6 != 0)
        do
            int64_t rcx_9 = sx.q(*rdx_8)
            rdx_8 = &rdx_8[1]
            r8_3 += 1
            rdx_8[-1] = *(arg2[7] + (rcx_9 << 3))
        while (r8_3 != r9_6)
    
    int64_t r8_4 = 0
    int32_t* rdx_9 = r10_5[2]
    uint64_t r9_8 = sx.q(r10_5[3].d) << 2 u>> 2
    
    if (rdx_9 u> &rdx_9[r10_5[3]])
        r9_8 = 0
    
    if (r9_8 != 0)
        do
            int64_t rcx_11 = sx.q(*rdx_9)
            rdx_9 = &rdx_9[1]
            r8_4 += 1
            rdx_9[-1] = *(arg2[0xe] + (rcx_11 << 3))
        while (r8_4 != r9_8)
    
    var_68:8.d &= not.d(result_1:0xc.d)
    sub_14059bdd0(&result_1:8)
