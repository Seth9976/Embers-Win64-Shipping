// 函数: sub_140a27100
// 地址: 0x140a27100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg7
int64_t rdi = sx.q(arg5)
char* r14 = arg3
void* r12 = arg2
int32_t* rbx = arg1

if (rbp != 2 || rdi.d s>= 1)
    int64_t rax_2 = sx.q(*arg4)
    
    if (rax_2.d u<= 0x7e000000)
        *(arg1 + 0x40000) += rax_2
        int32_t rdx = 9
        
        if (arg6 s>= 1)
            rdx = arg6
        
        if (rdx s> 0xc)
            rdx = 0xc
        
        int32_t r9 = 0
        int32_t r8
        r8.b = *(rbx + 0x40026) != 0
        int64_t rcx = sx.q(rdx) * 3
        int64_t zmm0 = *(&data_142e51b70 + (rcx << 2))
        int32_t rcx_1
        
        if (zmm0.d != 0)
            rcx_1.b = rdx == 0xc
            r9 = sub_140a296a0(rbx, r12, r14, arg4, rdi.d, zmm0:4.d, 
                zx.q(*((rcx << 2) + 0x142e51b78)), rbp, rcx_1, 0, r8)
        label_140a2965d:
            
            if (r9 s<= 0)
            label_140a2966a:
                *(arg1 + 0x40027) = 1
        else
            int64_t rdx_1 = sx.q(*arg4)
            int32_t* r11_1 = r12
            void* rsi_1 = r12
            *arg4 = 0
            void* r15_1 = r12 + rdx_1
            int32_t* var_120_1 = r12
            rcx_1.b = (zmm0 u>> 0x20).d u> 0x80
            void* var_d8_1 = r12
            void* r10_1 = r15_1 - 5
            void* rcx_3 = &arg3[rdi]
            void* var_78_1 = r15_1
            void* var_110_1 = r10_1
            char* var_c8_1 = r14
            int32_t* var_b8_1 = nullptr
            void* r13_1 = rcx_3 - 5
            void* var_c0_1 = nullptr
            
            if (rbp != 2)
                r13_1 = rcx_3
            
            int32_t* var_e8_1 = nullptr
            void* var_d0_1 = r13_1
            void* var_88_1 = nullptr
            int32_t* var_a0_1 = nullptr
            
            if (rdx_1.d s>= 0xd && r12 u<= r15_1 - 0xc)
                void* rax_7 = &rbx[0x8000]
                
                while (true)
                    int64_t rbp_1 = *(rbx + 0x40008)
                    int32_t rdi_1 = rbx[0x10007]
                    int32_t rdx_3 = r11_1.d - rbp_1.d
                    uint64_t r12_1 = zx.q(rbx[0x10006])
                    int32_t r14_1 = 0
                    int32_t i_1 = zmm0:4.d
                    void* r13_2 = nullptr
                    int32_t r15_2 = *r11_1
                    int32_t var_128_1 = 0
                    arg6 = 3
                    int64_t var_f8_1 = rbp_1
                    int64_t rdx_4 = *(rbx + 0x40010)
                    int64_t* rsi_2 = r12_1 + rbp_1
                    
                    if (rdi_1 + 0x10000 u<= rdx_3)
                        rdi_1 = rdx_3 - 0xffff
                    
                    int64_t* var_100_1 = rsi_2
                    uint64_t rdi_2 = zx.q(rbx[0x10008])
                    int32_t i = r11_1.d - rbp_1.d
                    int64_t var_e0_1 = rdx_4
                    
                    if (rdi_2.d u< i)
                        int32_t* r8_2 = rdi_2 + rbp_1
                        
                        do
                            uint64_t rcx_5 = zx.q(*r8_2 * 0x9e3779b1)
                            r8_2 += 1
                            int32_t* rdx_5 = rcx_5 u>> 0x11 << 2
                            uint64_t rcx_8 = zx.q(rdi_2.d - *(rdx_5 + rbx))
                            
                            if (rcx_8 u> 0xffff)
                                rcx_8 = 0xffff
                            
                            *(rbx + (zx.q(rdi_2.w) << 1) + 0x20000) = rcx_8.w
                            *(rdx_5 + rbx) = rdi_2.d
                            rdi_2 = zx.q(rdi_2.d + 1)
                        while (rdi_2.d u< i)
                        
                        rdx_4 = var_e0_1
                        r14_1 = 0
                    
                    int32_t rdi_3 = rdi_1
                    rbx[0x10008] = i
                    int32_t* r9_2 = var_120_1
                    uint64_t r11_2 = zx.q(rbx[zx.q(*r9_2 * 0x9e3779b1) u>> 0x11])
                    
                    if (r11_2.d u>= rdi_3)
                        while (i_1 != 0)
                            uint64_t rbx_1 = zx.q(r11_2.d)
                            
                            if (r11_2.d u>= r12_1.d)
                                int64_t rsi_3 = sx.q(arg6)
                                int32_t* r9_3 = rbx_1 + rbp_1
                                
                                if (*(rsi_3 + var_120_1 - 1) == *(rsi_3 + r9_3 - 1)
                                        && *r9_3 == r15_2)
                                    void* rdx_6 = &r9_3[1]
                                    void* j = &var_120_1[1]
                                    
                                    if (&var_120_1[1] u>= r10_1 - 7)
                                        goto label_140a27439
                                    
                                    uint64_t rax_12 = *(var_120_1 + 4) ^ *rdx_6
                                    uint32_t rcx_11
                                    
                                    if (rax_12 != 0)
                                        uint64_t rflags_1
                                        int32_t rcx_15
                                        rcx_15, rflags_1 = _bit_scan_forward(rax_12)
                                        int32_t var_108_1 = 0
                                        rcx_11 = rcx_15 u>> 3
                                    else
                                        j = &var_120_1[3]
                                        rdx_6 += 8
                                    label_140a27439:
                                        
                                        while (j u< r10_1 - 7)
                                            uint64_t rax_14 = *j ^ *rdx_6
                                            
                                            if (rax_14 != 0)
                                                uint64_t rflags_2
                                                int32_t rax_26
                                                rax_26, rflags_2 = _bit_scan_forward(rax_14)
                                                int32_t var_108_2 = 0
                                                rcx_11 = j.d + (rax_26 u>> 3) - (&var_120_1[1]).d
                                                goto label_140a2749b
                                            
                                            j += 8
                                            rdx_6 += 8
                                        
                                        if (j u< r10_1 - 3 && *rdx_6 == *j)
                                            j += 4
                                            rdx_6 += 4
                                        
                                        if (j u< r10_1 - 1 && *rdx_6 == *j)
                                            j += 2
                                            rdx_6 += 2
                                        
                                        if (j u< r10_1 && *rdx_6 == *j)
                                            j += 1
                                        
                                        rcx_11 = j.d - (&var_120_1[1]).d
                                    
                                label_140a2749b:
                                    rdi_3 = rdi_1
                                    
                                    if (rcx_11 + 4 s> rsi_3.d)
                                        arg6 = rcx_11 + 4
                                        var_b8_1 = r9_3
                                
                                r9_2 = var_120_1
                            else if (*(rbx_1 + rdx_4) == r15_2)
                                void* r8_7 = r10_1
                                void* rcx_18 = zx.q(r12_1.d - r11_2.d) + r9_2
                                
                                if (rcx_18 u<= r10_1)
                                    r8_7 = rcx_18
                                
                                int64_t* rdx_11 = rdx_4 + 4 + rbx_1
                                void* j_1 = &r9_2[1]
                                
                                if (&r9_2[1] u>= r8_7 - 7)
                                    goto label_140a275bc
                                
                                uint64_t rax_30 = *rdx_11 ^ *(r9_2 + 4)
                                uint32_t rcx_19
                                
                                if (rax_30 != 0)
                                    uint64_t rflags_3
                                    int32_t rcx_21
                                    rcx_21, rflags_3 = _bit_scan_forward(rax_30)
                                    int32_t var_108_3 = 0
                                    rcx_19 = rcx_21 u>> 3
                                else
                                    j_1 = &r9_2[3]
                                    rdx_11 = &rdx_11[1]
                                label_140a275bc:
                                    
                                    while (j_1 u< r8_7 - 7)
                                        uint64_t rax_32 = *rdx_11 ^ *j_1
                                        
                                        if (rax_32 != 0)
                                            uint64_t rflags_4
                                            int32_t rax_47
                                            rax_47, rflags_4 = _bit_scan_forward(rax_32)
                                            int32_t var_108_4 = 0
                                            rcx_19 = j_1.d + (rax_47 u>> 3) - (&r9_2[1]).d
                                            goto label_140a2761b
                                        
                                        j_1 += 8
                                        rdx_11 = &rdx_11[1]
                                    
                                    if (j_1 u< r8_7 - 3 && *rdx_11 == *j_1)
                                        j_1 += 4
                                        rdx_11 += 4
                                    
                                    if (j_1 u< r8_7 - 1 && *rdx_11 == *j_1)
                                        j_1 += 2
                                        rdx_11 += 2
                                    
                                    if (j_1 u< r8_7 && *rdx_11 == *j_1)
                                        j_1 += 1
                                    
                                    rcx_19 = j_1.d - (&r9_2[1]).d
                                
                            label_140a2761b:
                                int32_t r10_2 = rcx_19 + 4
                                void* j_9 = sx.q(r10_2) + var_120_1
                                
                                if (j_9 == r8_7 && r8_7 u< var_110_1)
                                    void* rdx_12 = rsi_2
                                    void* j_2 = j_9
                                    
                                    if (j_9 u>= var_110_1 - 7)
                                        goto label_140a27666
                                    
                                    uint64_t rax_39 = *rsi_2 ^ *j_9
                                    uint32_t rcx_20
                                    
                                    if (rax_39 != 0)
                                        uint64_t rflags_5
                                        int32_t rcx_22
                                        rcx_22, rflags_5 = _bit_scan_forward(rax_39)
                                        int32_t var_108_5 = 0
                                        rcx_20 = rcx_22 u>> 3
                                    else
                                        j_2 = j_9 + 8
                                        rdx_12 = &rsi_2[1]
                                    label_140a27666:
                                        
                                        while (j_2 u< var_110_1 - 7)
                                            uint64_t rax_41 = *j_2 ^ *rdx_12
                                            
                                            if (rax_41 != 0)
                                                uint64_t rflags_6
                                                int32_t rax_50
                                                rax_50, rflags_6 = _bit_scan_forward(rax_41)
                                                int32_t var_108_6 = 0
                                                rcx_20 = j_2.d + (rax_50 u>> 3) - j_9.d
                                                goto label_140a276cb
                                            
                                            j_2 += 8
                                            rdx_12 += 8
                                        
                                        if (j_2 u< var_110_1 - 3 && *rdx_12 == *j_2)
                                            j_2 += 4
                                            rdx_12 += 4
                                        
                                        if (j_2 u< var_110_1 - 1 && *rdx_12 == *j_2)
                                            j_2 += 2
                                            rdx_12 += 2
                                        
                                        if (j_2 u< var_110_1 && *rdx_12 == *j_2)
                                            j_2 += 1
                                        
                                        rcx_20 = j_2.d - j_9.d
                                    
                                label_140a276cb:
                                    r10_2 += rcx_20
                                
                                r9_2 = var_120_1
                                
                                if (r10_2 s> arg6)
                                    arg6 = r10_2
                                    var_b8_1 = rbx_1 + rbp_1
                                
                                rdi_3 = rdi_1
                                r10_1 = var_110_1
                            
                            if (rcx_1 == 0 || *(rax_7 + (zx.q(r11_2.w) << 1)) != 1)
                                r11_2 = zx.q(r11_2.d - zx.d(*(rax_7 + (zx.q(r11_2.w) << 1))))
                            else
                                int32_t rsi_4 = (r11_2 - 1).d
                                
                                if (r14_1 == 0)
                                    int32_t rdi_5
                                    rdi_5.b = r15_2.b == (r15_2 u>> 0x18).b
                                    int32_t rcx_13
                                    rcx_13.b = zx.d(r15_2.w) == r15_2 u>> 0x10
                                    
                                    if ((rcx_13 & rdi_5) == 0)
                                        r14_1 = 1
                                        var_128_1 = 1
                                    label_140a2776d:
                                        rdi_3 = rdi_1
                                        r11_2 =
                                            zx.q(r11_2.d - zx.d(*(rax_7 + (zx.q(r11_2.w) << 1))))
                                    else
                                        r14_1 = 2
                                        var_128_1 = 2
                                        rdi_3 = rdi_1
                                        r13_2 = zx.q(sub_140a2c4c0(&r9_2[1], r10_1, r15_2)) + 4
                                        
                                        if (rsi_4 u>= rdi_3 && r12_1.d - rsi_4 - 1 u>= 3)
                                            goto label_140a277f7
                                        
                                        r11_2 =
                                            zx.q(r11_2.d - zx.d(*(rax_7 + (zx.q(r11_2.w) << 1))))
                                else if (r14_1 != 2 || rsi_4 u< rdi_3 || r12_1.d - rsi_4 - 1 u< 3)
                                    r11_2 = zx.q(r11_2.d - zx.d(*(rax_7 + (zx.q(r11_2.w) << 1))))
                                else
                                label_140a277f7:
                                    int64_t rdi_9 = rbp_1
                                    
                                    if (rsi_4 u< r12_1.d)
                                        rdi_9 = var_e0_1
                                    
                                    int32_t* rdi_10 = rdi_9 + zx.q(rsi_4)
                                    
                                    if (*rdi_10 != r15_2)
                                        goto label_140a2776d
                                    
                                    void* rdx_13 = var_e0_1 + r12_1
                                    int64_t* r14_3 = zx.q(arg1[0x10007]) + var_e0_1
                                    
                                    if (rsi_4 u>= r12_1.d)
                                        rdx_13 = var_110_1
                                    
                                    void* rbx_3 = zx.q(sub_140a2c4c0(&rdi_10[1], rdx_13, r15_2)) + 4
                                    int64_t* r11_4
                                    
                                    if (rsi_4 u>= r12_1.d || rbx_3 + rdi_10 != rdx_13)
                                        r11_4 = var_100_1
                                    else
                                        int32_t r8_10 = r15_2
                                        uint64_t rax_63 = (zx.q(rbx_3.d) & 3) << 3
                                        
                                        if (rax_63 != 0)
                                            r8_10 = rol.d(r8_10, rax_63.b)
                                        
                                        r11_4 = var_100_1
                                        rbx_3 += zx.q(sub_140a2c4c0(r11_4, var_110_1, r8_10))
                                    
                                    int64_t* rdx_16 = r11_4
                                    
                                    if (rsi_4 u< r12_1.d)
                                        rdx_16 = r14_3
                                    
                                    uint64_t rbp_2 = zx.q(sub_140a2c5c0(rdi_10, rdx_16, r15_2))
                                    
                                    if (rsi_4 u>= r12_1.d && rdi_10 - rbp_2 == var_100_1
                                            && arg1[0x10007] u< r12_1.d)
                                        int32_t r8_12 = r15_2
                                        uint64_t rax_70 = (zx.q(neg.d(rbp_2.d)) & 3) << 3
                                        
                                        if (rax_70 != 0)
                                            r8_12 = rol.d(r8_12, rax_70.b)
                                        
                                        rbp_2 += zx.q(sub_140a2c5c0(r12_1 + var_e0_1, r14_3, r8_12))
                                    
                                    rdi_3 = rdi_1
                                    r11_2 = zx.q(rdi_3)
                                    int32_t rax_74 = rsi_4 - rbp_2.d
                                    
                                    if (rax_74 u> rdi_3)
                                        r11_2 = zx.q(rax_74)
                                    
                                    void* rdx_20 = zx.q(rsi_4 - r11_2.d) + rbx_3
                                    
                                    if (rdx_20 u< r13_2 || rbx_3 u> r13_2)
                                        rbp_1 = var_f8_1
                                        
                                        if (r12_1.d - r11_2.d - 1 u>= 3)
                                            r9_2 = var_120_1
                                            void* rcx_33 = r13_2
                                            
                                            if (rdx_20 u< r13_2)
                                                rcx_33 = rdx_20
                                            
                                            if (sx.q(arg6) u< rcx_33)
                                                if (r9_2 - zx.q(r11_2.d) - rbp_1 s> 0xffff)
                                                    break
                                                
                                                arg6 = rcx_33.d
                                                var_b8_1 = r11_2 + rbp_1
                                            
                                            uint32_t rcx_24 = zx.d(*(rax_7 + (zx.q(r11_2.w) << 1)))
                                            
                                            if (rcx_24 u> r11_2.d)
                                                break
                                            
                                            r14_1 = var_128_1
                                            r11_2 = zx.q(r11_2.d - rcx_24)
                                        else
                                            r14_1 = var_128_1
                                            r11_2 = zx.q(r12_1.d)
                                    else
                                        rbp_1 = var_f8_1
                                        r14_1 = var_128_1
                                        r11_2 = zx.q(rbx_3.d - r13_2.d + rsi_4)
                                        
                                        if (r12_1.d - r11_2.d - 1 u< 3)
                                            r11_2 = zx.q(r12_1.d)
                            
                            rsi_2 = var_100_1
                            rdx_4 = var_e0_1
                            i_1 -= 1
                            r9_2 = var_120_1
                            
                            if (r11_2.d u< rdi_3)
                                break
                            
                            r10_1 = var_110_1
                    
                    int32_t rdx_22 = arg6
                    void* r9_6
                    
                    if (rdx_22 s>= 4)
                        int32_t* r13_4 = var_b8_1
                        int32_t* rbx_5 = r9_2
                        int32_t* var_70_1 = r13_4
                        int32_t* var_58_1 = r9_2
                        int32_t var_108_7 = rdx_22
                        
                        while (true)
                        label_140a279f8:
                            int64_t rsi_5 = sx.q(rdx_22)
                            void* rax_87 = rbx_5 + rsi_5
                            char* r10_13
                            int32_t r14_11
                            
                            if (rax_87 u<= var_78_1 - 0xc)
                                int32_t r12_2 = *(rax_87 - 2)
                                int32_t var_124_2 = rdx_22
                                int64_t r11_5 = *(arg1 + 0x40008)
                                int32_t rsi_6 = arg1[0x10007]
                                int32_t rdx_24 = (rax_87 - 2).d - r11_5.d
                                uint64_t r13_5 = zx.q(arg1[0x10006])
                                uint64_t rdi_12 = zx.q(arg1[0x10008])
                                int64_t r8_13 = *(arg1 + 0x40010)
                                int64_t var_100_2 = r11_5
                                int64_t var_a8_1 = r8_13
                                
                                if (rsi_6 + 0x10000 u<= rdx_24)
                                    rsi_6 = rdx_24 - 0xffff
                                
                                int64_t* r14_4 = r11_5 + r13_5
                                int64_t* var_f8_2 = r14_4
                                int32_t i_3 = zmm0:4.d
                                int32_t i_2 = (rax_87 - 2).d - r11_5.d
                                int32_t var_118_3 = 0
                                void* var_80_1 = nullptr
                                
                                if (rdi_12.d u< i_2)
                                    int32_t* r8_14 = r11_5 + rdi_12
                                    
                                    do
                                        uint64_t rcx_38 = zx.q(*r8_14 * 0x9e3779b1)
                                        r8_14 += 1
                                        int32_t* rdx_25 = rcx_38 u>> 0x11 << 2
                                        uint64_t rcx_41 = zx.q(rdi_12.d - *(rdx_25 + arg1))
                                        
                                        if (rcx_41 u> 0xffff)
                                            rcx_41 = 0xffff
                                        
                                        *(arg1 + (zx.q(rdi_12.w) << 1) + 0x20000) = rcx_41.w
                                        *(rdx_25 + arg1) = rdi_12.d
                                        rdi_12 = zx.q(rdi_12.d + 1)
                                    while (rdi_12.d u< i_2)
                                    
                                    r14_4 = var_f8_2
                                    r8_13 = var_a8_1
                                
                                arg1[0x10008] = i_2
                                uint64_t rbp_4 =
                                    zx.q(arg1[zx.q(*(rax_87 - 2) * 0x9e3779b1) u>> 0x11])
                                
                                if (rbp_4.d u>= rsi_6)
                                    int64_t rdx_26 = sx.q((rax_87 - 2).d - rbx_5.d)
                                    int64_t var_90_1 = rdx_26
                                    
                                    while (i_3 != 0)
                                        uint64_t rsi_7 = zx.q(rbp_4.d)
                                        int64_t rbx_7
                                        void* r11_6
                                        
                                        if (rbp_4.d u< r13_5.d)
                                            void* r11_7 = r8_13 + rsi_7
                                            
                                            if (*(r8_13 + rsi_7) != r12_2)
                                                r11_6 = var_110_1
                                                rbx_7 = var_100_2
                                            else
                                                int32_t* rdx_30 = r11_7 + 4
                                                void* rcx_55 = zx.q(r13_5.d - rbp_4.d) + rax_87 - 2
                                                int64_t rbx_9 = zx.q(arg1[0x10007]) + r8_13
                                                void* r8_17 = var_110_1
                                                
                                                if (rcx_55 u<= r8_17)
                                                    r8_17 = rcx_55
                                                
                                                void* j_3 = rax_87 + 2
                                                
                                                if (rax_87 + 2 u>= r8_17 - 7)
                                                    goto label_140a27d07
                                                
                                                uint64_t rax_112 = *(rax_87 + 2) ^ *rdx_30
                                                uint32_t rcx_56
                                                
                                                if (rax_112 != 0)
                                                    uint64_t rflags_9
                                                    int32_t rcx_61
                                                    rcx_61, rflags_9 = _bit_scan_forward(rax_112)
                                                    var_e0_1.d = 0
                                                    rcx_56 = rcx_61 u>> 3
                                                else
                                                    j_3 = rax_87 + 0xa
                                                    rdx_30 = &rdx_30[2]
                                                label_140a27d07:
                                                    
                                                    while (j_3 u< r8_17 - 7)
                                                        uint64_t rax_114 = *j_3 ^ *rdx_30
                                                        
                                                        if (rax_114 != 0)
                                                            uint64_t rflags_10
                                                            int32_t rax_135
                                                            rax_135, rflags_10 =
                                                                _bit_scan_forward(rax_114)
                                                            var_e0_1.d = 0
                                                            rcx_56 =
                                                                j_3.d - (rax_87 + 2).d + (rax_135 u>> 3)
                                                            goto label_140a27d6b
                                                        
                                                        j_3 += 8
                                                        rdx_30 = &rdx_30[2]
                                                    
                                                    if (j_3 u< r8_17 - 3 && *rdx_30 == *j_3)
                                                        j_3 += 4
                                                        rdx_30 = &rdx_30[1]
                                                    
                                                    if (j_3 u< r8_17 - 1 && *rdx_30 == *j_3)
                                                        j_3 += 2
                                                        rdx_30 += 2
                                                    
                                                    if (j_3 u< r8_17 && *rdx_30 == *j_3)
                                                        j_3 += 1
                                                    
                                                    rcx_56 = j_3.d - (rax_87 + 2).d
                                                
                                            label_140a27d6b:
                                                int32_t r10_6 = rcx_56 + 4
                                                void* j_10 = sx.q(r10_6) + rax_87 - 2
                                                
                                                if (j_10 == r8_17 && r8_17 u< var_110_1)
                                                    void* rdx_31 = r14_4
                                                    void* j_4 = j_10
                                                    
                                                    if (j_10 u>= var_110_1 - 7)
                                                        goto label_140a27db4
                                                    
                                                    uint64_t rax_121 = *j_10 ^ *r14_4
                                                    uint32_t rcx_57
                                                    
                                                    if (rax_121 != 0)
                                                        uint64_t rflags_11
                                                        int32_t rcx_63
                                                        rcx_63, rflags_11 =
                                                            _bit_scan_forward(rax_121)
                                                        var_e0_1.d = 0
                                                        rcx_57 = rcx_63 u>> 3
                                                    else
                                                        j_4 = j_10 + 8
                                                        rdx_31 = &r14_4[1]
                                                    label_140a27db4:
                                                        
                                                        while (j_4 u< var_110_1 - 7)
                                                            uint64_t rax_123 = *j_4 ^ *rdx_31
                                                            
                                                            if (rax_123 != 0)
                                                                uint64_t rflags_12
                                                                int32_t rax_137
                                                                rax_137, rflags_12 =
                                                                    _bit_scan_forward(rax_123)
                                                                var_e0_1.d = 0
                                                                rcx_57 =
                                                                    j_4.d - j_10.d + (rax_137 u>> 3)
                                                                goto label_140a27e1b
                                                            
                                                            j_4 += 8
                                                            rdx_31 += 8
                                                        
                                                        if (j_4 u< var_110_1 - 3 && *rdx_31 == *j_4)
                                                            j_4 += 4
                                                            rdx_31 += 4
                                                        
                                                        if (j_4 u< var_110_1 - 1 && *rdx_31 == *j_4)
                                                            j_4 += 2
                                                            rdx_31 += 2
                                                        
                                                        if (j_4 u< var_110_1 && *rdx_31 == *j_4)
                                                            j_4 += 1
                                                        
                                                        rcx_57 = j_4.d - j_10.d
                                                    
                                                label_140a27e1b:
                                                    r10_6 += rcx_57
                                                
                                                int32_t rdx_32 = 0
                                                
                                                if (var_90_1 != 0)
                                                    void* rbx_10 = rbx_9 - r11_7
                                                    int64_t rax_130 = var_120_1 - (rax_87 - 2)
                                                    
                                                    if (rax_130 s> rbx_10)
                                                        rbx_10 = zx.q(rax_130.d)
                                                    
                                                    if (rbx_10.d s< 0)
                                                        void* rcx_58 = r11_7 - 1
                                                        
                                                        while (*(rax_87 - 2 - r11_7 + rcx_58)
                                                                == *rcx_58)
                                                            rcx_58 -= 1
                                                            rdx_32 -= 1
                                                            
                                                            if (1 - r11_7 + rcx_58
                                                                    s<= sx.q(rbx_10.d))
                                                                break
                                                
                                                rbx_7 = var_100_2
                                                int32_t r10_7 = r10_6 - rdx_32
                                                r11_6 = var_110_1
                                                
                                                if (r10_7 s> var_124_2)
                                                    int64_t rax_133 = sx.q(rdx_32)
                                                    var_124_2 = r10_7
                                                    var_e8_1 = rsi_7 + rax_133 + rbx_7
                                                    var_c0_1 = rax_133 + rax_87 - 2
                                        else
                                            int32_t* r10_5 = rsi_7 + r11_5
                                            int64_t rsi_8 = sx.q(var_124_2)
                                            
                                            if (*(rsi_8 + var_120_1 - 1)
                                                    != *(r10_5 - rdx_26 + rsi_8 - 1) || *r10_5 != r12_2)
                                                r11_6 = var_110_1
                                                rbx_7 = var_100_2
                                            else
                                                int32_t r9_8 = 0
                                                
                                                if (rdx_26 != 0)
                                                    void* rcx_45 = r14_4 - r10_5
                                                    int64_t rax_94 = var_120_1 - (rax_87 - 2)
                                                    
                                                    if (rax_94 s> rcx_45)
                                                        rcx_45 = zx.q(rax_94.d)
                                                    
                                                    if (rcx_45.d s< 0)
                                                        void* rcx_46 = r10_5 - 1
                                                        
                                                        while (*(rax_87 - 2 - r10_5 + rcx_46)
                                                                == *rcx_46)
                                                            rcx_46 -= 1
                                                            r9_8 -= 1
                                                            
                                                            if (1 - r10_5 + rcx_46
                                                                    s<= sx.q(rcx_45.d))
                                                                break
                                                
                                                r11_6 = var_110_1
                                                void* rdx_29 = &r10_5[1]
                                                void* j_5 = rax_87 + 2
                                                
                                                if (rax_87 + 2 u>= r11_6 - 7)
                                                    goto label_140a27be7
                                                
                                                uint64_t rax_98 = *(rax_87 + 2) ^ *rdx_29
                                                uint32_t rcx_47
                                                
                                                if (rax_98 != 0)
                                                    uint64_t rflags_7
                                                    int32_t rcx_51
                                                    rcx_51, rflags_7 = _bit_scan_forward(rax_98)
                                                    var_e0_1.d = 0
                                                    rcx_47 = rcx_51 u>> 3
                                                else
                                                    j_5 = rax_87 + 0xa
                                                    rdx_29 += 8
                                                label_140a27be7:
                                                    
                                                    while (j_5 u< r11_6 - 7)
                                                        uint64_t rax_100 = *j_5 ^ *rdx_29
                                                        
                                                        if (rax_100 != 0)
                                                            uint64_t rflags_8
                                                            int32_t rax_108
                                                            rax_108, rflags_8 =
                                                                _bit_scan_forward(rax_100)
                                                            var_e0_1.d = 0
                                                            rcx_47 =
                                                                j_5.d - (rax_87 + 2).d + (rax_108 u>> 3)
                                                            goto label_140a27c4b
                                                        
                                                        j_5 += 8
                                                        rdx_29 += 8
                                                    
                                                    if (j_5 u< r11_6 - 3 && *rdx_29 == *j_5)
                                                        j_5 += 4
                                                        rdx_29 += 4
                                                    
                                                    if (j_5 u< r11_6 - 1 && *rdx_29 == *j_5)
                                                        j_5 += 2
                                                        rdx_29 += 2
                                                    
                                                    if (j_5 u< r11_6 && *rdx_29 == *j_5)
                                                        j_5 += 1
                                                    
                                                    rcx_47 = j_5.d - (rax_87 + 2).d
                                                
                                            label_140a27c4b:
                                                rbx_7 = var_100_2
                                                
                                                if (rcx_47 - r9_8 + 4 s> rsi_8.d)
                                                    int64_t rax_106 = sx.q(r9_8)
                                                    var_124_2 = rcx_47 - r9_8 + 4
                                                    var_c0_1 = rax_106 + rax_87 - 2
                                                    var_e8_1 = r10_5 + rax_106
                                        
                                        int32_t r8_21
                                        
                                        if (rcx_1 == 0 || *(rax_7 + (zx.q(rbp_4.w) << 1)) != 1)
                                            r8_21 = rsi_6
                                            rbp_4 = zx.q(rbp_4.d
                                                - zx.d(*(rax_7 + (zx.q(rbp_4.w) << 1))))
                                        else
                                            int32_t rsi_9 = (rbp_4 - 1).d
                                            
                                            if (var_118_3 != 0)
                                                if (var_118_3 == 2)
                                                    goto label_140a27fb6
                                                
                                                r8_21 = rsi_6
                                                rbp_4 = zx.q(rbp_4.d
                                                    - zx.d(*(rax_7 + (zx.q(rbp_4.w) << 1))))
                                            else
                                                int32_t rdi_20
                                                rdi_20.b = r12_2.b == (r12_2 u>> 0x18).b
                                                int32_t rcx_66
                                                rcx_66.b = zx.d(r12_2.w) == r12_2 u>> 0x10
                                                
                                                if ((rcx_66 & rdi_20) == 0)
                                                    var_118_3 = 1
                                                    r8_21 = rsi_6
                                                    rbp_4 = zx.q(rbp_4.d
                                                        - zx.d(*(rax_7 + (zx.q(rbp_4.w) << 1))))
                                                else
                                                    var_118_3 = 2
                                                    var_80_1 = zx.q(sub_140a2c4c0(rax_87 + 2, 
                                                        r11_6, r12_2)) + 4
                                                label_140a27fb6:
                                                    r8_21 = rsi_6
                                                    
                                                    if (rsi_9 u< r8_21 || r13_5.d - rsi_9 - 1 u< 3)
                                                        rbp_4 = zx.q(rbp_4.d -
                                                            zx.d(*(rax_7 + (zx.q(rbp_4.w) << 1))))
                                                    else
                                                        int64_t rdi_21 = rbx_7
                                                        
                                                        if (rsi_9 u< r13_5.d)
                                                            rdi_21 = var_a8_1
                                                        
                                                        int32_t* rdi_22 = rdi_21 + zx.q(rsi_9)
                                                        
                                                        if (*rdi_22 != r12_2)
                                                            rbp_4 = zx.q(rbp_4.d -
                                                                zx.d(*(rax_7 + (zx.q(rbp_4.w) << 1))))
                                                        else
                                                            void* rdx_36 = var_a8_1 + r13_5
                                                            int64_t* rbp_6 =
                                                                zx.q(arg1[0x10007]) + var_a8_1
                                                            
                                                            if (rsi_9 u>= r13_5.d)
                                                                rdx_36 = var_110_1
                                                            
                                                            void* r14_6 = zx.q(sub_140a2c4c0(
                                                                &rdi_22[1], rdx_36, r12_2)) + 4
                                                            int64_t* r11_11
                                                            
                                                            if (rsi_9 u>= r13_5.d
                                                                    || r14_6 + rdi_22 != rdx_36)
                                                                r11_11 = var_f8_2
                                                            else
                                                                int32_t r8_23 = r12_2
                                                                uint64_t rax_154 =
                                                                    (zx.q(r14_6.d) & 3) << 3
                                                                
                                                                if (rax_154 != 0)
                                                                    r8_23 = rol.d(r8_23, rax_154.b)
                                                                
                                                                r11_11 = var_f8_2
                                                                r14_6 += zx.q(sub_140a2c4c0(r11_11, 
                                                                    var_110_1, r8_23))
                                                            
                                                            int64_t* rdx_39 = r11_11
                                                            
                                                            if (rsi_9 u< r13_5.d)
                                                                rdx_39 = rbp_6
                                                            
                                                            uint64_t rbx_11 = zx.q(sub_140a2c5c0(
                                                                rdi_22, rdx_39, r12_2))
                                                            
                                                            if (rsi_9 u>= r13_5.d
                                                                    && rdi_22 - rbx_11 == var_f8_2
                                                                    && arg1[0x10007] u< r13_5.d)
                                                                int32_t r8_25 = r12_2
                                                                uint64_t rax_161 =
                                                                    (zx.q(neg.d(rbx_11.d)) & 3) << 3
                                                                
                                                                if (rax_161 != 0)
                                                                    r8_25 = rol.d(r8_25, rax_161.b)
                                                                
                                                                rbx_11 += zx.q(sub_140a2c5c0(
                                                                    r13_5 + var_a8_1, rbp_6, r8_25))
                                                            
                                                            r8_21 = rsi_6
                                                            int32_t rax_165 = rsi_9 - rbx_11.d
                                                            rbp_4 = zx.q(r8_21)
                                                            
                                                            if (rax_165 u> r8_21)
                                                                rbp_4 = zx.q(rax_165)
                                                            
                                                            void* rdx_43 =
                                                                zx.q(rsi_9 - rbp_4.d) + r14_6
                                                            
                                                            if (rdx_43 u>= var_80_1
                                                                    && r14_6 u<= var_80_1)
                                                                rbp_4 =
                                                                    zx.q(rsi_9 - var_80_1.d + r14_6.d)
                                                                
                                                                if (r13_5.d - rbp_4.d - 1 u< 3)
                                                                    rbp_4 = zx.q(r13_5.d)
                                                            else if (r13_5.d - rbp_4.d - 1 u< 3)
                                                                rbp_4 = zx.q(r13_5.d)
                                                            else if (var_90_1 == 0)
                                                                void* rcx_79 = var_80_1
                                                                
                                                                if (rdx_43 u< var_80_1)
                                                                    rcx_79 = rdx_43
                                                                
                                                                if (sx.q(var_124_2) u< rcx_79)
                                                                    if (
                                                                            rax_87 - 2 - var_100_2 - zx.q(rbp_4.d)
                                                                            s> 0xffff)
                                                                        break
                                                                    
                                                                    var_124_2 = rcx_79.d
                                                                    var_e8_1 = var_100_2 + rbp_4
                                                                    var_c0_1 = rax_87 - 2
                                                                
                                                                uint32_t rcx_81 =
                                                                    zx.d(*(rax_7 + (zx.q(rbp_4.w) << 1)))
                                                                
                                                                if (rcx_81 u> rbp_4.d)
                                                                    break
                                                                
                                                                rbp_4 = zx.q(rbp_4.d - rcx_81)
                                                            
                                                            r14_4 = var_f8_2
                                        
                                        r11_5 = var_100_2
                                        r8_13 = var_a8_1
                                        rdx_26 = var_90_1
                                        i_3 -= 1
                                        
                                        if (rbp_4.d u< r8_21)
                                            break
                                
                                void* r12_3 = var_c0_1
                                int32_t r15_4 = var_124_2
                                rbx_5 = r12_3
                                int32_t rsi_11 = arg6
                                
                                if (r15_4 == rsi_11)
                                    r9_2 = var_120_1
                                    r13_4 = var_b8_1
                                else
                                    int32_t* r11_13 = var_120_1
                                    
                                    if (var_58_1 u< r11_13)
                                        int64_t rdx_44 = sx.q(var_108_7)
                                        
                                        if (r12_3 u< r11_13 + rdx_44)
                                            r11_13 = var_58_1
                                            var_b8_1 = var_70_1
                                            rsi_11 = rdx_44.d
                                            var_120_1 = var_58_1
                                            arg6 = rdx_44.d
                                    
                                    if (r12_3 - r11_13 s< 3)
                                        r13_4 = var_e8_1
                                        rdx_22 = r15_4
                                        arg6 = rdx_22
                                        r9_2 = r12_3
                                        var_b8_1 = r13_4
                                        var_120_1 = r12_3
                                        continue
                                    
                                    void* r13_6 = var_88_1
                                    int32_t* rdi_25 = var_e8_1
                                    
                                    while (true)
                                        if (r12_3 - r11_13 s< 0x12)
                                            int32_t rdx_46 = rsi_11
                                            
                                            if (rsi_11 s> 0x12)
                                                rdx_46 = 0x12
                                            
                                            if (sx.q(rdx_46) + r11_13 u> sx.q(r15_4) - 4 + r12_3)
                                                rdx_46 = r12_3.d - r11_13.d - 4 + r15_4
                                            
                                            int32_t rcx_87 = r11_13.d - r12_3.d + rdx_46
                                            
                                            if (rcx_87 s> 0)
                                                int64_t rax_187 = sx.q(rcx_87)
                                                r12_3 += rax_187
                                                r15_4 -= rcx_87
                                                var_c0_1 = r12_3
                                                var_124_2 = r15_4
                                                var_e8_1 = rdi_25 + rax_187
                                        
                                        uint64_t rbp_7 = zx.q(r15_4)
                                        void* rdx_51 = sx.q(r15_4) + r12_3
                                        
                                        if (rdx_51 u<= var_78_1 - 0xc)
                                            int32_t var_118_4 = r15_4
                                            int64_t rbx_12 = *(arg1 + 0x40008)
                                            int32_t rsi_12 = arg1[0x10007]
                                            int32_t rdx_53 = (rdx_51 - 3).d - rbx_12.d
                                            uint64_t r13_7 = zx.q(arg1[0x10006])
                                            uint64_t rdi_27 = zx.q(arg1[0x10008])
                                            int64_t var_a8_2 = rbx_12
                                            int64_t* r8_26 = rbx_12 + r13_7
                                            
                                            if (rsi_12 + 0x10000 u<= rdx_53)
                                                rsi_12 = rdx_53 - 0xffff
                                            
                                            int64_t* var_100_3 = r8_26
                                            int64_t rax_191 = *(arg1 + 0x40010)
                                            int32_t r12_4 = *(rdx_51 - 3)
                                            int32_t i_4 = (rdx_51 - 3).d - rbx_12.d
                                            int32_t i_5 = zmm0:4.d
                                            int32_t r11_14 = 0
                                            int32_t var_128_3 = 0
                                            void* var_80_2 = nullptr
                                            
                                            if (rdi_27.d u< i_4)
                                                int32_t* r8_27 = rbx_12 + rdi_27
                                                
                                                do
                                                    uint64_t rcx_89 = zx.q(*r8_27 * 0x9e3779b1)
                                                    r8_27 += 1
                                                    int32_t* rdx_54 = rcx_89 u>> 0x11 << 2
                                                    uint64_t rcx_92 =
                                                        zx.q(rdi_27.d - *(rdx_54 + arg1))
                                                    
                                                    if (rcx_92 u> 0xffff)
                                                        rcx_92 = 0xffff
                                                    
                                                    *(arg1 + (zx.q(rdi_27.w) << 1) + 0x20000) =
                                                        rcx_92.w
                                                    *(rdx_54 + arg1) = rdi_27.d
                                                    rdi_27 = zx.q(rdi_27.d + 1)
                                                while (rdi_27.d u< i_4)
                                                
                                                r8_26 = var_100_3
                                                r11_14 = 0
                                            
                                            arg1[0x10008] = i_4
                                            uint64_t r14_8 = zx.q(arg1[
                                                zx.q(*(rdx_51 - 3) * 0x9e3779b1) u>> 0x11])
                                            
                                            if (r14_8.d u>= rsi_12)
                                                int64_t rdx_55 = sx.q((rdx_51 - 3).d - r12_3.d)
                                                int64_t var_f8_3 = rdx_55
                                                
                                                while (i_5 != 0)
                                                    uint64_t rsi_13 = zx.q(r14_8.d)
                                                    i_5 -= 1
                                                    void* rsi_14
                                                    
                                                    if (r14_8.d u< r13_7.d)
                                                        void* r11_15 = rax_191 + rsi_13
                                                        
                                                        if (*(rax_191 + rsi_13) != r12_4)
                                                            r11_14 = var_128_3
                                                        else
                                                            void* r8_30 = var_110_1
                                                            int64_t* rdx_59 = r11_15 + 4
                                                            int64_t rbx_14 =
                                                                zx.q(arg1[0x10007]) + rax_191
                                                            void* rcx_115 =
                                                                zx.q(r13_7.d - r14_8.d) + rdx_51 - 3
                                                            
                                                            if (rcx_115 u<= r8_30)
                                                                r8_30 = rcx_115
                                                            
                                                            void* j_6 = rdx_51 + 1
                                                            
                                                            if (rdx_51 + 1 u>= r8_30 - 7)
                                                                goto label_140a28630
                                                            
                                                            uint64_t rax_211 =
                                                                *rdx_59 ^ *(rdx_51 + 1)
                                                            uint32_t rcx_116
                                                            
                                                            if (rax_211 != 0)
                                                                uint64_t rflags_15
                                                                int32_t rcx_121
                                                                rcx_121, rflags_15 =
                                                                    _bit_scan_forward(rax_211)
                                                                var_e0_1.d = 0
                                                                rcx_116 = rcx_121 u>> 3
                                                            else
                                                                j_6 = rdx_51 + 9
                                                                rdx_59 = &rdx_59[1]
                                                            label_140a28630:
                                                                
                                                                while (j_6 u< r8_30 - 7)
                                                                    uint64_t rax_213 = *rdx_59 ^ *j_6
                                                                    
                                                                    if (rax_213 != 0)
                                                                        uint64_t rflags_16
                                                                        int32_t rax_235
                                                                        rax_235, rflags_16 =
                                                                            _bit_scan_forward(rax_213)
                                                                        var_e0_1.d = 0
                                                                        rcx_116 =
                                                                            j_6.d + (rax_235 u>> 3) - (rdx_51 + 1).d
                                                                        goto label_140a2868d
                                                                    
                                                                    j_6 += 8
                                                                    rdx_59 = &rdx_59[1]
                                                                
                                                                if (j_6 u< r8_30 - 3 && *rdx_59 == *j_6)
                                                                    j_6 += 4
                                                                    rdx_59 += 4
                                                                
                                                                if (j_6 u< r8_30 - 1 && *rdx_59 == *j_6)
                                                                    j_6 += 2
                                                                    rdx_59 += 2
                                                                
                                                                if (j_6 u< r8_30 && *rdx_59 == *j_6)
                                                                    j_6 += 1
                                                                
                                                                rcx_116 = j_6.d - (rdx_51 + 1).d
                                                            
                                                        label_140a2868d:
                                                            int32_t r10_11 = rcx_116 + 4
                                                            void* j_11 = sx.q(r10_11) + rdx_51 - 3
                                                            
                                                            if (j_11 == r8_30 && r8_30 u< var_110_1)
                                                                void* rdx_60 = var_100_3
                                                                void* j_7 = j_11
                                                                
                                                                if (j_11 u>= var_110_1 - 7)
                                                                    goto label_140a286dc
                                                                
                                                                uint64_t rax_221 = *var_100_3 ^ *j_11
                                                                uint32_t rcx_117
                                                                
                                                                if (rax_221 != 0)
                                                                    uint64_t rflags_17
                                                                    int32_t rcx_122
                                                                    rcx_122, rflags_17 =
                                                                        _bit_scan_forward(rax_221)
                                                                    var_e0_1.d = 0
                                                                    rcx_117 = rcx_122 u>> 3
                                                                else
                                                                    j_7 = j_11 + 8
                                                                    rdx_60 = &var_100_3[1]
                                                                label_140a286dc:
                                                                    
                                                                    while (j_7 u< var_110_1 - 7)
                                                                        uint64_t rax_223 = *j_7 ^ *rdx_60
                                                                        
                                                                        if (rax_223 != 0)
                                                                            uint64_t rflags_18
                                                                            int32_t rax_238
                                                                            rax_238, rflags_18 =
                                                                                _bit_scan_forward(rax_223)
                                                                            var_e0_1.d = 0
                                                                            rcx_117 =
                                                                                j_7.d + (rax_238 u>> 3) - j_11.d
                                                                            goto label_140a28740
                                                                        
                                                                        j_7 += 8
                                                                        rdx_60 += 8
                                                                    
                                                                    if (j_7 u< var_110_1 - 3
                                                                            && *rdx_60 == *j_7)
                                                                        j_7 += 4
                                                                        rdx_60 += 4
                                                                    
                                                                    if (j_7 u< var_110_1 - 1
                                                                            && *rdx_60 == *j_7)
                                                                        j_7 += 2
                                                                        rdx_60 += 2
                                                                    
                                                                    if (j_7 u< var_110_1 && *rdx_60 == *j_7)
                                                                        j_7 += 1
                                                                    
                                                                    rcx_117 = j_7.d - j_11.d
                                                                
                                                            label_140a28740:
                                                                r10_11 += rcx_117
                                                            
                                                            int32_t rdx_61 = 0
                                                            
                                                            if (var_f8_3 != 0)
                                                                uint64_t rbx_15 = rbx_14 - r11_15
                                                                void* rax_230 = var_c0_1 - (rdx_51 - 3)
                                                                
                                                                if (rax_230 s> rbx_15)
                                                                    rbx_15 = zx.q(rax_230.d)
                                                                
                                                                if (rbx_15.d s< 0)
                                                                    void* rcx_118 = rdx_51 - 4
                                                                    
                                                                    while (*rcx_118
                                                                            == *(r11_15 - (rdx_51 - 3) + rcx_118))
                                                                        rcx_118 -= 1
                                                                        rdx_61 -= 1
                                                                        
                                                                        if (rcx_118 + 1 - (rdx_51 - 3)
                                                                                s<= sx.q(rbx_15.d))
                                                                            break
                                                            
                                                            rbx_12 = var_a8_2
                                                            int32_t r10_12 = r10_11 - rdx_61
                                                            r11_14 = var_128_3
                                                            
                                                            if (r10_12 s> rbp_7.d)
                                                                int64_t rax_233 = sx.q(rdx_61)
                                                                var_118_4 = r10_12
                                                                var_a0_1 = rax_233 + rbx_12 + rsi_13
                                                                var_88_1 = rax_233 + rdx_51 - 3
                                                        
                                                        rsi_14 = var_110_1
                                                    else
                                                        int32_t* r10_10 = rbx_12 + rsi_13
                                                        int64_t rcx_95 = sx.q(rbp_7.d)
                                                        
                                                        if (*(rcx_95 + var_c0_1 - 1)
                                                                != *(r10_10 - rdx_55 + rcx_95 - 1)
                                                                || *r10_10 != r12_4)
                                                            rsi_14 = var_110_1
                                                        else
                                                            int32_t r9_13 = 0
                                                            
                                                            if (rdx_55 != 0)
                                                                void* rcx_97 = r8_26 - r10_10
                                                                int64_t rax_200 =
                                                                    var_c0_1 - (rdx_51 - 3)
                                                                
                                                                if (rax_200 s> rcx_97)
                                                                    rcx_97 = zx.q(rax_200.d)
                                                                
                                                                if (rcx_97.d s< 0)
                                                                    void* rcx_98 = rdx_51 - 4
                                                                    
                                                                    while (*rcx_98
                                                                            == *(r10_10 - (rdx_51 - 3) + rcx_98))
                                                                        rcx_98 -= 1
                                                                        r9_13 -= 1
                                                                        
                                                                        if (1 - (rdx_51 - 3) + rcx_98
                                                                                s<= sx.q(rcx_97.d))
                                                                            break
                                                            
                                                            rsi_14 = var_110_1
                                                            void* rdx_58 = &r10_10[1]
                                                            void* j_8 = rdx_51 + 1
                                                            
                                                            if (rdx_51 + 1 u>= rsi_14 - 7)
                                                                goto label_140a2850c
                                                            
                                                            uint64_t rcx_100 =
                                                                *(rdx_51 + 1) ^ *rdx_58
                                                            uint32_t rax_208
                                                            
                                                            if (rcx_100 != 0)
                                                                uint64_t rflags_13
                                                                int32_t rax_207
                                                                rax_207, rflags_13 =
                                                                    _bit_scan_forward(rcx_100)
                                                                var_e0_1.d = 0
                                                                rax_208 = rax_207 u>> 3
                                                            else
                                                                j_8 = rdx_51 + 9
                                                                rdx_58 += 8
                                                            label_140a2850c:
                                                                
                                                                while (j_8 u< rsi_14 - 7)
                                                                    uint64_t rcx_102 = *j_8 ^ *rdx_58
                                                                    
                                                                    if (rcx_102 != 0)
                                                                        uint64_t rflags_14
                                                                        int32_t rcx_109
                                                                        rcx_109, rflags_14 =
                                                                            _bit_scan_forward(rcx_102)
                                                                        var_e0_1.d = 0
                                                                        rax_208 =
                                                                            j_8.d + (rcx_109 u>> 3) - (rdx_51 + 1).d
                                                                        goto label_140a28571
                                                                    
                                                                    j_8 += 8
                                                                    rdx_58 += 8
                                                                
                                                                if (j_8 u< rsi_14 - 3
                                                                        && *rdx_58 == *j_8)
                                                                    j_8 += 4
                                                                    rdx_58 += 4
                                                                
                                                                if (j_8 u< rsi_14 - 1
                                                                        && *rdx_58 == *j_8)
                                                                    j_8 += 2
                                                                    rdx_58 += 2
                                                                
                                                                if (j_8 u< rsi_14 && *rdx_58 == *j_8)
                                                                    j_8 += 1
                                                                
                                                                rax_208 = j_8.d - (rdx_51 + 1).d
                                                            
                                                        label_140a28571:
                                                            
                                                            if (rax_208 - r9_13 + 4 s> rbp_7.d)
                                                                var_118_4 = rax_208 - r9_13 + 4
                                                                int64_t rax_205 = sx.q(r9_13)
                                                                var_88_1 = rax_205 + rdx_51 - 3
                                                                var_a0_1 = rax_205 + r10_10
                                                    
                                                    int32_t rsi_15
                                                    
                                                    if (rcx_1 == 0
                                                            || *(rax_7 + (zx.q(r14_8.w) << 1))
                                                            != 1)
                                                        rsi_15 = rsi_12
                                                        r14_8 = zx.q(r14_8.d -
                                                            zx.d(*(rax_7 + (zx.q(r14_8.w) << 1))))
                                                    else
                                                        int32_t rbp_8 = (r14_8 - 1).d
                                                        
                                                        if (r11_14 != 0)
                                                            if (r11_14 == 2)
                                                                goto label_140a288eb
                                                            
                                                            rsi_15 = rsi_12
                                                            r14_8 = zx.q(r14_8.d -
                                                                zx.d(*(rax_7 + (zx.q(r14_8.w) << 1))))
                                                        else
                                                            int32_t rdi_35
                                                            rdi_35.b = r12_4.b == (r12_4 u>> 0x18).b
                                                            int32_t rcx_124
                                                            rcx_124.b =
                                                                zx.d(r12_4.w) == r12_4 u>> 0x10
                                                            
                                                            if ((rcx_124 & rdi_35) == 0)
                                                                r11_14 = 1
                                                                var_128_3 = 1
                                                                rsi_15 = rsi_12
                                                                r14_8 = zx.q(r14_8.d -
                                                                    zx.d(*(rax_7 + (zx.q(r14_8.w) << 1))))
                                                            else
                                                                var_128_3 = 2
                                                                var_80_2 = zx.q(sub_140a2c4c0(
                                                                    rdx_51 + 1, rsi_14, r12_4)) + 4
                                                                r11_14 = 2
                                                            label_140a288eb:
                                                                rsi_15 = rsi_12
                                                                
                                                                if (rbp_8 u< rsi_15
                                                                        || r13_7.d - rbp_8 - 1 u< 3)
                                                                    r14_8 = zx.q(r14_8.d -
                                                                        zx.d(*(rax_7 + (zx.q(r14_8.w) << 1))))
                                                                else
                                                                    int64_t rdi_36 = rbx_12
                                                                    
                                                                    if (rbp_8 u< r13_7.d)
                                                                        rdi_36 = rax_191
                                                                    
                                                                    int32_t* rdi_37 = rdi_36 + zx.q(rbp_8)
                                                                    
                                                                    if (*rdi_37 != r12_4)
                                                                        r14_8 = zx.q(r14_8.d -
                                                                            zx.d(*(rax_7 + (zx.q(r14_8.w) << 1))))
                                                                    else
                                                                        void* rdx_65 = rax_191 + r13_7
                                                                        int64_t* r14_10 =
                                                                            zx.q(arg1[0x10007]) + rax_191
                                                                        
                                                                        if (rbp_8 u>= r13_7.d)
                                                                            rdx_65 = var_110_1
                                                                        
                                                                        void* rbx_17 = zx.q(sub_140a2c4c0(
                                                                            &rdi_37[1], rdx_65, r12_4)) + 4
                                                                        int64_t* r11_20
                                                                        
                                                                        if (rbp_8 u>= r13_7.d
                                                                                || rbx_17 + rdi_37 != rdx_65)
                                                                            r11_20 = var_100_3
                                                                        else
                                                                            int32_t r8_35 = r12_4
                                                                            uint64_t rax_256 =
                                                                                (zx.q(rbx_17.d) & 3) << 3
                                                                            
                                                                            if (rax_256 != 0)
                                                                                r8_35 = rol.d(r8_35, rax_256.b)
                                                                            
                                                                            r11_20 = var_100_3
                                                                            rbx_17 += zx.q(sub_140a2c4c0(r11_20, 
                                                                                var_110_1, r8_35))
                                                                        
                                                                        int64_t* rdx_68 = r11_20
                                                                        
                                                                        if (rbp_8 u< r13_7.d)
                                                                            rdx_68 = r14_10
                                                                        
                                                                        uint64_t rsi_16 = zx.q(sub_140a2c5c0(
                                                                            rdi_37, rdx_68, r12_4))
                                                                        
                                                                        if (rbp_8 u>= r13_7.d
                                                                                && rdi_37 - rsi_16 == var_100_3
                                                                                && arg1[0x10007] u< r13_7.d)
                                                                            int32_t r8_37 = r12_4
                                                                            uint64_t rax_263 =
                                                                                (zx.q(neg.d(rsi_16.d)) & 3) << 3
                                                                            
                                                                            if (rax_263 != 0)
                                                                                r8_37 = rol.d(r8_37, rax_263.b)
                                                                            
                                                                            rsi_16 += zx.q(sub_140a2c5c0(
                                                                                r13_7 + rax_191, r14_10, r8_37))
                                                                        
                                                                        int32_t rax_267 = rbp_8 - rsi_16.d
                                                                        rsi_15 = rsi_12
                                                                        r14_8 = zx.q(rsi_15)
                                                                        
                                                                        if (rax_267 u> rsi_15)
                                                                            r14_8 = zx.q(rax_267)
                                                                        
                                                                        void* rdx_72 =
                                                                            zx.q(rbp_8 - r14_8.d) + rbx_17
                                                                        
                                                                        if (rdx_72 u>= var_80_2
                                                                                && rbx_17 u<= var_80_2)
                                                                            r14_8 =
                                                                                zx.q(rbx_17.d - var_80_2.d + rbp_8)
                                                                            
                                                                            if (r13_7.d - r14_8.d - 1 u< 3)
                                                                                r14_8 = zx.q(r13_7.d)
                                                                        else if (r13_7.d - r14_8.d - 1 u< 3)
                                                                            r14_8 = zx.q(r13_7.d)
                                                                        else if (var_f8_3 == 0)
                                                                            rbp_7 = sx.q(var_118_4)
                                                                            void* rcx_137 = var_80_2
                                                                            
                                                                            if (rdx_72 u< var_80_2)
                                                                                rcx_137 = rdx_72
                                                                            
                                                                            if (rbp_7 u< rcx_137)
                                                                                if (
                                                                                        rdx_51 - 3 - zx.q(r14_8.d) - var_a8_2
                                                                                        s> 0xffff)
                                                                                    break
                                                                                
                                                                                var_118_4 = rcx_137.d
                                                                                var_a0_1 = r14_8 + var_a8_2
                                                                                rbp_7 = zx.q(rcx_137.d)
                                                                                var_88_1 = rdx_51 - 3
                                                                            
                                                                            uint32_t rcx_139 =
                                                                                zx.d(*(rax_7 + (zx.q(r14_8.w) << 1)))
                                                                            
                                                                            if (rcx_139 u> r14_8.d)
                                                                                break
                                                                            
                                                                            r14_8 = zx.q(r14_8.d - rcx_139)
                                                                        
                                                                        r11_14 = var_128_3
                                                    
                                                    rbp_7 = zx.q(var_118_4)
                                                    r8_26 = var_100_3
                                                    rbx_12 = var_a8_2
                                                    rdx_55 = var_f8_3
                                                    
                                                    if (r14_8.d u< rsi_15)
                                                        break
                                            
                                            r12_3 = var_c0_1
                                            r15_4 = var_124_2
                                            r11_13 = var_120_1
                                            rsi_11 = arg6
                                            r13_6 = var_88_1
                                        
                                        int64_t rax_271 = sx.q(rsi_11)
                                        rbx_5 = r13_6
                                        
                                        if (rbp_7.d == r15_4)
                                            if (r12_3 u< rax_271 + r11_13)
                                                rsi_11 = r12_3.d - r11_13.d
                                            
                                            r10_13 = var_c8_1
                                            void* rcx_158 = var_d8_1
                                            r14_11 = arg7
                                            void* r8_41 = r11_13 - rcx_158
                                            r13_1 = var_d0_1
                                            char* r9_26 = &r10_13[1]
                                            
                                            if (r14_11 != 0
                                                    && &r9_26[8] + r8_41 u/ 0xff + r8_41 u> r13_1)
                                                goto label_140a294ef
                                            
                                            if (r8_41 u< 0xf)
                                                *r10_13 = r8_41.b << 4
                                            else
                                                void* r11_24 = r8_41 - 0xf
                                                *r10_13 = 0xf0
                                                
                                                if (r11_24 u>= 0xff)
                                                    char* rdi_46 = r9_26
                                                    uint64_t count_2 = r11_24 u/ 0xff
                                                    r9_26 = &r9_26[count_2]
                                                    __builtin_memset(rdi_46, 0xff, count_2)
                                                    rcx_158 = var_d8_1
                                                    r11_24 = r11_24 u% 0xff
                                                
                                                *r9_26 = r11_24.b
                                                r9_26 = &r9_26[1]
                                                r11_13 = var_120_1
                                            
                                            int16_t* r8_42 = r8_41 + r9_26
                                            int64_t* rcx_160 = rcx_158 - r9_26
                                            
                                            do
                                                *r9_26 = *(rcx_160 + r9_26)
                                                r9_26 = &r9_26[8]
                                            while (r9_26 u< r8_42)
                                            
                                            int64_t rdi_48 = sx.q(rsi_11)
                                            *r8_42 = r11_13.w - var_b8_1.w
                                            void* r8_43 = &r8_42[1]
                                            
                                            if (r14_11 != 0
                                                    && r8_43 + 6 + (rdi_48 - 4) u/ 0xff u> r13_1)
                                                goto label_140a294ef
                                            
                                            char rax_330 = *r10_13
                                            
                                            if (rdi_48 - 4 u< 0xf)
                                                int64_t rcx_161
                                                rcx_161.b = (rdi_48 - 4).b + rax_330
                                                *r10_13 = rcx_161.b
                                            else
                                                int64_t rcx_162 = rdi_48 - 0x13
                                                *r10_13 = rax_330 + 0xf
                                                
                                                if (rcx_162 u>= 0x1fe)
                                                    uint64_t i_13 = rcx_162 u/ 0x1fe
                                                    rcx_162 = rcx_162 u% 0x1fe
                                                    uint64_t i_6
                                                    
                                                    do
                                                        *r8_43 = 0xffff
                                                        r8_43 += 2
                                                        i_6 = i_13
                                                        i_13 -= 1
                                                    while (i_6 != 1)
                                                
                                                if (rcx_162 u>= 0xff)
                                                    rcx_162 -= 0xff
                                                    *r8_43 = 0xff
                                                    r8_43 += 1
                                                
                                                *r8_43 = rcx_162.b
                                                r8_43 += 1
                                            
                                            void* rcx_164 = r11_13 + rdi_48
                                            r10_13 = r8_43
                                            var_d8_1 = rcx_164
                                            void* r9_28 = r12_3 - rcx_164
                                            char* r8_44 = r8_43 + 1
                                            
                                            if (r14_11 != 0
                                                    && &r8_44[8] + r9_28 u/ 0xff + r9_28 u> r13_1)
                                                goto label_140a294ef
                                            
                                            if (r9_28 u< 0xf)
                                                *r8_43 = r9_28.b << 4
                                            else
                                                void* r11_25 = r9_28 - 0xf
                                                *r8_43 = 0xf0
                                                
                                                if (r11_25 u>= 0xff)
                                                    char* rdi_49 = r8_44
                                                    uint64_t count_3 = r11_25 u/ 0xff
                                                    r8_44 = &r8_44[count_3]
                                                    __builtin_memset(rdi_49, 0xff, count_3)
                                                    rcx_164 = var_d8_1
                                                    r11_25 = r11_25 u% 0xff
                                                
                                                *r8_44 = r11_25.b
                                                r8_44 = &r8_44[1]
                                            
                                            void* r14_13 = r9_28 + r8_44
                                            void* rcx_165 = rcx_164 - r8_44
                                            
                                            do
                                                *r8_44 = *(rcx_165 + r8_44)
                                                r8_44 = &r8_44[8]
                                            while (r8_44 u< r14_13)
                                            
                                            rbp = arg7
                                            int64_t rdi_50 = sx.q(r15_4)
                                            *r14_13 = r12_3.w - var_e8_1.w
                                            r14 = r14_13 + 2
                                            var_c8_1 = r14
                                            
                                            if (rbp != 0 && &r14[6 + (rdi_50 - 4) u/ 0xff] u> r13_1)
                                                goto label_140a294da
                                            
                                            char rax_344 = *r8_43
                                            
                                            if (rdi_50 - 4 u< 0xf)
                                                void* rcx_166
                                                rcx_166.b = (rdi_50 - 4).b + rax_344
                                                r9_6 = rdi_50 + r12_3
                                                *r8_43 = rcx_166.b
                                            else
                                                void* rcx_167 = rdi_50 - 0x13
                                                *r8_43 = rax_344 + 0xf
                                                
                                                if (rcx_167 u>= 0x1fe)
                                                    uint64_t i_14 = rcx_167 u/ 0x1fe
                                                    rcx_167 = rcx_167 u% 0x1fe
                                                    uint64_t i_7
                                                    
                                                    do
                                                        *r14 = 0xffff
                                                        r14 = &r14[2]
                                                        i_7 = i_14
                                                        i_14 -= 1
                                                    while (i_7 != 1)
                                                
                                                if (rcx_167 u>= 0xff)
                                                    rcx_167 -= 0xff
                                                    *r14 = 0xff
                                                    r14 = &r14[1]
                                                
                                                *r14 = rcx_167.b
                                                r9_6 = rdi_50 + r12_3
                                                r14 = &r14[1]
                                                var_c8_1 = r14
                                            
                                            break
                                        
                                        void* rcx_136 = r11_13 + rax_271
                                        
                                        if (r13_6 u>= rcx_136 + 3)
                                            int32_t* rbx_19
                                            
                                            if (r12_3 u>= rcx_136)
                                                rbx_19 = var_e8_1
                                            else if (r12_3 - r11_13 s>= 0x12)
                                                rsi_11 = r12_3.d - r11_13.d
                                                rbx_19 = var_e8_1
                                            else
                                                if (rsi_11 s> 0x12)
                                                    rsi_11 = 0x12
                                                
                                                if (sx.q(rsi_11) + r11_13 u> rdx_51 - 4)
                                                    rsi_11 = r12_3.d - r11_13.d - 4 + r15_4
                                                
                                                rbx_19 = var_e8_1
                                                int32_t rcx_144 = r11_13.d - r12_3.d + rsi_11
                                                
                                                if (rcx_144 s> 0)
                                                    int64_t rax_285 = sx.q(rcx_144)
                                                    r12_3 += rax_285
                                                    rbx_19 += rax_285
                                                    r15_4 -= rcx_144
                                            
                                            r10_13 = var_c8_1
                                            void* rcx_145 = var_d8_1
                                            r14_11 = arg7
                                            void* r9_17 = r11_13 - rcx_145
                                            char* r8_38 = &r10_13[1]
                                            
                                            if (r14_11 != 0 &&
                                                    &r8_38[8] + r9_17 u/ 0xff + r9_17 u> var_d0_1)
                                                goto label_140a294e7
                                            
                                            if (r9_17 u< 0xf)
                                                *r10_13 = r9_17.b << 4
                                            else
                                                void* r11_22 = r9_17 - 0xf
                                                *r10_13 = 0xf0
                                                
                                                if (r11_22 u>= 0xff)
                                                    char* rdi_40 = r8_38
                                                    uint64_t count = r11_22 u/ 0xff
                                                    r8_38 = &r8_38[count]
                                                    __builtin_memset(rdi_40, 0xff, count)
                                                    rcx_145 = var_d8_1
                                                    r11_22 = r11_22 u% 0xff
                                                
                                                *r8_38 = r11_22.b
                                                r8_38 = &r8_38[1]
                                                r11_13 = var_120_1
                                            
                                            void* r9_18 = r9_17 + r8_38
                                            int64_t* rcx_147 = rcx_145 - r8_38
                                            
                                            do
                                                *r8_38 = *(rcx_147 + r8_38)
                                                r8_38 = &r8_38[8]
                                            while (r8_38 u< r9_18)
                                            
                                            int64_t rdi_42 = sx.q(rsi_11)
                                            *r9_18 = r11_13.w - var_b8_1.w
                                            void* r9_19 = r9_18 + 2
                                            var_c8_1 = r9_19
                                            
                                            if (r14_11 != 0 && r9_19 + 6 + (rdi_42 - 4) u/ 0xff
                                                    u> var_d0_1)
                                                goto label_140a294e7
                                            
                                            char rax_297 = *r10_13
                                            
                                            if (rdi_42 - 4 u< 0xf)
                                                *r10_13 = rax_297 + (rdi_42 - 4).b
                                            else
                                                int64_t rcx_149 = rdi_42 - 0x13
                                                *r10_13 = rax_297 + 0xf
                                                
                                                if (rcx_149 u>= 0x1fe)
                                                    uint64_t i_11 = rcx_149 u/ 0x1fe
                                                    rcx_149 = rcx_149 u% 0x1fe
                                                    uint64_t i_8
                                                    
                                                    do
                                                        *r9_19 = 0xffff
                                                        r9_19 += 2
                                                        i_8 = i_11
                                                        i_11 -= 1
                                                    while (i_8 != 1)
                                                
                                                if (rcx_149 u>= 0xff)
                                                    rcx_149 -= 0xff
                                                    *r9_19 = 0xff
                                                    r9_19 += 1
                                                
                                                *r9_19 = rcx_149.b
                                                var_c8_1 = r9_19 + 1
                                            
                                            var_120_1 = r12_3
                                            var_d8_1 = r11_13 + rdi_42
                                            r11_13 = r12_3
                                            var_b8_1 = rbx_19
                                            rsi_11 = r15_4
                                            arg6 = r15_4
                                        else if (r13_6 u>= rcx_136)
                                            if (r12_3 u< rcx_136)
                                                int32_t rcx_152 = r11_13.d - r12_3.d + rsi_11
                                                int64_t rax_301 = sx.q(rcx_152)
                                                r15_4 -= rcx_152
                                                var_e8_1 += rax_301
                                                r12_3 += rax_301
                                                var_c0_1 = r12_3
                                                
                                                if (r15_4 s< 4)
                                                    r12_3 = r13_6
                                                    var_c0_1 = r13_6
                                                    var_e8_1 = var_a0_1
                                                    r15_4 = rbp_7.d
                                            
                                            r10_13 = var_c8_1
                                            void* rcx_153 = var_d8_1
                                            void* r9_22 = r11_13 - rcx_153
                                            char* r8_39 = &r10_13[1]
                                            int64_t rdx_81
                                            int64_t rax_302
                                            
                                            if (arg7 != 0)
                                                rdx_81:rax_302 =
                                                    mulu.dp.q(-0x7f7f7f7f7f7f7f7f, r9_22)
                                            
                                            if (arg7 == 0 ||
                                                    &r8_39[8] + (rdx_81 u>> 7) + r9_22 u<= var_d0_1)
                                                if (r9_22 u< 0xf)
                                                    *r10_13 = r9_22.b << 4
                                                else
                                                    void* r11_23 = r9_22 - 0xf
                                                    *r10_13 = 0xf0
                                                    
                                                    if (r11_23 u>= 0xff)
                                                        char* rdi_43 = r8_39
                                                        uint64_t count_1 = r11_23 u/ 0xff
                                                        r8_39 = &r8_39[count_1]
                                                        __builtin_memset(rdi_43, 0xff, count_1)
                                                        rcx_153 = var_d8_1
                                                        r11_23 = r11_23 u% 0xff
                                                    
                                                    *r8_39 = r11_23.b
                                                    r8_39 = &r8_39[1]
                                                    r11_13 = var_120_1
                                                
                                                void* r9_23 = r9_22 + r8_39
                                                int64_t* rcx_155 = rcx_153 - r8_39
                                                
                                                do
                                                    *r8_39 = *(rcx_155 + r8_39)
                                                    r8_39 = &r8_39[8]
                                                while (r8_39 u< r9_23)
                                                
                                                int64_t rdi_45 = sx.q(rsi_11)
                                                *r9_23 = r11_13.w - var_b8_1.w
                                                void* r9_24 = r9_23 + 2
                                                var_c8_1 = r9_24
                                                int64_t rdx_85
                                                int64_t rax_310
                                                
                                                if (arg7 != 0)
                                                    rdx_85:rax_310 =
                                                        mulu.dp.q(-0x7f7f7f7f7f7f7f7f, rdi_45 - 4)
                                                
                                                if (arg7 == 0
                                                        || r9_24 + 6 + (rdx_85 u>> 7) u<= var_d0_1)
                                                    char rax_313 = *r10_13
                                                    
                                                    if (rdi_45 - 4 u< 0xf)
                                                        *r10_13 = rax_313 + (rdi_45 - 4).b
                                                    else
                                                        int64_t rcx_157 = rdi_45 - 0x13
                                                        *r10_13 = rax_313 + 0xf
                                                        
                                                        if (rcx_157 u>= 0x1fe)
                                                            uint64_t i_12 = rcx_157 u/ 0x1fe
                                                            rcx_157 = rcx_157 u% 0x1fe
                                                            uint64_t i_9
                                                            
                                                            do
                                                                *r9_24 = 0xffff
                                                                r9_24 += 2
                                                                i_9 = i_12
                                                                i_12 -= 1
                                                            while (i_9 != 1)
                                                        
                                                        if (rcx_157 u>= 0xff)
                                                            rcx_157 -= 0xff
                                                            *r9_24 = 0xff
                                                            r9_24 += 1
                                                        
                                                        *r9_24 = rcx_157.b
                                                        var_c8_1 = r9_24 + 1
                                                    
                                                    var_120_1 = r13_6
                                                    var_d8_1 = r11_13 + rdi_45
                                                    rdx_22 = rbp_7.d
                                                    r9_2 = r13_6
                                                    var_70_1 = var_e8_1
                                                    r13_4 = var_a0_1
                                                    var_b8_1 = var_a0_1
                                                    arg6 = rdx_22
                                                    var_58_1 = r12_3
                                                    var_108_7 = r15_4
                                                    goto label_140a279f8
                                            
                                            r14_11 = arg7
                                            goto label_140a294e7
                                        
                                        rdi_25 = var_a0_1
                                        r12_3 = r13_6
                                        var_e8_1 = rdi_25
                                        r15_4 = rbp_7.d
                                        var_c0_1 = r13_6
                                        var_124_2 = rbp_7.d
                                    
                                label_140a2949f:
                                    var_d8_1 = r9_6
                                    rsi_1 = r9_6
                                    break
                            
                            r10_13 = var_c8_1
                            void* rcx_168 = var_d8_1
                            r14_11 = arg7
                            void* r9_29 = r9_2 - rcx_168
                            void* r8_45 = &r10_13[1]
                            int64_t rdx_102
                            int64_t rax_347
                            
                            if (r14_11 != 0)
                                rdx_102:rax_347 = mulu.dp.q(-0x7f7f7f7f7f7f7f7f, r9_29)
                            
                            if (r14_11 != 0 && r8_45 + 8 + (rdx_102 u>> 7) + r9_29 u> var_d0_1)
                            label_140a294e7:
                                r13_1 = var_d0_1
                            else
                                if (r9_29 u< 0xf)
                                    *r10_13 = r9_29.b << 4
                                else
                                    void* r11_26 = r9_29 - 0xf
                                    *r10_13 = 0xf0
                                    
                                    if (r11_26 u>= 0xff)
                                        void* rdi_51 = r8_45
                                        uint64_t count_4 = r11_26 u/ 0xff
                                        r8_45 += count_4
                                        __builtin_memset(rdi_51, 0xff, count_4)
                                        rcx_168 = var_d8_1
                                        r11_26 = r11_26 u% 0xff
                                    
                                    *r8_45 = r11_26.b
                                    r8_45 += 1
                                
                                void* r14_14 = r9_29 + r8_45
                                void* rcx_170 = rcx_168 - r8_45
                                
                                do
                                    *r8_45 = *(rcx_170 + r8_45)
                                    r8_45 += 8
                                while (r8_45 u< r14_14)
                                
                                rbp = arg7
                                *r14_14 = var_120_1.w - r13_4.w
                                r14 = r14_14 + 2
                                var_c8_1 = r14
                                int64_t rdx_106
                                
                                if (rbp != 0)
                                    r13_1 = var_d0_1
                                    int64_t rax_355
                                    rdx_106:rax_355 = mulu.dp.q(-0x7f7f7f7f7f7f7f7f, rsi_5 - 4)
                                
                                if (rbp == 0 || &r14[6 + (rdx_106 u>> 7)] u<= r13_1)
                                    char rax_358 = *r10_13
                                    
                                    if (rsi_5 - 4 u< 0xf)
                                        *r10_13 = rax_358 + (rsi_5 - 4).b
                                    else
                                        int64_t rcx_172 = rsi_5 - 0x13
                                        *r10_13 = rax_358 + 0xf
                                        
                                        if (rcx_172 u>= 0x1fe)
                                            uint64_t i_15 = rcx_172 u/ 0x1fe
                                            rcx_172 = rcx_172 u% 0x1fe
                                            uint64_t i_10
                                            
                                            do
                                                *r14 = 0xffff
                                                r14 = &r14[2]
                                                i_10 = i_15
                                                i_15 -= 1
                                            while (i_10 != 1)
                                        
                                        if (rcx_172 u>= 0xff)
                                            rcx_172 -= 0xff
                                            *r14 = 0xff
                                            r14 = &r14[1]
                                        
                                        *r14 = rcx_172.b
                                        r14 = &r14[1]
                                        var_c8_1 = r14
                                    
                                    r9_6 = var_120_1 + rsi_5
                                    goto label_140a2949f
                                
                            label_140a294da:
                                r14_11 = rbp
                            
                        label_140a294ef:
                            r9 = 0
                            
                            if (r14_11 != 2)
                                goto label_140a2966a_1
                            
                            rsi_1 = var_d8_1
                            r14 = r10_13
                            rbp = arg7
                            r15_1 = var_78_1
                            goto label_140a29523
                    else
                        r14 = var_c8_1
                        r9_6 = r9_2 + 1
                        rsi_1 = var_d8_1
                        rbp = arg7
                    
                    r15_1 = var_78_1
                    var_120_1 = r9_6
                    
                    if (r9_6 u> r15_1 - 0xc)
                        break
                    
                    r10_1 = var_110_1
                    r11_1 = var_120_1
                    rbx = arg1
                
                r13_1 = var_d0_1
                r9 = 0
            label_140a29523:
                r12 = arg2
            
            void* r15_9 = r15_1 - rsi_1
            void* rdi_52 = r13_1 + 5
            
            if (rbp != 2)
                rdi_52 = r13_1
            
            if (rbp == 0)
                goto label_140a295a8
            
            if (&r14[1] + (r15_9 + 0xf0) u/ 0xff + r15_9 u<= rdi_52)
                goto label_140a295a8
            
            if (rbp != 1)
                r15_9 = rdi_52 - r14 - 1 - (rdi_52 - r14 + 0xef) u/ 0xff
            label_140a295a8:
                
                if (r15_9 u< 0xf)
                    *r14 = r15_9.b << 4
                else
                    *r14 = 0xf0
                    void* r8_46 = r15_9 - 0xf
                    r14 = &r14[1]
                    
                    if (r8_46 u>= 0xff)
                        char* rdi_53 = r14
                        uint64_t count_5 = r8_46 u/ 0xff
                        r14 = &r14[count_5]
                        __builtin_memset(rdi_53, 0xff, count_5)
                        r8_46 = r8_46 u% 0xff
                    
                    *r14 = r8_46.b
                
                memcpy(&r14[1], rsi_1, r15_9.d)
                *arg4 = r15_9.d + rsi_1.d - r12.d
                r9 = (&r14[1]).d + r15_9.d - arg3.d
                goto label_140a2965d
            
        label_140a2966a_1:
            *(arg1 + 0x40027) = 1
        return zx.q(r9)

return 0
