// 函数: sub_140d3eba0
// 地址: 0x140d3eba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)

if (sub_140d3aab0(arg1 + 0x28) != 0)
    sub_1408076e0(arg1 + 0x28)

int32_t r11 = *(arg1 + 0x50)
int32_t rdi = 0
int32_t var_94 = 1
void* var_90 = arg1 + 0x38
int32_t rcx_3 = 0
int32_t var_98 = 0
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x48)
    void* r9_1 = arg1 + 0x38
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140d3ec68:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_3)
            r8 += 0x20
            rcx_3 += 1
            var_84:4.d = r8
            var_98 = rcx_3
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140d3ec68
        
        var_84.d = r11

int32_t rdx_5 = *(arg1 + 0x50)
int128_t var_38 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = rsi
var_84.d = rdx_5
int128_t var_78 = (arg1 + 0x28).o
int96_t var_68 = var_48:8.12

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x48)
    void* r10_1 = arg1 + 0x38
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_140d3ed32:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
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
            int64_t rcx_8 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_8 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140d3ed32
        
        var_84.d = r11

while (true)
    int32_t result_1
    int64_t result_2 = sx.q(result_1)
    int64_t* rcx_10 = var_78.q
    
    if (result_2.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x38 && rcx_10 == arg1 + 0x28)
        if (sub_140a6c1e0(arg1 + 0x78) != 0)
            sub_140772110(arg1 + 0x78)
        
        if (sub_140d3aab0(arg1 + 0xc8) != 0)
            sub_1405c0690(arg1 + 0xc8)
        
        int32_t r11_1 = *(arg1 + 0xf0)
        int32_t var_94_2 = 1
        int32_t rcx_18 = 0
        int32_t var_98_1 = 0
        int32_t r8_4 = 0
        void* var_90_1 = arg1 + 0xd8
        int32_t var_88_3 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r11_1 != 0)
            void* rax_27 = *(arg1 + 0xe8)
            void* r9_5 = arg1 + 0xd8
            
            if (rax_27 != 0)
                r9_5 = rax_27
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_13 = *r9_5
            
            if (rdx_13 != 0)
            label_140d3ee68:
                int32_t rax_34 = neg.d(rdx_13) & rdx_13
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_34)
                int32_t var_94_3 = rax_34
                int32_t rax_35
                
                if (rax_34 == 0)
                    rax_35 = 0x20
                else
                    rax_35 = 0x1f - temp0_5
                
                var_84_1.d = r8_4 - rax_35 + 0x1f
                
                if (r8_4 - rax_35 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rdx_14 = sx.q(rcx_18)
                    r8_4 += 0x20
                    rcx_18 += 1
                    var_84_1:4.d = r8_4
                    var_98_1 = rcx_18
                    
                    if (rdx_14.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_13 = *(r9_5 + (rdx_14 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_13 != 0)
                        goto label_140d3ee68
                
                var_84_1.d = r11_1
        
        int32_t rdx_15 = *(arg1 + 0xf0)
        int128_t var_38_1 = 0xffffffff
        int32_t rsi_3 = 0xffffffff << (rdx_15.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_7 = rdx_15 s>> 5
        int32_t r9_7 = rdx_15 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = rsi_3
        var_84_1.d = rdx_15
        var_78 = (arg1 + 0xc8).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_15 != r11_1)
            void* rax_37 = *(arg1 + 0xe8)
            void* r10_2 = arg1 + 0xd8
            
            if (rax_37 != 0)
                r10_2 = rax_37
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_19 = *(r10_2 + (sx.q(r8_7) << 2)) & rsi_3
            
            if (rdx_19 != 0)
            label_140d3ef32:
                int32_t rax_44 = neg.d(rdx_19) & rdx_19
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_44)
                int32_t rax_45
                
                if (rax_44 == 0)
                    rax_45 = 0x20
                else
                    rax_45 = 0x1f - temp0_7
                
                var_84_1.d = r9_7 - rax_45 + 0x1f
                
                if (r9_7 - rax_45 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rcx_23 = sx.q(r8_7)
                    r9_7 += 0x20
                    r8_7 += 1
                    
                    if (rcx_23.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_19 = *(r10_2 + (rcx_23 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_19 != 0)
                        goto label_140d3ef32
                
                var_84_1.d = r11_1
        
        while (true)
            int64_t result_3 = sx.q(result_1)
            int64_t* rcx_25 = var_78.q
            
            if (result_3.d == (var_88_5.q u>> 0x20).d && var_68_1.q == arg1 + 0xd8
                    && rcx_25 == arg1 + 0xc8)
                if (sub_140d3aab0(arg1 + 0x118) != 0)
                    sub_1405c0690(arg1 + 0x118)
                
                int32_t r11_2 = *(arg1 + 0x140)
                int32_t var_94_4 = 1
                int32_t rcx_31 = 0
                int32_t var_98_2 = 0
                int32_t r8_8 = 0
                void* var_90_2 = arg1 + 0x128
                int32_t var_88_6 = 0xffffffff
                int64_t var_84_2 = 0
                
                if (r11_2 != 0)
                    void* rax_52 = *(arg1 + 0x138)
                    void* r9_9 = arg1 + 0x128
                    
                    if (rax_52 != 0)
                        r9_9 = rax_52
                    
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(r11_2 - 1)
                    int32_t rdx_23 = *r9_9
                    
                    if (rdx_23 != 0)
                    label_140d3f048:
                        int32_t rax_59 = neg.d(rdx_23) & rdx_23
                        uint64_t rflags_5
                        int32_t temp0_8
                        temp0_8, rflags_5 = _bit_scan_reverse(rax_59)
                        int32_t var_94_5 = rax_59
                        int32_t rax_60
                        
                        if (rax_59 == 0)
                            rax_60 = 0x20
                        else
                            rax_60 = 0x1f - temp0_8
                        
                        var_84_2.d = r8_8 - rax_60 + 0x1f
                        
                        if (r8_8 - rax_60 + 0x1f s> r11_2)
                            var_84_2.d = r11_2
                    else
                        while (true)
                            int64_t rdx_24 = sx.q(rcx_31)
                            r8_8 += 0x20
                            rcx_31 += 1
                            var_84_2:4.d = r8_8
                            var_98_2 = rcx_31
                            
                            if (rdx_24.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_23 = *(r9_9 + (rdx_24 << 2) + 4)
                            int32_t var_88_7 = 0xffffffff
                            
                            if (rdx_23 != 0)
                                goto label_140d3f048
                        
                        var_84_2.d = r11_2
                
                int32_t rdx_25 = *(arg1 + 0x140)
                int128_t var_38_2 = 0xffffffff
                int32_t rsi_6 = 0xffffffff << (rdx_25.b & 0x1f)
                int128_t var_48_2 = var_98_2.o
                int32_t r8_11 = rdx_25 s>> 5
                int32_t r9_11 = rdx_25 & 0xffffffe0
                int64_t var_58_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int32_t var_88_8 = rsi_6
                var_84_2.d = rdx_25
                var_78 = (arg1 + 0x118).o
                int96_t var_68_2 = var_48_2:8.12
                
                if (rdx_25 != r11_2)
                    void* rax_62 = *(arg1 + 0x138)
                    void* r10_3 = arg1 + 0x128
                    
                    if (rax_62 != 0)
                        r10_3 = rax_62
                    
                    int32_t temp10_1
                    int32_t temp11_1
                    temp10_1:temp11_1 = sx.q(r11_2 - 1)
                    int32_t rdx_29 = *(r10_3 + (sx.q(r8_11) << 2)) & rsi_6
                    
                    if (rdx_29 != 0)
                    label_140d3f112:
                        int32_t rax_69 = neg.d(rdx_29) & rdx_29
                        uint64_t rflags_6
                        int32_t temp0_10
                        temp0_10, rflags_6 = _bit_scan_reverse(rax_69)
                        int32_t rax_70
                        
                        if (rax_69 == 0)
                            rax_70 = 0x20
                        else
                            rax_70 = 0x1f - temp0_10
                        
                        var_84_2.d = r9_11 - rax_70 + 0x1f
                        
                        if (r9_11 - rax_70 + 0x1f s> r11_2)
                            var_84_2.d = r11_2
                    else
                        while (true)
                            int64_t rcx_36 = sx.q(r8_11)
                            r9_11 += 0x20
                            r8_11 += 1
                            
                            if (rcx_36.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_29 = *(r10_3 + (rcx_36 << 2) + 4)
                            var_88_8 = 0xffffffff
                            
                            if (rdx_29 != 0)
                                goto label_140d3f112
                        
                        var_84_2.d = r11_2
                
                while (true)
                    int64_t result_4 = sx.q(result_1)
                    int64_t* rcx_38 = var_78.q
                    
                    if (result_4.d == (var_88_8.q u>> 0x20).d && var_68_2.q == arg1 + 0x128
                            && rcx_38 == arg1 + 0x118)
                        if (sub_140d3ac50(arg1 + 0x168) != 0)
                            sub_140bb5210(arg1 + 0x168)
                        
                        int32_t r10_4 = *(arg1 + 0x190)
                        int32_t var_98_3 = 0
                        int32_t rcx_44 = 0
                        int32_t var_94_6 = 1
                        void* var_90_3 = arg1 + 0x178
                        int32_t var_88_9 = 0xffffffff
                        var_84_2.d = 0
                        var_84_2:4.d = 0
                        
                        if (r10_4 != 0)
                            void* rax_77 = *(arg1 + 0x188)
                            void* r8_12 = arg1 + 0x178
                            
                            if (rax_77 != 0)
                                r8_12 = rax_77
                            
                            int32_t temp12_1
                            int32_t temp13_1
                            temp12_1:temp13_1 = sx.q(r10_4 - 1)
                            int32_t rdx_33 = *r8_12
                            
                            if (rdx_33 != 0)
                            label_140d3f226:
                                int32_t rax_84 = neg.d(rdx_33) & rdx_33
                                uint64_t rflags_7
                                int32_t temp0_11
                                temp0_11, rflags_7 = _bit_scan_reverse(rax_84)
                                int32_t var_94_7 = rax_84
                                int32_t rax_85
                                
                                if (rax_84 == 0)
                                    rax_85 = 0x20
                                else
                                    rax_85 = 0x1f - temp0_11
                                
                                var_84_2.d = rcx_44 - rax_85 + 0x1f
                                
                                if (rcx_44 - rax_85 + 0x1f s> r10_4)
                                    var_84_2.d = r10_4
                            else
                                while (true)
                                    int64_t rdx_34 = sx.q(rdi)
                                    rcx_44 += 0x20
                                    rdi += 1
                                    var_84_2:4.d = rcx_44
                                    var_98_3 = rdi
                                    
                                    if (rdx_34.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_33 = *(r8_12 + (rdx_34 << 2) + 4)
                                    int32_t var_88_10 = 0xffffffff
                                    
                                    if (rdx_33 != 0)
                                        goto label_140d3f226
                                
                                var_84_2.d = r10_4
                        
                        int32_t rdx_36 = *(arg1 + 0x190)
                        int128_t var_38_3 = 0xffffffff
                        int32_t rdi_1 = 0xffffffff << (rdx_36.b & 0x1f)
                        int128_t var_48_3 = var_98_3.o
                        int32_t r8_14 = rdx_36 s>> 5
                        int32_t r9_14 = rdx_36 & 0xffffffe0
                        int64_t var_58_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                        int32_t var_88_11 = rdi_1
                        var_84_2.d = rdx_36
                        var_78 = (arg1 + 0x168).o
                        int96_t var_68_3 = var_48_3:8.12
                        
                        if (rdx_36 != r10_4)
                            void* rax_87 = *(arg1 + 0x188)
                            void* r10_5 = arg1 + 0x178
                            
                            if (rax_87 != 0)
                                r10_5 = rax_87
                            
                            int32_t temp14_1
                            int32_t temp15_1
                            temp14_1:temp15_1 = sx.q(r10_4 - 1)
                            int32_t rdx_40 = *(r10_5 + (sx.q(r8_14) << 2)) & rdi_1
                            
                            if (rdx_40 != 0)
                            label_140d3f2f2:
                                int32_t rax_94 = neg.d(rdx_40) & rdx_40
                                uint64_t rflags_8
                                int32_t temp0_13
                                temp0_13, rflags_8 = _bit_scan_reverse(rax_94)
                                int32_t r12_1
                                
                                if (rax_94 == 0)
                                    r12_1 = 0x20
                                else
                                    r12_1 = 0x1f - temp0_13
                                
                                var_84_2.d = r9_14 - r12_1 + 0x1f
                                
                                if (r9_14 - r12_1 + 0x1f s> r10_4)
                                    var_84_2.d = r10_4
                            else
                                while (true)
                                    int64_t rcx_49 = sx.q(r8_14)
                                    r9_14 += 0x20
                                    r8_14 += 1
                                    
                                    if (rcx_49.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_40 = *(r10_5 + (rcx_49 << 2) + 4)
                                    var_88_11 = 0xffffffff
                                    
                                    if (rdx_40 != 0)
                                        goto label_140d3f2f2
                                
                                var_84_2.d = r10_4
                        
                        while (true)
                            int64_t result = sx.q(result_1)
                            int64_t rdx_41 = var_78.q
                            
                            if (result.d == (var_88_11.q u>> 0x20).d && var_68_3.q == arg1 + 0x178
                                    && rdx_41 == arg1 + 0x168)
                                return result
                            
                            void* rbx_9 = result * 0x60 + *rdx_41
                            
                            if (sub_140d3a900(rbx_9 + 8) != 0)
                                sub_1408370c0(rbx_9 + 8)
                            
                            var_68_3:8.d &= not.d(var_78:0xc.d)
                            sub_14059bdd0(&var_78:8)
                    
                    int64_t rdx_30 = *rcx_38
                    int64_t rax_72 = result_4 << 5
                    int64_t* rbx_5 = *(rax_72 + rdx_30 + 0x10)
                    
                    if (rbx_5 != 0 && *(rax_72 + rdx_30 + 8) == 0 && sub_140d3a900(rbx_5) != 0)
                        sub_1408370c0(rbx_5)
                    
                    var_68_2:8.d &= not.d(var_78:0xc.d)
                    sub_14059bdd0(&var_78:8)
            
            int64_t rdx_20 = *rcx_25
            int64_t rax_47 = result_3 << 5
            int64_t* rbx_3 = *(rax_47 + rdx_20 + 0x10)
            
            if (rbx_3 != 0 && *(rax_47 + rdx_20 + 8) == 0 && sub_140d3a900(rbx_3) != 0)
                sub_1408370c0(rbx_3)
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    int64_t rdx_10 = *rcx_10
    int64_t rax_21 = result_2 << 5
    int64_t* rbx_1 = *(rax_21 + rdx_10 + 0x10)
    
    if (rbx_1 != 0 && *(rax_21 + rdx_10 + 8) == 0 && sub_140d3a900(rbx_1) != 0)
        sub_1408370c0(rbx_1)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
