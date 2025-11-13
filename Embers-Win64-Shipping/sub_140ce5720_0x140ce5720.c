// 函数: sub_140ce5720
// 地址: 0x140ce5720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_f4 = 1
int64_t* rsi = &arg1[2]
int32_t arg_18 = 0
int32_t r11 = rsi[5].d
void* rdi = &rsi[2]
int64_t* var_58 = rsi
int32_t rcx = 0
int32_t var_f8 = 0
int32_t r8 = 0
void* var_f0 = rdi
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int32_t var_e0 = 0

if (r11 != 0)
    void* rax_1 = *(rdi + 0x10)
    void* r9_1 = rdi
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140ce57dc:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_f4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_e4 = rcx - rax_8 + 0x1f
        
        if (rcx - rax_8 + 0x1f s> r11)
            var_e4 = r11
    else
        while (true)
            int64_t rax_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_e0_1 = rcx
            var_f8 = r8
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rax_4 << 2) + 4)
            int32_t var_e8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140ce57dc
        
        var_e4 = r11

int32_t rdx_4 = rsi[5].d
int32_t var_104 = rdx_4
int32_t rbx = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_d0 = var_f8.o
int32_t r8_2 = rdx_4 s>> 5
int32_t rcx_5 = rdx_4 & 0xffffffe0
int32_t var_108 = rbx
int64_t var_c0 = 0xffffffff
int64_t var_88 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t zmm1 = var_d0
int128_t var_a8 = rsi.o
int128_t var_98 = zmm1

if (rdx_4 != r11)
    void* rax_10 = *(rdi + 0x10)
    void* r9_2 = rdi
    
    if (rax_10 != 0)
        r9_2 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r9_2 + (sx.q(r8_2) << 2)) & rbx
    
    if (rdx_8 != 0)
    label_140ce58b3:
        int32_t rax_17 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t rax_18
        
        if (rax_17 == 0)
            rax_18 = 0x20
        else
            rax_18 = 0x1f - temp0_4
        
        var_104 = rcx_5 - rax_18 + 0x1f
        
        if (rcx_5 - rax_18 + 0x1f s> r11)
            var_104 = r11
    else
        while (true)
            int64_t rax_14 = sx.q(r8_2)
            rcx_5 += 0x20
            r8_2 += 1
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_8 = *(r9_2 + (rax_14 << 2) + 4)
            var_108 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140ce58b3
        
        var_104 = r11

uint64_t rdx_11 = var_108.q u>> 0x20
uint64_t var_b0 = rdx_11

while (true)
    int64_t rax_20 = sx.q(var_98:0xc.d)
    int64_t rcx_7 = var_a8.q
    int32_t var_118
    int64_t* var_d8
    uint64_t arg_20
    double zmm2[0x2]
    
    if (rax_20.d == rdx_11.d && var_98.q == rdi && rcx_7 == rsi)
        int32_t rcx_26 = 0
        void* rsi_3 = &arg1[0xc]
        int32_t var_f8_1 = 0
        int32_t r11_5 = *(rsi_3 + 0x28)
        void* rdi_3 = rsi_3 + 0x10
        void* var_b0_1 = rsi_3
        int32_t r8_8 = 0
        int32_t var_f4_2 = 1
        void* var_f0_1 = rdi_3
        int32_t var_e8_2 = 0xffffffff
        var_e4.q = 0
        
        if (r11_5 != 0)
            void* rax_59 = *(rdi_3 + 0x10)
            void* r9_6 = rdi_3
            
            if (rax_59 != 0)
                r9_6 = rax_59
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r11_5 - 1)
            int32_t rdx_26 = *r9_6
            int32_t var_e4_2
            
            if (rdx_26 != 0)
            label_140ce5c6c:
                int32_t rax_65 = neg.d(rdx_26) & rdx_26
                uint64_t rflags_5
                int32_t temp0_8
                temp0_8, rflags_5 = _bit_scan_reverse(rax_65)
                int32_t var_f4_3 = rax_65
                int32_t rax_66
                
                if (rax_65 == 0)
                    rax_66 = 0x20
                else
                    rax_66 = 0x1f - temp0_8
                
                int32_t var_e4_1 = r8_8 - rax_66 + 0x1f
                
                if (r8_8 - rax_66 + 0x1f s> r11_5)
                    var_e4_2 = r11_5
            else
                while (true)
                    int64_t rax_62 = sx.q(rcx_26)
                    r8_8 += 0x20
                    rcx_26 += 1
                    int32_t var_e0_2 = r8_8
                    var_f8_1 = rcx_26
                    
                    if (rax_62.d s>= ((temp8_1 & 0x1f) + temp9_1) s>> 5)
                        break
                    
                    rdx_26 = *(r9_6 + (rax_62 << 2) + 4)
                    int32_t var_e8_3 = 0xffffffff
                    
                    if (rdx_26 != 0)
                        goto label_140ce5c6c
                
                var_e4_2 = r11_5
        
        int32_t rdx_27 = *(rsi_3 + 0x28)
        int32_t var_104_3 = rdx_27
        int32_t rbx_6 = 0xffffffff << (rdx_27.b & 0x1f)
        int128_t var_78_2 = var_f8_1.o
        int32_t r8_11 = rdx_27 s>> 5
        int32_t rcx_31 = rdx_27 & 0xffffffe0
        int32_t var_108_3 = rbx_6
        int128_t var_68_2 = 0xffffffff
        var_c0 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_d8.o = rsi_3.o
        var_d0 = var_78_2
        
        if (rdx_27 != r11_5)
            void* rax_68 = *(rdi_3 + 0x10)
            void* r9_7 = rdi_3
            
            if (rax_68 != 0)
                r9_7 = rax_68
            
            int32_t temp10_1
            int32_t temp11_1
            temp10_1:temp11_1 = sx.q(r11_5 - 1)
            int32_t rdx_31 = *(r9_7 + (sx.q(r8_11) << 2)) & rbx_6
            
            if (rdx_31 != 0)
            label_140ce5d43:
                int32_t rax_75 = neg.d(rdx_31) & rdx_31
                uint64_t rflags_6
                int32_t temp0_10
                temp0_10, rflags_6 = _bit_scan_reverse(rax_75)
                int32_t rax_76
                
                if (rax_75 == 0)
                    rax_76 = 0x20
                else
                    rax_76 = 0x1f - temp0_10
                
                var_104_3 = rcx_31 - rax_76 + 0x1f
                
                if (rcx_31 - rax_76 + 0x1f s> r11_5)
                    var_104_3 = r11_5
            else
                while (true)
                    int64_t rax_72 = sx.q(r8_11)
                    rcx_31 += 0x20
                    r8_11 += 1
                    
                    if (rax_72.d s>= ((temp10_1 & 0x1f) + temp11_1) s>> 5)
                        break
                    
                    rdx_31 = *(r9_7 + (rax_72 << 2) + 4)
                    var_108_3 = 0xffffffff
                    
                    if (rdx_31 != 0)
                        goto label_140ce5d43
                
                var_104_3 = r11_5
        
        uint64_t rcx_34 = var_108_3.q u>> 0x20
        arg_20 = rcx_34
        
        while (true)
            int64_t rax_78 = sx.q(var_c0:4.d)
            
            if (rax_78.d == rcx_34.d && var_d0:8.q == rdi_3 && var_d8 == rsi_3)
                return zx.q(arg_18)
            
            int32_t var_114_3 = 1
            int32_t r8_12 = 0
            int64_t* rcx_37 = rax_78 * 0x60 + *var_d8
            int32_t var_108_4 = 0xffffffff
            var_104_3.q = 0
            int64_t r15_2 = *rcx_37
            int32_t r11_6 = rcx_37[6].d
            void* var_110_2 = &rcx_37[3]
            int32_t rcx_38 = 0
            var_118 = 0
            
            if (r11_6 != 0)
                void* rax_79 = rcx_37[5]
                void* r9_8 = &rcx_37[3]
                
                if (rax_79 != 0)
                    r9_8 = rax_79
                
                int32_t temp12_1
                int32_t temp13_1
                temp12_1:temp13_1 = sx.q(r11_6 - 1)
                int32_t rdx_36 = *r9_8
                int32_t var_104_5
                
                if (rdx_36 != 0)
                label_140ce5e3c:
                    int32_t rax_85 = neg.d(rdx_36) & rdx_36
                    uint64_t rflags_7
                    int32_t temp0_11
                    temp0_11, rflags_7 = _bit_scan_reverse(rax_85)
                    int32_t var_114_4 = rax_85
                    int32_t rax_86
                    
                    if (rax_85 == 0)
                        rax_86 = 0x20
                    else
                        rax_86 = 0x1f - temp0_11
                    
                    int32_t var_104_4 = r8_12 - rax_86 + 0x1f
                    
                    if (r8_12 - rax_86 + 0x1f s> r11_6)
                        var_104_5 = r11_6
                else
                    while (true)
                        int64_t rax_82 = sx.q(rcx_38)
                        r8_12 += 0x20
                        rcx_38 += 1
                        int32_t var_100_2 = r8_12
                        var_118 = rcx_38
                        
                        if (rax_82.d s>= ((temp12_1 & 0x1f) + temp13_1) s>> 5)
                            break
                        
                        rdx_36 = *(r9_8 + (rax_82 << 2) + 4)
                        var_108_4 = 0xffffffff
                        
                        if (rdx_36 != 0)
                            goto label_140ce5e3c
                    
                    var_104_5 = r11_6
            
            int32_t rdx_37 = rcx_37[6].d
            zmm2 = var_108_4.o
            var_104_3 = rdx_37
            int32_t rbx_7 = 0xffffffff << (rdx_37.b & 0x1f)
            int128_t var_78_3 = var_118.o
            int32_t r8_15 = rdx_37 s>> 5
            int32_t rcx_43 = rdx_37 & 0xffffffe0
            int32_t var_108_5 = rbx_7
            double var_68_3[0x2] = zmm2
            int64_t var_88_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
            var_a8 = (&rcx_37[1]).o
            int128_t var_98_1 = var_78_3
            
            if (rdx_37 != r11_6)
                void* rax_88 = rcx_37[5]
                void* r9_9 = &rcx_37[3]
                
                if (rax_88 != 0)
                    r9_9 = rax_88
                
                int32_t temp14_1
                int32_t temp15_1
                temp14_1:temp15_1 = sx.q(r11_6 - 1)
                int32_t rdx_41 = *(r9_9 + (sx.q(r8_15) << 2)) & rbx_7
                
                if (rdx_41 != 0)
                label_140ce5f13:
                    int32_t rax_95 = neg.d(rdx_41) & rdx_41
                    uint64_t rflags_8
                    int32_t temp0_13
                    temp0_13, rflags_8 = _bit_scan_reverse(rax_95)
                    int32_t rax_96
                    
                    if (rax_95 == 0)
                        rax_96 = 0x20
                    else
                        rax_96 = 0x1f - temp0_13
                    
                    var_104_3 = rcx_43 - rax_96 + 0x1f
                    
                    if (rcx_43 - rax_96 + 0x1f s> r11_6)
                        var_104_3 = r11_6
                else
                    while (true)
                        int64_t rax_92 = sx.q(r8_15)
                        rcx_43 += 0x20
                        r8_15 += 1
                        
                        if (rax_92.d s>= ((temp14_1 & 0x1f) + temp15_1) s>> 5)
                            break
                        
                        rdx_41 = *(r9_9 + (rax_92 << 2) + 4)
                        var_108_5 = 0xffffffff
                        
                        if (rdx_41 != 0)
                            goto label_140ce5f13
                    
                    var_104_3 = r11_6
            
            while (true)
                int64_t rax_98 = sx.q(var_98_1:0xc.d)
                int64_t* rdx_43 = var_a8.q
                
                if (rax_98.d == (var_108_5.q u>> 0x20).d && var_98_1.q == &rcx_37[3]
                        && rdx_43 == &rcx_37[1])
                    break
                
                int64_t rcx_45 = rax_98 * 3
                void** rdi_4 = nullptr
                int64_t rax_99 = *rdx_43
                int64_t* rsi_4 = rax_99 + (rcx_45 << 3)
                var_118.o = *(*rsi_4 + sx.q(*(rax_99 + (rcx_45 << 3) + 8)) * 0x10 - 0x10)
                sub_140cea340()
                char rax_101 = sub_140cc1670(&var_118, &data_143e1b820)
                void* rax_102
                
                if (rax_101 != 0)
                    rax_102 = var_118.q
                
                if (rax_101 == 0 || rax_102 == 0)
                    if (sub_140cc16a0(&var_118, sub_140d04270()) != 0)
                        void* rax_105 = var_118.q
                        
                        if (rax_105 != 0)
                            rdi_4 = sx.q(*(rax_105 + 0x44)) + r15_2
                else
                    rdi_4 = sx.q(*(rax_102 + 0x4c)) + r15_2
                
                arg_18 += sub_140ce6060(rsi_4, rsi_4[1].d - 1, rdi_4, (*(*arg1 + 0x18))(arg1), arg2)
                var_98_1:8.d &= not.d(var_a8:0xc.d)
                sub_14059bdd0(&var_a8:8)
            
            var_c0.d &= not.d(var_d0:4.d)
            sub_14059bdd0(&var_d0)
            rcx_34 = arg_20
            rdi_3 = var_f0_1
            rsi_3 = var_b0_1
    
    int64_t* rbx_3 = rax_20 * 0x60 + *rcx_7
    arg_20 = *rbx_3
    
    if (sub_140d3e110(&arg_20) != 0)
        int64_t rax_23 = sub_140d3c6e0(&arg_20)
        int32_t var_114_1 = 1
        int32_t r10_5 = rbx_3[6].d
        void* var_110_1 = &rbx_3[3]
        int32_t rcx_10 = 0
        var_118 = 0
        int32_t var_108_1 = 0xffffffff
        int32_t r8_3 = 0
        var_104.q = 0
        
        if (r10_5 != 0)
            void* rax_24 = rbx_3[5]
            void* r9_3 = &rbx_3[3]
            
            if (rax_24 != 0)
                r9_3 = rax_24
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_5 - 1)
            int32_t rdx_14 = *r9_3
            int32_t var_104_2
            
            if (rdx_14 != 0)
            label_140ce59cc:
                int32_t rax_30 = neg.d(rdx_14) & rdx_14
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_30)
                int32_t var_114_2 = rax_30
                int32_t rax_31
                
                if (rax_30 == 0)
                    rax_31 = 0x20
                else
                    rax_31 = 0x1f - temp0_5
                
                int32_t var_104_1 = r8_3 - rax_31 + 0x1f
                
                if (r8_3 - rax_31 + 0x1f s> r10_5)
                    var_104_2 = r10_5
            else
                while (true)
                    int64_t rax_27 = sx.q(rcx_10)
                    r8_3 += 0x20
                    rcx_10 += 1
                    int32_t var_100_1 = r8_3
                    var_118 = rcx_10
                    
                    if (rax_27.d s>= ((temp4_1 & 0x1f) + temp5_1) s>> 5)
                        break
                    
                    rdx_14 = *(r9_3 + (rax_27 << 2) + 4)
                    var_108_1 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_140ce59cc
                
                var_104_2 = r10_5
        
        int32_t rdx_15 = rbx_3[6].d
        zmm2 = var_108_1.o
        var_104 = rdx_15
        int32_t rbx_4 = 0xffffffff << (rdx_15.b & 0x1f)
        int128_t var_78_1 = var_118.o
        int32_t r8_6 = rdx_15 s>> 5
        int32_t rcx_15 = rdx_15 & 0xffffffe0
        int32_t var_108_2 = rbx_4
        double var_68_1[0x2] = zmm2
        var_c0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_d8.o = (&rbx_3[1]).o
        var_d0 = var_78_1
        
        if (rdx_15 != r10_5)
            void* rax_33 = rbx_3[5]
            void* r9_4 = &rbx_3[3]
            
            if (rax_33 != 0)
                r9_4 = rax_33
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_5 - 1)
            int32_t rdx_19 = *(r9_4 + (sx.q(r8_6) << 2)) & rbx_4
            
            if (rdx_19 != 0)
            label_140ce5aa3:
                int32_t rax_40 = neg.d(rdx_19) & rdx_19
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_40)
                int32_t rax_41
                
                if (rax_40 == 0)
                    rax_41 = 0x20
                else
                    rax_41 = 0x1f - temp0_7
                
                var_104 = rcx_15 - rax_41 + 0x1f
                
                if (rcx_15 - rax_41 + 0x1f s> r10_5)
                    var_104 = r10_5
            else
                while (true)
                    int64_t rax_37 = sx.q(r8_6)
                    rcx_15 += 0x20
                    r8_6 += 1
                    
                    if (rax_37.d s>= ((temp6_1 & 0x1f) + temp7_1) s>> 5)
                        break
                    
                    rdx_19 = *(r9_4 + (rax_37 << 2) + 4)
                    var_108_2 = 0xffffffff
                    
                    if (rdx_19 != 0)
                        goto label_140ce5aa3
                
                var_104 = r10_5
        
        while (true)
            int64_t rax_43 = sx.q(var_c0:4.d)
            
            if (rax_43.d == (var_108_2.q u>> 0x20).d && var_d0:8.q == &rbx_3[3]
                    && var_d8 == &rbx_3[1])
                break
            
            int64_t rcx_17 = rax_43 * 3
            void** rdi_1 = nullptr
            int64_t rax_44 = *var_d8
            int64_t* rsi_1 = rax_44 + (rcx_17 << 3)
            var_118.o = *(*rsi_1 + sx.q(*(rax_44 + (rcx_17 << 3) + 8)) * 0x10 - 0x10)
            sub_140cea340()
            char rax_46 = sub_140cc1670(&var_118, &data_143e1b820)
            void* rax_47
            
            if (rax_46 != 0)
                rax_47 = var_118.q
            
            if (rax_46 == 0 || rax_47 == 0)
                if (sub_140cc16a0(&var_118, sub_140d04270()) != 0)
                    void* rax_50 = var_118.q
                    
                    if (rax_50 != 0)
                        rdi_1 = sx.q(*(rax_50 + 0x44)) + rax_23
            else
                rdi_1 = sx.q(*(rax_47 + 0x4c)) + rax_23
            
            arg_18 += sub_140ce6060(rsi_1, rsi_1[1].d - 1, rdi_1, (*(*arg1 + 0x18))(arg1), arg2)
            var_c0.d &= not.d(var_d0:4.d)
            sub_14059bdd0(&var_d0)
        
        rdi = var_f0
        rsi = var_58
    
    var_98:8.d &= not.d(var_a8:0xc.d)
    sub_14059bdd0(&var_a8:8)
    rdx_11 = var_b0
