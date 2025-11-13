// 函数: sub_140a24820
// 地址: 0x140a24820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg1 + 0x40000)
int32_t* r13 = arg4
int64_t rdi_2 = r10 - zx.q(arg1[0x10007]) - *(arg1 + 0x40008)
char* r14 = arg3
void* r12 = arg2
int32_t* r11 = arg1

if (rdi_2 u>= 0x10000)
    *(arg1 + 0x40028) = 0
    return sub_140a27100(arg1, arg2, arg3, arg4, arg5, arg6, arg7) __tailcall

if (rdi_2 == 0 && *arg4 s> 0x1000)
    memcpy(arg1, *(arg1 + 0x40028), 0x40030)
    sub_140a2c620(arg1, r12)
    arg1[0x10009].w = arg6.w
    return sub_140a27100(arg1, r12, r14, r13, arg5, arg6, arg7) __tailcall

int32_t r8_3 = arg7
int64_t rdi_3 = sx.q(arg5)
int64_t rax_3

if (r8_3 != 2 || rdi_3.d s>= 1)
    rax_3 = sx.q(*arg4)

int32_t r9_3

if ((r8_3 == 2 && rdi_3.d s< 1) || rax_3.d u> 0x7e000000)
    r9_3 = 0
else
    *(arg1 + 0x40000) = rax_3 + r10
    int32_t rdx_5 = 9
    
    if (arg6 s>= 1)
        rdx_5 = arg6
    
    if (rdx_5 s> 0xc)
        rdx_5 = 0xc
    
    r9_3 = 0
    int64_t rcx_3 = sx.q(rdx_5) * 3
    int64_t zmm0 = *(&data_142e51b70 + (rcx_3 << 2))
    int32_t rcx_4
    rcx_4.b = *(r11 + 0x40026) != 0
    
    if (zmm0.d != 0)
        int32_t rdx_129
        rdx_129.b = rdx_5 == 0xc
        r9_3 = sub_140a296a0(r11, r12, r14, r13, rdi_3.d, zmm0:4.d, 
            zx.q(*((rcx_3 << 2) + 0x142e51b78)), r8_3, rdx_129, 1, rcx_4)
    label_140a270bb:
        
        if (r9_3 s<= 0)
        label_140a270c7:
            *(arg1 + 0x40027) = 1
    else
        int64_t rdx_6 = sx.q(*r13)
        void* r10_3 = r12
        void* var_100_1 = r12
        void* r15_1 = r12 + rdx_6
        void* var_e0_1 = r12
        int32_t rcx_5
        rcx_5.b = (zmm0 u>> 0x20).d u> 0x80
        void* var_80_1 = r15_1
        void* rax_9 = r15_1 - 5
        void* rcx_7 = &arg3[rdi_3]
        char* var_c0_1 = r14
        int32_t* var_c8_1 = nullptr
        void* var_d0_1 = nullptr
        void* rbx_1 = rcx_7 - 5
        void* var_f0_1 = nullptr
        
        if (r8_3 != 2)
            rbx_1 = rcx_7
        
        void* var_90_1 = nullptr
        void* var_e8_1 = rbx_1
        void* var_b0_1 = nullptr
        *r13 = 0
        
        if (rdx_6.d s>= 0xd && r12 u<= r15_1 - 0xc)
            void* rax_10 = &r11[0x8000]
            void* rdi_4 = r12
            
            while (true)
                int64_t r10_4 = *(r11 + 0x40008)
                int32_t rbx_2 = r11[0x10007]
                int32_t rdx_8 = rdi_4.d - r10_4.d
                void* rax_11 = *(r11 + 0x40028)
                int32_t r15_2 = 0
                int32_t r14_1 = *rdi_4
                void* r13_1 = nullptr
                uint64_t r12_1 = zx.q(r11[0x10006])
                int32_t i_2 = zmm0:4.d
                int32_t var_130_1 = 0
                uint64_t rdi_5 = zx.q(r11[0x10008])
                
                if (rbx_2 + 0x10000 u<= rdx_8)
                    rbx_2 = rdx_8 - 0xffff
                
                int64_t rdx_9 = *(r11 + 0x40010)
                int64_t* rsi_2 = r10_4 + r12_1
                int32_t i = rdi_4.d - r10_4.d
                int32_t var_124_1 = 3
                int64_t var_118_1 = r10_4
                int64_t* var_f8_1 = rsi_2
                int32_t var_128_1 = rbx_2
                int64_t var_d8_1 = rdx_9
                int32_t i_14 = i_2
                int32_t var_12c_1 = r14_1
                
                if (rdi_5.d u< i)
                    int32_t* r8_4 = r10_4 + rdi_5
                    
                    do
                        uint64_t rcx_9 = zx.q(*r8_4 * 0x9e3779b1)
                        r8_4 += 1
                        int32_t* rdx_10 = rcx_9 u>> 0x11 << 2
                        uint64_t rcx_12 = zx.q(rdi_5.d - *(rdx_10 + r11))
                        
                        if (rcx_12 u> 0xffff)
                            rcx_12 = 0xffff
                        
                        *(r11 + (zx.q(rdi_5.w) << 1) + 0x20000) = rcx_12.w
                        *(rdx_10 + r11) = rdi_5.d
                        rdi_5 = zx.q(rdi_5.d + 1)
                    while (rdi_5.d u< i)
                    
                    rdx_9 = var_d8_1
                    r15_2 = 0
                    i_2 = i_14
                
                void* rdi_6 = var_100_1
                r11[0x10008] = i
                uint64_t r11_3 = zx.q(r11[zx.q(*rdi_6 * 0x9e3779b1) u>> 0x11])
                
                if (r11_3.d u< rbx_2)
                label_140a250a6:
                    int32_t i_23 = i_14
                    
                    if (i_23 != 0 && rdx_8 - rbx_2 u< 0xffff)
                        int64_t r11_6 = *(rax_11 + 0x40000) - *(rax_11 + 0x40008)
                        int32_t r10_8 = *(rax_11 + (zx.q(*rdi_6 * 0x9e3779b1) u>> 0x11 << 2))
                        int32_t rbx_9 = rbx_2 - r11_6.d + r10_8
                        
                        if (rdx_8 - rbx_9 u<= 0xffff)
                            int32_t r12_2 = var_124_1
                            
                            do
                                int32_t i_25 = i_23
                                i_23 -= 1
                                
                                if (i_25 == 0)
                                    break
                                
                                uint64_t rcx_42 = zx.q(r10_8)
                                int32_t* rdx_28 = *(rax_11 + 0x40008) + rcx_42
                                
                                if (*rdx_28 == var_12c_1)
                                    void* r8_14 = rax_9
                                    void* rcx_43 = r11_6 - rcx_42 + rdi_6
                                    
                                    if (rcx_43 u<= r8_14)
                                        r8_14 = rcx_43
                                    
                                    void* rdx_29 = &rdx_28[1]
                                    void* i_1 = rdi_6 + 4
                                    
                                    if (rdi_6 + 4 u>= r8_14 - 7)
                                        goto label_140a25169
                                    
                                    uint64_t rax_99 = *(rdi_6 + 4) ^ *rdx_29
                                    uint32_t rcx_44
                                    
                                    if (rax_99 != 0)
                                        uint64_t rflags_7
                                        int32_t rcx_46
                                        rcx_46, rflags_7 = _bit_scan_forward(rax_99)
                                        int32_t var_108_7 = 0
                                        rcx_44 = rcx_46 u>> 3
                                    else
                                        i_1 = rdi_6 + 0xc
                                        rdx_29 += 8
                                    label_140a25169:
                                        
                                        while (i_1 u< r8_14 - 7)
                                            uint64_t rax_101 = *i_1 ^ *rdx_29
                                            
                                            if (rax_101 != 0)
                                                uint64_t rflags_8
                                                int32_t rax_113
                                                rax_113, rflags_8 = _bit_scan_forward(rax_101)
                                                int32_t var_108_8 = 0
                                                rcx_44 = i_1.d + (rax_113 u>> 3) - (rdi_6 + 4).d
                                                goto label_140a251cb
                                            
                                            i_1 += 8
                                            rdx_29 += 8
                                        
                                        if (i_1 u< r8_14 - 3 && *rdx_29 == *i_1)
                                            i_1 += 4
                                            rdx_29 += 4
                                        
                                        if (i_1 u< r8_14 - 1 && *rdx_29 == *i_1)
                                            i_1 += 2
                                            rdx_29 += 2
                                        
                                        if (i_1 u< r8_14 && *rdx_29 == *i_1)
                                            i_1 += 1
                                        
                                        rcx_44 = i_1.d - (rdi_6 + 4).d
                                    
                                label_140a251cb:
                                    rdi_6 = var_100_1
                                    
                                    if (rcx_44 + 4 s> r12_2)
                                        var_124_1 = rcx_44 + 4
                                        r12_2 = var_124_1
                                        var_c8_1 = zx.q(rbx_9) + var_118_1
                                
                                uint32_t rcx_45 = zx.d(*(rax_11 + (zx.q(r10_8.w) << 1) + 0x20000))
                                rbx_9 -= rcx_45
                                r10_8 -= rcx_45
                            while (rdx_8 - rbx_9 u<= 0xffff)
                else
                    while (i_2 != 0)
                        uint64_t rbx_3 = zx.q(r11_3.d)
                        i_14 = i_2 - 1
                        void* rbx_4
                        
                        if (r11_3.d u< r12_1.d)
                            if (*(rbx_3 + rdx_9) == r14_1)
                                void* r8_7 = rax_9
                                void* rcx_19 = zx.q(r12_1.d - r11_3.d) + rdi_6
                                
                                if (rcx_19 u<= r8_7)
                                    r8_7 = rcx_19
                                
                                int32_t* rdx_13 = rdx_9 + 4 + rbx_3
                                void* j = rdi_6 + 4
                                
                                if (rdi_6 + 4 u>= r8_7 - 7)
                                    goto label_140a24c93
                                
                                uint64_t rax_29 = *(rdi_6 + 4) ^ *rdx_13
                                uint32_t rcx_20
                                
                                if (rax_29 != 0)
                                    uint64_t rflags_3
                                    int32_t rcx_26
                                    rcx_26, rflags_3 = _bit_scan_forward(rax_29)
                                    int32_t var_108_3 = 0
                                    rcx_20 = rcx_26 u>> 3
                                else
                                    j = rdi_6 + 0xc
                                    rdx_13 = &rdx_13[2]
                                label_140a24c93:
                                    
                                    while (j u< r8_7 - 7)
                                        uint64_t rax_31 = *j ^ *rdx_13
                                        
                                        if (rax_31 != 0)
                                            uint64_t rflags_4
                                            int32_t rax_51
                                            rax_51, rflags_4 = _bit_scan_forward(rax_31)
                                            int32_t var_108_4 = 0
                                            rcx_20 = j.d + (rax_51 u>> 3) - (rdi_6 + 4).d
                                            goto label_140a24cfb
                                        
                                        j += 8
                                        rdx_13 = &rdx_13[2]
                                    
                                    if (j u< r8_7 - 3 && *rdx_13 == *j)
                                        j += 4
                                        rdx_13 = &rdx_13[1]
                                    
                                    if (j u< r8_7 - 1 && *rdx_13 == *j)
                                        j += 2
                                        rdx_13 += 2
                                    
                                    if (j u< r8_7 && *rdx_13 == *j)
                                        j += 1
                                    
                                    rcx_20 = j.d - (rdi_6 + 4).d
                                
                            label_140a24cfb:
                                int32_t r10_6 = rcx_20 + 4
                                void* j_9 = sx.q(r10_6) + var_100_1
                                
                                if (j_9 == r8_7 && r8_7 u< rax_9)
                                    void* rdx_14 = rsi_2
                                    void* j_1 = j_9
                                    
                                    if (j_9 u>= rax_9 - 7)
                                        goto label_140a24d43
                                    
                                    uint64_t rax_38 = *j_9 ^ *rsi_2
                                    uint32_t rcx_21
                                    
                                    if (rax_38 != 0)
                                        uint64_t rflags_5
                                        int32_t rcx_27
                                        rcx_27, rflags_5 = _bit_scan_forward(rax_38)
                                        int32_t var_108_5 = 0
                                        rcx_21 = rcx_27 u>> 3
                                    else
                                        j_1 = j_9 + 8
                                        rdx_14 = &rsi_2[1]
                                    label_140a24d43:
                                        
                                        while (j_1 u< rax_9 - 7)
                                            uint64_t rax_40 = *j_1 ^ *rdx_14
                                            
                                            if (rax_40 != 0)
                                                uint64_t rflags_6
                                                int32_t rax_54
                                                rax_54, rflags_6 = _bit_scan_forward(rax_40)
                                                int32_t var_108_6 = 0
                                                rcx_21 = j_1.d + (rax_54 u>> 3) - j_9.d
                                                goto label_140a24dab
                                            
                                            j_1 += 8
                                            rdx_14 += 8
                                        
                                        if (j_1 u< rax_9 - 3 && *rdx_14 == *j_1)
                                            j_1 += 4
                                            rdx_14 += 4
                                        
                                        if (j_1 u< rax_9 - 1 && *rdx_14 == *j_1)
                                            j_1 += 2
                                            rdx_14 += 2
                                        
                                        if (j_1 u< rax_9 && *rdx_14 == *j_1)
                                            j_1 += 1
                                        
                                        rcx_21 = j_1.d - j_9.d
                                    
                                label_140a24dab:
                                    r10_6 += rcx_21
                                
                                if (r10_6 s> var_124_1)
                                    var_124_1 = r10_6
                                    var_c8_1 = var_118_1 + rbx_3
                            
                            rbx_4 = rax_9
                        else
                            int32_t* r9_5 = rbx_3 + r10_4
                            int64_t r10_5 = sx.q(var_124_1)
                            
                            if (*(r10_5 + rdi_6 - 1) != *(r9_5 + r10_5 - 1))
                                rbx_4 = rax_9
                            else
                                rbx_4 = rax_9
                                
                                if (*r9_5 == r14_1)
                                    void* j_2 = rdi_6 + 4
                                    void* rdx_11 = &r9_5[1]
                                    
                                    if (rdi_6 + 4 u>= rbx_4 - 7)
                                        goto label_140a24bb0
                                    
                                    uint64_t rax_16 = *(rdi_6 + 4) ^ *rdx_11
                                    uint32_t rcx_15
                                    
                                    if (rax_16 != 0)
                                        uint64_t rflags_1
                                        int32_t rcx_16
                                        rcx_16, rflags_1 = _bit_scan_forward(rax_16)
                                        int32_t var_108_1 = 0
                                        rcx_15 = rcx_16 u>> 3
                                    else
                                        j_2 = rdi_6 + 0xc
                                        rdx_11 += 8
                                    label_140a24bb0:
                                        
                                        while (j_2 u< rbx_4 - 7)
                                            uint64_t rax_18 = *j_2 ^ *rdx_11
                                            
                                            if (rax_18 != 0)
                                                uint64_t rflags_2
                                                int32_t rax_25
                                                rax_25, rflags_2 = _bit_scan_forward(rax_18)
                                                int32_t var_108_2 = 0
                                                rcx_15 = j_2.d + (rax_25 u>> 3) - (rdi_6 + 4).d
                                                goto label_140a24c0c
                                            
                                            j_2 += 8
                                            rdx_11 += 8
                                        
                                        if (j_2 u< rbx_4 - 3 && *rdx_11 == *j_2)
                                            j_2 += 4
                                            rdx_11 += 4
                                        
                                        if (j_2 u< rbx_4 - 1 && *rdx_11 == *j_2)
                                            j_2 += 2
                                            rdx_11 += 2
                                        
                                        if (j_2 u< rbx_4 && *rdx_11 == *j_2)
                                            j_2 += 1
                                        
                                        rcx_15 = j_2.d - (rdi_6 + 4).d
                                    
                                label_140a24c0c:
                                    
                                    if (rcx_15 + 4 s> r10_5.d)
                                        var_124_1 = rcx_15 + 4
                                        var_c8_1 = r9_5
                        
                        if (rcx_5 == 0 || *(rax_10 + (zx.q(r11_3.w) << 1)) != 1)
                            r11_3 = zx.q(r11_3.d - zx.d(*(rax_10 + (zx.q(r11_3.w) << 1))))
                        else
                            int32_t rsi_3 = (r11_3 - 1).d
                            
                            if (r15_2 == 0)
                                int32_t rdi_12
                                rdi_12.b = r14_1.b == (r14_1 u>> 0x18).b
                                int32_t rcx_23
                                rcx_23.b = zx.d(r14_1.w) == r14_1 u>> 0x10
                                
                                if ((rcx_23 & rdi_12) == 0)
                                    r15_2 = 1
                                    var_130_1 = 1
                                    r11_3 = zx.q(r11_3.d - zx.d(*(rax_10 + (zx.q(r11_3.w) << 1))))
                                else
                                    r15_2 = 2
                                    var_130_1 = 2
                                    r13_1 = zx.q(sub_140a2c4c0(var_100_1 + 4, rbx_4, r14_1)) + 4
                                    
                                    if (rsi_3 u>= var_128_1 && r12_1.d - rsi_3 - 1 u>= 3)
                                        goto label_140a24ef0
                                    
                                    r11_3 = zx.q(r11_3.d - zx.d(*(rax_10 + (zx.q(r11_3.w) << 1))))
                            else if (r15_2 != 2 || rsi_3 u< var_128_1 || r12_1.d - rsi_3 - 1 u< 3)
                                r11_3 = zx.q(r11_3.d - zx.d(*(rax_10 + (zx.q(r11_3.w) << 1))))
                            else
                            label_140a24ef0:
                                int64_t rdi_13 = var_118_1
                                
                                if (rsi_3 u< r12_1.d)
                                    rdi_13 = var_d8_1
                                
                                int32_t* rdi_14 = rdi_13 + zx.q(rsi_3)
                                
                                if (*rdi_14 != r14_1)
                                    r11_3 = zx.q(r11_3.d - zx.d(*(rax_10 + (zx.q(r11_3.w) << 1))))
                                else
                                    void* rdx_18 = var_d8_1 + r12_1
                                    int64_t* r15_4 = zx.q(arg1[0x10007]) + var_d8_1
                                    
                                    if (rsi_3 u>= r12_1.d)
                                        rdx_18 = rbx_4
                                    
                                    void* rbx_6 = zx.q(sub_140a2c4c0(&rdi_14[1], rdx_18, r14_1)) + 4
                                    int64_t* r11_4
                                    
                                    if (rsi_3 u>= r12_1.d || rbx_6 + rdi_14 != rdx_18)
                                        r11_4 = var_f8_1
                                    else
                                        int32_t r8_11 = r14_1
                                        uint64_t rax_67 = (zx.q(rbx_6.d) & 3) << 3
                                        
                                        if (rax_67 != 0)
                                            r8_11 = rol.d(r8_11, rax_67.b)
                                        
                                        r11_4 = var_f8_1
                                        rbx_6 += zx.q(sub_140a2c4c0(r11_4, rax_9, r8_11))
                                    
                                    int64_t* rdx_21 = r11_4
                                    
                                    if (rsi_3 u< r12_1.d)
                                        rdx_21 = r15_4
                                    
                                    uint64_t r14_2 = zx.q(sub_140a2c5c0(rdi_14, rdx_21, r14_1))
                                    
                                    if (rsi_3 u>= r12_1.d && rdi_14 - r14_2 == var_f8_1
                                            && arg1[0x10007] u< r12_1.d)
                                        int32_t r8_13 = var_12c_1
                                        uint64_t rax_74 = (zx.q(neg.d(r14_2.d)) & 3) << 3
                                        
                                        if (rax_74 != 0)
                                            r8_13 = rol.d(r8_13, rax_74.b)
                                        
                                        r14_2 += zx.q(sub_140a2c5c0(r12_1 + var_d8_1, r15_4, r8_13))
                                    
                                    r11_3 = zx.q(var_128_1)
                                    int32_t rax_78 = rsi_3 - r14_2.d
                                    
                                    if (rax_78 u> r11_3.d)
                                        r11_3 = zx.q(rax_78)
                                    
                                    void* rdx_25 = zx.q(rsi_3 - r11_3.d) + rbx_6
                                    
                                    if (rdx_25 u>= r13_1 && rbx_6 u<= r13_1)
                                        r14_1 = var_12c_1
                                        r15_2 = var_130_1
                                        r11_3 = zx.q(rbx_6.d - r13_1.d + rsi_3)
                                        
                                        if (r12_1.d - r11_3.d - 1 u< 3)
                                            r11_3 = zx.q(r12_1.d)
                                    else if (r12_1.d - r11_3.d - 1 u>= 3)
                                        rdi_6 = var_100_1
                                        void* rcx_38 = r13_1
                                        
                                        if (rdx_25 u< r13_1)
                                            rcx_38 = rdx_25
                                        
                                        if (sx.q(var_124_1) u< rcx_38)
                                            if (rdi_6 - zx.q(r11_3.d) - var_118_1 s> 0xffff)
                                                rbx_2 = var_128_1
                                                goto label_140a250a6
                                            
                                            var_124_1 = rcx_38.d
                                            var_c8_1 = r11_3 + var_118_1
                                        
                                        uint32_t rcx_29 = zx.d(*(rax_10 + (zx.q(r11_3.w) << 1)))
                                        
                                        if (rcx_29 u> r11_3.d)
                                            rbx_2 = var_128_1
                                            goto label_140a250a6
                                        
                                        r14_1 = var_12c_1
                                        r15_2 = var_130_1
                                        r11_3 = zx.q(r11_3.d - rcx_29)
                                    else
                                        r14_1 = var_12c_1
                                        r11_3 = zx.q(r12_1.d)
                                        r15_2 = var_130_1
                        
                        rbx_2 = var_128_1
                        rsi_2 = var_f8_1
                        rdx_9 = var_d8_1
                        i_2 = i_14
                        rdi_6 = var_100_1
                        
                        if (r11_3.d u< rbx_2)
                            goto label_140a250a6
                        
                        r10_4 = var_118_1
                
                int32_t rdx_30 = var_124_1
                
                if (rdx_30 s>= 4)
                    int32_t* r13_3 = var_c8_1
                    void* rbx_10 = rdi_6
                    int32_t* var_88_2 = r13_3
                    void* var_60_1 = rdi_6
                    int32_t var_12c_2 = rdx_30
                    
                    while (true)
                    label_140a25264:
                        int64_t rsi_4 = sx.q(rdx_30)
                        void* rax_116 = rsi_4 + rbx_10
                        char* r10_25
                        int32_t r11_24
                        
                        if (rax_116 u<= var_80_1 - 0xc)
                            int32_t i_5 = zmm0:4.d
                            int32_t var_11c_1 = rdx_30
                            int32_t rdx_31 = arg1[0x10007]
                            int64_t r15_6 = *(arg1 + 0x40008)
                            void* rax_117 = *(arg1 + 0x40028)
                            int32_t rdi_18 = (rax_116 - 2).d - r15_6.d
                            uint64_t r12_3 = zx.q(arg1[0x10006])
                            
                            if (rdx_31 + 0x10000 u<= rdi_18)
                                rdx_31 = rdi_18 - 0xffff
                            
                            int32_t i_15 = i_5
                            int32_t rax_119 = *(rax_116 - 2)
                            int64_t* r14_4 = r15_6 + r12_3
                            int64_t rdx_32 = *(arg1 + 0x40010)
                            int32_t i_3 = (rax_116 - 2).d - r15_6.d
                            int64_t* var_f8_2 = r14_4
                            int32_t r11_7 = 0
                            int64_t var_a8_1 = rdx_32
                            void* r13_4 = nullptr
                            uint64_t rdi_19 = zx.q(arg1[0x10008])
                            int32_t var_134_1 = 0
                            
                            if (rdi_19.d u< i_3)
                                int32_t* r8_16 = r15_6 + rdi_19
                                
                                do
                                    uint64_t rcx_50 = zx.q(*r8_16 * 0x9e3779b1)
                                    r8_16 += 1
                                    int32_t* rdx_33 = rcx_50 u>> 0x11 << 2
                                    uint64_t rcx_53 = zx.q(rdi_19.d - *(rdx_33 + arg1))
                                    
                                    if (rcx_53 u> 0xffff)
                                        rcx_53 = 0xffff
                                    
                                    *(arg1 + (zx.q(rdi_19.w) << 1) + 0x20000) = rcx_53.w
                                    *(rdx_33 + arg1) = rdi_19.d
                                    rdi_19 = zx.q(rdi_19.d + 1)
                                while (rdi_19.d u< i_3)
                                
                                rdx_32 = var_a8_1
                                r11_7 = 0
                            
                            void* rdi_20 = rax_116 - 2
                            arg1[0x10008] = i_3
                            int64_t r8_17 = sx.q((rax_116 - 2).d - rbx_10.d)
                            int64_t var_a0_1 = r8_17
                            uint64_t r15_7 = zx.q(arg1[zx.q(*rdi_20 * 0x9e3779b1) u>> 0x11])
                            int32_t rbx_12 = rdx_31
                            
                            if (r15_7.d u< rbx_12)
                            label_140a2597a:
                                int32_t i_24 = i_15
                                
                                if (i_24 != 0 && rdi_18 - rbx_12 u< 0xffff)
                                    int64_t r14_8 = *(rax_117 + 0x40000) - *(rax_117 + 0x40008)
                                    int32_t rsi_9 =
                                        *(rax_117 + (zx.q(*rdi_20 * 0x9e3779b1) u>> 0x11 << 2))
                                    int32_t rbx_20 = rsi_9 - r14_8.d + rdx_31
                                    
                                    while (rdi_18 - rbx_20 u<= 0xffff)
                                        int32_t i_26 = i_24
                                        i_24 -= 1
                                        
                                        if (i_26 == 0)
                                            break
                                        
                                        int64_t r11_11 = *(rax_117 + 0x40008)
                                        uint64_t rcx_93 = zx.q(rsi_9)
                                        void* r10_15 = r11_11 + rcx_93
                                        
                                        if (*(r11_11 + rcx_93) == rax_119)
                                            void* r8_29 = rax_9
                                            int32_t* rdx_52 = r10_15 + 4
                                            void* rcx_94 = r14_8 - rcx_93 + rdi_20
                                            
                                            if (rcx_94 u<= r8_29)
                                                r8_29 = rcx_94
                                            
                                            void* i_4 = rdi_20 + 4
                                            
                                            if (rdi_20 + 4 u>= r8_29 - 7)
                                                goto label_140a25a4e
                                            
                                            uint64_t rax_208 = *(rdi_20 + 4) ^ *rdx_52
                                            uint32_t rcx_95
                                            int32_t rdx_53
                                            
                                            if (rax_208 != 0)
                                                uint64_t rflags_15
                                                int32_t rcx_108
                                                rcx_108, rflags_15 = _bit_scan_forward(rax_208)
                                                rdx_53 = 0
                                                rcx_95 = rcx_108 u>> 3
                                            else
                                                i_4 = rdi_20 + 0xc
                                                rdx_52 = &rdx_52[2]
                                            label_140a25a4e:
                                                
                                                while (i_4 u< r8_29 - 7)
                                                    uint64_t rax_210 = *i_4 ^ *rdx_52
                                                    
                                                    if (rax_210 != 0)
                                                        uint64_t rflags_16
                                                        int32_t rax_239
                                                        rax_239, rflags_16 =
                                                            _bit_scan_forward(rax_210)
                                                        rdx_53 = 0
                                                        rcx_95 =
                                                            i_4.d - (rdi_20 + 4).d + (rax_239 u>> 3)
                                                        goto label_140a25aad
                                                    
                                                    i_4 += 8
                                                    rdx_52 = &rdx_52[2]
                                                
                                                if (i_4 u< r8_29 - 3 && *rdx_52 == *i_4)
                                                    i_4 += 4
                                                    rdx_52 = &rdx_52[1]
                                                
                                                if (i_4 u< r8_29 - 1 && *rdx_52 == *i_4)
                                                    i_4 += 2
                                                    rdx_52 += 2
                                                
                                                if (i_4 u< r8_29 && *rdx_52 == *i_4)
                                                    i_4 += 1
                                                
                                                rcx_95 = i_4.d - (rdi_20 + 4).d
                                                rdx_53 = 0
                                            
                                        label_140a25aad:
                                            
                                            if (var_a0_1 != 0)
                                                void* rcx_98 =
                                                    zx.q(*(rax_117 + 0x40018)) - r10_15 + r11_11
                                                void* rax_217 = var_100_1 - (rax_116 - 2)
                                                
                                                if (rax_217 s> rcx_98)
                                                    rcx_98 = zx.q(rax_217.d)
                                                
                                                if (rcx_98.d s< 0)
                                                    void* rcx_99 = r10_15 - 1
                                                    int64_t r10_16 = neg.q(r10_15)
                                                    
                                                    while (*(rax_116 - 2 + r10_16 + rcx_99)
                                                            == *rcx_99)
                                                        rcx_99 -= 1
                                                        rdx_53 -= 1
                                                        
                                                        if (rcx_99 + 1 + r10_16 s<= sx.q(rcx_98.d))
                                                            break
                                            
                                            rdi_20 = rax_116 - 2
                                            int32_t r9_18 = rcx_95 + 4 - rdx_53
                                            
                                            if (r9_18 s> var_11c_1)
                                                int64_t rax_221 = sx.q(rdx_53)
                                                var_11c_1 = r9_18
                                                var_f0_1 = zx.q(rbx_20) + r15_6 + rax_221
                                                var_d0_1 = rax_221 + rdi_20
                                        
                                        uint32_t rcx_103 =
                                            zx.d(*(rax_117 + (zx.q(rsi_9.w) << 1) + 0x20000))
                                        rbx_20 -= rcx_103
                                        rsi_9 -= rcx_103
                            else
                                while (i_5 != 0)
                                    int32_t r9_11 = rax_119
                                    i_15 = i_5 - 1
                                    uint64_t rsi_6 = zx.q(r15_7.d)
                                    void* r8_20
                                    
                                    if (r15_7.d u< r12_3.d)
                                        void* r11_8 = rdx_32 + rsi_6
                                        
                                        if (*(rdx_32 + rsi_6) != r9_11)
                                            r11_7 = var_134_1
                                            r8_20 = rax_116 - 2
                                        else
                                            void* r8_22 = rax_9
                                            void* rcx_71 = zx.q(r12_3.d - r15_7.d) + rdi_20
                                            int64_t rbx_14 = zx.q(arg1[0x10007]) + rdx_32
                                            int32_t* rdx_41 = r11_8 + 4
                                            
                                            if (rcx_71 u<= r8_22)
                                                r8_22 = rcx_71
                                            
                                            void* j_3 = rdi_20 + 4
                                            
                                            if (rdi_20 + 4 u>= r8_22 - 7)
                                                goto label_140a255f0
                                            
                                            uint64_t rax_148 = *(rdi_20 + 4) ^ *rdx_41
                                            uint32_t rcx_72
                                            
                                            if (rax_148 != 0)
                                                uint64_t rflags_11
                                                int32_t rcx_77
                                                rcx_77, rflags_11 = _bit_scan_forward(rax_148)
                                                int32_t var_120_1 = 0
                                                rcx_72 = rcx_77 u>> 3
                                            else
                                                j_3 = rdi_20 + 0xc
                                                rdx_41 = &rdx_41[2]
                                            label_140a255f0:
                                                
                                                while (j_3 u< r8_22 - 7)
                                                    uint64_t rax_150 = *j_3 ^ *rdx_41
                                                    
                                                    if (rax_150 != 0)
                                                        uint64_t rflags_12
                                                        int32_t rax_171
                                                        rax_171, rflags_12 =
                                                            _bit_scan_forward(rax_150)
                                                        int32_t var_120_2 = 0
                                                        rcx_72 =
                                                            j_3.d - (rdi_20 + 4).d + (rax_171 u>> 3)
                                                        goto label_140a2564d
                                                    
                                                    j_3 += 8
                                                    rdx_41 = &rdx_41[2]
                                                
                                                if (j_3 u< r8_22 - 3 && *rdx_41 == *j_3)
                                                    j_3 += 4
                                                    rdx_41 = &rdx_41[1]
                                                
                                                if (j_3 u< r8_22 - 1 && *rdx_41 == *j_3)
                                                    j_3 += 2
                                                    rdx_41 += 2
                                                
                                                if (j_3 u< r8_22 && *rdx_41 == *j_3)
                                                    j_3 += 1
                                                
                                                rcx_72 = j_3.d - (rdi_20 + 4).d
                                            
                                        label_140a2564d:
                                            void* rdi_27 = rax_116 - 2
                                            int32_t r10_13 = rcx_72 + 4
                                            void* j_10 = sx.q(r10_13) + rdi_27
                                            
                                            if (j_10 == r8_22 && r8_22 u< rax_9)
                                                void* rdx_42 = r14_4
                                                void* j_4 = j_10
                                                
                                                if (j_10 u>= rax_9 - 7)
                                                    goto label_140a25698
                                                
                                                uint64_t rax_157 = *r14_4 ^ *j_10
                                                uint32_t rcx_73
                                                
                                                if (rax_157 != 0)
                                                    uint64_t rflags_13
                                                    int32_t rcx_79
                                                    rcx_79, rflags_13 = _bit_scan_forward(rax_157)
                                                    int32_t var_120_3 = 0
                                                    rcx_73 = rcx_79 u>> 3
                                                else
                                                    j_4 = j_10 + 8
                                                    rdx_42 = &r14_4[1]
                                                label_140a25698:
                                                    
                                                    while (j_4 u< rax_9 - 7)
                                                        uint64_t rax_159 = *j_4 ^ *rdx_42
                                                        
                                                        if (rax_159 != 0)
                                                            uint64_t rflags_14
                                                            int32_t rax_173
                                                            rax_173, rflags_14 =
                                                                _bit_scan_forward(rax_159)
                                                            int32_t var_120_4 = 0
                                                            rcx_73 =
                                                                j_4.d - j_10.d + (rax_173 u>> 3)
                                                            goto label_140a256fb
                                                        
                                                        j_4 += 8
                                                        rdx_42 += 8
                                                    
                                                    if (j_4 u< rax_9 - 3 && *rdx_42 == *j_4)
                                                        j_4 += 4
                                                        rdx_42 += 4
                                                    
                                                    if (j_4 u< rax_9 - 1 && *rdx_42 == *j_4)
                                                        j_4 += 2
                                                        rdx_42 += 2
                                                    
                                                    if (j_4 u< rax_9 && *rdx_42 == *j_4)
                                                        j_4 += 1
                                                    
                                                    rcx_73 = j_4.d - j_10.d
                                                
                                            label_140a256fb:
                                                rdi_27 = rax_116 - 2
                                                r10_13 += rcx_73
                                            
                                            int32_t rdx_43 = 0
                                            
                                            if (var_a0_1 != 0)
                                                void* rbx_15 = rbx_14 - r11_8
                                                int64_t rax_166 = var_100_1 - rdi_27
                                                
                                                if (rax_166 s> rbx_15)
                                                    rbx_15 = zx.q(rax_166.d)
                                                
                                                if (rbx_15.d s< 0)
                                                    void* rcx_74 = r11_8 - 1
                                                    
                                                    while (*(rdi_27 - r11_8 + rcx_74) == *rcx_74)
                                                        rcx_74 -= 1
                                                        rdx_43 -= 1
                                                        
                                                        if (1 - r11_8 + rcx_74 s<= sx.q(rbx_15.d))
                                                            break
                                                    
                                                    rdi_27 = rax_116 - 2
                                            
                                            r11_7 = var_134_1
                                            int32_t r10_14 = r10_13 - rdx_43
                                            rbx_12 = rdx_31
                                            r8_20 = rax_116 - 2
                                            r9_11 = rax_119
                                            
                                            if (r10_14 s> var_11c_1)
                                                int64_t rax_169 = sx.q(rdx_43)
                                                var_11c_1 = r10_14
                                                var_f0_1 = rax_169 + rsi_6 + r15_6
                                                var_d0_1 = rax_169 + rdi_27
                                    else
                                        int64_t rcx_56 = sx.q(var_11c_1)
                                        int32_t* r10_12 = r15_6 + rsi_6
                                        
                                        if (*(rcx_56 + var_100_1 - 1)
                                                != *(r10_12 - r8_17 + rcx_56 - 1) || *r10_12 != r9_11)
                                            r8_20 = rax_116 - 2
                                        else
                                            int32_t r9_12 = 0
                                            
                                            if (r8_17 != 0)
                                                uint64_t rcx_58 = r14_4 - r10_12
                                                int64_t rax_125 = var_100_1 - rdi_20
                                                
                                                if (rax_125 s> rcx_58)
                                                    rcx_58 = zx.q(rax_125.d)
                                                
                                                if (rcx_58.d s< 0)
                                                    void* rcx_59 = r10_12 - 1
                                                    
                                                    while (*(rdi_20 - r10_12 + rcx_59) == *rcx_59)
                                                        rcx_59 -= 1
                                                        r9_12 -= 1
                                                        
                                                        if (1 - r10_12 + rcx_59 s<= sx.q(rcx_58.d))
                                                            break
                                                    
                                                    rdi_20 = rax_116 - 2
                                            
                                            void* rdx_37 = &r10_12[1]
                                            void* j_5 = rdi_20 + 4
                                            
                                            if (rdi_20 + 4 u>= rax_9 - 7)
                                                goto label_140a25471
                                            
                                            uint64_t rax_129 = *(rdi_20 + 4) ^ *rdx_37
                                            uint32_t rcx_60
                                            
                                            if (rax_129 != 0)
                                                uint64_t rflags_9
                                                int32_t rcx_67
                                                rcx_67, rflags_9 = _bit_scan_forward(rax_129)
                                                rcx_60 = rcx_67 u>> 3
                                            else
                                                j_5 = rdi_20 + 0xc
                                                rdx_37 += 8
                                            label_140a25471:
                                                
                                                while (j_5 u< rax_9 - 7)
                                                    uint64_t rax_131 = *j_5 ^ *rdx_37
                                                    
                                                    if (rax_131 != 0)
                                                        uint64_t rflags_10
                                                        int32_t rax_144
                                                        rax_144, rflags_10 =
                                                            _bit_scan_forward(rax_131)
                                                        rcx_60 =
                                                            j_5.d - (rdi_20 + 4).d + (rax_144 u>> 3)
                                                        goto label_140a254d2
                                                    
                                                    j_5 += 8
                                                    rdx_37 += 8
                                                
                                                if (j_5 u< rax_9 - 3 && *rdx_37 == *j_5)
                                                    j_5 += 4
                                                    rdx_37 += 4
                                                
                                                if (j_5 u< rax_9 - 1 && *rdx_37 == *j_5)
                                                    j_5 += 2
                                                    rdx_37 += 2
                                                
                                                if (j_5 u< rax_9 && *rdx_37 == *j_5)
                                                    j_5 += 1
                                                
                                                rcx_60 = j_5.d - (rdi_20 + 4).d
                                            
                                        label_140a254d2:
                                            r8_20 = rax_116 - 2
                                            
                                            if (rcx_60 - r9_12 + 4 s> var_11c_1)
                                                int64_t rax_137 = sx.q(r9_12)
                                                var_11c_1 = rcx_60 - r9_12 + 4
                                                var_d0_1 = rax_137 + r8_20
                                                var_f0_1 = r10_12 + rax_137
                                            
                                            r9_11 = rax_119
                                    
                                    if (rcx_5 == 0 || *(rax_10 + (zx.q(r15_7.w) << 1)) != 1)
                                        r15_7 =
                                            zx.q(r15_7.d - zx.d(*(rax_10 + (zx.q(r15_7.w) << 1))))
                                    else
                                        int32_t rsi_7 = (r15_7 - 1).d
                                        
                                        if (r11_7 == 0)
                                            int32_t rdi_25
                                            rdi_25.b = r9_11.b == (r9_11 u>> 0x18).b
                                            int32_t rcx_65
                                            rcx_65.b = zx.d(r9_11.w) == r9_11 u>> 0x10
                                            
                                            if ((rcx_65 & rdi_25) == 0)
                                                r11_7 = 1
                                                var_134_1 = 1
                                                r15_7 = zx.q(r15_7.d
                                                    - zx.d(*(rax_10 + (zx.q(r15_7.w) << 1))))
                                            else
                                                r11_7 = 2
                                                var_134_1 = 2
                                                r13_4 =
                                                    zx.q(sub_140a2c4c0(r8_20 + 4, rax_9, r9_11)) + 4
                                                
                                                if (rsi_7 u>= rbx_12 && r12_3.d - rsi_7 - 1 u>= 3)
                                                    goto label_140a25828
                                                
                                                r15_7 = zx.q(r15_7.d
                                                    - zx.d(*(rax_10 + (zx.q(r15_7.w) << 1))))
                                        else if (r11_7 != 2 || rsi_7 u< rbx_12
                                                || r12_3.d - rsi_7 - 1 u< 3)
                                            r15_7 = zx.q(r15_7.d
                                                - zx.d(*(rax_10 + (zx.q(r15_7.w) << 1))))
                                        else
                                        label_140a25828:
                                            int64_t rdi_30 = r15_6
                                            
                                            if (rsi_7 u< r12_3.d)
                                                rdi_30 = var_a8_1
                                            
                                            int32_t* rdi_31 = rdi_30 + zx.q(rsi_7)
                                            
                                            if (*rdi_31 != rax_119)
                                                r15_7 = zx.q(r15_7.d
                                                    - zx.d(*(rax_10 + (zx.q(r15_7.w) << 1))))
                                            else
                                                void* rdx_44 = var_a8_1 + r12_3
                                                int64_t* r15_9 = zx.q(arg1[0x10007]) + var_a8_1
                                                
                                                if (rsi_7 u>= r12_3.d)
                                                    rdx_44 = rax_9
                                                
                                                void* r14_6 =
                                                    zx.q(sub_140a2c4c0(&rdi_31[1], rdx_44, rax_119))
                                                    + 4
                                                int64_t* r11_10
                                                
                                                if (rsi_7 u>= r12_3.d || r14_6 + rdi_31 != rdx_44)
                                                    r11_10 = var_f8_2
                                                else
                                                    int32_t r8_26 = rax_119
                                                    uint64_t rax_185 = (zx.q(r14_6.d) & 3) << 3
                                                    
                                                    if (rax_185 != 0)
                                                        r8_26 = rol.d(r8_26, rax_185.b)
                                                    
                                                    r11_10 = var_f8_2
                                                    r14_6 +=
                                                        zx.q(sub_140a2c4c0(r11_10, rax_9, r8_26))
                                                
                                                int64_t* rdx_47 = r11_10
                                                
                                                if (rsi_7 u< r12_3.d)
                                                    rdx_47 = r15_9
                                                
                                                uint64_t rbx_17 =
                                                    zx.q(sub_140a2c5c0(rdi_31, rdx_47, rax_119))
                                                
                                                if (rsi_7 u>= r12_3.d && rdi_31 - rbx_17 == var_f8_2
                                                        && arg1[0x10007] u< r12_3.d)
                                                    int32_t r8_28 = rax_119
                                                    uint64_t rax_192 =
                                                        (zx.q(neg.d(rbx_17.d)) & 3) << 3
                                                    
                                                    if (rax_192 != 0)
                                                        r8_28 = rol.d(r8_28, rax_192.b)
                                                    
                                                    rbx_17 += zx.q(sub_140a2c5c0(r12_3 + var_a8_1, 
                                                        r15_9, r8_28))
                                                
                                                int32_t rax_196 = rsi_7 - rbx_17.d
                                                rbx_12 = rdx_31
                                                r15_7 = zx.q(rbx_12)
                                                
                                                if (rax_196 u> rbx_12)
                                                    r15_7 = zx.q(rax_196)
                                                
                                                void* rdx_51 = zx.q(rsi_7 - r15_7.d) + r14_6
                                                
                                                if (rdx_51 u>= r13_4 && r14_6 u<= r13_4)
                                                    r15_7 = zx.q(rsi_7 - r13_4.d + r14_6.d)
                                                    
                                                    if (r12_3.d - r15_7.d - 1 u< 3)
                                                        r15_7 = zx.q(r12_3.d)
                                                else if (r12_3.d - r15_7.d - 1 u< 3)
                                                    r15_7 = zx.q(r12_3.d)
                                                else if (var_a0_1 == 0)
                                                    rdi_20 = rax_116 - 2
                                                    void* rcx_105 = r13_4
                                                    
                                                    if (rdx_51 u< r13_4)
                                                        rcx_105 = rdx_51
                                                    
                                                    if (sx.q(var_11c_1) u< rcx_105)
                                                        if (rdi_20 - zx.q(r15_7.d) - r15_6
                                                                s> 0xffff)
                                                            goto label_140a2597a
                                                        
                                                        var_11c_1 = rcx_105.d
                                                        var_f0_1 = r15_7 + r15_6
                                                        var_d0_1 = rdi_20
                                                    
                                                    uint32_t rcx_107 =
                                                        zx.d(*(rax_10 + (zx.q(r15_7.w) << 1)))
                                                    
                                                    if (rcx_107 u> r15_7.d)
                                                        goto label_140a2597a
                                                    
                                                    r15_7 = zx.q(r15_7.d - rcx_107)
                                                
                                                r11_7 = var_134_1
                                                r14_4 = var_f8_2
                                    
                                    rdx_32 = var_a8_1
                                    rdi_20 = rax_116 - 2
                                    i_5 = i_15
                                    
                                    if (r15_7.d u< rbx_12)
                                        goto label_140a2597a
                                    
                                    r8_17 = var_a0_1
                            
                            void* r15_11 = var_d0_1
                            int32_t r12_4 = var_11c_1
                            rbx_10 = r15_11
                            int32_t r13_7 = var_124_1
                            
                            if (r12_4 == r13_7)
                                rdi_6 = var_100_1
                                r13_3 = var_c8_1
                            else
                                void* r14_9 = var_100_1
                                
                                if (var_60_1 u< r14_9)
                                    int64_t rdx_54 = sx.q(var_12c_2)
                                    
                                    if (r15_11 u< r14_9 + rdx_54)
                                        r14_9 = var_60_1
                                        var_c8_1 = var_88_2
                                        r13_7 = rdx_54.d
                                        var_100_1 = var_60_1
                                        var_124_1 = rdx_54.d
                                
                                if (r15_11 - r14_9 s< 3)
                                    r13_3 = var_f0_1
                                    rdx_30 = r12_4
                                    var_124_1 = rdx_30
                                    rdi_6 = r15_11
                                    var_c8_1 = r13_3
                                    var_100_1 = r15_11
                                    continue
                                
                                void* rsi_10 = var_90_1
                                void* rdi_35 = var_f0_1
                                
                                while (true)
                                    if (r15_11 - r14_9 s< 0x12)
                                        int32_t rdx_56 = r13_7
                                        
                                        if (r13_7 s> 0x12)
                                            rdx_56 = 0x12
                                        
                                        if (sx.q(rdx_56) + r14_9 u> sx.q(r12_4) - 4 + r15_11)
                                            rdx_56 = r15_11.d - r14_9.d - 4 + r12_4
                                        
                                        int32_t rcx_115 = r14_9.d - r15_11.d + rdx_56
                                        
                                        if (rcx_115 s> 0)
                                            int64_t rax_246 = sx.q(rcx_115)
                                            r15_11 += rax_246
                                            r12_4 -= rcx_115
                                            var_d0_1 = r15_11
                                            var_11c_1 = r12_4
                                            var_f0_1 = rdi_35 + rax_246
                                    
                                    void* rdx_61 = sx.q(r12_4) + r15_11
                                    int32_t var_138_3 = r12_4
                                    int32_t r11_21
                                    
                                    if (rdx_61 u> var_80_1 - 0xc)
                                        r11_21 = r12_4
                                    else
                                        int32_t r11_12 = *(rdx_61 - 3)
                                        int32_t r8_33 = r12_4
                                        int32_t var_134_2 = r11_12
                                        int64_t r15_12 = *(arg1 + 0x40008)
                                        void* rax_249 = *(arg1 + 0x40028)
                                        int32_t rdx_63 = (rdx_61 - 3).d - r15_12.d
                                        int32_t rsi_11 = arg1[0x10007]
                                        uint64_t r12_5 = zx.q(arg1[0x10006])
                                        int64_t* r14_10 = r15_12 + r12_5
                                        int64_t rdx_64 = *(arg1 + 0x40010)
                                        uint64_t rdi_38 = zx.q(arg1[0x10008])
                                        
                                        if (rsi_11 + 0x10000 u<= rdx_63)
                                            rsi_11 = rdx_63 - 0xffff
                                        
                                        int32_t i_6 = (rdx_61 - 3).d - r15_12.d
                                        int32_t i_8 = zmm0:4.d
                                        int64_t* var_d8_3 = r14_10
                                        int32_t rbx_21 = 0
                                        int32_t var_130_3 = rsi_11
                                        int64_t var_a0_2 = rdx_64
                                        int32_t var_12c_3 = 0
                                        void* var_118_3 = nullptr
                                        int32_t* r15_13
                                        
                                        if (rdi_38.d u>= i_6)
                                            r15_13 = arg1
                                        else
                                            int32_t* r8_34 = r15_12 + rdi_38
                                            r15_13 = arg1
                                            
                                            do
                                                uint64_t rcx_117 = zx.q(*r8_34 * 0x9e3779b1)
                                                r8_34 += 1
                                                int32_t* rdx_65 = rcx_117 u>> 0x11 << 2
                                                uint64_t rcx_120 =
                                                    zx.q(rdi_38.d - *(rdx_65 + r15_13))
                                                
                                                if (rcx_120 u> 0xffff)
                                                    rcx_120 = 0xffff
                                                
                                                *(r15_13 + (zx.q(rdi_38.w) << 1) + 0x20000) =
                                                    rcx_120.w
                                                *(rdx_65 + r15_13) = rdi_38.d
                                                rdi_38 = zx.q(rdi_38.d + 1)
                                            while (rdi_38.d u< i_6)
                                            
                                            rbx_21 = 0
                                            rdx_64 = var_a0_2
                                            r8_33 = var_138_3
                                        
                                        r15_13[0x10008] = i_6
                                        int64_t rdi_39 = sx.q((rdx_61 - 3).d - var_d0_1.d)
                                        int64_t var_a8_2 = rdi_39
                                        uint64_t r15_14 =
                                            zx.q(r15_13[zx.q(*(rdx_61 - 3) * 0x9e3779b1) u>> 0x11])
                                        
                                        if (r15_14.d u< rsi_11)
                                        label_140a263d4:
                                            int32_t i_16 = i_8
                                            
                                            if (i_16 != 0 && rdx_63 - rsi_11 u< 0xffff)
                                                int64_t r14_14 =
                                                    *(rax_249 + 0x40000) - *(rax_249 + 0x40008)
                                                int32_t rsi_15 = *(rax_249 + (
                                                    zx.q(*(rdx_61 - 3) * 0x9e3779b1) u>> 0x11 << 2))
                                                int32_t rbx_30 = rsi_15 - r14_14.d + var_130_3
                                                
                                                while (rdx_63 - rbx_30 u<= 0xffff)
                                                    int32_t i_22 = i_16
                                                    i_16 -= 1
                                                    
                                                    if (i_22 == 0)
                                                        break
                                                    
                                                    int64_t r11_20 = *(rax_249 + 0x40008)
                                                    uint64_t rcx_158 = zx.q(rsi_15)
                                                    void* r10_23 = rcx_158 + r11_20
                                                    
                                                    if (*(rcx_158 + r11_20) == var_134_2)
                                                        void* r8_45 = rax_9
                                                        int32_t* rdx_84 = r10_23 + 4
                                                        void* rcx_159 =
                                                            r14_14 - rcx_158 + rdx_61 - 3
                                                        void* i_7 = rdx_61 + 1
                                                        
                                                        if (rcx_159 u<= r8_45)
                                                            r8_45 = rcx_159
                                                        
                                                        if (rdx_61 + 1 u>= r8_45 - 7)
                                                            goto label_140a264ab
                                                        
                                                        uint64_t rcx_161 = *(rdx_61 + 1) ^ *rdx_84
                                                        uint32_t rax_343
                                                        int32_t rdx_85
                                                        
                                                        if (rcx_161 != 0)
                                                            uint64_t rflags_23
                                                            int32_t rax_361
                                                            rax_361, rflags_23 =
                                                                _bit_scan_forward(rcx_161)
                                                            rdx_85 = 0
                                                            rax_343 = rax_361 u>> 3
                                                        else
                                                            i_7 = rdx_61 + 9
                                                            rdx_84 = &rdx_84[2]
                                                        label_140a264ab:
                                                            
                                                            while (i_7 u< r8_45 - 7)
                                                                uint64_t rcx_163 = *i_7 ^ *rdx_84
                                                                
                                                                if (rcx_163 != 0)
                                                                    uint64_t rflags_24
                                                                    int32_t rcx_180
                                                                    rcx_180, rflags_24 =
                                                                        _bit_scan_forward(rcx_163)
                                                                    rdx_85 = 0
                                                                    rax_343 =
                                                                        i_7.d - (rdx_61 + 1).d + (rcx_180 u>> 3)
                                                                    goto label_140a2650d
                                                                
                                                                i_7 += 8
                                                                rdx_84 = &rdx_84[2]
                                                            
                                                            if (i_7 u< r8_45 - 3 && *rdx_84 == *i_7)
                                                                i_7 += 4
                                                                rdx_84 = &rdx_84[1]
                                                            
                                                            if (i_7 u< r8_45 - 1 && *rdx_84 == *i_7)
                                                                i_7 += 2
                                                                rdx_84 += 2
                                                            
                                                            if (i_7 u< r8_45 && *rdx_84 == *i_7)
                                                                i_7 += 1
                                                            
                                                            rax_343 = i_7.d - (rdx_61 + 1).d
                                                            rdx_85 = 0
                                                        
                                                    label_140a2650d:
                                                        
                                                        if (var_a8_2 != 0)
                                                            uint64_t rcx_171 =
                                                                zx.q(*(rax_249 + 0x40018)) - r10_23
                                                                + r11_20
                                                            void* rax_345 = var_d0_1 - (rdx_61 - 3)
                                                            
                                                            if (rax_345 s> rcx_171)
                                                                rcx_171 = zx.q(rax_345.d)
                                                            
                                                            if (rcx_171.d s< 0)
                                                                void* rcx_172 = rdx_61 - 4
                                                                
                                                                while (*rcx_172
                                                                        == *(r10_23 - (rdx_61 - 3) + rcx_172))
                                                                    rcx_172 -= 1
                                                                    rdx_85 -= 1
                                                                    
                                                                    if (rcx_172 + 1 - (rdx_61 - 3)
                                                                            s<= sx.q(rcx_171.d))
                                                                        break
                                                        
                                                        int32_t r9_25 = rax_343 + 4 - rdx_85
                                                        
                                                        if (r9_25 s> var_138_3)
                                                            int64_t rax_348 = sx.q(rdx_85)
                                                            var_138_3 = r9_25
                                                            var_b0_1 =
                                                                zx.q(rbx_30) + rax_348 + r15_12
                                                            var_90_1 = rax_348 + rdx_61 - 3
                                                    
                                                    uint32_t rcx_176 = zx.d(*
                                                        (rax_249 + (zx.q(rsi_15.w) << 1) + 0x20000))
                                                    rbx_30 -= rcx_176
                                                    rsi_15 -= rcx_176
                                        else
                                            while (i_8 != 0)
                                                uint64_t rsi_12 = zx.q(r15_14.d)
                                                i_8 -= 1
                                                
                                                if (r15_14.d u< r12_5.d)
                                                    int32_t* r11_13 = rdx_64 + rsi_12
                                                    
                                                    if (*r11_13 != var_134_2)
                                                        r11_12 = var_134_2
                                                    else
                                                        void* r8_38 = rax_9
                                                        void* rcx_134 =
                                                            zx.q(r12_5.d - r15_14.d) + rdx_61 - 3
                                                        int64_t rbx_23 =
                                                            zx.q(arg1[0x10007]) + rdx_64
                                                        void* rdx_70 = &r11_13[1]
                                                        
                                                        if (rcx_134 u<= r8_38)
                                                            r8_38 = rcx_134
                                                        
                                                        void* j_6 = rdx_61 + 1
                                                        
                                                        if (rdx_61 + 1 u>= r8_38 - 7)
                                                            goto label_140a25ffe
                                                        
                                                        uint64_t rax_278 = *(rdx_61 + 1) ^ *rdx_70
                                                        uint32_t rcx_135
                                                        
                                                        if (rax_278 != 0)
                                                            uint64_t rflags_19
                                                            int32_t rcx_141
                                                            rcx_141, rflags_19 =
                                                                _bit_scan_forward(rax_278)
                                                            int32_t var_120_5 = 0
                                                            rcx_135 = rcx_141 u>> 3
                                                        else
                                                            j_6 = rdx_61 + 9
                                                            rdx_70 += 8
                                                        label_140a25ffe:
                                                            
                                                            while (j_6 u< r8_38 - 7)
                                                                uint64_t rax_280 = *j_6 ^ *rdx_70
                                                                
                                                                if (rax_280 != 0)
                                                                    uint64_t rflags_20
                                                                    int32_t rax_300
                                                                    rax_300, rflags_20 =
                                                                        _bit_scan_forward(rax_280)
                                                                    int32_t var_120_6 = 0
                                                                    rcx_135 =
                                                                        j_6.d + (rax_300 u>> 3) - (rdx_61 + 1).d
                                                                    goto label_140a2605b
                                                                
                                                                j_6 += 8
                                                                rdx_70 += 8
                                                            
                                                            if (j_6 u< r8_38 - 3 && *rdx_70 == *j_6)
                                                                j_6 += 4
                                                                rdx_70 += 4
                                                            
                                                            if (j_6 u< r8_38 - 1 && *rdx_70 == *j_6)
                                                                j_6 += 2
                                                                rdx_70 += 2
                                                            
                                                            if (j_6 u< r8_38 && *rdx_70 == *j_6)
                                                                j_6 += 1
                                                            
                                                            rcx_135 = j_6.d - (rdx_61 + 1).d
                                                        
                                                    label_140a2605b:
                                                        int32_t r10_21 = rcx_135 + 4
                                                        void* j_11 = sx.q(r10_21) + rdx_61 - 3
                                                        
                                                        if (j_11 == r8_38 && r8_38 u< rax_9)
                                                            void* rdx_71 = r14_10
                                                            void* j_7 = j_11
                                                            
                                                            if (j_11 u>= rax_9 - 7)
                                                                goto label_140a260a1
                                                            
                                                            uint64_t rax_287 = *j_11 ^ *r14_10
                                                            uint32_t rcx_136
                                                            
                                                            if (rax_287 != 0)
                                                                uint64_t rflags_21
                                                                int32_t rcx_142
                                                                rcx_142, rflags_21 =
                                                                    _bit_scan_forward(rax_287)
                                                                int32_t var_120_7 = 0
                                                                rcx_136 = rcx_142 u>> 3
                                                            else
                                                                j_7 = j_11 + 8
                                                                rdx_71 = &r14_10[1]
                                                            label_140a260a1:
                                                                
                                                                while (j_7 u< rax_9 - 7)
                                                                    uint64_t rax_289 = *j_7 ^ *rdx_71
                                                                    
                                                                    if (rax_289 != 0)
                                                                        uint64_t rflags_22
                                                                        int32_t rax_303
                                                                        rax_303, rflags_22 =
                                                                            _bit_scan_forward(rax_289)
                                                                        int32_t var_120_8 = 0
                                                                        rcx_136 =
                                                                            j_7.d + (rax_303 u>> 3) - j_11.d
                                                                        goto label_140a26102
                                                                    
                                                                    j_7 += 8
                                                                    rdx_71 += 8
                                                                
                                                                if (j_7 u< rax_9 - 3 && *rdx_71 == *j_7)
                                                                    j_7 += 4
                                                                    rdx_71 += 4
                                                                
                                                                if (j_7 u< rax_9 - 1 && *rdx_71 == *j_7)
                                                                    j_7 += 2
                                                                    rdx_71 += 2
                                                                
                                                                if (j_7 u< rax_9 && *rdx_71 == *j_7)
                                                                    j_7 += 1
                                                                
                                                                rcx_136 = j_7.d - j_11.d
                                                            
                                                        label_140a26102:
                                                            r10_21 += rcx_136
                                                        
                                                        int32_t rdx_72 = 0
                                                        
                                                        if (var_a8_2 != 0)
                                                            uint64_t rbx_24 = rbx_23 - r11_13
                                                            void* rax_296 = var_d0_1 - (rdx_61 - 3)
                                                            
                                                            if (rax_296 s> rbx_24)
                                                                rbx_24 = zx.q(rax_296.d)
                                                            
                                                            if (rbx_24.d s< 0)
                                                                void* rcx_137 = rdx_61 - 4
                                                                
                                                                while (*rcx_137
                                                                        == *(r11_13 - (rdx_61 - 3) + rcx_137))
                                                                    rcx_137 -= 1
                                                                    rdx_72 -= 1
                                                                    
                                                                    if (rcx_137 + 1 - (rdx_61 - 3)
                                                                            s<= sx.q(rbx_24.d))
                                                                        break
                                                        
                                                        rbx_21 = var_12c_3
                                                        int32_t r10_22 = r10_21 - rdx_72
                                                        r11_12 = var_134_2
                                                        
                                                        if (r10_22 s> var_138_3)
                                                            int64_t rax_299 = sx.q(rdx_72)
                                                            var_138_3 = r10_22
                                                            var_b0_1 = r15_12 + rsi_12 + rax_299
                                                            var_90_1 = rax_299 + rdx_61 - 3
                                                else
                                                    int32_t* r10_20 = r15_12 + rsi_12
                                                    int64_t rcx_123 = sx.q(r8_33)
                                                    
                                                    if (*(rcx_123 + var_d0_1 - 1)
                                                            == *(r10_20 - rdi_39 + rcx_123 - 1)
                                                            && *r10_20 == r11_12)
                                                        int32_t r9_20 = 0
                                                        
                                                        if (rdi_39 != 0)
                                                            uint64_t rcx_125 = r14_10 - r10_20
                                                            void* rax_259 = var_d0_1 - (rdx_61 - 3)
                                                            
                                                            if (rax_259 s> rcx_125)
                                                                rcx_125 = zx.q(rax_259.d)
                                                            
                                                            if (rcx_125.d s< 0)
                                                                void* rcx_126 = rdx_61 - 4
                                                                
                                                                while (*rcx_126
                                                                        == *(r10_20 - (rdx_61 - 3) + rcx_126))
                                                                    rcx_126 -= 1
                                                                    r9_20 -= 1
                                                                    
                                                                    if (1 - (rdx_61 - 3) + rcx_126
                                                                            s<= sx.q(rcx_125.d))
                                                                        break
                                                        
                                                        void* rdx_69 = &r10_20[1]
                                                        void* j_8 = rdx_61 + 1
                                                        
                                                        if (rdx_61 + 1 u>= rax_9 - 7)
                                                            goto label_140a25ef6
                                                        
                                                        uint64_t rax_263 = *(rdx_61 + 1) ^ *rdx_69
                                                        uint32_t rcx_131
                                                        
                                                        if (rax_263 != 0)
                                                            uint64_t rflags_17
                                                            int32_t rcx_130
                                                            rcx_130, rflags_17 =
                                                                _bit_scan_forward(rax_263)
                                                            rcx_131 = rcx_130 u>> 3
                                                        else
                                                            j_8 = rdx_61 + 9
                                                            rdx_69 += 8
                                                        label_140a25ef6:
                                                            
                                                            while (j_8 u< rax_9 - 7)
                                                                uint64_t rax_265 = *j_8 ^ *rdx_69
                                                                
                                                                if (rax_265 != 0)
                                                                    uint64_t rflags_18
                                                                    int32_t rax_273
                                                                    rax_273, rflags_18 =
                                                                        _bit_scan_forward(rax_265)
                                                                    rcx_131 =
                                                                        j_8.d + (rax_273 u>> 3) - (rdx_61 + 1).d
                                                                    goto label_140a25f61
                                                                
                                                                j_8 += 8
                                                                rdx_69 += 8
                                                            
                                                            if (j_8 u< rax_9 - 3 && *rdx_69 == *j_8)
                                                                j_8 += 4
                                                                rdx_69 += 4
                                                            
                                                            if (j_8 u< rax_9 - 1 && *rdx_69 == *j_8)
                                                                j_8 += 2
                                                                rdx_69 += 2
                                                            
                                                            if (j_8 u< rax_9 && *rdx_69 == *j_8)
                                                                j_8 += 1
                                                            
                                                            rcx_131 = j_8.d - (rdx_61 + 1).d
                                                        
                                                    label_140a25f61:
                                                        
                                                        if (rcx_131 - r9_20 + 4 s> var_138_3)
                                                            int64_t rax_271 = sx.q(r9_20)
                                                            var_138_3 = rcx_131 - r9_20 + 4
                                                            var_90_1 = rax_271 + rdx_61 - 3
                                                            var_b0_1 = r10_20 + rax_271
                                                
                                                if (rcx_5 == 0
                                                        || *(rax_10 + (zx.q(r15_14.w) << 1)) != 1)
                                                    rsi_11 = var_130_3
                                                    r15_14 = zx.q(r15_14.d
                                                        - zx.d(*(rax_10 + (zx.q(r15_14.w) << 1))))
                                                else
                                                    int32_t r14_12 = (r15_14 - 1).d
                                                    
                                                    if (rbx_21 != 0)
                                                        if (rbx_21 == 2)
                                                            goto label_140a2626d
                                                        
                                                        rsi_11 = var_130_3
                                                        r15_14 = zx.q(r15_14.d -
                                                            zx.d(*(rax_10 + (zx.q(r15_14.w) << 1))))
                                                    else
                                                        int32_t rdi_48
                                                        rdi_48.b = r11_12.b == (r11_12 u>> 0x18).b
                                                        int32_t rcx_144
                                                        rcx_144.b =
                                                            zx.d(r11_12.w) == r11_12 u>> 0x10
                                                        
                                                        if ((rcx_144 & rdi_48) == 0)
                                                            rbx_21 = 1
                                                            var_12c_3 = 1
                                                            rsi_11 = var_130_3
                                                            r15_14 = zx.q(r15_14.d -
                                                                zx.d(*(rax_10 + (zx.q(r15_14.w) << 1))))
                                                        else
                                                            rbx_21 = 2
                                                            var_12c_3 = 2
                                                            var_118_3 = zx.q(sub_140a2c4c0(
                                                                rdx_61 + 1, rax_9, r11_12)) + 4
                                                        label_140a2626d:
                                                            rsi_11 = var_130_3
                                                            
                                                            if (r14_12 u< rsi_11
                                                                    || r12_5.d - r14_12 - 1 u< 3)
                                                                r15_14 = zx.q(r15_14.d -
                                                                    zx.d(*(rax_10 + (zx.q(r15_14.w) << 1))))
                                                            else
                                                                int64_t rdi_49 = r15_12
                                                                
                                                                if (r14_12 u< r12_5.d)
                                                                    rdi_49 = var_a0_2
                                                                
                                                                char* rdi_50 = rdi_49 + zx.q(r14_12)
                                                                
                                                                if (*rdi_50 != var_134_2)
                                                                    r15_14 = zx.q(r15_14.d -
                                                                        zx.d(*(rax_10 + (zx.q(r15_14.w) << 1))))
                                                                else
                                                                    void* rdx_76 = var_a0_2 + r12_5
                                                                    int64_t* r15_16 =
                                                                        zx.q(arg1[0x10007]) + var_a0_2
                                                                    
                                                                    if (r14_12 u>= r12_5.d)
                                                                        rdx_76 = rax_9
                                                                    
                                                                    void* rbx_26 = zx.q(sub_140a2c4c0(
                                                                        &rdi_50[4], rdx_76, var_134_2)) + 4
                                                                    int64_t* r11_18
                                                                    
                                                                    if (r14_12 u>= r12_5.d
                                                                            || rbx_26 + rdi_50 != rdx_76)
                                                                        r11_18 = var_d8_3
                                                                    else
                                                                        int32_t r8_42 = var_134_2
                                                                        uint64_t rax_321 =
                                                                            (zx.q(rbx_26.d) & 3) << 3
                                                                        
                                                                        if (rax_321 != 0)
                                                                            r8_42 = rol.d(r8_42, rax_321.b)
                                                                        
                                                                        r11_18 = var_d8_3
                                                                        rbx_26 += zx.q(sub_140a2c4c0(r11_18, 
                                                                            rax_9, r8_42))
                                                                    
                                                                    int64_t* rdx_79 = r11_18
                                                                    
                                                                    if (r14_12 u< r12_5.d)
                                                                        rdx_79 = r15_16
                                                                    
                                                                    uint64_t rsi_14 = zx.q(sub_140a2c5c0(
                                                                        rdi_50, rdx_79, var_134_2))
                                                                    
                                                                    if (r14_12 u>= r12_5.d
                                                                            && rdi_50 - rsi_14 == var_d8_3
                                                                            && arg1[0x10007] u< r12_5.d)
                                                                        int32_t r8_44 = var_134_2
                                                                        uint64_t rax_328 =
                                                                            (zx.q(neg.d(rsi_14.d)) & 3) << 3
                                                                        
                                                                        if (rax_328 != 0)
                                                                            r8_44 = rol.d(r8_44, rax_328.b)
                                                                        
                                                                        rsi_14 += zx.q(sub_140a2c5c0(
                                                                            r12_5 + var_a0_2, r15_16, r8_44))
                                                                    
                                                                    int32_t rax_332 = r14_12 - rsi_14.d
                                                                    rsi_11 = var_130_3
                                                                    r15_14 = zx.q(rsi_11)
                                                                    
                                                                    if (rax_332 u> rsi_11)
                                                                        r15_14 = zx.q(rax_332)
                                                                    
                                                                    void* rdx_83 =
                                                                        zx.q(r14_12 - r15_14.d) + rbx_26
                                                                    
                                                                    if (rdx_83 u>= var_118_3
                                                                            && rbx_26 u<= var_118_3)
                                                                        r15_14 =
                                                                            zx.q(rbx_26.d - var_118_3.d + r14_12)
                                                                        
                                                                        if (r12_5.d - r15_14.d - 1 u< 3)
                                                                            r15_14 = zx.q(r12_5.d)
                                                                    else if (r12_5.d - r15_14.d - 1 u< 3)
                                                                        r15_14 = zx.q(r12_5.d)
                                                                    else if (var_a8_2 == 0)
                                                                        void* rcx_177 = var_118_3
                                                                        
                                                                        if (rdx_83 u< var_118_3)
                                                                            rcx_177 = rdx_83
                                                                        
                                                                        if (sx.q(var_138_3) u< rcx_177)
                                                                            if (rdx_61 - 3 - zx.q(r15_14.d) - r15_12
                                                                                    s> 0xffff)
                                                                                goto label_140a263d4
                                                                            
                                                                            var_138_3 = rcx_177.d
                                                                            var_b0_1 = r15_14 + r15_12
                                                                            var_90_1 = rdx_61 - 3
                                                                        
                                                                        uint32_t rcx_179 =
                                                                            zx.d(*(rax_10 + (zx.q(r15_14.w) << 1)))
                                                                        
                                                                        if (rcx_179 u> r15_14.d)
                                                                            goto label_140a263d4
                                                                        
                                                                        r15_14 = zx.q(r15_14.d - rcx_179)
                                                                    
                                                                    rbx_21 = var_12c_3
                                                
                                                r14_10 = var_d8_3
                                                rdx_64 = var_a0_2
                                                
                                                if (r15_14.d u< rsi_11)
                                                    goto label_140a263d4
                                                
                                                r11_12 = var_134_2
                                                r8_33 = var_138_3
                                                rdi_39 = var_a8_2
                                        
                                        r11_21 = var_138_3
                                        r15_11 = var_d0_1
                                        r12_4 = var_11c_1
                                        r14_9 = var_100_1
                                        r13_7 = var_124_1
                                        rsi_10 = var_90_1
                                    
                                    int64_t rax_363 = sx.q(r13_7)
                                    rbx_10 = rsi_10
                                    
                                    if (r11_21 == r12_4)
                                        if (r15_11 u< rax_363 + r14_9)
                                            r13_7 = r15_11.d - r14_9.d
                                        
                                        r10_25 = var_c0_1
                                        void* rcx_201 = var_e0_1
                                        r11_24 = arg7
                                        void* r8_50 = r14_9 - rcx_201
                                        rbx_1 = var_e8_1
                                        int64_t* r9_36 = &r10_25[1]
                                        
                                        if (r11_24 != 0
                                                && &r9_36[1] + r8_50 u/ 0xff + r8_50 u> rbx_1)
                                            goto label_140a26c63
                                        
                                        if (r8_50 u< 0xf)
                                            *r10_25 = r8_50.b << 4
                                        else
                                            void* r11_25 = r8_50 - 0xf
                                            *r10_25 = 0xf0
                                            
                                            if (r11_25 u>= 0xff)
                                                int64_t* rdi_62 = r9_36
                                                uint64_t count_2 = r11_25 u/ 0xff
                                                r9_36 += count_2
                                                __builtin_memset(rdi_62, 0xff, count_2)
                                                rcx_201 = var_e0_1
                                                r11_25 = r11_25 u% 0xff
                                            
                                            *r9_36 = r11_25.b
                                            r9_36 += 1
                                            r11_24 = arg7
                                        
                                        int16_t* r8_51 = r8_50 + r9_36
                                        void* rcx_203 = rcx_201 - r9_36
                                        
                                        do
                                            *r9_36 = *(r9_36 + rcx_203)
                                            r9_36 = &r9_36[1]
                                        while (r9_36 u< r8_51)
                                        
                                        int64_t rdi_64 = sx.q(r13_7)
                                        *r8_51 = r14_9.w - var_c8_1.w
                                        void* r8_52 = &r8_51[1]
                                        
                                        if (r11_24 != 0
                                                && r8_52 + 6 + (rdi_64 - 4) u/ 0xff u> rbx_1)
                                            goto label_140a26c63
                                        
                                        char rax_414 = *r10_25
                                        
                                        if (rdi_64 - 4 u< 0xf)
                                            *r10_25 = rax_414 + (rdi_64 - 4).b
                                        else
                                            int64_t rcx_205 = rdi_64 - 0x13
                                            *r10_25 = rax_414 + 0xf
                                            
                                            if (rcx_205 u>= 0x1fe)
                                                uint64_t i_19 = rcx_205 u/ 0x1fe
                                                rcx_205 = rcx_205 u% 0x1fe
                                                uint64_t i_9
                                                
                                                do
                                                    *r8_52 = 0xffff
                                                    r8_52 += 2
                                                    i_9 = i_19
                                                    i_19 -= 1
                                                while (i_9 != 1)
                                            
                                            if (rcx_205 u>= 0xff)
                                                rcx_205 -= 0xff
                                                *r8_52 = 0xff
                                                r8_52 += 1
                                            
                                            *r8_52 = rcx_205.b
                                            r8_52 += 1
                                        
                                        void* rcx_207 = rdi_64 + r14_9
                                        r10_25 = r8_52
                                        var_e0_1 = rcx_207
                                        void* r9_38 = r15_11 - rcx_207
                                        void* r8_53 = r8_52 + 1
                                        void* r13_14
                                        
                                        if (r11_24 == 0)
                                            r13_14 = var_e8_1
                                        else
                                            r13_14 = var_e8_1
                                            
                                            if (r8_53 + 8 + r9_38 u/ 0xff + r9_38 u> r13_14)
                                                rbx_1 = r13_14
                                                goto label_140a26c63
                                        
                                        if (r9_38 u< 0xf)
                                            *r8_52 = r9_38.b << 4
                                        else
                                            void* r11_26 = r9_38 - 0xf
                                            *r8_52 = 0xf0
                                            
                                            if (r11_26 u>= 0xff)
                                                void* rdi_65 = r8_53
                                                uint64_t count_3 = r11_26 u/ 0xff
                                                r8_53 += count_3
                                                __builtin_memset(rdi_65, 0xff, count_3)
                                                rcx_207 = var_e0_1
                                                r11_26 = r11_26 u% 0xff
                                            
                                            *r8_53 = r11_26.b
                                            r8_53 += 1
                                            r11_24 = arg7
                                        
                                        void* r14_15 = r9_38 + r8_53
                                        int64_t rcx_208 = rcx_207 - r8_53
                                        
                                        do
                                            *r8_53 = *(r8_53 + rcx_208)
                                            r8_53 += 8
                                        while (r8_53 u< r14_15)
                                        
                                        int64_t rdi_66 = sx.q(r12_4)
                                        *r14_15 = r15_11.w - var_f0_1.w
                                        r14 = r14_15 + 2
                                        var_c0_1 = r14
                                        int64_t rdx_112
                                        int64_t rax_425
                                        
                                        if (r11_24 != 0)
                                            rdx_112:rax_425 =
                                                mulu.dp.q(-0x7f7f7f7f7f7f7f7f, rdi_66 - 4)
                                        
                                        if (r11_24 == 0 || &r14[6 + (rdx_112 u>> 7)] u<= r13_14)
                                            char rax_428 = *r8_52
                                            
                                            if (rdi_66 - 4 u< 0xf)
                                                *r8_52 = rax_428 + (rdi_66 - 4).b
                                                rdi_4 = rdi_66 + r15_11
                                            else
                                                void* rcx_210 = rdi_66 - 0x13
                                                *r8_52 = rax_428 + 0xf
                                                
                                                if (rcx_210 u>= 0x1fe)
                                                    uint64_t i_20 = rcx_210 u/ 0x1fe
                                                    rcx_210 = rcx_210 u% 0x1fe
                                                    uint64_t i_10
                                                    
                                                    do
                                                        *r14 = 0xffff
                                                        r14 = &r14[2]
                                                        i_10 = i_20
                                                        i_20 -= 1
                                                    while (i_10 != 1)
                                                
                                                if (rcx_210 u>= 0xff)
                                                    rcx_210 -= 0xff
                                                    *r14 = 0xff
                                                    r14 = &r14[1]
                                                
                                                *r14 = rcx_210.b
                                                r14 = &r14[1]
                                                var_c0_1 = r14
                                                rdi_4 = rdi_66 + r15_11
                                            
                                            break
                                    else
                                        void* rcx_182 = rax_363 + r14_9
                                        
                                        if (rsi_10 u>= rcx_182 + 3)
                                            void* rbx_31
                                            
                                            if (r15_11 u>= rcx_182)
                                                rbx_31 = var_f0_1
                                            else if (r15_11 - r14_9 s>= 0x12)
                                                r13_7 = r15_11.d - r14_9.d
                                                rbx_31 = var_f0_1
                                            else
                                                if (r13_7 s> 0x12)
                                                    r13_7 = 0x12
                                                
                                                if (sx.q(r13_7) + r14_9 u> rdx_61 - 4)
                                                    r13_7 = r12_4 - r14_9.d - 4 + r15_11.d
                                                
                                                rbx_31 = var_f0_1
                                                int32_t rcx_187 = r14_9.d - r15_11.d + r13_7
                                                
                                                if (rcx_187 s> 0)
                                                    int64_t rax_369 = sx.q(rcx_187)
                                                    r15_11 += rax_369
                                                    rbx_31 += rax_369
                                                    r12_4 -= rcx_187
                                            
                                            r10_25 = var_c0_1
                                            void* rcx_188 = var_e0_1
                                            void* r9_27 = r14_9 - rcx_188
                                            int64_t* r8_47 = &r10_25[1]
                                            
                                            if (arg7 != 0 &&
                                                    &r8_47[1] + r9_27 u/ 0xff + r9_27 u> var_e8_1)
                                                goto label_140a26f62
                                            
                                            if (r9_27 u< 0xf)
                                                *r10_25 = r9_27.b << 4
                                            else
                                                void* r11_22 = r9_27 - 0xf
                                                *r10_25 = 0xf0
                                                
                                                if (r11_22 u>= 0xff)
                                                    int64_t* rdi_56 = r8_47
                                                    uint64_t count = r11_22 u/ 0xff
                                                    r8_47 += count
                                                    __builtin_memset(rdi_56, 0xff, count)
                                                    rcx_188 = var_e0_1
                                                    r11_22 = r11_22 u% 0xff
                                                
                                                *r8_47 = r11_22.b
                                                r8_47 += 1
                                                r11_21 = var_138_3
                                            
                                            int16_t* r9_28 = r9_27 + r8_47
                                            void* rcx_190 = rcx_188 - r8_47
                                            
                                            do
                                                *r8_47 = *(r8_47 + rcx_190)
                                                r8_47 = &r8_47[1]
                                            while (r8_47 u< r9_28)
                                            
                                            int64_t rdi_58 = sx.q(r13_7)
                                            *r9_28 = r14_9.w - var_c8_1.w
                                            char* r9_29 = &r9_28[1]
                                            var_c0_1 = r9_29
                                            
                                            if (arg7 != 0 &&
                                                    &r9_29[6 + (rdi_58 - 4) u/ 0xff] u> var_e8_1)
                                                goto label_140a26f62
                                            
                                            char rax_381 = *r10_25
                                            
                                            if (rdi_58 - 4 u< 0xf)
                                                void* rcx_191
                                                rcx_191.b = (rdi_58 - 4).b + rax_381
                                                *r10_25 = rcx_191.b
                                            else
                                                void* rcx_192 = rdi_58 - 0x13
                                                *r10_25 = rax_381 + 0xf
                                                
                                                if (rcx_192 u>= 0x1fe)
                                                    uint64_t i_17 = rcx_192 u/ 0x1fe
                                                    rcx_192 = rcx_192 u% 0x1fe
                                                    uint64_t i_11
                                                    
                                                    do
                                                        *r9_29 = 0xffff
                                                        r9_29 = &r9_29[2]
                                                        i_11 = i_17
                                                        i_17 -= 1
                                                    while (i_11 != 1)
                                                
                                                if (rcx_192 u>= 0xff)
                                                    rcx_192 -= 0xff
                                                    *r9_29 = 0xff
                                                    r9_29 = &r9_29[1]
                                                
                                                *r9_29 = rcx_192.b
                                                var_c0_1 = &r9_29[1]
                                            
                                            var_100_1 = r15_11
                                            var_e0_1 = rdi_58 + r14_9
                                            r14_9 = r15_11
                                            var_c8_1 = rbx_31
                                            r13_7 = r12_4
                                            var_124_1 = r12_4
                                            goto label_140a266a3
                                        
                                        if (rsi_10 u< rcx_182)
                                        label_140a266a3:
                                            rdi_35 = var_b0_1
                                            r15_11 = rsi_10
                                            var_f0_1 = rdi_35
                                            r12_4 = r11_21
                                            var_d0_1 = rsi_10
                                            var_11c_1 = r11_21
                                            continue
                                        
                                        void* rsi_16
                                        
                                        if (r15_11 u>= rcx_182)
                                            rsi_16 = var_b0_1
                                        else
                                            int32_t rcx_195 = r14_9.d - r15_11.d + r13_7
                                            int64_t rax_385 = sx.q(rcx_195)
                                            r12_4 -= rcx_195
                                            var_f0_1 += rax_385
                                            r15_11 += rax_385
                                            var_d0_1 = r15_11
                                            
                                            if (r12_4 s>= 4)
                                                rsi_16 = var_b0_1
                                            else
                                                r15_11 = rsi_10
                                                var_d0_1 = rsi_10
                                                rsi_16 = var_b0_1
                                                r12_4 = r11_21
                                                var_f0_1 = rsi_16
                                        
                                        r10_25 = var_c0_1
                                        void* rcx_196 = var_e0_1
                                        void* r9_32 = r14_9 - rcx_196
                                        void* r8_48 = &r10_25[1]
                                        int64_t rdx_94
                                        int64_t rax_386
                                        
                                        if (arg7 != 0)
                                            rdx_94:rax_386 = mulu.dp.q(-0x7f7f7f7f7f7f7f7f, r9_32)
                                        
                                        if (arg7 == 0
                                                || r8_48 + 8 + (rdx_94 u>> 7) + r9_32 u<= var_e8_1)
                                            if (r9_32 u< 0xf)
                                                *r10_25 = r9_32.b << 4
                                            else
                                                void* r11_23 = r9_32 - 0xf
                                                *r10_25 = 0xf0
                                                
                                                if (r11_23 u>= 0xff)
                                                    void* rdi_59 = r8_48
                                                    uint64_t count_1 = r11_23 u/ 0xff
                                                    r8_48 += count_1
                                                    __builtin_memset(rdi_59, 0xff, count_1)
                                                    rcx_196 = var_e0_1
                                                    r11_23 = r11_23 u% 0xff
                                                
                                                *r8_48 = r11_23.b
                                                r8_48 += 1
                                                r11_21 = var_138_3
                                            
                                            void* r9_33 = r9_32 + r8_48
                                            void* rcx_198 = rcx_196 - r8_48
                                            
                                            do
                                                *r8_48 = *(r8_48 + rcx_198)
                                                r8_48 += 8
                                            while (r8_48 u< r9_33)
                                            
                                            int64_t rdi_61 = sx.q(r13_7)
                                            *r9_33 = r14_9.w - var_c8_1.w
                                            void* r9_34 = r9_33 + 2
                                            var_c0_1 = r9_34
                                            int64_t rdx_98
                                            int64_t rax_394
                                            
                                            if (arg7 != 0)
                                                rdx_98:rax_394 =
                                                    mulu.dp.q(-0x7f7f7f7f7f7f7f7f, rdi_61 - 4)
                                            
                                            if (arg7 == 0
                                                    || r9_34 + 6 + (rdx_98 u>> 7) u<= var_e8_1)
                                                char rax_397 = *r10_25
                                                
                                                if (rdi_61 - 4 u< 0xf)
                                                    void* rcx_199
                                                    rcx_199.b = (rdi_61 - 4).b + rax_397
                                                    *r10_25 = rcx_199.b
                                                else
                                                    void* rcx_200 = rdi_61 - 0x13
                                                    *r10_25 = rax_397 + 0xf
                                                    
                                                    if (rcx_200 u>= 0x1fe)
                                                        uint64_t i_18 = rcx_200 u/ 0x1fe
                                                        rcx_200 = rcx_200 u% 0x1fe
                                                        uint64_t i_12
                                                        
                                                        do
                                                            *r9_34 = 0xffff
                                                            r9_34 += 2
                                                            i_12 = i_18
                                                            i_18 -= 1
                                                        while (i_12 != 1)
                                                    
                                                    if (rcx_200 u>= 0xff)
                                                        rcx_200 -= 0xff
                                                        *r9_34 = 0xff
                                                        r9_34 += 1
                                                    
                                                    *r9_34 = rcx_200.b
                                                    var_c0_1 = r9_34 + 1
                                                
                                                var_c8_1 = rsi_16
                                                rdi_6 = var_90_1
                                                rdx_30 = r11_21
                                                var_e0_1 = rdi_61 + r14_9
                                                r13_3 = rsi_16
                                                var_88_2 = var_f0_1
                                                var_100_1 = rdi_6
                                                var_124_1 = rdx_30
                                                var_60_1 = r15_11
                                                var_12c_2 = r12_4
                                                goto label_140a25264
                                        
                                    label_140a26f62:
                                        r11_24 = arg7
                                    
                                    rbx_1 = var_e8_1
                                    goto label_140a26c63
                                
                            label_140a26f3b:
                                var_e0_1 = rdi_4
                                r10_3 = rdi_4
                                break
                        
                        r10_25 = var_c0_1
                        void* rcx_211 = var_e0_1
                        r11_24 = arg7
                        void* r9_40 = rdi_6 - rcx_211
                        rbx_1 = var_e8_1
                        int64_t* r8_54 = &r10_25[1]
                        int64_t rdx_115
                        int64_t rax_431
                        
                        if (r11_24 != 0)
                            rdx_115:rax_431 = mulu.dp.q(-0x7f7f7f7f7f7f7f7f, r9_40)
                        
                        if (r11_24 == 0 || &r8_54[1] + (rdx_115 u>> 7) + r9_40 u<= rbx_1)
                            if (r9_40 u< 0xf)
                                *r10_25 = r9_40.b << 4
                            else
                                void* r11_27 = r9_40 - 0xf
                                *r10_25 = 0xf0
                                
                                if (r11_27 u>= 0xff)
                                    int64_t* rdi_67 = r8_54
                                    uint64_t count_4 = r11_27 u/ 0xff
                                    r8_54 += count_4
                                    __builtin_memset(rdi_67, 0xff, count_4)
                                    rdi_6 = var_100_1
                                    rcx_211 = var_e0_1
                                    r11_27 = r11_27 u% 0xff
                                
                                *r8_54 = r11_27.b
                                r8_54 += 1
                                r11_24 = arg7
                            
                            int16_t* r14_16 = r9_40 + r8_54
                            void* rcx_213 = rcx_211 - r8_54
                            
                            do
                                *r8_54 = *(r8_54 + rcx_213)
                                r8_54 = &r8_54[1]
                            while (r8_54 u< r14_16)
                            
                            *r14_16 = rdi_6.w - r13_3.w
                            r14 = &r14_16[1]
                            var_c0_1 = r14
                            int64_t rdx_119
                            int64_t rax_439
                            
                            if (r11_24 != 0)
                                rdx_119:rax_439 = mulu.dp.q(-0x7f7f7f7f7f7f7f7f, rsi_4 - 4)
                            
                            if (r11_24 == 0 || &r14[6 + (rdx_119 u>> 7)] u<= rbx_1)
                                char rax_442 = *r10_25
                                
                                if (rsi_4 - 4 u< 0xf)
                                    int64_t rcx_214
                                    rcx_214.b = (rsi_4 - 4).b + rax_442
                                    *r10_25 = rcx_214.b
                                else
                                    int64_t rcx_215 = rsi_4 - 0x13
                                    *r10_25 = rax_442 + 0xf
                                    
                                    if (rcx_215 u>= 0x1fe)
                                        uint64_t i_21 = rcx_215 u/ 0x1fe
                                        rcx_215 = rcx_215 u% 0x1fe
                                        uint64_t i_13
                                        
                                        do
                                            *r14 = 0xffff
                                            r14 = &r14[2]
                                            i_13 = i_21
                                            i_21 -= 1
                                        while (i_13 != 1)
                                    
                                    if (rcx_215 u>= 0xff)
                                        rcx_215 -= 0xff
                                        *r14 = 0xff
                                        r14 = &r14[1]
                                    
                                    *r14 = rcx_215.b
                                    r14 = &r14[1]
                                    var_c0_1 = r14
                                
                                rdi_4 = rdi_6 + rsi_4
                                goto label_140a26f3b
                        
                    label_140a26c63:
                        r9_3 = 0
                        
                        if (r11_24 != 2)
                            goto label_140a270c7_1
                        
                        r15_1 = var_80_1
                        r14 = r10_25
                        r10_3 = var_e0_1
                        goto label_140a26f76
                else
                    r14 = var_c0_1
                    rdi_4 = rdi_6 + 1
                    r10_3 = var_e0_1
                
                r15_1 = var_80_1
                r9_3 = 0
                var_100_1 = rdi_4
                
                if (rdi_4 u> r15_1 - 0xc)
                    break
                
                r11 = arg1
            
            rbx_1 = var_e8_1
        label_140a26f76:
            r13 = arg4
            r12 = arg2
            r8_3 = arg7
        
        void* r15_21 = r15_1 - r10_3
        void* rdi_68 = rbx_1 + 5
        
        if (r8_3 != 2)
            rdi_68 = rbx_1
        
        if (r8_3 == 0)
            goto label_140a2700b
        
        if (&r14[1] + (r15_21 + 0xf0) u/ 0xff + r15_21 u<= rdi_68)
            goto label_140a2700b
        
        if (r8_3 != 1)
            r15_21 = rdi_68 - r14 - 1 - (rdi_68 - r14 + 0xef) u/ 0xff
        label_140a2700b:
            
            if (r15_21 u< 0xf)
                *r14 = r15_21.b << 4
            else
                *r14 = 0xf0
                void* r8_55 = r15_21 - 0xf
                r14 = &r14[1]
                
                if (r8_55 u>= 0xff)
                    char* rdi_69 = r14
                    uint64_t count_5 = r8_55 u/ 0xff
                    r14 = &r14[count_5]
                    __builtin_memset(rdi_69, 0xff, count_5)
                    r8_55 = r8_55 u% 0xff
                
                *r14 = r8_55.b
            
            memcpy(&r14[1], r10_3, r15_21.d)
            *r13 = r15_21.d + r10_3.d - r12.d
            r9_3 = r15_21.d + (&r14[1]).d - arg3.d
            goto label_140a270bb
        
    label_140a270c7_1:
        *(arg1 + 0x40027) = 1

return zx.q(r9_3)
