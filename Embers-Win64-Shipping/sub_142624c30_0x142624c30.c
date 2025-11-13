// 函数: sub_142624c30
// 地址: 0x142624c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(arg2[1].w)
int64_t* rsi = arg2
int64_t* rdi = arg1
int32_t* rbx = arg6
void* rax_1 = *arg2
uint128_t zmm6 = arg4
uint32_t r12 = zx.d(*(rax_1 + 0x30))
uint32_t r13 = zx.d(*(rax_1 + 0x32))
*rbx = 0
int32_t* var_140 = rbx
uint32_t var_f4 = r12
int32_t var_14c = r15.d
int64_t rax_3 = (*(*arg1 + 0x10))(arg5, zx.q((r15 * 3).d << 3))
*(rbx + 8) = rax_3

if (rax_3 == 0)
    return 0x80000004

memset(rax_3, 0, r15 * 0x18)
uint64_t r14_2 = zx.q(r13 * r12)
int32_t var_150_1 = r14_2.d
int64_t rax_6 = (*(*rdi + 0x10))(rdi, zx.q((r14_2 * 3).d << 2))
int32_t rsi_1

if (rax_6 != 0)
    int64_t rax_8 = (*(*rdi + 0x10))(rdi, zx.q((r14_2 * 2).d))
    
    if (rax_8 != 0)
        char* rax_10 = (*(*rdi + 0x10))(rdi, zx.q(r14_2.d))
        
        if (rax_10 != 0)
            int16_t rcx_4 = -1
            int32_t r9_1 = 0
            
            if (r13 != 0)
                do
                    int32_t r8_2 = 0
                    
                    if (r12 != 0)
                        int32_t rsi_3 = r9_1 * r12
                        
                        do
                            int64_t r11_1 = rsi[5]
                            int64_t rdi_1 = sx.q(rsi_3 + r8_2)
                            int16_t r10_1 = *(r11_1 + (rdi_1 << 1))
                            bool rdx_6
                            
                            if (r10_1 != 0xffff)
                                char rbx_1 = *(rdi_1 + rsi[4])
                                
                                if ((rbx_1 & 1) != 0 && r8_2 - 1 s>= 0 && r9_1 s>= 0
                                        && r8_2 - 1 s< r12 && r9_1 s< r13)
                                    rcx_4 = *(r11_1 + (sx.q(r8_2 - 1 + rsi_3) << 1))
                                
                                int16_t rcx_6 = -1
                                rdx_6 = rcx_4 == r10_1
                                
                                if ((rbx_1 & 2) != 0 && r8_2 s>= 0 && r9_1 + 1 s>= 0 && r8_2 s< r12
                                        && r9_1 + 1 s< r13)
                                    rcx_6 = *(r11_1 + (sx.q((r9_1 + 1) * r12 + r8_2) << 1))
                                
                                if (rcx_6 == r10_1)
                                    rdx_6 |= 2
                                
                                int16_t rcx_7 = -1
                                
                                if ((rbx_1 & 4) != 0 && r8_2 + 1 s>= 0 && r9_1 s>= 0
                                        && r8_2 + 1 s< r12 && r9_1 s< r13)
                                    rcx_7 = *(r11_1 + (sx.q(r8_2 + 1 + rsi_3) << 1))
                                
                                if (rcx_7 == r10_1)
                                    rdx_6 |= 4
                                
                                int16_t rcx_9 = -1
                                
                                if ((rbx_1 & 8) != 0 && r8_2 s>= 0 && r9_1 - 1 s>= 0 && r8_2 s< r12
                                        && r9_1 - 1 s< r13)
                                    rcx_9 = *(r11_1 + (sx.q((r9_1 - 1) * r12 + r8_2) << 1))
                                
                                if (rcx_9 == r10_1)
                                    rdx_6 |= 8
                                
                                rdx_6 ^= 0xf
                                rcx_4 = -1
                            else
                                rdx_6 = false
                            
                            r8_2 += 1
                            rax_10[rdi_1] = rdx_6
                        while (r8_2 s< r12)
                    
                    r9_1 += 1
                while (r9_1 s< r13)
                
                r14_2 = zx.q(var_150_1)
                r15 = zx.q(var_14c)
                rbx = var_140
                rsi = arg2
            
            int64_t var_68 = rax_6
            int64_t var_58_1 = rax_8
            int32_t i_15 = 0
            int32_t var_5c_1 = r14_2.d
            int32_t var_50_1 = 0
            int32_t var_4c_1 = r14_2.d
            int32_t* var_d0
            __builtin_memset(&var_d0, 0, 0x1c)
            sub_142616290(&var_d0, r15.d)
            int32_t* var_a0 = nullptr
            int64_t var_98_1 = 0
            sub_142616290(&var_a0, r15.d)
            int32_t rcx_12 = 0
            int32_t var_12c_1 = 0
            int64_t var_c0
            int32_t var_138
            
            if (r13 == 0)
            label_1426252d4:
                int32_t* r13_3 = var_140
                int32_t var_130_1 = 0
                int32_t rcx_31 = *r13_3
                
                if (rcx_31 s> 0)
                    int64_t rdi_5 = 0
                    int32_t r8_9 = rcx_31
                    int64_t r12_2 = 0
                    int64_t var_108_1 = 0
                    int64_t var_110_1 = 0
                    int32_t rax_102
                    
                    do
                        uint64_t r14_7 = *(r13_3 + 8)
                        int32_t r10_2 = 0
                        uint64_t var_118_2 = r14_7
                        int64_t i_13 = sx.q(*(r12_2 + r14_7))
                        void* r11_2 = *(r12_2 + r14_7 + 8)
                        int64_t i_10 = i_13
                        int32_t i_14 = i_13.d
                        
                        if (i_13.d s> 0)
                            void* r8_10 = r11_2
                            int64_t rcx_33 = sx.q((i_13 - 1).d) << 3
                            int64_t i
                            
                            do
                                r10_2 += zx.d(*(rcx_33 + r11_2 + 4)) * zx.d(*r8_10)
                                    - zx.d(*(r8_10 + 4)) * zx.d(*(rcx_33 + r11_2))
                                rcx_33 = r8_10 - r11_2
                                r8_10 += 8
                                i = i_10
                                i_10 -= 1
                            while (i != 1)
                            rcx_31 = *r13_3
                            r8_9 = rcx_31
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r10_2 + 1)
                        
                        if ((temp3_1 - temp2_1) s>> 1 s< 0)
                            int32_t r13_4 = 0
                            int32_t var_14c_1 = 0
                            int64_t rdx_28 = -1
                            int64_t var_e8_2 = -1
                            int32_t var_12c_2 = 0
                            int32_t var_128_2 = 0xfffffff
                            int64_t var_f0_1 = 0
                            
                            if (rcx_31 s> 0)
                                r15 = r14_7
                                var_138.q = zx.q(r8_9)
                                int64_t rcx_39 = 0
                                int64_t i_9 = var_138.q
                                uint64_t var_e0_2 = r14_7
                                int64_t i_1
                                
                                do
                                    if (rdi_5 != rcx_39)
                                        int32_t r9_4 = *r15
                                        
                                        if (r9_4 != 0)
                                            if (*(r15 + 0x10) == *(r12_2 + r14_7 + 0x10))
                                                int16_t* rdi_6 = *(r15 + 8)
                                                int32_t r8_11 = -1
                                                int32_t r11_3 = 0
                                                int64_t r14_8 = sx.q(i_13.d)
                                                int16_t* var_80_1 = rdi_6
                                                int32_t rbx_5 = 0xfffffff
                                                int32_t var_148_1 = 0xffffffff
                                                int32_t var_150_3 = 0xffffffff
                                                int64_t var_90_1 = r14_8
                                                
                                                if (r9_4 s> 0)
                                                    int16_t* var_a8_2 = rdi_6
                                                    int32_t rax_68 = 2 - r9_4
                                                    int32_t rcx_40 = r9_4 - 1
                                                    int32_t var_f8_1 = rax_68
                                                    int16_t* rsi_7 = rdi_6
                                                    
                                                    do
                                                        int32_t rcx_41 = rcx_40 + r11_3
                                                        int32_t r10_3 = 0
                                                        int64_t rax_71 = sx.q(
                                                            mods.dp.d(sx.q(rax_68 + rcx_41), r9_4)
                                                            << 2)
                                                        int64_t r9_5 = 0
                                                        int64_t rax_74 =
                                                            sx.q(mods.dp.d(sx.q(rcx_41), r9_4) << 2)
                                                        
                                                        if (r14_8 s> 0)
                                                            uint32_t r13_5 = zx.d(rdi_6[rax_74 + 2])
                                                            uint32_t r15_5 = zx.d(*rsi_7)
                                                            uint32_t rax_75 = zx.d(rdi_6[rax_74])
                                                            uint32_t r12_3 = zx.d(rsi_7[2])
                                                            uint32_t rdi_8 = r15_5 - rax_75
                                                            uint32_t var_f4_1 = rax_75
                                                            
                                                            do
                                                                int64_t rcx_42 =
                                                                    *(var_110_1 + var_118_2 + 8)
                                                                uint32_t rdx_36 =
                                                                    zx.d(*(rcx_42 + (r9_5 << 3) + 4))
                                                                uint32_t r8_13 =
                                                                    zx.d(*(rcx_42 + (r9_5 << 3)))
                                                                
                                                                if ((rdx_36 - r13_5) * rdi_8
                                                                        - (r8_13 - rax_75) * (r12_3 - r13_5)
                                                                        s> 0)
                                                                    r8_11 = var_148_1
                                                                else
                                                                    uint32_t rdx_37 = rdx_36 - r12_3
                                                                    uint32_t r8_14 = r8_13 - r15_5
                                                                    r14_8 = var_90_1
                                                                    
                                                                    if ((zx.d(var_80_1[rax_71]) - r15_5)
                                                                            * rdx_37
                                                                            - (zx.d(var_80_1[rax_71 + 2]) - r12_3)
                                                                            * r8_14 s> 0)
                                                                        r8_11 = var_148_1
                                                                    else
                                                                        int32_t rdx_39 =
                                                                            rdx_37 * rdx_37 + r8_14 * r8_14
                                                                        
                                                                        if (rdx_39 s>= rbx_5)
                                                                            r8_11 = var_148_1
                                                                        else
                                                                            r8_11 = r11_3
                                                                            var_148_1 = r11_3
                                                                            var_150_3 = r10_3
                                                                            rbx_5 = rdx_39
                                                                
                                                                rax_75 = var_f4_1
                                                                r10_3 += 1
                                                                r9_5 += 1
                                                            while (r9_5 s< r14_8)
                                                            
                                                            rdi_6 = var_80_1
                                                            rsi_7 = var_a8_2
                                                            r15 = var_e0_2
                                                        
                                                        r9_4 = *r15
                                                        rsi_7 = &rsi_7[4]
                                                        rax_68 = var_f8_1
                                                        r11_3 += 1
                                                        var_a8_2 = rsi_7
                                                        rcx_40 = r9_4 - 1
                                                    while (r11_3 s< r9_4)
                                                    
                                                    rdx_28 = var_e8_2
                                                    
                                                    if (r8_11 == 0xffffffff
                                                            || var_150_3 == 0xffffffff ||
                                                            (rdx_28 s>= 0 && rbx_5 s>= var_128_2))
                                                        r13_4 = var_14c_1
                                                        rcx_39 = var_f0_1
                                                    else
                                                        rdx_28 = var_f0_1
                                                        r13_4 = r8_11
                                                        var_e8_2 = rdx_28
                                                        rcx_39 = rdx_28
                                                        var_14c_1 = r8_11
                                                        var_12c_2 = var_150_3
                                                        var_128_2 = rbx_5
                                                    
                                                    r12_2 = var_110_1
                                                    i_13 = zx.q(i_14)
                                                
                                                rdi_5 = var_108_1
                                                r14_7 = var_118_2
                                            
                                            i_9 = var_138.q
                                    
                                    rcx_39 += 1
                                    r15 += 0x18
                                    i_1 = i_9
                                    i_9 -= 1
                                    var_f0_1 = rcx_39
                                    var_138.q = i_9
                                    var_e0_2 = r15
                                while (i_1 != 1)
                                
                                if (rdx_28 != -1)
                                    r15 = arg1
                                    int64_t rdi_9 = rdx_28 * 3
                                    void* rax_86 = (*(*r15 + 0x10))(r15, 
                                        zx.q(((zx.q(*(r14_7 + (rdi_9 << 3)) + i_13.d) << 3) + 0x10)
                                            .d))
                                    
                                    if (rax_86 != 0)
                                        int32_t rbx_6 = 0
                                        int64_t r11_4 = 0
                                        int32_t i_2 = 0
                                        
                                        if (*(r14_7 + (rdi_9 << 3)) s>= 0)
                                            void* r9_6 = rax_86 + 4
                                            
                                            do
                                                int64_t rcx_52 = *(r14_7 + (rdi_9 << 3) + 8)
                                                int32_t temp18_1
                                                int32_t temp19_1
                                                temp18_1:temp19_1 = sx.q(i_2 + r13_4)
                                                r9_6 += 8
                                                rbx_6 += 1
                                                r11_4 += 1
                                                i_2 += 1
                                                int64_t r8_16 = sx.q(mods.dp.d(temp18_1:temp19_1, 
                                                    *(r14_7 + (rdi_9 << 3))) << 2)
                                                *(r9_6 - 0xc) = *(rcx_52 + (r8_16 << 1))
                                                *(r9_6 - 0xa) = *(rcx_52 + (r8_16 << 1) + 2)
                                                *(r9_6 - 8) = *(rcx_52 + (r8_16 << 1) + 4)
                                                *(r9_6 - 6) = *(rcx_52 + (r8_16 << 1) + 6)
                                            while (i_2 s<= *(r14_7 + (rdi_9 << 3)))
                                        
                                        int32_t i_3 = 0
                                        
                                        if (*(r12_2 + r14_7) s>= 0)
                                            void* r9_8 = (r11_4 << 3) + 4 + rax_86
                                            
                                            do
                                                int64_t rcx_53 = *(r12_2 + r14_7 + 8)
                                                int32_t temp24_1
                                                int32_t temp25_1
                                                temp24_1:temp25_1 = sx.q(i_3 + var_12c_2)
                                                r9_8 += 8
                                                rbx_6 += 1
                                                i_3 += 1
                                                int64_t r8_17 = sx.q(
                                                    mods.dp.d(temp24_1:temp25_1, *(r12_2 + r14_7))
                                                    << 2)
                                                *(r9_8 - 0xc) = *(rcx_53 + (r8_17 << 1))
                                                *(r9_8 - 0xa) = *(rcx_53 + (r8_17 << 1) + 2)
                                                *(r9_8 - 8) = *(rcx_53 + (r8_17 << 1) + 4)
                                                *(r9_8 - 6) = *(rcx_53 + (r8_17 << 1) + 6)
                                            while (i_3 s<= *(r12_2 + r14_7))
                                        
                                        (*(*r15 + 0x18))(r15, *(r14_7 + (rdi_9 << 3) + 8))
                                        *(r14_7 + (rdi_9 << 3) + 8) = rax_86
                                        *(r14_7 + (rdi_9 << 3)) = rbx_6
                                        (*(*r15 + 0x18))(r15, *(r12_2 + r14_7 + 8))
                                        *(r12_2 + r14_7 + 8) = 0
                                        *(r12_2 + r14_7) = 0
                                    
                                    rdi_5 = var_108_1
                            
                            r13_3 = var_140
                        
                        rdi_5 += 1
                        rcx_31 = *r13_3
                        rax_102 = var_130_1 + 1
                        r12_2 += 0x18
                        var_130_1 = rax_102
                        var_108_1 = rdi_5
                        r8_9 = rcx_31
                        var_110_1 = r12_2
                    while (rax_102 s< rcx_31)
                
                int16_t rax_103 = arg2[1].w
                int32_t rdx_52
                
                if (rax_103 == 0)
                    rdx_52 = 0
                else
                    rdx_52 = zx.d(rax_103) + 1
                
                arg7[1] = rdx_52
                arg7[2] = 0
                *arg7 = 0
                int64_t rax_105 = (*(*arg1 + 0x10))(arg1, zx.q(rdx_52 * 2))
                *(arg7 + 0x10) = rax_105
                
                if (rax_105 != 0)
                    memset(rax_105, 0xff, sx.q(arg7[1]) * 2)
                    
                    if (arg7[1] s> 0)
                        int16_t* rax_106 = j_sub_1426075c0(zx.q(((zx.q(arg2[1].w) << 1) + 2).d), 1)
                        int16_t* rdi_11 = rax_106
                        int64_t rax_107 = j_sub_1426075c0(zx.q(((zx.q(arg2[1].w) << 1) + 2).d), 1)
                        int32_t* r9_9 = arg7
                        int32_t i_4 = 0
                        int32_t i_7 = 0
                        
                        if (r9_9[1] s> 0)
                            do
                                int64_t i_11 = sx.q(i_4)
                                
                                if (*(*(r9_9 + 0x10) + (i_11 << 1)) == 0xffff)
                                    int32_t rcx_62 = *r9_9
                                    int32_t j_2 = 0
                                    int64_t r8_20 = 0
                                    int32_t var_150_4 = rcx_62
                                    int32_t j = 0
                                    r15.b = 1
                                    
                                    if (*r13_3 s> 0)
                                        int64_t r10_4 = 0
                                        int64_t r11_6 = 0
                                        
                                        do
                                            int64_t rax_109 = *(r13_3 + 8)
                                            
                                            if (*(r11_6 + rax_109 + 0x10) == i_4.w
                                                    && *(r11_6 + rax_109 + 0x12) != 0)
                                                if (r15.b != 0)
                                                    *(*(r9_9 + 0x10) + (i_11 << 1)) = rcx_62.w
                                                    *r9_9 += 1
                                                    r15.b = 0
                                                
                                                int32_t k = 0
                                                
                                                if (*(var_d0 + r10_4) s> 0)
                                                    do
                                                        int16_t rcx_65 = *(var_c0
                                                            + (sx.q(*(var_a0 + r10_4) + k) << 2))
                                                        int64_t rax_114 = 0
                                                        
                                                        if (r8_20 s<= 0)
                                                        label_14262589e:
                                                            j_2 += 1
                                                            rdi_11[r8_20] = rcx_65
                                                            r8_20 += 1
                                                        else
                                                            while (rdi_11[rax_114] != rcx_65)
                                                                rax_114 += 1
                                                                
                                                                if (rax_114 s>= r8_20)
                                                                    goto label_14262589e
                                                        
                                                        k += 1
                                                    while (k s< *(var_d0 + r10_4))
                                                    
                                                    rcx_62 = var_150_4
                                                    i_4 = i_7
                                                
                                                r9_9 = arg7
                                            
                                            j += 1
                                            r11_6 += 0x18
                                            r10_4 += 4
                                        while (j s< *r13_3)
                                        
                                        if (j_2 s> 0)
                                            int32_t j_1
                                            
                                            do
                                                j_1 = 0
                                                int64_t k_2 = sx.q(j_2)
                                                int64_t r8_21 = 0
                                                int64_t k_3 = k_2
                                                
                                                if (j_2 s> 0)
                                                    int16_t* r12_4 = rdi_11
                                                    int64_t k_1
                                                    
                                                    do
                                                        uint32_t rax_116 = zx.d(*r12_4)
                                                        
                                                        if (rax_116 s< r9_9[1] &&
                                                                *(*(r9_9 + 0x10) + (zx.q(rax_116) << 1))
                                                                == 0xffff)
                                                            r15 = 0
                                                            
                                                            if (*r13_3 s> 0)
                                                                int64_t r10_5 = 0
                                                                int64_t r14_10 = 0
                                                                
                                                                do
                                                                    int64_t rax_118 = *(r13_3 + 8)
                                                                    int16_t rcx_67 =
                                                                        *(r14_10 + rax_118 + 0x10)
                                                                    
                                                                    if (rcx_67 == *r12_4
                                                                            && *(r14_10 + rax_118 + 0x12) != 0)
                                                                        int32_t r9_10 = 0
                                                                        *(*(r9_9 + 0x10)
                                                                            + (zx.q(rcx_67) << 1)) = var_150_4.w
                                                                        int32_t* r11_7 = var_d0
                                                                        
                                                                        if (*(r11_7 + r10_5) s> 0)
                                                                            do
                                                                                int16_t rcx_71 = *(var_c0 +
                                                                                    (sx.q(*(var_a0 + r10_5) + r9_10) << 2))
                                                                                int64_t rax_122 = 0
                                                                                
                                                                                if (r8_21 s<= 0)
                                                                                label_14262599e:
                                                                                    *(rax_107 + (r8_21 << 1)) = rcx_71
                                                                                    j_1 += 1
                                                                                    r11_7 = var_d0
                                                                                    r8_21 += 1
                                                                                else
                                                                                    while (*(rax_107 + (rax_122 << 1))
                                                                                            != rcx_71)
                                                                                        rax_122 += 1
                                                                                        
                                                                                        if (rax_122 s>= r8_21)
                                                                                            goto label_14262599e
                                                                                
                                                                                r9_10 += 1
                                                                            while (r9_10 s< *(r11_7 + r10_5))
                                                                        
                                                                        r9_9 = arg7
                                                                    
                                                                    r15 = zx.q(r15.d + 1)
                                                                    r14_10 += 0x18
                                                                    r10_5 += 4
                                                                while (r15.d s< *r13_3)
                                                                
                                                                k_2 = k_3
                                                        
                                                        r12_4 = &r12_4[1]
                                                        k_1 = k_2
                                                        k_2 -= 1
                                                        k_3 = k_2
                                                    while (k_1 != 1)
                                                    rdi_11 = rax_106
                                                
                                                j_2 = j_1
                                                memcpy(rdi_11, rax_107, j_1 * 2)
                                                r9_9 = arg7
                                            while (j_1 s> 0)
                                            i_4 = i_7
                                
                                i_4 += 1
                                i_7 = i_4
                            while (i_4 s< r9_9[1])
                        
                        rsi_1 = 0x40000000
                        sub_142609160(rax_107, i_4)
                        sub_142609160(rdi_11)
                    else
                        rsi_1 = 0x40000000
                else
                label_142625776:
                    rsi_1 = -0x7ffffffc
            else
                uint32_t rdx_12 = r13
                int32_t rax_27 = 0
                int32_t var_128_1 = 0
                int32_t r13_1 = 0
                int32_t var_150_2 = 0
                
                while (true)
                    if (r12 != 0)
                        char* r8_3 = rax_10
                        int32_t r14_4 = rax_27
                        var_138 = rax_27
                        
                        while (true)
                            int64_t rdi_2 = sx.q(r14_4)
                            char rax_28 = r8_3[rdi_2]
                            
                            if (rax_28 == 0 || rax_28 == 0xf)
                                r8_3[rdi_2] = 0
                            else
                                int16_t rsi_4 = *(rsi[5] + (rdi_2 << 1))
                                
                                if (rsi_4 - 1 u<= 0xfffd)
                                    if (sub_142635870(arg2, r14_4 + r13_1, rcx_12, r14_4, r8_3, 
                                            &var_68) == 0)
                                        rsi_1 = -0x7ffffff0
                                        break
                                    
                                    zmm6 = sub_142634220(*(rdi_2 + arg2[3]), &var_68, zmm6)
                                    int32_t rcx_15 = *rbx
                                    
                                    if (rcx_15 s>= r15.d)
                                        uint64_t r15_2 = zx.q(r15.d * 2)
                                        var_14c = r15_2.d
                                        int64_t rax_35 =
                                            (*(*arg1 + 0x10))(arg1, zx.q((r15_2 * 3).d << 3))
                                        
                                        if (rax_35 == 0)
                                            goto label_142625776
                                        
                                        memset(rax_35, 0, sx.q(r15_2.d) * 0x18)
                                        int32_t i_5 = 0
                                        
                                        if (*var_140 s> 0)
                                            int64_t rcx_19 = 0
                                            
                                            do
                                                int64_t rax_36 = *(var_140 + 8)
                                                rcx_19 += 0x18
                                                i_5 += 1
                                                *(rcx_19 + rax_35 - 0x18) =
                                                    *(rcx_19 + rax_36 - 0x18)
                                                *(rcx_19 + rax_35 - 8) = *(rcx_19 + rax_36 - 8)
                                                *(rcx_19 + *(var_140 + 8) - 0x10) = 0
                                            while (i_5 s< *var_140)
                                        
                                        (*(*arg1 + 0x18))(arg1, *(var_140 + 8), var_140, 0)
                                        *(var_140 + 8) = rax_35
                                        sub_142616290(&var_a0, r15_2.d)
                                        sub_142616290(&var_d0, r15_2.d)
                                        rbx = var_140
                                        rcx_15 = *rbx
                                    
                                    *rbx = rcx_15 + 1
                                    int64_t rbx_3 = sx.q(rcx_15)
                                    int64_t rax_42 = *(var_140 + 8)
                                    int64_t r15_3 = rbx_3 * 3
                                    int64_t var_e0_1 = r15_3
                                    *(rax_42 + (r15_3 << 3) + 0x10) = rsi_4
                                    int64_t rsi_5 = rax_42
                                    int32_t rdi_3 = 0
                                    *(rsi_5 + (r15_3 << 3) + 0x12) = *(rdi_2 + arg2[3])
                                    int32_t var_158_1 = 0
                                    int32_t var_b8
                                    var_a0[rbx_3] = var_b8
                                    uint64_t i_12 = zx.q(i_15)
                                    *(rsi_5 + (r15_3 << 3)) = i_12.d
                                    
                                    if (i_12.d s> 0)
                                        int64_t rax_47 =
                                            (*(*arg1 + 0x10))(arg1, zx.q((i_12 << 3).d))
                                        *(rsi_5 + (r15_3 << 3) + 8) = rax_47
                                        
                                        if (rax_47 == 0)
                                            goto label_142625776
                                        
                                        if (i_12.d s> 0)
                                            int64_t r13_2 = var_68
                                            int64_t rcx_26 = sx.q((i_12 - 1).d)
                                            int64_t r12_1 = 0
                                            int64_t var_e8_1 = 0
                                            uint64_t i_8 = i_12
                                            int64_t r14_6 = rcx_26 * 0xa
                                            int64_t rdi_4 = rcx_26 << 3
                                            uint64_t i_6
                                            
                                            do
                                                int64_t rsi_6 = *(rsi_5 + (r15_3 << 3) + 8)
                                                uint32_t r15_4 = zx.d(*(r14_6 + r13_2))
                                                uint32_t r9_3 = zx.d(*(r14_6 + r13_2 + 4))
                                                uint32_t r8_8 = zx.d(*(r14_6 + r13_2 + 2))
                                                int16_t rbx_4 = *(r12_1 + r13_2 + 6)
                                                char* var_168_1
                                                var_168_1.d = arg3
                                                char var_154 = 0
                                                int16_t rax_50 = sub_14262b8f0(arg2, r15_4, r8_8, 
                                                    r9_3, var_168_1.d, &var_154)
                                                
                                                if (rbx_4 != 0xffff && (0xf800 & rbx_4) == 0)
                                                    sub_142616290(&var_c0, var_b8 + 1)
                                                    var_158_1 += 1
                                                    *(var_c0 + (sx.q(var_b8 - 1) << 2)) =
                                                        zx.d(rbx_4)
                                                    r15_4 = zx.d(*(r14_6 + r13_2))
                                                
                                                *(rdi_4 + rsi_6 + 2) = rax_50
                                                *(rdi_4 + rsi_6) = r15_4.w
                                                *(rdi_4 + rsi_6 + 4) = *(r14_6 + r13_2 + 4)
                                                uint16_t rax_55 = 0xf
                                                *(rdi_4 + rsi_6 + 6) = 0xf
                                                
                                                if (rbx_4 != 0xffff)
                                                    rax_55 = 0xf
                                                    
                                                    if (rbx_4 u>= 0xf800)
                                                        rax_55 = zx.w(rbx_4.b)
                                                        *(rdi_4 + rsi_6 + 6) = rax_55
                                                
                                                if (var_154 != 0)
                                                    *(rdi_4 + rsi_6 + 6) = rax_55 | 0x80
                                                
                                                r14_6 = r12_1
                                                r15_3 = var_e0_1
                                                rdi_4 = var_e8_1
                                                rsi_5 = rax_42
                                                r12_1 += 0xa
                                                var_e8_1 += 8
                                                i_6 = i_8
                                                i_8 -= 1
                                            while (i_6 != 1)
                                            rdi_3 = var_158_1
                                            r14_4 = var_138
                                            r12 = var_f4
                                            r13_1 = var_150_2
                                    
                                    r15 = zx.q(var_14c)
                                    r8_3 = rax_10
                                    var_d0[rbx_3] = rdi_3
                                    rcx_12 = var_12c_1
                            
                            rbx = var_140
                            r14_4 += 1
                            var_138 = r14_4
                            
                            if (r14_4 + r13_1 s>= r12)
                                rax_27 = var_128_1
                                rdx_12 = r13
                                goto label_1426252a2
                            
                            rsi = arg2
                        
                        break
                    
                label_1426252a2:
                    rcx_12 += 1
                    rax_27 += r12
                    r13_1 -= r12
                    var_12c_1 = rcx_12
                    var_128_1 = rax_27
                    var_150_2 = r13_1
                    
                    if (rcx_12 s>= rdx_12)
                        goto label_1426252d4
                    
                    rbx = var_140
                    rsi = arg2
            sub_142609160(var_a0)
            sub_142609160(var_d0)
            sub_142609160(var_c0)
            rdi = arg1
        else
            rsi_1 = -0x7ffffffc
        
        int64_t r8_24 = *rdi
        (*(r8_24 + 0x18))(rdi, rax_10, r8_24)
    else
        rsi_1 = -0x7ffffffc
    
    int64_t r8_25 = *rdi
    (*(r8_25 + 0x18))(rdi, rax_8, r8_25)
else
    rsi_1 = -0x7ffffffc

int64_t r8_26 = *rdi
(*(r8_26 + 0x18))(rdi, rax_6, r8_26)
return zx.q(rsi_1)
