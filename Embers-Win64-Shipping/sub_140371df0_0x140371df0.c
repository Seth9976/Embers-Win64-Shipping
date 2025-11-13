// 函数: sub_140371df0
// 地址: 0x140371df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_15
void* i_19 = i_15
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rbx = -2

if (arg1 != 0)
    int64_t* i_27 = arg1
    int32_t* r12_1 = arg1[5]
    
    if (r12_1 != 0)
        char* r11_1 = i_27[2]
        
        if (r11_1 != 0)
            char* rdi_1 = *i_27
            
            if (rdi_1 != 0 || i_27[1].d == 0)
                int32_t rcx = *r12_1
                
                if (rcx == 0xb)
                    *r12_1 = 0xc
                    rdi_1 = *i_27
                    r11_1 = i_27[2]
                    rcx = 0xc
                
                uint32_t i_12 = i_27[1].d
                int32_t i_26 = i_27[3].d
                uint64_t i_23 = zx.q(r12_1[0x10])
                int32_t j = r12_1[0x11]
                int32_t var_b8_1 = 0
                uint32_t i_4 = i_12
                int32_t i_30 = i_26
                int64_t* i_29 = i_27
                
                if (rcx u<= 0x1e)
                    while (true)
                    label_140371f00:
                        int32_t rax_27 = -3
                        int32_t rbp_1 = 1
                        int32_t i_28
                        char* var_a8_1
                        int16_t var_4c
                        void* rax_12
                        void* rax_16
                        int32_t rax_26
                        char const* const rax_40
                        char const* const rax_48
                        void* rcx_3
                        int32_t j_2
                        int32_t i_11
                        void* rdx_1
                        int32_t rdx_9
                        int32_t rdx_10
                        void* rbp_2
                        int32_t i_2
                        
                        switch (jump_table_140373f78[zx.q(rcx)])
                            case 0xffffdfa4
                                int32_t rax_10 = r12_1[2]
                                
                                if (rax_10 == 0)
                                    *r12_1 = 0xc
                                else
                                    if (j u>= 0x10)
                                        goto label_1403732cb
                                    
                                    if (i_4 == 0)
                                        goto label_140373dd7
                                    
                                    rbp_2 = &rdi_1[1]
                                    i_15 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                    i_23 = i_15
                                    j_2 = j + 8
                                    
                                    if (j_2 u< 0x10)
                                        if (i_4 == 1)
                                        label_140373da3:
                                            rdi_1 = rbp_2
                                            goto label_140373da6
                                        
                                        rdx_1 = &rdi_1[2]
                                        i_23 = zx.q(i_15.d + (zx.d(rdi_1[1]) << j_2.b))
                                        j_2 = j + 0x10
                                        
                                        if (j u< 0xfffffff0)
                                            rdi_1 = rdx_1
                                            i_4 -= 2
                                            goto label_1403732c8
                                        
                                        if (i_4 == 2)
                                            goto label_140373d4c
                                        
                                        uint32_t rdx_3 = zx.d(rdi_1[2]) << j_2.b
                                        i_4 -= 3
                                        rdi_1 = &rdi_1[3]
                                        j += 0x18
                                        i_23 = zx.q(rdx_3 + i_23.d)
                                        
                                        if ((rax_10.b & 2) != 0 && i_23.d == 0x8b1f)
                                            goto label_1403732d7
                                        
                                        goto label_140373337
                                    
                                    rdi_1 = rbp_2
                                    i_4 -= 1
                                label_1403732c8:
                                    j = j_2
                                label_1403732cb:
                                    
                                    if ((rax_10.b & 2) != 0 && i_23.d == 0x8b1f)
                                    label_1403732d7:
                                        i_23 = 0
                                        int32_t rax_98 = sub_140374810(0, nullptr, 0)
                                        r12_1[6] = rax_98
                                        var_4c = 0x8b1f
                                        r12_1[6] = sub_140374810(rax_98, &var_4c, 2)
                                        *r12_1 = 1
                                        j = 0
                                        rcx = *r12_1
                                        
                                        if (rcx u> 0x1e)
                                            break
                                        
                                        continue
                                    
                                label_140373337:
                                    r12_1[4] = 0
                                    void* rcx_93 = *(r12_1 + 0x20)
                                    
                                    if (rcx_93 != 0)
                                        *(rcx_93 + 0x40) = 0xffffffff
                                        rax_10 = r12_1[2]
                                    
                                    uint64_t rcx_96
                                    uint32_t rdx_68
                                    
                                    if ((rax_10.b & 1) != 0)
                                        rcx_96 = zx.q((i_23.d u>> 8) + zx.d((i_23.d << 8).w))
                                        uint32_t rax_104 = ((rcx_96 * 0x8421085) u>> 0x20).d
                                        rdx_68 = (((rcx_96.d - rax_104) u>> 1) + rax_104) u>> 4
                                    
                                    if ((rax_10.b & 1) == 0 || rdx_68 * -0x1f != neg.d(rcx_96.d))
                                        rax_40 = "incorrect header check"
                                        goto label_140373bf3
                                    
                                    if ((i_23.d & 0xf) != 8)
                                        goto label_140373a51
                                    
                                    uint32_t i_34 = i_23.d u>> 4
                                    int32_t rcx_139 = i_34 & 0xf
                                    int32_t rbp_58 = r12_1[0xa]
                                    
                                    if (rbp_58 == 0)
                                        r12_1[0xa] = rcx_139 + 8
                                    else if (rcx_139 + 8 u> rbp_58)
                                        j -= 4
                                        i_27[4] = "invalid window size"
                                        *r12_1 = 0x1d
                                        i_23 = zx.q(i_34)
                                        rcx = *r12_1
                                        
                                        if (rcx u> 0x1e)
                                            break
                                        
                                        continue
                                    
                                    r12_1[5] = 0x100 << rcx_139.b
                                    j = 0
                                    int32_t rax_148 = sub_140374410(0, nullptr, 0)
                                    r12_1[6] = rax_148
                                    *(i_27 + 0x4c) = rax_148
                                    int32_t rax_149
                                    rax_149.b = (i_23.d & 0x2000) == 0
                                    *r12_1 = rax_149 * 2 + 9
                                    i_23 = 0
                                    rcx = *r12_1
                                    
                                    if (rcx u> 0x1e)
                                        break
                                    
                                    continue
                            case 0xffffe03b
                                if (j u>= 0x10)
                                    goto label_140372bc8
                                
                                if (i_4 == 0)
                                    goto label_140373dd7
                                
                                rdx_1 = &rdi_1[1]
                                i_23 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                j_2 = j + 8
                                
                                if (j_2 u< 0x10)
                                    if (i_4 == 1)
                                    label_140373d4c:
                                        rdi_1 = rdx_1
                                    label_140373da6:
                                        i_4 = 0
                                        j = j_2
                                        goto label_140373dda
                                    
                                    rax_12 = &rdi_1[2]
                                    i_23 = zx.q(i_23.d + (zx.d(rdi_1[1]) << j_2.b))
                                    j_2 = j + 0x10
                                    
                                    if (j u< 0xfffffff0)
                                        rdi_1 = rax_12
                                        i_4 -= 2
                                        goto label_140372bc5
                                    
                                    if (i_4 == 2)
                                    label_140373f46:
                                        rdi_1 = rax_12
                                        goto label_140373da6
                                    
                                    uint32_t rax_14 = zx.d(rdi_1[2]) << j_2.b
                                    i_4 -= 3
                                    rdi_1 = &rdi_1[3]
                                    j += 0x18
                                    i_23 = zx.q(rax_14 + i_23.d)
                                    goto label_140372bc8
                                
                                rdi_1 = rdx_1
                                i_4 -= 1
                            label_140372bc5:
                                j = j_2
                            label_140372bc8:
                                r12_1[4] = i_23.d
                                
                                if (i_23.b != 8)
                                label_140373a51:
                                    rax_40 = "unknown compression method"
                                    goto label_140373bf3
                                
                                if ((i_23.d & 0xe000) != 0)
                                    rax_40 = "unknown header flags set"
                                    goto label_140373bf3
                                
                                int32_t* rax_63 = *(r12_1 + 0x20)
                                int32_t rcx_57 = i_23.d
                                
                                if (rax_63 != 0)
                                    *rax_63 = i_23.d u>> 8 & 1
                                    rcx_57 = r12_1[4]
                                
                                if ((rcx_57 & 0x200) != 0)
                                    var_4c.b = i_23.b
                                    var_4c:1.b = i_23:1.b
                                    r12_1[6] = sub_140374810(r12_1[6], &var_4c, 2)
                                
                                *r12_1 = 2
                                j = 0
                                i_23 = 0
                                goto label_140372c51
                            case 0xffffe0b4
                                if (j u<= 0x1f)
                                label_140372c51:
                                    
                                    if (i_4 == 0)
                                        goto label_140373dd7
                                    
                                    uint32_t i_9 = i_4 - 1
                                    rdx_1 = &rdi_1[1]
                                    i_23 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                    j_2 = j + 8
                                    
                                    if (j_2 u>= 0x20)
                                    label_140372cfc:
                                        rdi_1 = rdx_1
                                        i_4 = i_9
                                    else
                                        if (i_9 == 0)
                                            goto label_140373d4c
                                        
                                        i_9 = i_4 - 2
                                        rdx_1 = &rdi_1[2]
                                        i_23 = zx.q(i_23.d + (zx.d(rdi_1[1]) << j_2.b))
                                        j_2 = j + 0x10
                                        
                                        if (j_2 u> 0x1f)
                                            goto label_140372cfc
                                        
                                        if (i_9 == 0)
                                            goto label_140373d4c
                                        
                                        i_9 = i_4 - 3
                                        rdx_1 = &rdi_1[3]
                                        i_23 = zx.q(i_23.d + (zx.d(rdi_1[2]) << j_2.b))
                                        j_2 = j + 0x18
                                        
                                        if (j_2 u> 0x1f)
                                            goto label_140372cfc
                                        
                                        if (i_9 == 0)
                                            goto label_140373d4c
                                        
                                        rax_16 = &rdi_1[4]
                                        i_23 = zx.q(i_23.d + (zx.d(rdi_1[3]) << j_2.b))
                                        int32_t j_6 = j
                                        j += 0x20
                                        
                                        if (j_6 u< 0xffffffe0)
                                            rdi_1 = rax_16
                                            i_4 -= 4
                                        else
                                            if (i_4 == 4)
                                                goto label_140373dd4
                                            
                                            i_4 -= 5
                                            uint32_t rax_65 = zx.d(rdi_1[4])
                                            rdi_1 = &rdi_1[5]
                                            i_23 = zx.q((rax_65 << j.b) + i_23.d)
                                
                                void* rax_68 = *(r12_1 + 0x20)
                                
                                if (rax_68 != 0)
                                    *(rax_68 + 4) = i_23.d
                                
                                if ((*(r12_1 + 0x11) & 2) != 0)
                                    var_4c.b = i_23.b
                                    var_4c:1.b = i_23:1.b
                                    uint8_t var_4a_1 = (i_23.d u>> 0x10).b
                                    uint8_t var_49_1 = (i_23.d u>> 0x18).b
                                    r12_1[6] = sub_140374810(r12_1[6], &var_4c, 4)
                                
                                *r12_1 = 3
                                j = 0
                                i_23 = 0
                                goto label_140372d71
                            case 0xffffe0c3
                                if (j u<= 0xf)
                                label_140372d71:
                                    
                                    if (i_4 == 0)
                                        goto label_140373dd7
                                    
                                    rdx_1 = &rdi_1[1]
                                    i_23 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                    j_2 = j + 8
                                    
                                    if (j_2 u>= 0x10)
                                        rdi_1 = rdx_1
                                        i_4 -= 1
                                    else
                                        if (i_4 == 1)
                                            goto label_140373d4c
                                        
                                        rax_16 = &rdi_1[2]
                                        i_23 = zx.q(i_23.d + (zx.d(rdi_1[1]) << j_2.b))
                                        int32_t j_4 = j
                                        j += 0x10
                                        
                                        if (j_4 u< 0xfffffff0)
                                            rdi_1 = rax_16
                                            i_4 -= 2
                                        else
                                            if (i_4 == 2)
                                            label_140373dd4:
                                                rdi_1 = rax_16
                                            label_140373dd7:
                                                i_4 = 0
                                            label_140373dda:
                                                rax_27 = var_b8_1
                                            label_140373dde:
                                                rbp_1 = rax_27
                                            label_140373de0:
                                                i_27[2] = r11_1
                                                i_27[3].d = i_26
                                                *i_27 = rdi_1
                                                i_27[1].d = i_4
                                                r12_1[0x10] = i_23.d
                                                r12_1[0x11] = j
                                                int32_t i_43 = i_27[3].d
                                                int32_t i_42
                                                
                                                if (r12_1[0xb] == 0)
                                                    i_42 = i_30
                                                    
                                                    if (i_30 == i_43)
                                                        goto label_140373e5b
                                                    
                                                    int32_t rcx_144 = *r12_1
                                                    
                                                    if (rcx_144 s<= 0x1c
                                                            && (arg2 != 4 || rcx_144 s<= 0x19))
                                                        goto label_140373e1f
                                                    
                                                    i_42 = i_43
                                                    goto label_140373e5b
                                                
                                            label_140373e1f:
                                                
                                                if (sub_140374000(i_27, i_27[2], i_30 - i_43) == 0)
                                                    i_42 = i_27[3].d
                                                label_140373e5b:
                                                    int32_t rdi_3 = i_12 - i_27[1].d
                                                    *(i_27 + 0xc) += rdi_3
                                                    int32_t rbx_57 = i_30 - i_42
                                                    *(i_27 + 0x1c) += rbx_57
                                                    r12_1[7] += rbx_57
                                                    
                                                    if (rbx_57 != 0 && r12_1[2] != 0)
                                                        char* rdx_110 = i_27[2] - zx.q(rbx_57)
                                                        int32_t rcx_145 = r12_1[6]
                                                        int32_t rax_155
                                                        
                                                        if (r12_1[4] == 0)
                                                            rax_155 =
                                                                sub_140374410(rcx_145, rdx_110, rbx_57)
                                                        else
                                                            rax_155 =
                                                                sub_140374810(rcx_145, rdx_110, rbx_57)
                                                        
                                                        r12_1[6] = rax_155
                                                        *(i_27 + 0x4c) = rax_155
                                                    
                                                    int32_t rax_156
                                                    rax_156.b = r12_1[1] != 0
                                                    int32_t rcx_146 = *r12_1
                                                    int32_t rdx_111
                                                    rdx_111.b = rcx_146 == 0xb
                                                    int32_t rax_159
                                                    rax_159.b = rcx_146 == 0xe
                                                    int32_t rcx_147 = 0x100
                                                    
                                                    if (rcx_146 != 0x13)
                                                        rcx_147 = rax_159 << 8
                                                    
                                                    rbx = rbp_1
                                                    
                                                    if ((rbx_57 | rdi_3) == 0)
                                                        rbx = -5
                                                    
                                                    if (arg2 == 4)
                                                        rbx = -5
                                                    
                                                    i_27[9].d = rcx_147 + (rdx_111 << 7)
                                                        + (rax_156 << 6) + r12_1[0x11]
                                                    
                                                    if (rbp_1 != 0)
                                                        rbx = rbp_1
                                                else
                                                    *r12_1 = 0x1e
                                                    rbx = -4
                                                
                                                goto label_140373f0b
                                            
                                            i_4 -= 3
                                            uint32_t rax_73 = zx.d(rdi_1[2])
                                            rdi_1 = &rdi_1[3]
                                            i_23 = zx.q((rax_73 << j.b) + i_23.d)
                                
                                void* rax_76 = *(r12_1 + 0x20)
                                
                                if (rax_76 != 0)
                                    *(rax_76 + 8) = zx.d(i_23.b)
                                    *(*(r12_1 + 0x20) + 0xc) = i_23.d u>> 8
                                
                                if ((*(r12_1 + 0x11) & 2) != 0)
                                    var_4c.b = i_23.b
                                    var_4c:1.b = i_23:1.b
                                    r12_1[6] = sub_140374810(r12_1[6], &var_4c, 2)
                                
                                *r12_1 = 4
                                i_23 = 0
                                j = 0
                                goto label_140372e49
                            case 0xffffe0d2
                                if (j u>= 0x20)
                                    goto label_1403723b0
                                
                                if (i_4 == 0)
                                    goto label_140373dd7
                                
                                uint32_t i_5 = i_4 - 1
                                rdx_1 = &rdi_1[1]
                                i_23 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                j_2 = j + 8
                                
                                if (j_2 u>= 0x20)
                                label_1403723aa:
                                    rdi_1 = rdx_1
                                    i_4 = i_5
                                label_1403723b0:
                                    int32_t temp0_1 = _bswap(i_23.d)
                                    r12_1[6] = temp0_1
                                    *(i_27 + 0x4c) = temp0_1
                                    *r12_1 = 0xa
                                    i_23 = 0
                                    j = 0
                                label_1403723c8:
                                    
                                    if (r12_1[3] == 0)
                                        i_27[2] = r11_1
                                        i_27[3].d = i_26
                                        *i_27 = rdi_1
                                        i_27[1].d = i_4
                                        r12_1[0x10] = i_23.d
                                        r12_1[0x11] = j
                                        rbx = 2
                                        goto label_140373f0b
                                    
                                    int32_t rax_31 = sub_140374410(0, nullptr, 0)
                                    r12_1[6] = rax_31
                                    *(i_27 + 0x4c) = rax_31
                                    *r12_1 = 0xb
                                label_1403723fd:
                                    
                                    if (arg2 - 5 u>= 2)
                                        goto label_140372408
                                    
                                label_140373d2f:
                                    rbp_1 = var_b8_1
                                    goto label_140373de0
                                
                                if (i_5 == 0)
                                    goto label_140373d4c
                                
                                i_5 = i_4 - 2
                                rdx_1 = &rdi_1[2]
                                i_23 = zx.q(i_23.d + (zx.d(rdi_1[1]) << j_2.b))
                                j_2 = j + 0x10
                                
                                if (j_2 u> 0x1f)
                                    goto label_1403723aa
                                
                                if (i_5 == 0)
                                    goto label_140373d4c
                                
                                i_5 = i_4 - 3
                                rdx_1 = &rdi_1[3]
                                i_23 = zx.q(i_23.d + (zx.d(rdi_1[2]) << j_2.b))
                                j_2 = j + 0x18
                                
                                if (j_2 u> 0x1f)
                                    goto label_1403723aa
                                
                                if (i_5 == 0)
                                    goto label_140373d4c
                                
                                rax_16 = &rdi_1[4]
                                i_23 = zx.q(i_23.d + (zx.d(rdi_1[3]) << j_2.b))
                                int32_t j_7 = j
                                j += 0x20
                                
                                if (j_7 u< 0xffffffe0)
                                    rdi_1 = rax_16
                                    i_4 -= 4
                                    goto label_1403723b0
                                
                                if (i_4 == 4)
                                    goto label_140373dd4
                                
                                i_4 -= 5
                                uint32_t rax_17 = zx.d(rdi_1[4])
                                rdi_1 = &rdi_1[5]
                                i_23 = zx.q((rax_17 << j.b) + i_23.d)
                                goto label_1403723b0
                            case 0xffffe192
                                int32_t rcx_12 = j & 7
                                i_23 = zx.q(i_23.d u>> rcx_12.b)
                                j -= rcx_12
                                
                                if (j u> 0x1f)
                                    goto label_1403724e3
                                
                                if (i_4 == 0)
                                    goto label_140373dd7
                                
                                uint32_t i_6 = i_4 - 1
                                rdx_1 = &rdi_1[1]
                                i_23 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                j_2 = j + 8
                                
                                if (j_2 u>= 0x20)
                                label_1403724da:
                                    rdi_1 = rdx_1
                                    i_4 = i_6
                                label_1403724e0:
                                    j = j_2
                                label_1403724e3:
                                    uint32_t rax_39 = zx.d(i_23.w)
                                    
                                    if (rax_39 == not.d(i_23.d) u>> 0x10)
                                        i_23 = 0
                                        r12_1[0x12] = rax_39
                                        *r12_1 = 0xe
                                        j = 0
                                        
                                        if (arg2 != 6)
                                            goto label_140372515
                                        
                                        j = 0
                                        rbp_1 = var_b8_1
                                        goto label_140373de0
                                    
                                    rax_40 = "invalid stored block lengths"
                                label_140373bf3:
                                    i_27[4] = rax_40
                                    *r12_1 = 0x1d
                                    rcx = *r12_1
                                    
                                    if (rcx u> 0x1e)
                                        break
                                    
                                    continue
                                
                                if (i_6 == 0)
                                    goto label_140373d4c
                                
                                i_6 = i_4 - 2
                                rdx_1 = &rdi_1[2]
                                i_23 = zx.q(i_23.d + (zx.d(rdi_1[1]) << j_2.b))
                                j_2 = j + 0x10
                                
                                if (j_2 u> 0x1f)
                                    goto label_1403724da
                                
                                if (i_6 == 0)
                                    goto label_140373d4c
                                
                                i_6 = i_4 - 3
                                rdx_1 = &rdi_1[3]
                                i_23 = zx.q(i_23.d + (zx.d(rdi_1[2]) << j_2.b))
                                j_2 = j + 0x18
                                
                                if (j_2 u> 0x1f)
                                    goto label_1403724da
                                
                                if (i_6 == 0)
                                    goto label_140373d4c
                                
                                rax_12 = &rdi_1[4]
                                i_23 = zx.q(i_23.d + (zx.d(rdi_1[3]) << j_2.b))
                                j_2 = j + 0x20
                                
                                if (j u< 0xffffffe0)
                                    rdi_1 = rax_12
                                    i_4 -= 4
                                    goto label_1403724e0
                                
                                if (i_4 == 4)
                                    goto label_140373f46
                                
                                uint32_t rax_21 = zx.d(rdi_1[4]) << j_2.b
                                i_4 -= 5
                                rdi_1 = &rdi_1[5]
                                j += 0x28
                                i_23 = zx.q(rax_21 + i_23.d)
                                goto label_1403724e3
                            case 0xffffe260
                                if (j u>= 0xe)
                                    goto label_1403725b8
                                
                                if (i_4 == 0)
                                    goto label_140373dd7
                                
                                uint32_t i_7 = i_4 - 1
                                rdx_1 = &rdi_1[1]
                                i_23 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                j_2 = j + 8
                                
                                if (j_2 u< 0xe)
                                    if (i_7 == 0)
                                        goto label_140373d4c
                                    
                                    i_7 = i_4 - 2
                                    rdx_1 = &rdi_1[2]
                                    i_23 = zx.q(i_23.d + (zx.d(rdi_1[1]) << j_2.b))
                                    j_2 = j + 0x10
                                    
                                    if (j_2 u> 0xd)
                                        goto label_1403725aa
                                    
                                    if (i_7 == 0)
                                        goto label_140373d4c
                                    
                                    uint32_t rax_24 = zx.d(rdi_1[2]) << j_2.b
                                    i_4 -= 3
                                    rdi_1 = &rdi_1[3]
                                    j += 0x18
                                    i_23 = zx.q(rax_24 + i_23.d)
                                    goto label_1403725b8
                                
                            label_1403725aa:
                                rdi_1 = rdx_1
                                i_4 = i_7
                                j = j_2
                            label_1403725b8:
                                int32_t rdx_15 = (i_23.d & 0x1f) + 0x101
                                r12_1[0x1d] = rdx_15
                                int32_t rcx_29 = i_23.d u>> 5 & 0x1f
                                r12_1[0x1e] = rcx_29 + 1
                                rax_26 = (i_23.d u>> 0xa & 0xf) + 4
                                r12_1[0x1c] = rax_26
                                i_23 = zx.q(i_23.d u>> 0xe)
                                j -= 0xe
                                
                                if (rdx_15 u> 0x11e || rcx_29 u>= 0x1e)
                                    rax_40 = "too many length or distance symbols"
                                    goto label_140373bf3
                                
                                r12_1[0x1f] = 0
                                *r12_1 = 0x11
                                i_11 = 0
                            label_140372612:
                                int32_t i_21 = i_11
                                
                                while (true)
                                    if (j u<= 2)
                                        if (i_4 == 0)
                                            break
                                        
                                        i_23 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                        rdi_1 = &rdi_1[1]
                                        i_4 -= 1
                                        j += 8
                                    
                                    i_11 = i_21 + 1
                                    r12_1[0x1f] = i_11
                                    *(r12_1 + (zx.q(*(&data_1435f8ba0 + (zx.q(i_21) << 1))) << 1)
                                        + 0x88) = i_23.w & 7
                                    i_23 = zx.q(i_23.d u>> 3)
                                    j -= 3
                                    i_21 = i_11
                                    
                                    if (i_11 u>= rax_26)
                                        goto label_14037267e
                                
                                goto label_140373d0d
                            case 0xffffe2da
                                rax_26 = r12_1[0x1c]
                                i_11 = r12_1[0x1f]
                                
                                if (i_11 u< rax_26)
                                    goto label_140372612
                                
                            label_14037267e:
                                i_28 = i_26
                                var_a8_1 = r11_1
                                
                                if (i_11 u<= 0x12)
                                    int32_t rdx_18 = 0x12 - i_11
                                    int32_t rbp_33 = (3 - i_11) & 3
                                    int32_t i_1
                                    
                                    if (rbp_33 == 0)
                                        i_1 = i_11
                                    else
                                        int32_t i_13 = neg.d(rbp_33)
                                        int32_t i
                                        
                                        do
                                            i_1 = i_11 + 1
                                            r12_1[0x1f] = i_1
                                            *(r12_1 + (zx.q(*(&data_1435f8ba0 + (zx.q(i_11) << 1)))
                                                << 1) + 0x88) = 0
                                            i_11 = i_1
                                            i = i_13
                                            i_13 += 1
                                        while (i != 0xffffffff)
                                    
                                    if (rdx_18 u>= 3)
                                        do
                                            uint64_t rcx_34 = zx.q(i_1 + 1)
                                            r12_1[0x1f] = rcx_34.d
                                            *(r12_1 + (zx.q(*(&data_1435f8ba0 + (zx.q(i_1) << 1)))
                                                << 1) + 0x88) = 0
                                            uint64_t rdx_21 = zx.q(i_1 + 2)
                                            r12_1[0x1f] = rdx_21.d
                                            *(r12_1
                                                + (zx.q(*(&data_1435f8ba0 + (rcx_34 << 1))) << 1)
                                                + 0x88) = 0
                                            uint64_t rcx_36 = zx.q(i_1 + 3)
                                            r12_1[0x1f] = rcx_36.d
                                            *(r12_1
                                                + (zx.q(*(&data_1435f8ba0 + (rdx_21 << 1))) << 1)
                                                + 0x88) = 0
                                            i_1 += 4
                                            r12_1[0x1f] = i_1
                                            *(r12_1
                                                + (zx.q(*(&data_1435f8ba0 + (rcx_36 << 1))) << 1)
                                                + 0x88) = 0
                                        while (i_1 u< 0x13)
                                
                                *(r12_1 + 0x80) = &r12_1[0x152]
                                *(r12_1 + 0x58) = &r12_1[0x152]
                                r12_1[0x1a] = 7
                                i_2 = 0
                                int32_t rax_47
                                rax_47, rcx_3 = sub_140376c40(0, &r12_1[0x22], 0x13, r12_1 + 0x80, 
                                    &r12_1[0x1a], &r12_1[0xc2])
                                
                                if (rax_47 == 0)
                                    r12_1[0x1f] = 0
                                    *r12_1 = 0x12
                                    var_b8_1 = 0
                                    r11_1 = var_a8_1
                                    i_26 = i_28
                                    goto label_140372826
                                
                                var_b8_1 = rax_47
                                rax_48 = "invalid code lengths set"
                            label_140372b8c:
                                i_27[4] = rax_48
                                *r12_1 = 0x1d
                                r11_1 = var_a8_1
                                i_26 = i_28
                                rcx = *r12_1
                                
                                if (rcx u> 0x1e)
                                    break
                                
                                continue
                            case 0xffffe2f1
                                i_2 = r12_1[0x1f]
                            label_140372826:
                                var_a8_1 = r11_1
                                int32_t r8_3 = r12_1[0x1d]
                                i_15 = zx.q(r12_1[0x1e] + r8_3)
                                char const* const rax_58
                                
                                if (i_2 u< i_15.d)
                                    int64_t r11_3 = *(r12_1 + 0x58)
                                    rcx_3.b = r12_1[0x1a].b
                                    int32_t r15_3 = not.d(0xffffffff << rcx_3.b)
                                    
                                    do
                                        uint64_t rcx_39 = zx.q(i_23.d) & zx.q(r15_3)
                                        uint32_t rax_49 = zx.d(*(r11_3 + (rcx_39 << 2) + 1))
                                        
                                        if (j u< rax_49)
                                            uint64_t rcx_42
                                            
                                            do
                                                if (i_4 == 0)
                                                label_140373d19:
                                                    i_4 = 0
                                                    rbp_1 = var_b8_1
                                                    i_27 = i_29
                                                    r11_1 = var_a8_1
                                                    goto label_140373de0
                                                
                                                i_4 -= 1
                                                uint32_t rax_50 = zx.d(*rdi_1)
                                                rdi_1 = &rdi_1[1]
                                                i_23 = zx.q(i_23.d + (rax_50 << j.b))
                                                j += 8
                                                rcx_42 = zx.q(i_23.d) & zx.q(r15_3)
                                                rax_49 = zx.d(*(r11_3 + (rcx_42 << 2) + 1))
                                            while (j u< rax_49)
                                            
                                            rcx_39 = zx.q(rcx_42.d)
                                        
                                        int16_t rdx_24 = *(r11_3 + (rcx_39 << 2) + 2)
                                        uint64_t i_39
                                        
                                        if (rdx_24 u> 0xf)
                                            uint64_t var_a0
                                            var_a0.d = i_15.d
                                            int16_t rax_54
                                            int32_t j_3
                                            
                                            if (rdx_24 == 0x10)
                                                for (; j u< rax_49 + 2; j += 8)
                                                    if (i_4 == 0)
                                                        goto label_140373d19
                                                    
                                                    i_4 -= 1
                                                    uint32_t rdx_29 = zx.d(*rdi_1) << j.b
                                                    rdi_1 = &rdi_1[1]
                                                    i_23 = zx.q(i_23.d + rdx_29)
                                                
                                                i_23 = zx.q(i_23.d u>> rax_49.b)
                                                j -= rax_49
                                                
                                                if (i_2 == 0)
                                                    rax_58 = "invalid bit length repeat"
                                                    goto label_140372b0a
                                                
                                                i_15 = zx.q(i_26)
                                                rax_54 = *(r12_1 + (zx.q(i_2 - 1) << 1) + 0x88)
                                                j_3 = (i_23.d & 3) + 3
                                                i_23 = zx.q(i_23.d u>> 2)
                                                j -= 2
                                            else
                                                int32_t rdx_27
                                                
                                                if (rdx_24 != 0x11)
                                                    for (; j u< rax_49 + 7; j += 8)
                                                        if (i_4 == 0)
                                                            goto label_140373d19
                                                        
                                                        i_4 -= 1
                                                        uint32_t rdx_31 = zx.d(*rdi_1) << j.b
                                                        rdi_1 = &rdi_1[1]
                                                        i_23 = zx.q(i_23.d + rdx_31)
                                                    
                                                    i_15 = zx.q(i_26)
                                                    uint32_t rbx_16 = i_23.d u>> rax_49.b
                                                    j_3 = (rbx_16 & 0x7f) + 0xb
                                                    i_23 = zx.q(rbx_16 u>> 7)
                                                    rdx_27 = -7
                                                else
                                                    for (; j u< rax_49 + 3; j += 8)
                                                        if (i_4 == 0)
                                                            goto label_140373d19
                                                        
                                                        i_4 -= 1
                                                        uint32_t rdx_26 = zx.d(*rdi_1) << j.b
                                                        rdi_1 = &rdi_1[1]
                                                        i_23 = zx.q(i_23.d + rdx_26)
                                                    
                                                    i_15 = zx.q(i_26)
                                                    uint32_t rbx_15 = i_23.d u>> rax_49.b
                                                    j_3 = (rbx_15 & 7) + 3
                                                    i_23 = zx.q(rbx_15 u>> 3)
                                                    rdx_27 = -3
                                                
                                                j += rdx_27 - rax_49
                                                rax_54 = 0
                                            
                                            if (j_3 + i_2 u> var_a0.d)
                                                i_27 = i_29
                                                i_27[4] = "invalid bit length repeat"
                                                *r12_1 = 0x1d
                                                r11_1 = var_a8_1
                                                i_26 = i_15.d
                                                rcx = *r12_1
                                                
                                                if (rcx u<= 0x1e)
                                                    goto label_140371f00
                                                
                                                goto label_140373d42
                                            
                                            i_39 = i_23
                                            int32_t r10_1 = j_3 - 1
                                            int32_t rbx_18 = j_3 & 3
                                            
                                            if (rbx_18 != 0)
                                                int32_t i_18 = i_15.d
                                                int32_t rdx_34 = 0
                                                
                                                do
                                                    uint64_t i_16 = zx.q(i_2)
                                                    i_2 += 1
                                                    r12_1[0x1f] = i_2
                                                    *(r12_1 + (i_16 << 1) + 0x88) = rax_54
                                                    rdx_34 += 1
                                                while (rbx_18 != rdx_34)
                                                
                                                j_3 -= rdx_34
                                                i_15 = zx.q(i_18)
                                            
                                            if (r10_1 u>= 3)
                                                int32_t j_1
                                                
                                                do
                                                    uint64_t rdx_35 = zx.q(i_2 + 1)
                                                    r12_1[0x1f] = rdx_35.d
                                                    *(r12_1 + (zx.q(i_2) << 1) + 0x88) = rax_54
                                                    uint64_t rbx_20 = zx.q(i_2 + 2)
                                                    r12_1[0x1f] = rbx_20.d
                                                    *(r12_1 + (rdx_35 << 1) + 0x88) = rax_54
                                                    uint64_t rdx_36 = zx.q(i_2 + 3)
                                                    r12_1[0x1f] = rdx_36.d
                                                    *(r12_1 + (rbx_20 << 1) + 0x88) = rax_54
                                                    i_2 += 4
                                                    r12_1[0x1f] = i_2
                                                    *(r12_1 + (rdx_36 << 1) + 0x88) = rax_54
                                                    j_1 = j_3
                                                    j_3 -= 4
                                                while (j_1 != 4)
                                            
                                            i_26 = i_15.d
                                            i_15 = zx.q(var_a0.d)
                                        else
                                            i_39 = zx.q(i_23.d u>> rax_49.b)
                                            j -= rax_49
                                            r12_1[0x1f] = i_2 + 1
                                            *(r12_1 + (zx.q(i_2) << 1) + 0x88) = rdx_24
                                            i_2 += 1
                                        
                                        i_23 = i_39
                                    while (i_2 u< i_15.d)
                                
                                if (r12_1[0xa2].w == 0)
                                    rax_58 = "invalid code -- missing end-of-block"
                                label_140372b0a:
                                    i_27 = i_29
                                    i_27[4] = rax_58
                                    *r12_1 = 0x1d
                                    r11_1 = var_a8_1
                                    rcx = *r12_1
                                    
                                    if (rcx u> 0x1e)
                                        break
                                    
                                    continue
                                
                                i_28 = i_26
                                *(r12_1 + 0x80) = &r12_1[0x152]
                                *(r12_1 + 0x58) = &r12_1[0x152]
                                r12_1[0x1a] = 9
                                int32_t rax_57 = sub_140376c40(1, &r12_1[0x22], r8_3, r12_1 + 0x80, 
                                    &r12_1[0x1a], &r12_1[0xc2])
                                i_27 = i_29
                                
                                if (rax_57 != 0)
                                    var_b8_1 = rax_57
                                    rax_48 = "invalid literal/lengths set"
                                    goto label_140372b8c
                                
                                *(r12_1 + 0x60) = *(r12_1 + 0x80)
                                r12_1[0x1b] = 6
                                int32_t rax_62
                                rax_62, rcx_3 = sub_140376c40(2, 
                                    r12_1 + (zx.q(r12_1[0x1d]) << 1) + 0x88, r12_1[0x1e], 
                                    r12_1 + 0x80, &r12_1[0x1b], &r12_1[0xc2])
                                
                                if (rax_62 != 0)
                                    var_b8_1 = rax_62
                                    rax_48 = "invalid distances set"
                                    goto label_140372b8c
                                
                                var_b8_1 = 0
                                *r12_1 = 0x13
                                r11_1 = var_a8_1
                                i_26 = i_28
                                
                                if (arg2 != 6)
                                    goto label_1403733bf
                                
                                rbp_1 = 0
                                goto label_140373de0
                            case 0xffffe2fb
                                rdx_9 = r12_1[0x14]
                                int32_t rax_117
                                
                                if (rdx_9 != 0)
                                label_1403735c9:
                                    
                                    while (true)
                                        if (j u>= rdx_9)
                                            rcx_3 = zx.q(rdx_9)
                                            rax_117 = (not.d(0xffffffff << rcx_3.b) & i_23.d)
                                                + r12_1[0x12]
                                            r12_1[0x12] = rax_117
                                            i_23 = zx.q(i_23.d u>> rcx_3.b)
                                            j -= rdx_9
                                            r12_1[0x6f7] += rdx_9
                                            goto label_1403735f9
                                        
                                        if (i_4 == 0)
                                            break
                                        
                                        i_4 -= 1
                                        uint32_t rax_113 = zx.d(*rdi_1) << j.b
                                        rdi_1 = &rdi_1[1]
                                        i_23 = zx.q(i_23.d + rax_113)
                                        j += 8
                                    
                                    goto label_140373d0d
                                
                            label_140372280:
                                rax_117 = r12_1[0x12]
                            label_1403735f9:
                                r12_1[0x6f8] = rax_117
                                *r12_1 = 0x16
                            label_14037360c:
                                int64_t rbp_53 = *(r12_1 + 0x60)
                                rcx_3.b = r12_1[0x1b].b
                                int32_t rdx_87 = not.d(0xffffffff << rcx_3.b)
                                uint64_t rcx_115 = zx.q(i_23.d) & zx.q(rdx_87)
                                i_15.b = *(rbp_53 + (rcx_115 << 2) + 1)
                                uint32_t rax_119 = zx.d(i_15.b)
                                
                                if (j u< rax_119)
                                    uint64_t rcx_118
                                    
                                    do
                                        if (i_4 == 0)
                                            goto label_140373d0d
                                        
                                        uint32_t rax_121 = zx.d(*rdi_1) << j.b
                                        i_4 -= 1
                                        rdi_1 = &rdi_1[1]
                                        uint64_t i_35 = zx.q(i_23.d + rax_121)
                                        j += 8
                                        i_23 = i_35
                                        rcx_118 = zx.q(i_35.d) & zx.q(rdx_87)
                                        i_15 = zx.q(*(rbp_53 + (rcx_118 << 2) + 1))
                                        rax_119 = zx.d(i_15.b)
                                    while (j u< rax_119)
                                    
                                    rcx_115 = zx.q(rcx_118.d)
                                
                                int16_t r8_11 = *(rbp_53 + (rcx_115 << 2) + 2)
                                uint32_t rdx_88 = zx.d(*(rbp_53 + (rcx_115 << 2)))
                                int32_t rax_122
                                
                                if ((rdx_88.b & 0xf0) == 0)
                                    uint32_t r8_12 = zx.d(r8_11)
                                    int32_t r9_8 = not.d(0xffffffff << (rdx_88.b + rax_119.b))
                                    uint64_t rdx_93 = zx.q(((i_23.d & r9_8) u>> rax_119.b) + r8_12)
                                    i_15 = zx.q(*(rbp_53 + (rdx_93 << 2) + 1))
                                    
                                    if (i_15.d + rax_119 u> j)
                                        uint64_t rdx_99
                                        
                                        do
                                            if (i_4 == 0)
                                                goto label_140373d0d
                                            
                                            uint32_t rdx_95 = zx.d(*rdi_1) << j.b
                                            i_4 -= 1
                                            rdi_1 = &rdi_1[1]
                                            uint64_t i_36 = zx.q(i_23.d + rdx_95)
                                            j += 8
                                            i_23 = i_36
                                            rdx_99 = zx.q(((i_36.d & r9_8) u>> rax_119.b) + r8_12)
                                            i_15 = zx.q(*(rbp_53 + (rdx_99 << 2) + 1))
                                        while (rax_119 + i_15.d u> j)
                                        
                                        rdx_93 = zx.q(rdx_99.d)
                                    
                                    r8_11 = *(rbp_53 + (rdx_93 << 2) + 2)
                                    rdx_88 = zx.d(*(rbp_53 + (rdx_93 << 2)))
                                    i_23 = zx.q(i_23.d u>> rax_119.b)
                                    j -= rax_119
                                    rax_122 = rax_119 + r12_1[0x6f7]
                                    r12_1[0x6f7] = rax_122
                                else
                                    rax_122 = r12_1[0x6f7]
                                
                                uint32_t rcx_128 = zx.d(i_15.b)
                                i_23 = zx.q(i_23.d u>> rcx_128.b)
                                j -= rcx_128
                                r12_1[0x6f7] = rax_122 + rcx_128
                                
                                if ((rdx_88.b & 0x40) != 0)
                                    rax_40 = "invalid distance code"
                                    goto label_140373bf3
                                
                                r12_1[0x13] = zx.d(r8_11)
                                rdx_10 = rdx_88 & 0xf
                                r12_1[0x14] = rdx_10
                                *r12_1 = 0x17
                                
                                if (rdx_10 != 0)
                                    goto label_140373779
                                
                                goto label_1403737a4
                            case 0xffffe312
                                rdx_10 = r12_1[0x14]
                                
                                if (rdx_10 != 0)
                                label_140373779:
                                    
                                    while (true)
                                        if (j u>= rdx_10)
                                            char rcx_130 = rdx_10.b
                                            r12_1[0x13] += not.d(0xffffffff << rcx_130) & i_23.d
                                            i_23 = zx.q(i_23.d u>> rcx_130)
                                            j -= rdx_10
                                            r12_1[0x6f7] += rdx_10
                                            goto label_1403737a4
                                        
                                        if (i_4 == 0)
                                            break
                                        
                                        i_4 -= 1
                                        uint32_t rax_126 = zx.d(*rdi_1) << j.b
                                        rdi_1 = &rdi_1[1]
                                        i_23 = zx.q(i_23.d + rax_126)
                                        j += 8
                                    
                                    goto label_140373d0d
                                
                            label_1403737a4:
                                *r12_1 = 0x18
                            label_1403737ac:
                                
                                if (i_26 == 0)
                                    goto label_140373d2f
                                
                                int32_t rcx_132 = i_30 - i_26
                                uint64_t rax_130 = zx.q(r12_1[0x13])
                                uint64_t i_41 = i_23
                                int32_t i_33
                                int32_t i_20
                                int32_t i_25
                                
                                if (rax_130.d u<= rcx_132)
                                    i_25 = i_26
                                    i_15 = r11_1 - rax_130
                                    i_33 = r12_1[0x12]
                                    i_20 = i_33
                                label_140373839:
                                    int32_t i_17 = i_20
                                    
                                    if (i_20 u> i_25)
                                        i_17 = i_25
                                    
                                    int32_t i_38 = i_20
                                    
                                    if (i_25 u< i_20)
                                        i_38 = i_25
                                    
                                    r12_1[0x12] = i_33 - i_17
                                    char* rcx_137
                                    int32_t i_40
                                    void* i_22
                                    int32_t i_3
                                    
                                    if (zx.q(i_38 - 1) + 1 u>= 0x20)
                                        i_40 = i_25
                                        
                                        if (i_25 u< i_20)
                                            i_20 = i_25
                                        
                                        uint64_t rcx_134 = zx.q(i_20 - 1)
                                        
                                        if (r11_1 u< i_15 + rcx_134 + 1
                                                && i_15 u< &r11_1[rcx_134 + 1])
                                            goto label_14037388d
                                        
                                        uint64_t rbx_47 = zx.q(i_38) & 0x1f
                                        int64_t rax_136 = zx.q(i_38 - 1) + 1 - rbx_47
                                        rcx_137 = &r11_1[rax_136]
                                        i_3 = i_17 - rax_136.d
                                        i_22 = i_15 + rax_136
                                        int64_t rbp_57 = 0
                                        
                                        do
                                            uint128_t zmm1 = *(i_15 + rbp_57 + 0x10)
                                            *(r11_1 + rbp_57) = *(i_15 + rbp_57)
                                            *(r11_1 + rbp_57 + 0x10) = zmm1
                                            rbp_57 += 0x20
                                        while (rax_136 != rbp_57)
                                        
                                        i_23 = i_41
                                        
                                        if (rbx_47.d != 0)
                                            goto label_140373899
                                    else
                                        i_40 = i_25
                                    label_14037388d:
                                        rcx_137 = r11_1
                                        i_3 = i_17
                                        i_22 = i_15
                                        i_23 = i_41
                                    label_140373899:
                                        i_15 = zx.q(i_3 - 1)
                                        
                                        if ((i_3.b & 7) != 0)
                                            int64_t rax_134 = 0
                                            
                                            do
                                                rcx_137[rax_134] = *(i_22 + rax_134)
                                                rax_134 += 1
                                            while ((i_3 & 7) != rax_134.d)
                                            
                                            rcx_137 = &rcx_137[rax_134]
                                            i_3 -= rax_134.d
                                            i_22 += rax_134
                                            i_23 = i_41
                                        
                                        if (i_15.d u>= 7)
                                            int64_t rax_135 = 0
                                            
                                            do
                                                rcx_137[rax_135] = *(i_22 + rax_135)
                                                rcx_137[rax_135 + 1] = *(i_22 + rax_135 + 1)
                                                rcx_137[rax_135 + 2] = *(i_22 + rax_135 + 2)
                                                rcx_137[rax_135 + 3] = *(i_22 + rax_135 + 3)
                                                rcx_137[rax_135 + 4] = *(i_22 + rax_135 + 4)
                                                rcx_137[rax_135 + 5] = *(i_22 + rax_135 + 5)
                                                rcx_137[rax_135 + 6] = *(i_22 + rax_135 + 6)
                                                rcx_137[rax_135 + 7] = *(i_22 + rax_135 + 7)
                                                rax_135 += 8
                                            while (i_3 != rax_135.d)
                                            
                                            rcx_137 = &rcx_137[rax_135]
                                            i_23 = i_41
                                    i_26 = i_40 - i_17
                                    
                                    if (r12_1[0x12] == 0)
                                        *r12_1 = 0x14
                                    
                                    r11_1 = rcx_137
                                    i_27 = i_29
                                    rcx = *r12_1
                                    
                                    if (rcx u> 0x1e)
                                        break
                                    
                                    continue
                                else
                                    int32_t i_32 = rax_130.d - rcx_132
                                    
                                    if (i_32 u<= r12_1[0xc] || r12_1[0x6f6] == 0)
                                        int32_t rdx_100 = r12_1[0xd]
                                        i_25 = i_26
                                        i_20 = i_32 - rdx_100
                                        int32_t rdx_102
                                        
                                        if (i_32 u<= rdx_100)
                                            rdx_102 = rdx_100 - i_32
                                            i_20 = i_32
                                        else
                                            rdx_102 = r12_1[0xb] - i_20
                                        
                                        i_15 = zx.q(rdx_102) + *(r12_1 + 0x38)
                                        i_33 = r12_1[0x12]
                                        
                                        if (i_20 u> i_33)
                                            i_20 = i_33
                                        
                                        goto label_140373839
                                    
                                    rax_40 = "invalid distance too far back"
                                    i_27 = i_29
                                goto label_140373bf3
                            case 0xffffe324
                                if (i_26 == 0)
                                    goto label_140373d2f
                                
                                rax_27.b = r12_1[0x12].b
                                *r11_1 = rax_27.b
                                r11_1 = &r11_1[1]
                                i_26 -= 1
                                *r12_1 = 0x14
                                rcx = *r12_1
                                
                                if (rcx u> 0x1e)
                                    break
                                
                                continue
                            case 0xffffe357
                                if (r12_1[2] == 0)
                                label_140373ae7:
                                    *r12_1 = 0x1b
                                label_140373aef:
                                    
                                    if (r12_1[2] == 0 || r12_1[4] == 0)
                                        goto label_140373dc1
                                    
                                    if (j u<= 0x1f)
                                        if (i_4 == 0)
                                            goto label_140373dd7
                                        
                                        uint32_t i_10 = i_4 - 1
                                        rdx_1 = &rdi_1[1]
                                        i_15 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                        i_23 = i_15
                                        j_2 = j + 8
                                        
                                        if (j_2 u>= 0x20)
                                        label_140373bd8:
                                            rdi_1 = rdx_1
                                            i_4 = i_10
                                        else
                                            if (i_10 == 0)
                                                goto label_140373d4c
                                            
                                            i_10 = i_4 - 2
                                            rdx_1 = &rdi_1[2]
                                            i_15 = zx.q(i_15.d + (zx.d(rdi_1[1]) << j_2.b))
                                            i_23 = i_15
                                            j_2 = j + 0x10
                                            
                                            if (j_2 u> 0x1f)
                                                goto label_140373bd8
                                            
                                            if (i_10 == 0)
                                                goto label_140373d4c
                                            
                                            i_10 = i_4 - 3
                                            rdx_1 = &rdi_1[3]
                                            i_15 = zx.q(i_15.d + (zx.d(rdi_1[2]) << j_2.b))
                                            i_23 = i_15
                                            j_2 = j + 0x18
                                            
                                            if (j_2 u> 0x1f)
                                                goto label_140373bd8
                                            
                                            if (i_10 == 0)
                                                goto label_140373d4c
                                            
                                            rax_12 = &rdi_1[4]
                                            i_23 = zx.q(i_15.d + (zx.d(rdi_1[3]) << j_2.b))
                                            j_2 = j + 0x20
                                            
                                            if (j u>= 0xffffffe0)
                                                if (i_4 == 4)
                                                    goto label_140373f46
                                                
                                                uint32_t rax_145 = zx.d(rdi_1[4]) << j_2.b
                                                i_4 -= 5
                                                rdi_1 = &rdi_1[5]
                                                j += 0x28
                                                i_23 = zx.q(rax_145 + i_23.d)
                                                
                                                if (i_23.d == r12_1[7])
                                                    goto label_140373dbc
                                                
                                                rax_40 = "incorrect length check"
                                                goto label_140373bf3
                                            
                                            rdi_1 = rax_12
                                            i_4 -= 4
                                        
                                        j = j_2
                                    
                                    if (i_23.d != r12_1[7])
                                        rax_40 = "incorrect length check"
                                        goto label_140373bf3
                                    
                                label_140373dbc:
                                    i_23 = 0
                                    j = 0
                                label_140373dc1:
                                    *r12_1 = 0x1c
                                    goto label_140373de0
                                
                                if (j u<= 0x1f)
                                    if (i_4 == 0)
                                        goto label_140373dd7
                                    
                                    uint32_t i_8 = i_4 - 1
                                    rdx_1 = &rdi_1[1]
                                    i_15 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                    i_23 = i_15
                                    j_2 = j + 8
                                    
                                    if (j_2 u>= 0x20)
                                        goto label_140373a6b
                                    
                                    if (i_8 == 0)
                                        goto label_140373d4c
                                    
                                    i_8 = i_4 - 2
                                    rdx_1 = &rdi_1[2]
                                    i_15 = zx.q(i_15.d + (zx.d(rdi_1[1]) << j_2.b))
                                    i_23 = i_15
                                    j_2 = j + 0x10
                                    
                                    if (j_2 u> 0x1f)
                                        goto label_140373a6b
                                    
                                    if (i_8 == 0)
                                        goto label_140373d4c
                                    
                                    i_8 = i_4 - 3
                                    rdx_1 = &rdi_1[3]
                                    i_15 = zx.q(i_15.d + (zx.d(rdi_1[2]) << j_2.b))
                                    j_2 = j + 0x18
                                    
                                    if (j_2 u> 0x1f)
                                        i_23 = i_15
                                    label_140373a6b:
                                        rdi_1 = rdx_1
                                        i_4 = i_8
                                    label_140373a71:
                                        j = j_2
                                    else
                                        if (i_8 == 0)
                                            rdi_1 = rdx_1
                                            i_4 = 0
                                            j = j_2
                                            rax_27 = var_b8_1
                                            i_23 = i_15
                                            goto label_140373dde
                                        
                                        rax_12 = &rdi_1[4]
                                        i_23 = zx.q(i_15.d + (zx.d(rdi_1[3]) << j_2.b))
                                        j_2 = j + 0x20
                                        
                                        if (j u< 0xffffffe0)
                                            rdi_1 = rax_12
                                            i_4 -= 4
                                            goto label_140373a71
                                        
                                        if (i_4 == 4)
                                            goto label_140373f46
                                        
                                        uint32_t rax_29 = zx.d(rdi_1[4]) << j_2.b
                                        i_4 -= 5
                                        rdi_1 = &rdi_1[5]
                                        j += 0x28
                                        i_23 = zx.q(rax_29 + i_23.d)
                                
                                int32_t r8_14 = i_30 - i_26
                                *(i_27 + 0x1c) += r8_14
                                r12_1[7] += r8_14
                                
                                if (r8_14 != 0)
                                    void* r11_4 = r11_1 - zx.q(r8_14)
                                    int32_t rcx_140 = r12_1[6]
                                    int32_t rax_141
                                    
                                    if (r12_1[4] == 0)
                                        rax_141 = sub_140374410(rcx_140, r11_4, r8_14)
                                    else
                                        rax_141 = sub_140374810(rcx_140, r11_4, r8_14)
                                    
                                    r12_1[6] = rax_141
                                    *(i_27 + 0x4c) = rax_141
                                
                                bool cond:5_1 = r12_1[4] != 0
                                int32_t rax_143 = _bswap(i_23.d)
                                
                                if (cond:5_1)
                                    rax_143 = i_23.d
                                
                                if (rax_143 != r12_1[6])
                                    i_27[4] = "incorrect data check"
                                    *r12_1 = 0x1d
                                    i_30 = i_26
                                    rcx = *r12_1
                                    
                                    if (rcx u> 0x1e)
                                        break
                                    
                                    continue
                                else
                                    i_23 = 0
                                    j = 0
                                    i_30 = i_26
                                
                                goto label_140373ae7
                            case 0xffffe450
                                goto label_1403723c8
                            case 0xffffe485
                                goto label_1403723fd
                            case 0xffffe490
                            label_140372408:
                                
                                if (r12_1[1] != 0)
                                    int32_t rcx_19 = j & 7
                                    i_23 = zx.q(i_23.d u>> rcx_19.b)
                                    j -= rcx_19
                                    *r12_1 = 0x1a
                                    rcx = *r12_1
                                    
                                    if (rcx u> 0x1e)
                                        break
                                    
                                    continue
                                
                                if (j u< 3)
                                    if (i_4 == 0)
                                        goto label_140373d0d
                                    
                                    int32_t i_31 = (zx.d(*rdi_1) << j.b) + i_23.d
                                    rdi_1 = &rdi_1[1]
                                    i_4 -= 1
                                    i_23 = zx.q(i_31)
                                    j += 8
                                
                                r12_1[1] = i_23.d & 1
                                int32_t rax_38 = i_23.d u>> 1 & 3
                                int32_t rcx_22
                                
                                if (rax_38 == 3)
                                    i_27[4] = "invalid block type"
                                    rcx_22 = 0x1d
                                label_14037270b:
                                    *r12_1 = rcx_22
                                label_14037270f:
                                    i_23 = zx.q(i_23.d u>> 3)
                                    j -= 3
                                    rcx = *r12_1
                                    
                                    if (rcx u> 0x1e)
                                        break
                                    
                                    continue
                                else
                                    if (rax_38 == 2)
                                        rcx_22 = 0x10
                                        goto label_14037270b
                                    
                                    rcx_22 = 0xd
                                    
                                    if (rax_38 != 1)
                                        goto label_14037270b
                                    
                                    *(r12_1 + 0x68) = 0x500000009
                                    *(r12_1 + 0x58) =
                                        _mm_unpacklo_epi64(zx.o(&data_1435f8bd0), &data_1435f93d0)
                                    *r12_1 = 0x13
                                    
                                    if (arg2 != 6)
                                        goto label_14037270f
                                    
                                    i_23 = zx.q(i_23.d u>> 3)
                                    j -= 3
                                    rbp_1 = var_b8_1
                                goto label_140373de0
                            case 0xffffe59d
                            label_140372515:
                                *r12_1 = 0xf
                            label_140372522:
                                int32_t i_24 = i_26
                                i_15 = zx.q(r12_1[0x12])
                                
                                if (i_15.d == 0)
                                    *r12_1 = 0xb
                                label_140372577:
                                    i_26 = i_24
                                    rcx = *r12_1
                                    
                                    if (rcx u> 0x1e)
                                        break
                                    
                                    continue
                                else
                                    if (i_15.d u> i_4)
                                        i_15 = zx.q(i_4)
                                    
                                    if (i_15.d u> i_24)
                                        i_15 = zx.q(i_24)
                                    
                                    if (i_15.d != 0)
                                        uint64_t rbp_27 = zx.q(i_15.d)
                                        memcpy(r11_1, rdi_1, rbp_27.d)
                                        i_27 = i_29
                                        i_4 -= i_15.d
                                        rdi_1 = &rdi_1[rbp_27]
                                        i_24 -= i_15.d
                                        r11_1 = &r11_1[rbp_27]
                                        r12_1[0x12] -= i_15.d
                                        goto label_140372577
                                    
                                    rbp_1 = var_b8_1
                                    i_26 = i_24
                                
                                goto label_140373de0
                            case 0xffffe5a5
                                goto label_140372522
                            case 0xffffeed1
                            label_140372e49:
                                int32_t rax_81 = r12_1[4]
                                
                                if ((rax_81 & 0x400) != 0)
                                    int32_t i_37
                                    
                                    if (j u> 0xf)
                                        i_37 = i_23.d
                                    else
                                        if (i_4 == 0)
                                            goto label_140373dd7
                                        
                                        uint32_t i_14 = i_4 - 1
                                        i_37 = (zx.d(*rdi_1) << j.b) + i_23.d
                                        
                                        if (j + 8 u>= 0x10)
                                            rdi_1 = &rdi_1[1]
                                            i_4 = i_14
                                        else
                                            if (i_14 == 0)
                                                rdi_1 = &rdi_1[1]
                                                i_4 = 0
                                                i_23 = zx.q(i_37)
                                                j += 8
                                                goto label_140373dda
                                            
                                            i_14 = i_4 - 2
                                            i_37 += zx.d(rdi_1[1]) << (j + 8).b
                                            int32_t j_5 = j
                                            j += 0x10
                                            
                                            if (j_5 u< 0xfffffff0)
                                                rdi_1 = &rdi_1[2]
                                                i_4 = i_14
                                            else
                                                if (i_14 == 0)
                                                    rdi_1 = &rdi_1[2]
                                                    i_4 = 0
                                                    i_23 = zx.q(i_37)
                                                    goto label_140373dda
                                                
                                                i_4 -= 3
                                                uint32_t rbp_43 = zx.d(rdi_1[2])
                                                rdi_1 = &rdi_1[3]
                                                i_37 += rbp_43 << j.b
                                    
                                    r12_1[0x12] = i_37
                                    void* rcx_77 = *(r12_1 + 0x20)
                                    
                                    if (rcx_77 != 0)
                                        *(rcx_77 + 0x18) = i_37
                                        rax_81 = r12_1[4]
                                    
                                    i_23 = 0
                                    
                                    if ((rax_81 & 0x200) != 0)
                                        var_4c.b = i_37.b
                                        var_4c:1.b = i_37:1.b
                                        r12_1[6] = sub_140374810(r12_1[6], &var_4c, 2)
                                    
                                    j = 0
                                    goto label_140372f41
                                
                                void* rax_80 = *(r12_1 + 0x20)
                                
                                if (rax_80 != 0)
                                    *(rax_80 + 0x10) = 0
                                
                            label_140372f41:
                                *r12_1 = 5
                            label_140372f49:
                                int32_t rdx_53 = r12_1[4]
                                
                                if ((rdx_53 & 0x400) != 0)
                                    uint32_t rax_83 = r12_1[0x12]
                                    uint32_t rbp_46 = rax_83
                                    
                                    if (rax_83 u> i_4)
                                        rbp_46 = i_4
                                    
                                    if (rbp_46 != 0)
                                        void* rbx_28 = *(r12_1 + 0x20)
                                        
                                        if (rbx_28 != 0)
                                            int64_t rcx_79 = *(rbx_28 + 0x10)
                                            
                                            if (rcx_79 != 0)
                                                int32_t rbx_29 = *(rbx_28 + 0x1c)
                                                uint64_t rdx_50 = zx.q(*(rbx_28 + 0x18) - rax_83)
                                                uint32_t count = rbx_29 - rdx_50.d
                                                
                                                if (rdx_50.d + rbp_46 u<= rbx_29)
                                                    count = rbp_46
                                                
                                                memcpy(rcx_79 + rdx_50, rdi_1, count)
                                                rdx_53 = r12_1[4]
                                        
                                        if ((rdx_53 & 0x200) != 0)
                                            r12_1[6] = sub_140374810(r12_1[6], rdi_1, rbp_46)
                                        
                                        i_4 -= rbp_46
                                        rdi_1 = &rdi_1[zx.q(rbp_46)]
                                        rax_83 = r12_1[0x12] - rbp_46
                                        r12_1[0x12] = rax_83
                                        i_27 = i_29
                                    
                                    if (rax_83 != 0)
                                        goto label_140373d2f
                                
                                r12_1[0x12] = 0
                                *r12_1 = 6
                            label_140373016:
                                
                                if ((*(r12_1 + 0x11) & 8) == 0)
                                    void* rax_87 = *(r12_1 + 0x20)
                                    
                                    if (rax_87 != 0)
                                        *(rax_87 + 0x20) = 0
                                    
                                    goto label_1403730de
                                
                                if (i_4 == 0)
                                label_140373d0d:
                                    i_4 = 0
                                    rbp_1 = var_b8_1
                                    goto label_140373de0
                                
                                i_15 = i_27
                                int64_t r15_5 = 0
                                char rbx_32
                                
                                do
                                    rbx_32 = rdi_1[r15_5]
                                    void* rcx_82 = *(r12_1 + 0x20)
                                    
                                    if (rcx_82 != 0)
                                        int64_t rax_88 = *(rcx_82 + 0x20)
                                        
                                        if (rax_88 != 0)
                                            uint64_t rdx_55 = zx.q(r12_1[0x12])
                                            
                                            if (rdx_55.d u< *(rcx_82 + 0x28))
                                                r12_1[0x12] = (rdx_55 + 1).d
                                                *(rax_88 + rdx_55) = rbx_32
                                    
                                    r15_5 += 1
                                    
                                    if (rbx_32 == 0)
                                        break
                                while (i_4 u> r15_5.d)
                                
                                if ((*(r12_1 + 0x11) & 2) != 0)
                                    r12_1[6] = sub_140374810(r12_1[6], rdi_1, r15_5.d)
                                
                                if (rbx_32 != 0)
                                    rdi_1 = &rdi_1[r15_5]
                                    i_4 -= r15_5.d
                                    rbp_1 = var_b8_1
                                    i_27 = i_15
                                    goto label_140373de0
                                
                                i_4 -= r15_5.d
                                rdi_1 = &rdi_1[r15_5]
                                i_27 = i_15
                            label_1403730de:
                                r12_1[0x12] = 0
                                *r12_1 = 7
                            label_1403730ef:
                                
                                if ((*(r12_1 + 0x11) & 0x10) == 0)
                                    void* rax_90 = *(r12_1 + 0x20)
                                    
                                    if (rax_90 != 0)
                                        *(rax_90 + 0x30) = 0
                                    
                                    goto label_1403731b1
                                
                                if (i_4 == 0)
                                    goto label_140373d0d
                                
                                int64_t rbp_48 = 0
                                char rbx_33
                                
                                do
                                    rbx_33 = rdi_1[rbp_48]
                                    void* rcx_85 = *(r12_1 + 0x20)
                                    
                                    if (rcx_85 != 0)
                                        int64_t rax_91 = *(rcx_85 + 0x30)
                                        
                                        if (rax_91 != 0)
                                            uint64_t rdx_57 = zx.q(r12_1[0x12])
                                            
                                            if (rdx_57.d u< *(rcx_85 + 0x38))
                                                r12_1[0x12] = (rdx_57 + 1).d
                                                *(rax_91 + rdx_57) = rbx_33
                                    
                                    rbp_48 += 1
                                    
                                    if (rbx_33 == 0)
                                        break
                                while (i_4 u> rbp_48.d)
                                
                                if ((*(r12_1 + 0x11) & 2) != 0)
                                    r12_1[6] = sub_140374810(r12_1[6], rdi_1, rbp_48.d)
                                
                                if (rbx_33 != 0)
                                    rdi_1 = &rdi_1[rbp_48]
                                    i_4 -= rbp_48.d
                                    rbp_1 = var_b8_1
                                    i_27 = i_29
                                    goto label_140373de0
                                
                                i_4 -= rbp_48.d
                                rdi_1 = &rdi_1[rbp_48]
                                i_27 = i_29
                            label_1403731b1:
                                *r12_1 = 8
                            label_1403731b9:
                                int32_t rax_93 = r12_1[4]
                                
                                if ((rax_93 & 0x200) != 0)
                                    if (j u<= 0xf)
                                        if (i_4 == 0)
                                            goto label_140373dd7
                                        
                                        rbp_2 = &rdi_1[1]
                                        i_15 = zx.q(i_23.d + (zx.d(*rdi_1) << j.b))
                                        i_23 = i_15
                                        j_2 = j + 8
                                        
                                        if (j_2 u>= 0x10)
                                            rdi_1 = rbp_2
                                            i_4 -= 1
                                        label_14037324a:
                                            j = j_2
                                        else
                                            if (i_4 == 1)
                                                goto label_140373da3
                                            
                                            rdx_1 = &rdi_1[2]
                                            i_23 = zx.q(i_15.d + (zx.d(rdi_1[1]) << j_2.b))
                                            j_2 = j + 0x10
                                            
                                            if (j u< 0xfffffff0)
                                                rdi_1 = rdx_1
                                                i_4 -= 2
                                                goto label_14037324a
                                            
                                            if (i_4 == 2)
                                                goto label_140373d4c
                                            
                                            uint32_t rdx_61 = zx.d(rdi_1[2]) << j_2.b
                                            i_4 -= 3
                                            rdi_1 = &rdi_1[3]
                                            j += 0x18
                                            i_23 = zx.q(rdx_61 + i_23.d)
                                    
                                    if (i_23.d != zx.d(r12_1[6].w))
                                        rax_40 = "header crc mismatch"
                                        goto label_140373bf3
                                    
                                    i_23 = 0
                                    j = 0
                                
                                void* rcx_91 = *(r12_1 + 0x20)
                                
                                if (rcx_91 != 0)
                                    *(rcx_91 + 0x3c) = rax_93 u>> 9 & 1
                                    *(*(r12_1 + 0x20) + 0x40) = 1
                                
                                int32_t rax_97 = sub_140374810(0, nullptr, 0)
                                r12_1[6] = rax_97
                                *(i_27 + 0x4c) = rax_97
                                *r12_1 = 0xb
                                rcx = *r12_1
                                
                                if (rcx u> 0x1e)
                                    break
                                
                                continue
                            case 0xffffefd1
                                goto label_140372f49
                            case 0xfffff09e
                                goto label_140373016
                            case 0xfffff177
                                goto label_1403730ef
                            case 0xfffff241
                                goto label_1403731b9
                            case 0xfffff447
                            label_1403733bf:
                                *r12_1 = 0x14
                            label_1403733c7:
                                
                                if (i_26 u< 0x102 || i_4 u< 6)
                                    r12_1[0x6f7] = 0
                                    int64_t rbp_52 = *(r12_1 + 0x58)
                                    rcx_3.b = r12_1[0x1a].b
                                    int32_t rdx_73 = not.d(0xffffffff << rcx_3.b)
                                    uint64_t rcx_99 = zx.q(i_23.d) & zx.q(rdx_73)
                                    i_15.b = *(rbp_52 + (rcx_99 << 2) + 1)
                                    uint32_t rax_107 = zx.d(i_15.b)
                                    
                                    if (j u< rax_107)
                                        uint64_t rcx_102
                                        
                                        do
                                            if (i_4 == 0)
                                                goto label_140373d0d
                                            
                                            uint32_t rax_109 = zx.d(*rdi_1) << j.b
                                            i_4 -= 1
                                            rdi_1 = &rdi_1[1]
                                            i_23 = zx.q(i_23.d + rax_109)
                                            j += 8
                                            rcx_102 = zx.q(i_23.d) & zx.q(rdx_73)
                                            i_15 = zx.q(*(rbp_52 + (rcx_102 << 2) + 1))
                                            rax_107 = zx.d(i_15.b)
                                        while (j u< rax_107)
                                        
                                        rcx_99 = zx.q(rcx_102.d)
                                    
                                    int16_t r8_9 = *(rbp_52 + (rcx_99 << 2) + 2)
                                    uint32_t rdx_74 = zx.d(*(rbp_52 + (rcx_99 << 2)))
                                    uint32_t r9_6
                                    
                                    if (rdx_74 == 0 || (rdx_74 & 0xfffffff0) != 0)
                                        rax_107 = 0
                                        r9_6 = rdx_74
                                    else
                                        uint32_t r8_10 = zx.d(r8_9)
                                        r9_6 = not.d(0xffffffff << (rdx_74.b + rax_107.b))
                                        uint64_t rdx_79 =
                                            zx.q(((i_23.d & r9_6) u>> rax_107.b) + r8_10)
                                        i_15 = zx.q(*(rbp_52 + (rdx_79 << 2) + 1))
                                        
                                        if (i_15.d + rax_107 u> j)
                                            uint64_t rdx_85
                                            
                                            do
                                                if (i_4 == 0)
                                                    goto label_140373d0d
                                                
                                                uint32_t rdx_81 = zx.d(*rdi_1) << j.b
                                                i_4 -= 1
                                                rdi_1 = &rdi_1[1]
                                                i_23 = zx.q(i_23.d + rdx_81)
                                                j += 8
                                                rdx_85 =
                                                    zx.q(((i_23.d & r9_6) u>> rax_107.b) + r8_10)
                                                i_15 = zx.q(*(rbp_52 + (rdx_85 << 2) + 1))
                                            while (rax_107 + i_15.d u> j)
                                            
                                            rdx_79 = zx.q(rdx_85.d)
                                        
                                        r8_9 = *(rbp_52 + (rdx_79 << 2) + 2)
                                        i_23 = zx.q(i_23.d u>> rax_107.b)
                                        r9_6.b = *(rbp_52 + (rdx_79 << 2))
                                        j -= rax_107
                                        r12_1[0x6f7] = rax_107
                                        rdx_74 = zx.d(r9_6.b)
                                    
                                    rcx_3 = zx.q(i_15.b)
                                    i_23 = zx.q(i_23.d u>> rcx_3.b)
                                    j -= rcx_3.d
                                    r12_1[0x6f7] = rax_107 + rcx_3.d
                                    r12_1[0x12] = zx.d(r8_9)
                                    
                                    if (r9_6.b == 0)
                                        *r12_1 = 0x19
                                        rcx = *r12_1
                                        
                                        if (rcx u> 0x1e)
                                            break
                                        
                                        continue
                                    else
                                        if ((rdx_74.b & 0x20) != 0)
                                            r12_1[0x6f7] = 0xffffffff
                                            *r12_1 = 0xb
                                            rcx = *r12_1
                                            
                                            if (rcx u> 0x1e)
                                                break
                                            
                                            continue
                                        
                                        if ((rdx_74.b & 0x40) != 0)
                                            rax_40 = "invalid literal/length code"
                                            goto label_140373bf3
                                        
                                        rdx_9 = rdx_74 & 0xf
                                        r12_1[0x14] = rdx_9
                                        *r12_1 = 0x15
                                        
                                        if (rdx_9 != 0)
                                            goto label_1403735c9
                                        
                                        goto label_140372280
                                else
                                    i_27[2] = r11_1
                                    i_27[3].d = i_26
                                    *i_27 = rdi_1
                                    i_27[1].d = i_4
                                    r12_1[0x10] = i_23.d
                                    r12_1[0x11] = j
                                    sub_140377480(i_27, i_30)
                                    r11_1 = i_27[2]
                                    i_26 = i_27[3].d
                                    rdi_1 = *i_27
                                    i_4 = i_27[1].d
                                    i_23 = zx.q(r12_1[0x10])
                                    j = r12_1[0x11]
                                    
                                    if (*r12_1 == 0xb)
                                        r12_1[0x6f7] = 0xffffffff
                                        rcx = *r12_1
                                        
                                        if (rcx u> 0x1e)
                                            break
                                        
                                        continue
                            case 0xfffff44f
                                goto label_1403733c7
                            case 0xfffff691
                                goto label_14037360c
                            case 0xfffff834
                                goto label_1403737ac
                            case 0xfffffb77
                                goto label_140373aef
                            case 0xfffffdc0
                                rbx = -4
                                goto label_140373f0b
                            case 0xfffffe66
                                goto label_140373dde
                            case 0xfffffe68
                                goto label_140373de0
                        
                        rcx = *r12_1
                        
                        if (rcx u> 0x1e)
                            break
                
            label_140373d42:
                rbx = -2

label_140373f0b:
__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rbx)
