// 函数: sub_140375130
// 地址: 0x140375130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx_1
uint64_t rdx_1
uint32_t rbp_1

if (*(arg1 + 0xac) s<= 0)
    rbp_1 = arg3 + 5
    rdx_1 = 0
    rcx_1 = rbp_1
    
    if (arg2 != 0 && arg3 + 4 u<= rcx_1)
        sub_140374da0(arg1, arg2, arg3, arg4.w)
    else
    label_140375601:
        int32_t rax_11 = *(arg1 + 0x1714)
        int64_t* rcx_32
        void* rdx_14
        void* r8_4
        
        if (rbp_1 == rcx_1 || arg1[0x16].d == 4)
            uint32_t rbp_15 = zx.d(arg4.w + 2)
            uint16_t rdx_12 = (rbp_15 << rax_11.b).w | arg1[0x2e2].w
            arg1[0x2e2].w = rdx_12
            int32_t rax_17
            
            if (rax_11 s< 0xe)
                rax_17 = rax_11 + 3
            else
                uint64_t rcx_26 = zx.q(arg1[5].d)
                arg1[5].d = (rcx_26 + 1).d
                arg1[2][rcx_26] = rdx_12.b
                char* rax_15
                rax_15.b = *(arg1 + 0x1711)
                uint64_t rdx_13 = zx.q(arg1[5].d)
                arg1[5].d = (rdx_13 + 1).d
                arg1[2][rdx_13] = rax_15.b
                int32_t rax_16 = *(arg1 + 0x1714)
                char* rcx_27
                rcx_27.b = 0x10
                rcx_27.b = 0x10 - rax_16.b
                arg1[0x2e2].w = (rbp_15 u>> rcx_27.b).w
                rax_17 = rax_16 - 0xd
            
            *(arg1 + 0x1714) = rax_17
            rdx_14 = &data_1435fb9f0
            r8_4 = &data_1435fbe70
            rcx_32 = arg1
        else
            uint32_t rbx_3 = zx.d(arg4.w + 4)
            uint32_t rsi_5
            rsi_5.w = (rbx_3 << rax_11.b).w | arg1[0x2e2].w
            arg1[0x2e2].w = rsi_5.w
            int32_t rax_14
            
            if (rax_11 s< 0xe)
                rax_14 = rax_11 + 3
            else
                uint64_t rcx_22 = zx.q(arg1[5].d)
                arg1[5].d = (rcx_22 + 1).d
                arg1[2][rcx_22] = rsi_5.b
                char* rax_12
                rax_12.b = *(arg1 + 0x1711)
                uint64_t rbp_14 = zx.q(arg1[5].d)
                arg1[5].d = (rbp_14 + 1).d
                arg1[2][rbp_14] = rax_12.b
                int32_t rax_13 = *(arg1 + 0x1714)
                char* rcx_23
                rcx_23.b = 0x10
                rcx_23.b = 0x10 - rax_13.b
                uint32_t rbx_4 = rbx_3 u>> rcx_23.b
                arg1[0x2e2].w = rbx_4.w
                rax_14 = rax_13 - 0xd
                rsi_5 = rbx_4
            
            *(arg1 + 0x1714) = rax_14
            int32_t r8_3 = arg1[0x169].d
            uint32_t rdi_5 = zx.d(r8_3.w - 0x100)
            int32_t r15_1 = arg1[0x16c].d
            uint32_t rsi_6 = rsi_5 | rdi_5 << rax_14.b
            arg1[0x2e2].w = rsi_6.w
            int32_t rax_20
            
            if (rax_14 s< 0xc)
                rax_20 = rax_14 + 5
            else
                uint64_t rcx_30 = zx.q(arg1[5].d)
                arg1[5].d = (rcx_30 + 1).d
                arg1[2][rcx_30] = rsi_6.b
                char* rax_18
                rax_18.b = *(arg1 + 0x1711)
                uint64_t rbp_17 = zx.q(arg1[5].d)
                arg1[5].d = (rbp_17 + 1).d
                arg1[2][rbp_17] = rax_18.b
                int32_t rax_19 = *(arg1 + 0x1714)
                char* rcx_31
                rcx_31.b = 0x10
                rcx_31.b = 0x10 - rax_19.b
                uint32_t rdi_6 = rdi_5 u>> rcx_31.b
                arg1[0x2e2].w = rdi_6.w
                rax_20 = rax_19 - 0xb
                rsi_6 = rdi_6
            
            uint32_t rdi_7 = zx.d(r15_1.w)
            *(arg1 + 0x1714) = rax_20
            uint32_t rsi_7 = rsi_6 | rdi_7 << rax_20.b
            arg1[0x2e2].w = rsi_7.w
            int32_t rax_23
            
            if (rax_20 s< 0xc)
                rax_23 = rax_20 + 5
            else
                uint64_t rcx_34 = zx.q(arg1[5].d)
                arg1[5].d = (rcx_34 + 1).d
                arg1[2][rcx_34] = rsi_7.b
                char* rax_21
                rax_21.b = *(arg1 + 0x1711)
                uint64_t rbp_18 = zx.q(arg1[5].d)
                arg1[5].d = (rbp_18 + 1).d
                arg1[2][rbp_18] = rax_21.b
                int32_t rax_22 = *(arg1 + 0x1714)
                char* rcx_35
                rcx_35.b = 0x10
                rcx_35.b = 0x10 - rax_22.b
                uint32_t rdi_8 = rdi_7 u>> rcx_35.b
                arg1[0x2e2].w = rdi_8.w
                rax_23 = rax_22 - 0xb
                rsi_7 = rdi_8
            
            uint32_t rdi_9 = zx.d(rdx_1.w - 3)
            *(arg1 + 0x1714) = rax_23
            uint32_t rsi_8 = rsi_7 | rdi_9 << rax_23.b
            arg1[0x2e2].w = rsi_8.w
            int32_t rax_26
            
            if (rax_23 s< 0xd)
                rax_26 = rax_23 + 4
            else
                uint64_t rcx_37 = zx.q(arg1[5].d)
                arg1[5].d = (rcx_37 + 1).d
                *(arg1[2] + rcx_37) = rsi_8.b
                int64_t rax_24
                rax_24.b = *(arg1 + 0x1711)
                uint64_t rdx_19 = zx.q(arg1[5].d)
                arg1[5].d = (rdx_19 + 1).d
                *(arg1[2] + rdx_19) = rax_24.b
                int32_t rax_25 = *(arg1 + 0x1714)
                int64_t rcx_38
                rcx_38.b = 0x10
                rcx_38.b = 0x10 - rax_25.b
                uint32_t rdi_10 = rdi_9 u>> rcx_38.b
                arg1[0x2e2].w = rdi_10.w
                rax_26 = rax_25 - 0xc
                rsi_8 = rdi_10
            
            *(arg1 + 0x1714) = rax_26
            int64_t i = 0
            
            do
                uint32_t rbp_20 = zx.d(*(arg1 + (zx.q(*(i + &data_1435fc040)) << 2) + 0xaa6))
                rsi_8 |= rbp_20 << rax_26.b
                arg1[0x2e2].w = rsi_8.w
                
                if (rax_26 s< 0xe)
                    rax_26 += 3
                else
                    uint64_t rcx_41 = zx.q(arg1[5].d)
                    arg1[5].d = (rcx_41 + 1).d
                    arg1[2][rcx_41] = rsi_8.b
                    uint64_t rbx_19 = zx.q(arg1[5].d)
                    arg1[5].d = (rbx_19 + 1).d
                    *(arg1[2] + rbx_19) = *(arg1 + 0x1711)
                    int32_t rax_29 = *(arg1 + 0x1714)
                    int64_t rcx_42
                    rcx_42.b = 0x10
                    rcx_42.b = 0x10 - rax_29.b
                    uint32_t rbp_21 = rbp_20 u>> rcx_42.b
                    arg1[0x2e2].w = rbp_21.w
                    rax_26 = rax_29 - 0xd
                    rsi_8 = rbp_21
                
                *(arg1 + 0x1714) = rax_26
                i += 1
            while (zx.q((rdx_1 + 1).d) != i)
            
            sub_1403766d0(arg1, arg1 + 0xbc, r8_3)
            sub_1403766d0(arg1, &arg1[0x136], r15_1)
            rcx_32 = arg1
            rdx_14 = arg1 + 0xbc
            r8_4 = &arg1[0x136]
        
        sub_140376330(rcx_32, rdx_14, r8_4)
else
    void* rax_1 = *arg1
    
    if (*(rax_1 + 0x48) == 2)
        uint32_t rcx = -0xc003f81
        int64_t rdx = 0
        int32_t rcx_2
        
        while (true)
            if ((rcx.b & 1) != 0 && *(arg1 + (rdx << 2) + 0xbc) != 0)
                rcx_2 = 0
                break
            
            if ((rcx.b & 2) != 0 && *(arg1 + (rdx << 2) + 0xc0) != 0)
                rcx_2 = 0
                break
            
            rcx u>>= 2
            rdx += 2
            
            if (rdx u>= 0x20)
                if (arg1[0x1c].w == 0 && *(arg1 + 0xe4) == 0 && arg1[0x1e].w == 0)
                    int64_t rdx_24 = 0x52
                    rcx_2 = 0
                    
                    while (*(arg1 + (rdx_24 << 2) - 0xc) == 0)
                        if (*(arg1 + (rdx_24 << 2) - 8) != 0)
                            break
                        
                        if (*(arg1 + (rdx_24 << 2) - 4) != 0)
                            break
                        
                        if (*(arg1 + (rdx_24 << 2)) != 0)
                            break
                        
                        bool cond:2_1 = rdx_24 - 0x2e u< 0x100
                        rdx_24 += 4
                        
                        if (not(cond:2_1))
                            goto label_1403751e4
                
                rcx_2 = 1
                break
        
    label_1403751e4:
        *(rax_1 + 0x48) = rcx_2
    
    sub_140375a30(arg1, &arg1[0x168])
    sub_140375a30(arg1, &arg1[0x16b])
    int32_t rcx_5 = arg1[0x169].d
    uint32_t rsi_1 = zx.d(*(arg1 + 0xbe))
    *(arg1 + (sx.q(rcx_5 + 1) << 2) + 0xbe) = 0xffff
    
    if (rcx_5 s>= 0)
        int16_t temp0_1 = rsi_1.w
        int32_t rdx_5
        rdx_5.b = temp0_1 == 0
        int32_t rcx_6 = 7
        
        if (temp0_1 == 0)
            rcx_6 = 0x8a
        
        int32_t rdi_1 = 4 - rdx_5
        uint32_t rax_3 = -1
        int64_t i_1 = 0
        int32_t rbp_2 = 0
        
        do
            uint32_t rdx_6 = rsi_1
            rsi_1 = zx.d(*(arg1 + (i_1 << 2) + 0xc2))
            i_1 += 1
            rbp_2 += 1
            
            if (rbp_2 s>= rcx_6 || rdx_6 != rsi_1)
                void* rax_5
                
                if (rbp_2 s< rdi_1)
                    uint64_t rcx_7 = zx.q(rdx_6)
                    rax_5 = (rcx_7 << 2) + 0xaa4 + arg1
                    rbp_2.w += *(arg1 + (rcx_7 << 2) + 0xaa4)
                else if (rdx_6 != 0)
                    if (rdx_6 != rax_3)
                        uint64_t rax_6 = zx.q(rdx_6)
                        *(arg1 + (rax_6 << 2) + 0xaa4) += 1
                    
                    rbp_2 = *(arg1 + 0xae4) + 1
                    rax_5 = arg1 + 0xae4
                else if (rbp_2 s> 0xa)
                    rbp_2 = *(arg1 + 0xaec) + 1
                    rax_5 = arg1 + 0xaec
                else
                    rbp_2 = arg1[0x15d].d + 1
                    rax_5 = &arg1[0x15d]
                
                *rax_5 = rbp_2.w
                rbp_2 = 0
                
                if (rsi_1.w == 0)
                    rdi_1 = 3
                    rcx_6 = 0x8a
                else
                    int32_t rcx_8
                    rcx_8.b = rdx_6 == rsi_1
                    rdi_1 = 4 - rcx_8
                    rcx_6 = rcx_8 ^ 7
            else
                rdx_6 = rax_3
            
            rax_3 = rdx_6
        while (zx.q(rcx_5 + 1) != i_1)
    
    int32_t rcx_9 = arg1[0x16c].d
    uint32_t rdx_7 = zx.d(*(arg1 + 0x9b2))
    *(arg1 + (sx.q(rcx_9 + 1) << 2) + 0x9b2) = 0xffff
    
    if (rcx_9 s>= 0)
        int16_t temp1_1 = rdx_7.w
        int32_t rbp_7
        rbp_7.b = temp1_1 == 0
        int32_t rcx_10 = 7
        
        if (temp1_1 == 0)
            rcx_10 = 0x8a
        
        int32_t rdi_2 = 4 - rbp_7
        uint32_t rsi_2 = -1
        int64_t i_2 = 0
        int32_t rbp_8 = 0
        
        do
            uint32_t rax_8 = rdx_7
            rdx_7 = zx.d(*(arg1 + (i_2 << 2) + 0x9b6))
            i_2 += 1
            rbp_8 += 1
            
            if (rbp_8 s>= rcx_10 || rax_8 != rdx_7)
                void* rcx_12
                
                if (rbp_8 s< rdi_2)
                    uint64_t rsi_3 = zx.q(rax_8)
                    rcx_12 = (rsi_3 << 2) + 0xaa4 + arg1
                    rbp_8.w += *(arg1 + (rsi_3 << 2) + 0xaa4)
                else if (rax_8 != 0)
                    if (rax_8 != rsi_2)
                        uint64_t rcx_13 = zx.q(rax_8)
                        *(arg1 + (rcx_13 << 2) + 0xaa4) += 1
                    
                    rbp_8 = *(arg1 + 0xae4) + 1
                    rcx_12 = arg1 + 0xae4
                else if (rbp_8 s> 0xa)
                    rbp_8 = *(arg1 + 0xaec) + 1
                    rcx_12 = arg1 + 0xaec
                else
                    rbp_8 = arg1[0x15d].d + 1
                    rcx_12 = &arg1[0x15d]
                
                *rcx_12 = rbp_8.w
                rbp_8 = 0
                
                if (rdx_7.w == 0)
                    rdi_2 = 3
                    rcx_10 = 0x8a
                else
                    int32_t rcx_14
                    rcx_14.b = rax_8 == rdx_7
                    rdi_2 = 4 - rcx_14
                    rcx_10 = rcx_14 ^ 7
            else
                rax_8 = rsi_2
            
            rsi_2 = rax_8
        while (zx.q(rcx_9 + 1) != i_2)
    
    sub_140375a30(arg1, &arg1[0x16e])
    rdx_1 = 0x12
    
    if (*(arg1 + 0xae2) == 0)
        rdx_1 = 0x11
        
        if (*(arg1 + 0xaaa) == 0)
            rdx_1 = 0x10
            
            if (*(arg1 + 0xade) == 0)
                rdx_1 = 0xf
                
                if (*(arg1 + 0xaae) == 0)
                    rdx_1 = 0xe
                    
                    if (*(arg1 + 0xada) == 0)
                        rdx_1 = 0xd
                        
                        if (*(arg1 + 0xab2) == 0)
                            rdx_1 = 0xc
                            
                            if (*(arg1 + 0xad6) == 0)
                                rdx_1 = 0xb
                                
                                if (*(arg1 + 0xab6) == 0)
                                    rdx_1 = 0xa
                                    
                                    if (*(arg1 + 0xad2) == 0)
                                        rdx_1 = 9
                                        
                                        if (*(arg1 + 0xaba) == 0)
                                            rdx_1 = 8
                                            
                                            if (*(arg1 + 0xace) == 0)
                                                rdx_1 = 7
                                                
                                                if (*(arg1 + 0xabe) == 0)
                                                    rdx_1 = 6
                                                    
                                                    if (*(arg1 + 0xaca) == 0)
                                                        rdx_1 = 5
                                                        
                                                        if (*(arg1 + 0xac2) == 0)
                                                            rdx_1 = 4
                                                            
                                                            if (*(arg1 + 0xac6) == 0)
                                                                rdx_1 =
                                                                    zx.q(sbb.d(3, 0, *(arg1 + 0xaa6) u< 1))
    
    uint32_t rax_9 = (rdx_1 * 3).d
    int32_t rcx_16 = arg1[0x2e0].d
    arg1[0x2e0].d = rcx_16 + rax_9 + 0x11
    rcx_1 = (rcx_16 + rax_9 + 0x1b) u>> 3
    rbp_1 = (*(arg1 + 0x1704) + 0xa) u>> 3
    
    if (rbp_1 u<= rcx_1)
        rcx_1 = rbp_1
    
    if (arg2 == 0 || arg3 + 4 u> rcx_1)
        goto label_140375601
    
    sub_140374da0(arg1, arg2, arg3, arg4.w)
uint64_t result = sub_140374b90(arg1)

if (arg4 != 0)
    result = zx.q(*(arg1 + 0x1714))
    void* rcx_46
    char rdx_23
    
    if (result.d s>= 9)
        rcx_46 = &arg1[2]
        result = &arg1[5]
        uint64_t rbx_21 = zx.q(arg1[5].d)
        arg1[5].d = (rbx_21 + 1).d
        *(arg1[2] + rbx_21) = arg1[0x2e2].b
        rdx_23 = *(arg1 + 0x1711)
    label_1403759a5:
        int64_t rcx_47 = *rcx_46
        uint64_t rbp_23 = zx.q(*result)
        *result = (rbp_23 + 1).d
        *(rcx_47 + rbp_23) = rdx_23
    else if (result.d s> 0)
        rdx_23 = (arg1[0x2e2].w).b
        rcx_46 = &arg1[2]
        result = &arg1[5]
        goto label_1403759a5
    arg1[0x2e2].w = 0
    *(arg1 + 0x1714) = 0

return result
