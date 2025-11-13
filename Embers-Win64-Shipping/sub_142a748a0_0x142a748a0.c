// 函数: sub_142a748a0
// 地址: 0x142a748a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t var_40 = -2
int32_t* r15 = arg4

if (*arg4 s<= 0)
    void* rcx = *(arg1 + 8)
    int64_t r13_1 = *(*(rcx + 0x20) + 0x18)
    char rax_1 = (*(rcx + 0x30)).b
    void* rbx_1 = nullptr
    
    if ((rax_1 & 0x11) == 0)
        rbx_1 = rcx + 0x32
        
        if ((rax_1 & 2) == 0)
            rbx_1 = *(rcx + 0x40)
    
    void* var_90_1 = rbx_1
    void* r14_1 = *(rcx + 0x68)
    void* var_98_1 = r14_1
    *(arg1 + 0x38) = *(rcx + 0x80)
    int512_t zmm0_1
    result, zmm0_1 = sub_142a7ca90(arg1)
    void* const* result_3 = result
    int32_t rcx_2 = *(arg1 + 0x13c)
    
    if (rcx_2 s<= 0)
        result[1] = 0
        *result = arg2
        int32_t i = 0
        
        if (*(*(arg1 + 8) + 0x84) s> 0)
            int64_t* rcx_3 = nullptr
            
            do
                *(rcx_3 + *(arg1 + 0xc0)) = 0
                i += 1
                rcx_3 = &rcx_3[1]
            while (i s< *(*(arg1 + 8) + 0x84))
        
        int64_t rax_6 = result_3[1]
        int32_t rbp_1 = *(r13_1 + (rax_6 << 3))
        uint64_t rbp_2 = zx.q(rbp_1) & 0xffffff
        result_3[1] = rax_6 + 1
        int32_t rcx_6 = (rbp_1 u>> 0x18) - 1
        
        if (rcx_6 u> 0x39)
        label_142a76ded:
            abort()
            noreturn
        
        while (true)
            int64_t rax_8
            int64_t rcx_10
            int64_t rcx_11
            void* rdx
            uint64_t r8_6
            
            switch (jump_table_142a76e10[sx.q(rcx_6)])
                case 0x2a749b9
                    goto label_142a749b9
                case 0x2a749e4
                    void* const r8 = *result_3
                    
                    if (r8 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                    label_142a74a87:
                        void* r8_2 = *(arg1 + 0xb0)
                        int64_t rdx_5 = sx.q(*(arg1 + 0x38))
                        int32_t temp56_1 = *(r8_2 + 8)
                        *(r8_2 + 8) -= rdx_5.d
                        int32_t rax_16 = *(r8_2 + 8)
                        
                        if (temp56_1 - rdx_5.d s< 0)
                            rax_16 = 0
                        
                        *(r8_2 + 8) = rax_16
                        result_3 = &(*(r8_2 + 0x18))[sx.q(rax_16) - rdx_5]
                        goto label_142a76d78
                    
                    void* rcx_12 = *(arg1 + 0x20)
                    void* rdx_2 = r8 - *(rcx_12 + 0x20)
                    
                    if (r8 - *(rcx_12 + 0x20) s< 0 || rdx_2 s>= sx.q(*(rcx_12 + 0x1c))
                            || *(*(rcx_12 + 0x30) + (rdx_2 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_12, r8)
                    else
                        *(rcx_12 + 0x28) = rdx_2.d
                    
                    void* rdx_4 = *(arg1 + 0x20)
                    int64_t r8_1 = sx.q(*(rdx_4 + 0x28))
                    int16_t r9
                    
                    if (r8_1.d s< *(rdx_4 + 0x2c))
                        r9 = *(*(rdx_4 + 0x30) + (r8_1 << 1))
                    
                    uint32_t rcx_13
                    
                    if (r8_1.d s>= *(rdx_4 + 0x2c) || r9 u>= 0xd800)
                        rcx_13 = sub_142aea870(rdx_4, zmm0_1)
                    else
                        rcx_13 = zx.d(r9)
                        *(rdx_4 + 0x28) = (r8_1 + 1).d
                    
                    if (rcx_13 != rbp_2.d)
                        goto label_142a74a87
                    
                label_142a74a58:
                    void* rcx_15 = *(arg1 + 0x20)
                    int64_t rax_14 = sx.q(*(rcx_15 + 0x28))
                    
                    if (rax_14.d s> *(rcx_15 + 0x1c))
                        result = (*(*(rcx_15 + 0x38) + 0x40))()
                    else
                        result = rax_14 + *(rcx_15 + 0x20)
                    
                    *result_3 = result
                    goto label_142a76d78
                case 0x2a74ab5
                    int64_t rax_17 = result_3[1]
                    int32_t rsi_1 = *(r13_1 + (rax_17 << 3))
                    result_3[1] = rax_17 + 1
                    uint64_t rsi_2 = zx.q(rsi_1) & 0xffffff
                    void* rbp_3 = rbx_1 + (rbp_2 << 1)
                    int64_t rbx_2 = 0
                    void* rcx_18 = *(arg1 + 0x20)
                    void* const r8_3 = *result_3
                    void* rdx_7 = r8_3 - *(rcx_18 + 0x20)
                    
                    if (r8_3 - *(rcx_18 + 0x20) s< 0 || rdx_7 s>= sx.q(*(rcx_18 + 0x1c))
                            || *(*(rcx_18 + 0x30) + (rdx_7 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_18, r8_3)
                    else
                        *(rcx_18 + 0x28) = rdx_7.d
                    
                    if (rsi_2 == 0)
                    label_142a74bfd:
                        void* rcx_26 = *(arg1 + 0x20)
                        int64_t rax_30 = sx.q(*(rcx_26 + 0x28))
                        
                        if (rax_30.d s> *(rcx_26 + 0x1c))
                            result = (*(*(rcx_26 + 0x38) + 0x40))()
                        else
                            result = rax_30 + *(rcx_26 + 0x20)
                        
                        *result_3 = result
                        goto label_142a76d78
                    
                    while (true)
                        void* rcx_19 = *(arg1 + 0x20)
                        int64_t rax_21 = sx.q(*(rcx_19 + 0x28))
                        int64_t rax_22
                        
                        if (rax_21.d s> *(rcx_19 + 0x1c))
                            rax_22 = (*(*(rcx_19 + 0x38) + 0x40))()
                        else
                            rax_22 = rax_21 + *(rcx_19 + 0x20)
                        
                        if (rax_22 s>= *(arg1 + 0x78))
                            break
                        
                        void* rdx_9 = *(arg1 + 0x20)
                        int64_t r8_4 = sx.q(*(rdx_9 + 0x28))
                        int16_t r9_1
                        
                        if (r8_4.d s< *(rdx_9 + 0x2c))
                            r9_1 = *(*(rdx_9 + 0x30) + (r8_4 << 1))
                        
                        uint32_t r10_1
                        
                        if (r8_4.d s>= *(rdx_9 + 0x2c) || r9_1 u>= 0xd800)
                            r10_1 = sub_142aea870(rdx_9, zmm0_1)
                        else
                            r10_1 = zx.d(r9_1)
                            *(rdx_9 + 0x28) = (r8_4 + 1).d
                        
                        uint32_t rdx_12 = zx.d(*(rbp_3 + (rbx_2 << 1)))
                        rbx_2 += 1
                        
                        if ((rdx_12 & 0xfffffc00) == 0xd800 && rbx_2 != rsi_2)
                            uint32_t rcx_23 = zx.d(*(rbp_3 + (rbx_2 << 1)))
                            
                            if ((rcx_23 & 0xfffffc00) == 0xdc00)
                                rbx_2 += 1
                                rdx_12 = ((rdx_12 - 0xd7f7) << 0xa) + rcx_23
                        
                        if (rdx_12 != r10_1)
                            goto label_142a74bca
                        
                        if (rbx_2 s>= rsi_2)
                            goto label_142a74bfd
                    
                label_142a74bbd:
                    *(arg1 + 0xa8) = 1
                label_142a74bca:
                    void* r8_5 = *(arg1 + 0xb0)
                    int64_t rdx_13 = sx.q(*(arg1 + 0x38))
                    int32_t temp43_1 = *(r8_5 + 8)
                    *(r8_5 + 8) -= rdx_13.d
                    int32_t rax_29 = *(r8_5 + 8)
                    
                    if (temp43_1 - rdx_13.d s< 0)
                        rax_29 = 0
                    
                    *(r8_5 + 8) = rax_29
                    result_3 = &(*(r8_5 + 0x18))[sx.q(rax_29) - rdx_13]
                    goto label_142a76d78
                case 0x2a74c20
                    r8_6 = zx.q(rbp_2.d)
                label_142a74c2c:
                    result, zmm0_1 = sub_142a78ca0(arg1, result_3, r8_6, r15)
                    result_3 = result
                    goto label_142a76d78
                case 0x2a74c39
                    if (arg3 != 0 && *result_3 != *(arg1 + 0x78))
                        goto label_142a74a87
                    
                    result.b = 1
                    goto label_142a76db2
                case 0x2a74c5a
                    result_3[zx.q((rbp_2 + 2).d) + 2] = *result_3
                label_142a76d78:
                    
                    if (*r15 s> 0)
                        goto label_142a76db0
                    
                    int64_t rax_353 = result_3[1]
                    int32_t rcx_290 = *(r13_1 + (rax_353 << 3))
                    rbp_2 = zx.q(rcx_290) & 0xffffff
                    result_3[1] = rax_353 + 1
                    rcx_6 = (rcx_290 u>> 0x18) - 1
                    
                    if (rcx_6 u> 0x39)
                        goto label_142a76ded
                    
                    rbx_1 = var_90_1
                    continue
                case 0x2a74c6b
                    result_3[rbp_2 + 2] = result_3[zx.q((rbp_2 + 2).d) + 2]
                    result_3[zx.q((rbp_2 + 1).d) + 2] = *result_3
                    goto label_142a76d78
                case 0x2a74c89
                    void* const r8_7 = *result_3
                    
                    if (r8_7 s>= *(arg1 + 0x58))
                    label_142a74c93:
                        *(arg1 + 0xa8) = 0x101
                        goto label_142a76d78
                    
                    void* rcx_30 = *(arg1 + 0x20)
                    void* rdx_16 = r8_7 - *(rcx_30 + 0x20)
                    
                    if (r8_7 - *(rcx_30 + 0x20) s< 0 || rdx_16 s>= sx.q(*(rcx_30 + 0x1c))
                            || *(*(rcx_30 + 0x30) + (rdx_16 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_30, r8_7)
                    else
                        *(rcx_30 + 0x28) = rdx_16.d
                    
                    void* rdx_18 = *(arg1 + 0x20)
                    int64_t r8_8 = sx.q(*(rdx_18 + 0x28))
                    int16_t r9_3
                    
                    if (r8_8.d s< *(rdx_18 + 0x2c))
                        r9_3 = *(*(rdx_18 + 0x30) + (r8_8 << 1))
                    
                    uint32_t rbx_3
                    
                    if (r8_8.d s>= *(rdx_18 + 0x2c) || r9_3 u>= 0xd800)
                        rbx_3 = sub_142aea870(rdx_18, zmm0_1)
                    else
                        rbx_3 = zx.d(r9_3)
                        *(rdx_18 + 0x28) = (r8_8 + 1).d
                    
                    void* rcx_32 = *(arg1 + 0x20)
                    int64_t rax_39 = sx.q(*(rcx_32 + 0x28))
                    int64_t rax_40
                    
                    if (rax_39.d s> *(rcx_32 + 0x1c))
                        rax_40 = (*(*(rcx_32 + 0x38) + 0x40))()
                    else
                        rax_40 = rax_39 + *(rcx_32 + 0x20)
                    
                    if (rax_40 s< *(arg1 + 0x58))
                        void* rdx_22 = *(arg1 + 0x20)
                        int64_t r8_12 = sx.q(*(rdx_22 + 0x28))
                        int16_t r9_4
                        
                        if (r8_12.d s< *(rdx_22 + 0x2c))
                            r9_4 = *(*(rdx_22 + 0x30) + (r8_12 << 1))
                        
                        uint32_t rcx_39
                        
                        if (r8_12.d s>= *(rdx_22 + 0x2c) || r9_4 u>= 0xd800)
                            rcx_39 = sub_142aea870(rdx_22, zmm0_1)
                        else
                            rcx_39 = zx.d(r9_4)
                            *(rdx_22 + 0x28) = (r8_12 + 1).d
                        
                        if (rbx_3 != 0xd || rcx_39 != 0xa)
                            goto label_142a74a87
                        
                        void* rcx_41 = *(arg1 + 0x20)
                        int64_t rax_49 = sx.q(*(rcx_41 + 0x28))
                        
                        if (rax_49.d s> *(rcx_41 + 0x1c))
                            result = (*(*(rcx_41 + 0x38) + 0x40))()
                        else
                            result = rax_49 + *(rcx_41 + 0x20)
                        
                        if (result s< *(arg1 + 0x58))
                            goto label_142a74a87
                        
                        *(arg1 + 0xa8) = 0x101
                        goto label_142a76d78
                    
                    result = sub_142a7b5d0(rbx_3)
                    
                    if (result.b == 0)
                        goto label_142a74a87
                    
                    if (rbx_3 == 0xa && *result_3 s> *(arg1 + 0x50))
                        void* rdx_19 = *(arg1 + 0x20)
                        int32_t rax_42 = *(rdx_19 + 0x28)
                        
                        if (rax_42 s<= 0
                                || *(*(rdx_19 + 0x30) + (sx.q(rax_42 - 1) << 1)) u>= 0xd800)
                            sub_142aeabf0(rdx_19)
                        else
                            *(rdx_19 + 0x28) = rax_42 - 1
                        
                        void* rdx_20 = *(arg1 + 0x20)
                        int32_t r8_10 = *(rdx_20 + 0x28)
                        
                        if (r8_10 s<= 0 || *(*(rdx_20 + 0x30) + (sx.q(r8_10 - 1) << 1)) u>= 0xd800)
                            result = sub_142aeabf0(rdx_20)
                        else
                            *(rdx_20 + 0x28) = r8_10 - 1
                            result = zx.q(*(*(*(arg1 + 0x20) + 0x30) + (sx.q(r8_10 - 1) << 1)))
                    
                    if (rbx_3 == 0xa && *result_3 s> *(arg1 + 0x50) && result.d == 0xd)
                        goto label_142a74a87
                    
                    *(arg1 + 0xa8) = 0x101
                    goto label_142a76d78
                case 0x2a74e33
                    void* const r8_13 = *result_3
                    
                    if (r8_13 s>= *(arg1 + 0x58))
                        *(arg1 + 0xa8) = 0x101
                        goto label_142a76d78
                    
                    void* rcx_42 = *(arg1 + 0x20)
                    void* rdx_24 = r8_13 - *(rcx_42 + 0x20)
                    
                    if (r8_13 - *(rcx_42 + 0x20) s< 0 || rdx_24 s>= sx.q(*(rcx_42 + 0x1c))
                            || *(*(rcx_42 + 0x30) + (rdx_24 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_42, r8_13)
                    else
                        *(rcx_42 + 0x28) = rdx_24.d
                    
                    void* rdx_26 = *(arg1 + 0x20)
                    int64_t r8_14 = sx.q(*(rdx_26 + 0x28))
                    int16_t r9_5
                    
                    if (r8_14.d s< *(rdx_26 + 0x2c))
                        r9_5 = *(*(rdx_26 + 0x30) + (r8_14 << 1))
                    
                    uint32_t rcx_43
                    
                    if (r8_14.d s>= *(rdx_26 + 0x2c) || r9_5 u>= 0xd800)
                        rcx_43 = sub_142aea870(rdx_26, zmm0_1)
                    else
                        rcx_43 = zx.d(r9_5)
                        *(rdx_26 + 0x28) = (r8_14 + 1).d
                    
                    if (rcx_43 != 0xa)
                        goto label_142a74a87
                    
                    void* rcx_45 = *(arg1 + 0x20)
                    int64_t rax_56 = sx.q(*(rcx_45 + 0x28))
                    
                    if (rax_56.d s> *(rcx_45 + 0x1c))
                        result = (*(*(rcx_45 + 0x38) + 0x40))()
                    else
                        result = rax_56 + *(rcx_45 + 0x20)
                    
                    if (result != *(arg1 + 0x58))
                        goto label_142a74a87
                    
                    *(arg1 + 0xa8) = 0x101
                    goto label_142a76d78
                case 0x2a74ee8
                    void* const r8_15 = *result_3
                    
                    if (r8_15 s>= *(arg1 + 0x58))
                        *(arg1 + 0xa8) = 0x101
                        goto label_142a76d78
                    
                    void* rcx_46 = *(arg1 + 0x20)
                    void* rdx_28 = r8_15 - *(rcx_46 + 0x20)
                    
                    if (r8_15 - *(rcx_46 + 0x20) s< 0 || rdx_28 s>= sx.q(*(rcx_46 + 0x1c))
                            || *(*(rcx_46 + 0x30) + (rdx_28 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_46, r8_15)
                    else
                        *(rcx_46 + 0x28) = rdx_28.d
                    
                    void* rdx_30 = *(arg1 + 0x20)
                    int64_t rax_60 = sx.q(*(rdx_30 + 0x28))
                    int16_t r8_16
                    
                    if (rax_60.d s< *(rdx_30 + 0x2c))
                        r8_16 = *(*(rdx_30 + 0x30) + (rax_60 << 1))
                    
                    uint32_t rcx_48
                    
                    if (rax_60.d s>= *(rdx_30 + 0x2c) || r8_16 u>= 0xd800)
                        rcx_48 = sub_142aea4f0(rdx_30, zmm0_1)
                    else
                        rcx_48 = zx.d(r8_16)
                    
                    if (sub_142a7b5d0(rcx_48).b == 0)
                        goto label_142a749b9
                    
                    if (rcx_48 != 0xa || *result_3 s<= *(arg1 + 0x50))
                        goto label_142a76d78
                    
                    void* rdx_31 = *(arg1 + 0x20)
                    int32_t r8_17 = *(rdx_31 + 0x28)
                    
                    if (r8_17 s<= 0 || *(*(rdx_31 + 0x30) + (sx.q(r8_17 - 1) << 1)) u>= 0xd800)
                        result = sub_142aeabf0(rdx_31)
                    else
                        *(rdx_31 + 0x28) = r8_17 - 1
                        result = zx.q(*(*(*(arg1 + 0x20) + 0x30) + (sx.q(r8_17 - 1) << 1)))
                    
                    if (result.d != 0xd)
                        goto label_142a76d78
                    
                    goto label_142a749b9
                case 0x2a74fcb
                    void* const r8_19 = *result_3
                    
                    if (r8_19 s>= *(arg1 + 0x58))
                        *(arg1 + 0xa8) = 0x101
                        goto label_142a76d78
                    
                    void* rcx_53 = *(arg1 + 0x20)
                    void* rdx_34 = r8_19 - *(rcx_53 + 0x20)
                    
                    if (r8_19 - *(rcx_53 + 0x20) s< 0 || rdx_34 s>= sx.q(*(rcx_53 + 0x1c))
                            || *(*(rcx_53 + 0x30) + (rdx_34 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_53, r8_19)
                    else
                        *(rcx_53 + 0x28) = rdx_34.d
                    
                    void* rdx_36 = *(arg1 + 0x20)
                    int64_t rax_67 = sx.q(*(rdx_36 + 0x28))
                    int16_t result_1
                    
                    if (rax_67.d s< *(rdx_36 + 0x2c))
                        result_1 = *(*(rdx_36 + 0x30) + (rax_67 << 1))
                    
                    if (rax_67.d s>= *(rdx_36 + 0x2c) || result_1 u>= 0xd800)
                        result = sub_142aea4f0(rdx_36, zmm0_1)
                    else
                        result = zx.q(result_1)
                    
                label_142a7503e:
                    
                    if (result.d == 0xa)
                        goto label_142a76d78
                    
                    goto label_142a7504d
                case 0x2a75077
                    result = *(arg1 + 0x50)
                label_142a7507b:
                    
                    if (*result_3 == result)
                        goto label_142a76d78
                    
                    goto label_142a7504d
                case 0x2a75087
                    void* const r8_21 = *result_3
                    
                    if (r8_21 == *(arg1 + 0x50))
                        goto label_142a76d78
                    
                    void* rcx_57 = *(arg1 + 0x20)
                    void* rdx_39 = r8_21 - *(rcx_57 + 0x20)
                    
                    if (r8_21 - *(rcx_57 + 0x20) s< 0 || rdx_39 s>= sx.q(*(rcx_57 + 0x1c))
                            || *(*(rcx_57 + 0x30) + (rdx_39 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_57, r8_21)
                    else
                        *(rcx_57 + 0x28) = rdx_39.d
                    
                    void* rdx_41 = *(arg1 + 0x20)
                    int32_t r8_22 = *(rdx_41 + 0x28)
                    uint32_t rax_74
                    
                    if (r8_22 s<= 0 || *(*(rdx_41 + 0x30) + (sx.q(r8_22 - 1) << 1)) u>= 0xd800)
                        rax_74 = sub_142aeabf0(rdx_41)
                    else
                        *(rdx_41 + 0x28) = r8_22 - 1
                        rax_74 = zx.d(*(*(*(arg1 + 0x20) + 0x30) + (sx.q(r8_22 - 1) << 1)))
                    
                    if (*result_3 s>= *(arg1 + 0x58))
                        goto label_142a7504d
                    
                    if (sub_142a7b5d0(rax_74).b != 0)
                        goto label_142a76d78
                    
                    goto label_142a7504d
                case 0x2a7511f
                    void* const r8_24 = *result_3
                    
                    if (r8_24 s<= *(arg1 + 0x50))
                        goto label_142a76d78
                    
                    void* rcx_63 = *(arg1 + 0x20)
                    void* rdx_44 = r8_24 - *(rcx_63 + 0x20)
                    
                    if (r8_24 - *(rcx_63 + 0x20) s< 0 || rdx_44 s>= sx.q(*(rcx_63 + 0x1c))
                            || *(*(rcx_63 + 0x30) + (rdx_44 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_63, r8_24)
                    else
                        *(rcx_63 + 0x28) = rdx_44.d
                    
                    void* rdx_46 = *(arg1 + 0x20)
                    int32_t r8_25 = *(rdx_46 + 0x28)
                    
                    if (r8_25 s<= 0 || *(*(rdx_46 + 0x30) + (sx.q(r8_25 - 1) << 1)) u>= 0xd800)
                        result = sub_142aeabf0(rdx_46)
                    else
                        *(rdx_46 + 0x28) = r8_25 - 1
                        result = zx.q(*(*(*(arg1 + 0x20) + 0x30) + (sx.q(r8_25 - 1) << 1)))
                    
                    goto label_142a7503e
                case 0x2a7519d
                    result, zmm0_1 = sub_142a7b6e0(arg1, *result_3, zmm0_1)
                    result.b ^= rbp_2.d != 0
                    
                    if (result.b != 0)
                        goto label_142a76d78
                    
                    goto label_142a7504d
                case 0x2a751bb
                    result, zmm0_1 = sub_142a7b600(arg1, *result_3)
                    result.b ^= rbp_2.d != 0
                    
                    if (result.b != 0)
                        goto label_142a76d78
                    
                    goto label_142a7504d
                case 0x2a751d9
                    void* const r8_27 = *result_3
                    
                    if (r8_27 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                    label_142a7504d:
                        void* r8_20 = *(arg1 + 0xb0)
                        int64_t rdx_37 = sx.q(*(arg1 + 0x38))
                        int32_t temp49_1 = *(r8_20 + 8)
                        *(r8_20 + 8) -= rdx_37.d
                        int32_t rax_69 = *(r8_20 + 8)
                        
                        if (temp49_1 - rdx_37.d s< 0)
                            rax_69 = 0
                        
                        *(r8_20 + 8) = rax_69
                        rcx_11 = sx.q(rax_69) - rdx_37
                        result = *(r8_20 + 0x18)
                        goto label_142a749db
                    
                    void* rcx_71 = *(arg1 + 0x20)
                    void* rdx_51 = r8_27 - *(rcx_71 + 0x20)
                    
                    if (r8_27 - *(rcx_71 + 0x20) s< 0 || rdx_51 s>= sx.q(*(rcx_71 + 0x1c))
                            || *(*(rcx_71 + 0x30) + (rdx_51 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_71, r8_27)
                    else
                        *(rcx_71 + 0x28) = rdx_51.d
                    
                    void* rdx_53 = *(arg1 + 0x20)
                    int64_t r8_28 = sx.q(*(rdx_53 + 0x28))
                    int16_t r9_6
                    
                    if (r8_28.d s< *(rdx_53 + 0x2c))
                        r9_6 = *(*(rdx_53 + 0x30) + (r8_28 << 1))
                    
                    uint32_t rcx_72
                    
                    if (r8_28.d s>= *(rdx_53 + 0x2c) || r9_6 u>= 0xd800)
                        rcx_72 = sub_142aea870(rdx_53, zmm0_1)
                    else
                        rcx_72 = zx.d(r9_6)
                        *(rdx_53 + 0x28) = (r8_28 + 1).d
                    
                    if (sub_142a53dd0(rcx_72) == 9 == rbp_2.d != 0)
                        goto label_142a749b9
                    
                    goto label_142a74a58
                case 0x2a7526d
                    char rcx_75 = *(arg1 + 0x82)
                    
                    if (rcx_75 == 0)
                    label_142a75291:
                        result = *(arg1 + 0x70)
                        goto label_142a7507b
                    
                    if (*result_3 == *(arg1 + 0x90))
                        goto label_142a76d78
                    
                    if (rcx_75 != 0)
                        goto label_142a7504d
                    
                    goto label_142a75291
                case 0x2a7529a
                    void* const r8_29 = *result_3
                    
                    if (r8_29 s>= *(arg1 + 0x78))
                    label_142a752a4:
                        *(arg1 + 0xa8) = 1
                        goto label_142a749b9
                    
                    void* rcx_76 = *(arg1 + 0x20)
                    void* rdx_55 = r8_29 - *(rcx_76 + 0x20)
                    
                    if (r8_29 - *(rcx_76 + 0x20) s< 0 || rdx_55 s>= sx.q(*(rcx_76 + 0x1c))
                            || *(*(rcx_76 + 0x30) + (rdx_55 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_76, r8_29)
                    else
                        *(rcx_76 + 0x28) = rdx_55.d
                    
                    void* rdx_57 = *(arg1 + 0x20)
                    int64_t r8_30 = sx.q(*(rdx_57 + 0x28))
                    int16_t r9_7
                    
                    if (r8_30.d s< *(rdx_57 + 0x2c))
                        r9_7 = *(*(rdx_57 + 0x30) + (r8_30 << 1))
                    
                    uint32_t rbx_4
                    
                    if (r8_30.d s>= *(rdx_57 + 0x2c) || r9_7 u>= 0xd800)
                        rbx_4 = sub_142aea870(rdx_57, zmm0_1)
                    else
                        rbx_4 = zx.d(r9_7)
                        *(rdx_57 + 0x28) = (r8_30 + 1).d
                    
                    char rcx_79
                    
                    if (sub_142a53dd0(rbx_4) == 0xc || rbx_4 == 9)
                        rcx_79 = 1
                    else
                        rcx_79 = 0
                    
                    if (rbp_2.d != 0 == rcx_79)
                        goto label_142a7504d
                    
                    goto label_142a74a58
                case 0x2a7533a
                    void* const r8_31 = *result_3
                    
                    if (r8_31 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                    label_142a749b9:
                        rdx = *(arg1 + 0xb0)
                        rax_8 = sx.q(*(arg1 + 0x38))
                        int32_t temp0_1 = *(rdx + 8)
                        *(rdx + 8) -= rax_8.d
                        int32_t rcx_9 = *(rdx + 8)
                        
                        if (temp0_1 - rax_8.d s< 0)
                            rcx_9 = 0
                        
                        *(rdx + 8) = rcx_9
                        rcx_10 = sx.q(rcx_9)
                    label_142a749d4:
                        rcx_11 = rcx_10 - rax_8
                        result = *(rdx + 0x18)
                    label_142a749db:
                        result_3 = &result[rcx_11]
                        goto label_142a76d78
                    
                    void* rcx_80 = *(arg1 + 0x20)
                    void* rdx_59 = r8_31 - *(rcx_80 + 0x20)
                    
                    if (r8_31 - *(rcx_80 + 0x20) s< 0 || rdx_59 s>= sx.q(*(rcx_80 + 0x1c))
                            || *(*(rcx_80 + 0x30) + (rdx_59 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_80, r8_31)
                    else
                        *(rcx_80 + 0x28) = rdx_59.d
                    
                    void* rdx_61 = *(arg1 + 0x20)
                    int64_t r8_32 = sx.q(*(rdx_61 + 0x28))
                    int16_t r9_8
                    
                    if (r8_32.d s< *(rdx_61 + 0x2c))
                        r9_8 = *(*(rdx_61 + 0x30) + (r8_32 << 1))
                    
                    uint32_t rcx_81
                    
                    if (r8_32.d s>= *(rdx_61 + 0x2c) || r9_8 u>= 0xd800)
                        rcx_81 = sub_142aea870(rdx_61, zmm0_1)
                    else
                        rcx_81 = zx.d(r9_8)
                        *(rdx_61 + 0x28) = (r8_32 + 1).d
                    
                    if (sub_142a7b5d0(rcx_81) == 0)
                        goto label_142a749b9
                    
                    if (rcx_81 == 0xd && sub_142aea4f0(*(arg1 + 0x20), zmm0_1) == 0xa)
                        sub_142aea870(*(arg1 + 0x20), zmm0_1)
                    
                    goto label_142a74a58
                case 0x2a753e8
                    void* const r8_33 = *result_3
                    
                    if (r8_33 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                        goto label_142a7504d
                    
                    void* rcx_85 = *(arg1 + 0x20)
                    void* rdx_63 = r8_33 - *(rcx_85 + 0x20)
                    
                    if (r8_33 - *(rcx_85 + 0x20) s< 0 || rdx_63 s>= sx.q(*(rcx_85 + 0x1c))
                            || *(*(rcx_85 + 0x30) + (rdx_63 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_85, r8_33)
                    else
                        *(rcx_85 + 0x28) = rdx_63.d
                    
                    void* rdx_65 = *(arg1 + 0x20)
                    int64_t r8_34 = sx.q(*(rdx_65 + 0x28))
                    int16_t r9_9
                    
                    if (r8_34.d s< *(rdx_65 + 0x2c))
                        r9_9 = *(*(rdx_65 + 0x30) + (r8_34 << 1))
                    
                    uint32_t rcx_86
                    
                    if (r8_34.d s>= *(rdx_65 + 0x2c) || r9_9 u>= 0xd800)
                        rcx_86 = sub_142aea870(rdx_65, zmm0_1)
                    else
                        rcx_86 = zx.d(r9_9)
                        *(rdx_65 + 0x28) = (r8_34 + 1).d
                    
                    char rax_103 = sub_142a7b5d0(rcx_86)
                    rcx_86.b = rbp_2.d != 0
                    
                    if (rax_103 == rcx_86.b)
                        goto label_142a7504d
                    
                    goto label_142a74a58
                case 0x2a75477
                    void* const r8_35 = *result_3
                    
                    if (r8_35 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                        goto label_142a749b9
                    
                    void* rcx_88 = *(arg1 + 0x20)
                    void* rdx_67 = r8_35 - *(rcx_88 + 0x20)
                    
                    if (r8_35 - *(rcx_88 + 0x20) s< 0 || rdx_67 s>= sx.q(*(rcx_88 + 0x1c))
                            || *(*(rcx_88 + 0x30) + (rdx_67 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_88, r8_35)
                    else
                        *(rcx_88 + 0x28) = rdx_67.d
                    
                    void* rdx_69 = *(arg1 + 0x20)
                    int64_t r8_36 = sx.q(*(rdx_69 + 0x28))
                    int16_t r9_10
                    
                    if (r8_36.d s< *(rdx_69 + 0x2c))
                        r9_10 = *(*(rdx_69 + 0x30) + (r8_36 << 1))
                    
                    uint32_t rbx_5
                    
                    if (r8_36.d s>= *(rdx_69 + 0x2c) || r9_10 u>= 0xd800)
                        rbx_5 = sub_142aea870(rdx_69, zmm0_1)
                    else
                        rbx_5 = zx.d(r9_10)
                        *(rdx_69 + 0x28) = (r8_36 + 1).d
                    
                    void* rcx_90 = *(arg1 + 0x20)
                    int64_t rax_109 = sx.q(*(rcx_90 + 0x28))
                    void* rax_110
                    
                    if (rax_109.d s> *(rcx_90 + 0x1c))
                        rax_110 = (*(*(rcx_90 + 0x38) + 0x40))()
                    else
                        rax_110 = rax_109 + *(rcx_90 + 0x20)
                    
                    *result_3 = rax_110
                    void* rsi_3 = *(*(arg1 + 8) + 0x90)
                    char rax_113
                    rax_113, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x28), zx.q(rbx_5))
                    
                    if (rax_113 != 0)
                    label_142a7581e:
                        
                        if (*result_3 s< *(arg1 + 0x78))
                            void* i_1
                            
                            do
                                void* rdx_92 = *(arg1 + 0x20)
                                int64_t rax_162 = sx.q(*(rdx_92 + 0x28))
                                int16_t r8_43
                                
                                if (rax_162.d s< *(rdx_92 + 0x2c))
                                    r8_43 = *(*(rdx_92 + 0x30) + (rax_162 << 1))
                                
                                uint32_t rax_164
                                
                                if (rax_162.d s>= *(rdx_92 + 0x2c) || r8_43 u>= 0xd800)
                                    rax_164 = sub_142aea4f0(rdx_92, zmm0_1)
                                else
                                    rax_164 = zx.d(r8_43)
                                
                                char rax_165
                                rax_165, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x30), zx.q(rax_164))
                                
                                if (rax_165 == 0)
                                    break
                                
                                void* rdx_94 = *(arg1 + 0x20)
                                int64_t r8_44 = sx.q(*(rdx_94 + 0x28))
                                
                                if (r8_44.d s>= *(rdx_94 + 0x2c)
                                        || *(*(rdx_94 + 0x30) + (r8_44 << 1)) u>= 0xd800)
                                    sub_142aea870(rdx_94, zmm0_1)
                                else
                                    *(rdx_94 + 0x28) = (r8_44 + 1).d
                                
                                void* rcx_121 = *(arg1 + 0x20)
                                int64_t rax_168 = sx.q(*(rcx_121 + 0x28))
                                
                                if (rax_168.d s> *(rcx_121 + 0x1c))
                                    i_1 = (*(*(rcx_121 + 0x38) + 0x40))()
                                else
                                    i_1 = rax_168 + *(rcx_121 + 0x20)
                                
                                *result_3 = i_1
                            while (i_1 s< *(arg1 + 0x78))
                    else
                        char rax_114
                        rax_114, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x38), zx.q(rbx_5))
                        
                        if (rax_114 == 0)
                            char rax_124
                            rax_124, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x40), zx.q(rbx_5))
                            
                            if (rax_124 == 0)
                                char rax_136
                                rax_136, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x48), zx.q(rbx_5))
                                
                                if (rax_136 == 0)
                                    char rax_137
                                    rax_137, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x50), zx.q(rbx_5))
                                    
                                    if (rax_137 != 0)
                                        goto label_142a75764
                                    
                                    char rax_138
                                    rax_138, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x58), zx.q(rbx_5))
                                    
                                    if (rax_138 != 0)
                                        goto label_142a756e9
                                    
                                    char rax_139
                                    rax_139, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x60), zx.q(rbx_5))
                                    
                                    if (rax_139 != 0)
                                        goto label_142a75764
                                    
                                    goto label_142a7581e
                                
                            label_142a756e9:
                                
                                while (*result_3 s< *(arg1 + 0x78))
                                    void* rdx_85 = *(arg1 + 0x20)
                                    int64_t r8_40 = sx.q(*(rdx_85 + 0x28))
                                    int16_t r9_12
                                    
                                    if (r8_40.d s< *(rdx_85 + 0x2c))
                                        r9_12 = *(*(rdx_85 + 0x30) + (r8_40 << 1))
                                    
                                    uint32_t rbx_7
                                    
                                    if (r8_40.d s>= *(rdx_85 + 0x2c) || r9_12 u>= 0xd800)
                                        rbx_7 = sub_142aea870(rdx_85, zmm0_1)
                                    else
                                        rbx_7 = zx.d(r9_12)
                                        *(rdx_85 + 0x28) = (r8_40 + 1).d
                                    
                                    void* rcx_109 = *(arg1 + 0x20)
                                    int64_t rdx_86 = sx.q(*(rcx_109 + 0x28))
                                    void* rax_145
                                    
                                    if (rdx_86.d s> *(rcx_109 + 0x1c))
                                        rax_145 = (*(*(rcx_109 + 0x38) + 0x40))()
                                    else
                                        rax_145 = rdx_86 + *(rcx_109 + 0x20)
                                    
                                    *result_3 = rax_145
                                    char rax_147
                                    rax_147, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x58), zx.q(rbx_7))
                                    
                                    if (rax_147 == 0)
                                        while (true)
                                            char rax_155
                                            rax_155, zmm0_1 =
                                                sub_142a9f280(*(rsi_3 + 0x60), zx.q(rbx_7))
                                            
                                            if (rax_155 == 0)
                                                goto label_142a757d2
                                            
                                        label_142a75764:
                                            
                                            if (*result_3 s>= *(arg1 + 0x78))
                                                break
                                            
                                            void* rdx_88 = *(arg1 + 0x20)
                                            int64_t r8_41 = sx.q(*(rdx_88 + 0x28))
                                            int16_t r9_13
                                            
                                            if (r8_41.d s< *(rdx_88 + 0x2c))
                                                r9_13 = *(*(rdx_88 + 0x30) + (r8_41 << 1))
                                            
                                            if (r8_41.d s>= *(rdx_88 + 0x2c) || r9_13 u>= 0xd800)
                                                rbx_7 = sub_142aea870(rdx_88, zmm0_1)
                                            else
                                                rbx_7 = zx.d(r9_13)
                                                *(rdx_88 + 0x28) = (r8_41 + 1).d
                                            
                                            void* rcx_112 = *(arg1 + 0x20)
                                            int64_t rdx_89 = sx.q(*(rcx_112 + 0x28))
                                            void* rax_153
                                            
                                            if (rdx_89.d s> *(rcx_112 + 0x1c))
                                                rax_153 = (*(*(rcx_112 + 0x38) + 0x40))()
                                            else
                                                rax_153 = rdx_89 + *(rcx_112 + 0x20)
                                            
                                            *result_3 = rax_153
                                        
                                        break
                            else
                                while (*result_3 s< *(arg1 + 0x78))
                                    void* rdx_75 = *(arg1 + 0x20)
                                    int64_t r8_39 = sx.q(*(rdx_75 + 0x28))
                                    int16_t r9_11
                                    
                                    if (r8_39.d s< *(rdx_75 + 0x2c))
                                        r9_11 = *(*(rdx_75 + 0x30) + (r8_39 << 1))
                                    
                                    uint32_t rbx_6
                                    
                                    if (r8_39.d s>= *(rdx_75 + 0x2c) || r9_11 u>= 0xd800)
                                        rbx_6 = sub_142aea870(rdx_75, zmm0_1)
                                    else
                                        rbx_6 = zx.d(r9_11)
                                        *(rdx_75 + 0x28) = (r8_39 + 1).d
                                    
                                    void* rcx_99 = *(arg1 + 0x20)
                                    int64_t rdx_76 = sx.q(*(rcx_99 + 0x28))
                                    void* rax_130
                                    
                                    if (rdx_76.d s> *(rcx_99 + 0x1c))
                                        rax_130 = (*(*(rcx_99 + 0x38) + 0x40))()
                                    else
                                        rax_130 = rdx_76 + *(rcx_99 + 0x20)
                                    
                                    *result_3 = rax_130
                                    char rax_132
                                    rax_132, zmm0_1 = sub_142a9f280(*(rsi_3 + 0x40), zx.q(rbx_6))
                                    
                                    if (rax_132 == 0)
                                        char rax_133
                                        rax_133, zmm0_1 =
                                            sub_142a9f280(*(rsi_3 + 0x48), zx.q(rbx_6))
                                        
                                        if (rax_133 != 0)
                                            goto label_142a756e9
                                        
                                        char rax_134
                                        rax_134, zmm0_1 =
                                            sub_142a9f280(*(rsi_3 + 0x50), zx.q(rbx_6))
                                        
                                        if (rax_134 != 0)
                                            goto label_142a75764
                                        
                                        char rax_135
                                        rax_135, zmm0_1 =
                                            sub_142a9f280(*(rsi_3 + 0x58), zx.q(rbx_6))
                                        
                                        if (rax_135 != 0)
                                            goto label_142a756e9
                                        
                                    label_142a757d2:
                                        void* rdx_91 = *(arg1 + 0x20)
                                        int32_t rax_156 = *(rdx_91 + 0x28)
                                        
                                        if (rax_156 s<= 0
                                                || *(*(rdx_91 + 0x30) + (sx.q(rax_156 - 1) << 1))
                                                u>= 0xd800)
                                            sub_142aeabf0(rdx_91)
                                        else
                                            *(rdx_91 + 0x28) = rax_156 - 1
                                        
                                        void* rcx_116 = *(arg1 + 0x20)
                                        int64_t rax_158 = sx.q(*(rcx_116 + 0x28))
                                        void* rax_159
                                        
                                        if (rax_158.d s> *(rcx_116 + 0x1c))
                                            rax_159 = (*(*(rcx_116 + 0x38) + 0x40))()
                                        else
                                            rax_159 = rax_158 + *(rcx_116 + 0x20)
                                        
                                        *result_3 = rax_159
                                        goto label_142a7581e
                        else if (rbx_5 == 0xd && *result_3 s< *(arg1 + 0x78))
                            void* rdx_72 = *(arg1 + 0x20)
                            int64_t rax_116 = sx.q(*(rdx_72 + 0x28))
                            int16_t r8_37
                            
                            if (rax_116.d s< *(rdx_72 + 0x2c))
                                r8_37 = *(*(rdx_72 + 0x30) + (rax_116 << 1))
                            
                            uint32_t rax_118
                            
                            if (rax_116.d s>= *(rdx_72 + 0x2c) || r8_37 u>= 0xd800)
                                rax_118 = sub_142aea4f0(rdx_72, zmm0_1)
                            else
                                rax_118 = zx.d(r8_37)
                            
                            if (rax_118 == 0xa)
                                void* rdx_73 = *(arg1 + 0x20)
                                int64_t r8_38 = sx.q(*(rdx_73 + 0x28))
                                
                                if (r8_38.d s>= *(rdx_73 + 0x2c)
                                        || *(*(rdx_73 + 0x30) + (r8_38 << 1)) u>= 0xd800)
                                    sub_142aea870(rdx_73, zmm0_1)
                                else
                                    *(rdx_73 + 0x28) = (r8_38 + 1).d
                                
                                void* rcx_96 = *(arg1 + 0x20)
                                int64_t rax_121 = sx.q(*(rcx_96 + 0x28))
                                void* rax_122
                                
                                if (rax_121.d s> *(rcx_96 + 0x1c))
                                    rax_122 = (*(*(rcx_96 + 0x38) + 0x40))()
                                else
                                    rax_122 = rax_121 + *(rcx_96 + 0x20)
                                
                                *result_3 = rax_122
                    
                    if (*result_3 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                    
                    goto label_142a76d78
                case 0x2a758e0
                    if (*result_3 s>= *(arg1 + 0x58))
                        goto label_142a74c93
                    
                    goto label_142a749b9
                case 0x2a758f3
                    void* const r8_45 = *result_3
                    
                    if (r8_45 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                        goto label_142a749b9
                    
                    uint8_t rbx_9 = (rbp_2.d u>> 0x17).b & 1
                    uint64_t rbp_4 = zx.q(rbp_2.d) & 0xff7fffff
                    void* rcx_122 = *(arg1 + 0x20)
                    void* rdx_96 = r8_45 - *(rcx_122 + 0x20)
                    
                    if (r8_45 - *(rcx_122 + 0x20) s< 0 || rdx_96 s>= sx.q(*(rcx_122 + 0x1c))
                            || *(*(rcx_122 + 0x30) + (rdx_96 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_122, r8_45)
                    else
                        *(rcx_122 + 0x28) = rdx_96.d
                    
                    void* rdx_98 = *(arg1 + 0x20)
                    int64_t r8_46 = sx.q(*(rdx_98 + 0x28))
                    int16_t r9_14
                    
                    if (r8_46.d s< *(rdx_98 + 0x2c))
                        r9_14 = *(*(rdx_98 + 0x30) + (r8_46 << 1))
                    
                    uint32_t r9_15
                    
                    if (r8_46.d s>= *(rdx_98 + 0x2c) || r9_14 u>= 0xd800)
                        r9_15 = sub_142aea870(rdx_98, zmm0_1)
                    else
                        r9_15 = zx.d(r9_14)
                        *(rdx_98 + 0x28) = (r8_46 + 1).d
                    
                    uint64_t r8_47 = zx.q(rbp_4.d)
                    
                    if (r9_15 s>= 0x100)
                        char rax_176
                        rax_176, zmm0_1 = sub_142a9f280(*(*(*(arg1 + 8) + 0x90) + (rbp_4 << 3)), 
                            zx.q(r9_15), r8_47)
                        
                        if (rax_176 != 0)
                            rbx_9 = rbx_9 == 0
                    else if (test_bit(
                            sx.d(*((r8_47 << 5) + (sx.q(r9_15) s>> 3) + *(*(arg1 + 8) + 0x98))), 
                            r9_15 & 7))
                        rbx_9 = rbx_9 == 0
                    
                    if (rbx_9 == 0)
                        goto label_142a7504d
                    
                    goto label_142a74a58
                case 0x2a759db
                    void* const r8_50 = *result_3
                    
                    if (r8_50 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                        goto label_142a7504d
                    
                    void* rcx_130 = *(arg1 + 0x20)
                    void* rdx_102 = r8_50 - *(rcx_130 + 0x20)
                    
                    if (r8_50 - *(rcx_130 + 0x20) s< 0 || rdx_102 s>= sx.q(*(rcx_130 + 0x1c))
                            || *(*(rcx_130 + 0x30) + (rdx_102 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_130, r8_50)
                    else
                        *(rcx_130 + 0x28) = rdx_102.d
                    
                    void* rdx_104 = *(arg1 + 0x20)
                    int64_t r8_51 = sx.q(*(rdx_104 + 0x28))
                    int16_t r9_17
                    
                    if (r8_51.d s< *(rdx_104 + 0x2c))
                        r9_17 = *(*(rdx_104 + 0x30) + (r8_51 << 1))
                    
                    uint32_t r9_18
                    
                    if (r8_51.d s>= *(rdx_104 + 0x2c) || r9_17 u>= 0xd800)
                        r9_18 = sub_142aea870(rdx_104, zmm0_1)
                    else
                        r9_18 = zx.d(r9_17)
                        *(rdx_104 + 0x28) = (r8_51 + 1).d
                    
                    if (r9_18 s< 0x100)
                        if (test_bit(
                                sx.d(*((sx.q(r9_18) s>> 3) + (zx.q(rbp_2.d) << 5)
                                    + *(*(arg1 + 8) + 0x98))), 
                                r9_18 & 7))
                            goto label_142a7504d
                        
                        goto label_142a74a58
                    
                    char rax_183
                    rax_183, zmm0_1 = sub_142a9f280(*(*(*(arg1 + 8) + 0x90) + (rbp_2 << 3)), 
                        zx.q(r9_18), zx.q(rbp_2.d))
                    
                    if (rax_183 != 0)
                        goto label_142a7504d
                    
                    goto label_142a74a58
                case 0x2a75ab7
                    void* const r8_56 = *result_3
                    
                    if (r8_56 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                        goto label_142a7504d
                    
                    void* rcx_138 = *(arg1 + 0x20)
                    void* rdx_108 = r8_56 - *(rcx_138 + 0x20)
                    
                    if (r8_56 - *(rcx_138 + 0x20) s< 0 || rdx_108 s>= sx.q(*(rcx_138 + 0x1c))
                            || *(*(rcx_138 + 0x30) + (rdx_108 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_138, r8_56)
                    else
                        *(rcx_138 + 0x28) = rdx_108.d
                    
                    void* rdx_110 = *(arg1 + 0x20)
                    int64_t r8_57 = sx.q(*(rdx_110 + 0x28))
                    int16_t r9_20
                    
                    if (r8_57.d s< *(rdx_110 + 0x2c))
                        r9_20 = *(*(rdx_110 + 0x30) + (r8_57 << 1))
                    
                    uint32_t rbx_10
                    
                    if (r8_57.d s>= *(rdx_110 + 0x2c) || r9_20 u>= 0xd800)
                        rbx_10 = sub_142aea870(rdx_110, zmm0_1)
                    else
                        rbx_10 = zx.d(r9_20)
                        *(rdx_110 + 0x28) = (r8_57 + 1).d
                    
                    if (rbx_10 s< 0x100)
                        if (not(test_bit(
                                sx.d(*((sx.q(rbx_10) s>> 3) + (zx.q(rbp_2.d) << 5)
                                    + *(*(arg1 + 8) + 0x70))), 
                                rbx_10 & 7)))
                            goto label_142a7504d
                        
                        goto label_142a74a58
                    
                    char rax_190
                    rax_190, zmm0_1 = sub_142a9f280(sub_142ae72d0(r14_1, rbp_2.d), zx.q(rbx_10))
                    
                    if (rax_190 == 0)
                        goto label_142a7504d
                    
                    goto label_142a74a58
                case 0x2a75b86
                    void* const r8_61 = *result_3
                    
                    if (r8_61 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                        goto label_142a749b9
                    
                    void* rcx_146 = *(arg1 + 0x20)
                    void* rdx_115 = r8_61 - *(rcx_146 + 0x20)
                    
                    if (r8_61 - *(rcx_146 + 0x20) s< 0 || rdx_115 s>= sx.q(*(rcx_146 + 0x1c))
                            || *(*(rcx_146 + 0x30) + (rdx_115 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_146, r8_61)
                    else
                        *(rcx_146 + 0x28) = rdx_115.d
                    
                    void* rdx_117 = *(arg1 + 0x20)
                    int64_t r8_62 = sx.q(*(rdx_117 + 0x28))
                    int16_t r9_21
                    
                    if (r8_62.d s< *(rdx_117 + 0x2c))
                        r9_21 = *(*(rdx_117 + 0x30) + (r8_62 << 1))
                    
                    uint32_t rcx_147
                    
                    if (r8_62.d s>= *(rdx_117 + 0x2c) || r9_21 u>= 0xd800)
                        rcx_147 = sub_142aea870(rdx_117, zmm0_1)
                    else
                        rcx_147 = zx.d(r9_21)
                        *(rdx_117 + 0x28) = (r8_62 + 1).d
                    
                    if (sub_142a7b5d0(rcx_147) == 0)
                        goto label_142a74a58
                    
                    goto label_142a7504d
                case 0x2a75c10
                    void* const r8_63 = *result_3
                    
                    if (r8_63 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                        goto label_142a749b9
                    
                    void* rcx_149 = *(arg1 + 0x20)
                    void* rdx_119 = r8_63 - *(rcx_149 + 0x20)
                    
                    if (r8_63 - *(rcx_149 + 0x20) s< 0 || rdx_119 s>= sx.q(*(rcx_149 + 0x1c))
                            || *(*(rcx_149 + 0x30) + (rdx_119 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_149, r8_63)
                    else
                        *(rcx_149 + 0x28) = rdx_119.d
                    
                    void* rdx_121 = *(arg1 + 0x20)
                    int64_t r8_64 = sx.q(*(rdx_121 + 0x28))
                    int16_t r9_22
                    
                    if (r8_64.d s< *(rdx_121 + 0x2c))
                        r9_22 = *(*(rdx_121 + 0x30) + (r8_64 << 1))
                    
                    uint32_t rbx_12
                    
                    if (r8_64.d s>= *(rdx_121 + 0x2c) || r9_22 u>= 0xd800)
                        rbx_12 = sub_142aea870(rdx_121, zmm0_1)
                    else
                        rbx_12 = zx.d(r9_22)
                        *(rdx_121 + 0x28) = (r8_64 + 1).d
                    
                    void* rcx_151 = *(arg1 + 0x20)
                    int64_t rdx_122 = sx.q(*(rcx_151 + 0x28))
                    
                    if (rdx_122.d s> *(rcx_151 + 0x1c))
                        result = (*(*(rcx_151 + 0x38) + 0x40))()
                    else
                        result = rdx_122 + *(rcx_151 + 0x20)
                    
                    *result_3 = result
                    
                    if (rbx_12 != 0xd || result s>= *(arg1 + 0x78))
                        goto label_142a76d78
                    
                    void* rdx_123 = *(arg1 + 0x20)
                    int64_t rax_204 = sx.q(*(rdx_123 + 0x28))
                    int16_t result_2
                    
                    if (rax_204.d s< *(rdx_123 + 0x2c))
                        result_2 = *(*(rdx_123 + 0x30) + (rax_204 << 1))
                    
                    if (rax_204.d s>= *(rdx_123 + 0x2c) || result_2 u>= 0xd800)
                        result = sub_142aea4f0(rdx_123, zmm0_1)
                    else
                        result = zx.q(result_2)
                    
                    if (result.d != 0xa)
                        goto label_142a76d78
                    
                    void* rdx_124 = *(arg1 + 0x20)
                    int64_t r8_65 = sx.q(*(rdx_124 + 0x28))
                    
                    if (r8_65.d s>= *(rdx_124 + 0x2c)
                            || *(*(rdx_124 + 0x30) + (r8_65 << 1)) u>= 0xd800)
                        sub_142aea870(rdx_124, zmm0_1)
                    else
                        *(rdx_124 + 0x28) = (r8_65 + 1).d
                    
                    goto label_142a74a58
                case 0x2a75d24
                    void* const r8_66 = *result_3
                    
                    if (r8_66 s>= *(arg1 + 0x78))
                        *(arg1 + 0xa8) = 1
                        goto label_142a7504d
                    
                    void* rcx_155 = *(arg1 + 0x20)
                    void* rdx_126 = r8_66 - *(rcx_155 + 0x20)
                    
                    if (r8_66 - *(rcx_155 + 0x20) s< 0 || rdx_126 s>= sx.q(*(rcx_155 + 0x1c))
                            || *(*(rcx_155 + 0x30) + (rdx_126 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_155, r8_66)
                    else
                        *(rcx_155 + 0x28) = rdx_126.d
                    
                    void* rdx_128 = *(arg1 + 0x20)
                    int64_t r8_67 = sx.q(*(rdx_128 + 0x28))
                    int16_t r9_23
                    
                    if (r8_67.d s< *(rdx_128 + 0x2c))
                        r9_23 = *(*(rdx_128 + 0x30) + (r8_67 << 1))
                    
                    uint32_t rcx_156
                    
                    if (r8_67.d s>= *(rdx_128 + 0x2c) || r9_23 u>= 0xd800)
                        rcx_156 = sub_142aea870(rdx_128, zmm0_1)
                    else
                        rcx_156 = zx.d(r9_23)
                        *(rdx_128 + 0x28) = (r8_67 + 1).d
                    
                    if (rcx_156 != 0xa)
                        goto label_142a74a58
                    
                    goto label_142a749b9
                case 0x2a75daa
                    void** result_4
                    result_4, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1], r15)
                    result_3 = result_4
                    result_3[1] = zx.q(rbp_2.d)
                    goto label_142a76d78
                case 0x2a75dcc
                    uint64_t rbx_14 = zx.q(*(r13_1 + (sx.q((rbp_2 - 1).d) << 3))) & 0xffffff
                    
                    if (result_3[rbx_14 + 2] s< *result_3)
                        void** result_5
                        result_5, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1], r15)
                        result_3 = result_5
                        result_3[1] = zx.q(rbp_2.d)
                        result_3[rbx_14 + 2] = *result_3
                    
                    goto label_142a76d78
                case 0x2a75e17
                    result_3[rbp_2 + 2] = 0
                    int64_t rdx_131 = sx.q(result_3[1].d)
                    result_3[1] += 3
                    int32_t rbx_15 = *(r13_1 + (sx.q((rdx_131 + 2).d) << 3))
                    
                    if (*(r13_1 + (sx.q((rdx_131 + 1).d) << 3)) == 0)
                        result, zmm0_1 = sub_142a78ca0(arg1, result_3, 
                            zx.q((*(r13_1 + (rdx_131 << 3)) & 0xffffff) + 1), r15)
                        result_3 = result
                    
                    if (rbx_15 == 0xffffffff)
                        result_3[zx.q((rbp_2 + 1).d) + 2] = *result_3
                        goto label_142a76d78
                    
                    if (rbx_15 != 0)
                        goto label_142a76d78
                    
                    goto label_142a749b9
                case 0x2a75e86
                    int32_t r8_73 = *(r13_1 + (rbp_2 << 3))
                    void* rdx_133 = &result_3[zx.q(r8_73) & 0xffffff]
                    int64_t r10_2 = sx.q(*(r13_1 + (zx.q((rbp_2 + 2).d) << 3)))
                    uint64_t r9_27 = zx.q(*(r13_1 + (zx.q((rbp_2 + 3).d) << 3)))
                    *(rdx_133 + 0x10) += 1
                    int64_t rcx_165 = *(rdx_133 + 0x10)
                    
                    if (rcx_165 u< r9_27 || r9_27.d == 0xffffffff)
                        if (rcx_165 s< r10_2)
                            *(arg1 + 0x110) -= 1
                            
                            if (*(arg1 + 0x110) s<= 0)
                                sub_142a74820(arg1, r15)
                            
                            result_3[1] = zx.q((rbp_2 + 4).d)
                        else
                            if (r9_27.d != 0xffffffff)
                                goto label_142a75efb
                            
                            uint64_t r8_75 = zx.q((r8_73 & 0xffffff) + 1)
                            void* const rcx_166 = *result_3
                            
                            if (rcx_166 != result_3[r8_75 + 2])
                                result_3[r8_75 + 2] = rcx_166
                            label_142a75efb:
                                void** result_6
                                result_6, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1], r15)
                                result_3 = result_6
                                result_3[1] = zx.q((rbp_2 + 4).d)
                    
                    goto label_142a76d78
                case 0x2a75f31
                    result_3[rbp_2 + 2] = 0
                    int64_t rdx_136 = sx.q(result_3[1].d)
                    result_3[1] += 3
                    int32_t rbx_17 = *(r13_1 + (rdx_136 << 3)) & 0xffffff
                    int32_t r8_77 = *(r13_1 + (sx.q((rdx_136 + 1).d) << 3))
                    int32_t rdx_137 = *(r13_1 + (sx.q((rdx_136 + 2).d) << 3))
                    
                    if (rdx_137 == 0xffffffff)
                        result_3[zx.q((rbp_2 + 1).d) + 2] = *result_3
                    
                    if (r8_77 == 0)
                        if (rdx_137 != 0)
                            void** result_7
                            result_7, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1], r15)
                            result_3 = result_7
                        
                        result_3[1] = zx.q(rbx_17 + 1)
                    
                    goto label_142a76d78
                case 0x2a75fa8
                    int32_t r8_79 = *(r13_1 + (rbp_2 << 3))
                    void* rdx_139 = &result_3[zx.q(r8_79) & 0xffffff]
                    int64_t r10_3 = sx.q(*(r13_1 + (zx.q((rbp_2 + 2).d) << 3)))
                    uint64_t r9_30 = zx.q(*(r13_1 + (zx.q((rbp_2 + 3).d) << 3)))
                    *(rdx_139 + 0x10) += 1
                    int64_t rcx_175 = *(rdx_139 + 0x10)
                    
                    if (rcx_175 u>= r9_30 && r9_30.d != 0xffffffff)
                        goto label_142a76d78
                    
                    if (rcx_175 s< r10_3)
                        result_3[1] = zx.q((rbp_2 + 4).d)
                        *(arg1 + 0x110) -= 1
                        
                        if (*(arg1 + 0x110) s<= 0)
                            sub_142a74820(arg1, r15)
                        
                        goto label_142a76d78
                    
                    if (r9_30.d != 0xffffffff)
                        r8_6 = zx.q((rbp_2 + 4).d)
                        goto label_142a74c2c
                    
                    uint64_t r8_81 = zx.q((r8_79 & 0xffffff) + 1)
                    void* const rcx_178 = *result_3
                    
                    if (rcx_178 == result_3[r8_81 + 2])
                        goto label_142a76d78
                    
                    result_3[r8_81 + 2] = rcx_178
                    r8_6 = zx.q((rbp_2 + 4).d)
                    goto label_142a74c2c
                case 0x2a76045
                    (*(arg1 + 0xc0))[rbp_2] = sx.q(*(*(arg1 + 0xb0) + 8))
                    goto label_142a76d78
                case 0x2a76060
                    int64_t r11_1 = sx.q(*(*(arg1 + 0xc0) + (rbp_2 << 3)))
                    int64_t r9_31 = sx.q(*(arg1 + 0x38))
                    int64_t* result_10 = (*(arg1 + 0xb0))[3] + ((r11_1 - r9_31) << 3)
                    
                    if (result_10 != result_3)
                        int32_t i_2 = 0
                        
                        if (r9_31.d s> 0)
                            int64_t* result_12 = result_10
                            
                            do
                                *result_12 = *(result_3 - result_10 + result_12)
                                i_2 += 1
                                result_12 = &result_12[1]
                            while (i_2 s< *(arg1 + 0x38))
                        
                        result_3 = result_10
                        result, zmm0_1 = sub_142aeb430(*(arg1 + 0xb0), r11_1.d)
                    
                    goto label_142a76d78
                case 0x2a760cb
                    int64_t r8_82 = result_3[rbp_2 + 2]
                    int64_t rsi_4 = result_3[zx.q((rbp_2 + 1).d) + 2]
                    
                    if (r8_82 s< 0)
                        goto label_142a74bca
                    
                    void* rcx_181 = *(arg1 + 0x28)
                    int64_t rdx_146 = r8_82 - *(rcx_181 + 0x20)
                    
                    if (r8_82 - *(rcx_181 + 0x20) s< 0 || rdx_146 s>= sx.q(*(rcx_181 + 0x1c))
                            || *(*(rcx_181 + 0x30) + (rdx_146 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_181, r8_82)
                    else
                        *(rcx_181 + 0x28) = rdx_146.d
                    
                    void* rcx_182 = *(arg1 + 0x20)
                    void* const r8_83 = *result_3
                    void* rdx_149 = r8_83 - *(rcx_182 + 0x20)
                    
                    if (r8_83 - *(rcx_182 + 0x20) s< 0 || rdx_149 s>= sx.q(*(rcx_182 + 0x1c))
                            || *(*(rcx_182 + 0x30) + (rdx_149 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_182, r8_83)
                    else
                        *(rcx_182 + 0x28) = rdx_149.d
                    
                    int64_t rax_233
                    rax_233, zmm0_1 = sub_142aea6a0(*(arg1 + 0x28))
                    
                    if (rax_233 s>= rsi_4)
                        goto label_142a74bfd
                    
                    while (true)
                        int64_t rax_234
                        rax_234, zmm0_1 = sub_142aea6a0(*(arg1 + 0x20))
                        
                        if (rax_234 s>= *(arg1 + 0x78))
                            break
                        
                        int32_t rax_235 = sub_142aea870(*(arg1 + 0x28), zmm0_1)
                        
                        if (sub_142aea870(*(arg1 + 0x20), zmm0_1) != rax_235)
                            goto label_142a74bca
                        
                        int64_t rax_237
                        rax_237, zmm0_1 = sub_142aea6a0(*(arg1 + 0x28))
                        
                        if (rax_237 s>= rsi_4)
                            goto label_142a74bfd
                    
                    goto label_142a74bbd
                case 0x2a761a2
                    int64_t rdx_151 = result_3[rbp_2 + 2]
                    int64_t rsi_5 = result_3[zx.q((rbp_2 + 1).d) + 2]
                    
                    if (rdx_151 s< 0)
                        goto label_142a74bca
                    
                    sub_142aeacd0(*(arg1 + 0x28), rdx_151)
                    sub_142aeacd0(*(arg1 + 0x20), *result_3)
                    void var_58
                    sub_142af49a0(&var_58, *(arg1 + 0x28))
                    void var_88
                    sub_142af49a0(&var_88, *(arg1 + 0x20))
                    
                    while (true)
                        char rax_239 = Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::IsValid(
                            &var_58)
                        int64_t rax_240
                        
                        if (rax_239 == 0)
                            rax_240, zmm0_1 = sub_142aea6a0(*(arg1 + 0x28))
                        
                        if (rax_239 == 0 && rax_240 s>= rsi_5)
                            if (Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::IsValid(
                                    &var_88) == 0)
                                void* rcx_199 = *(arg1 + 0x20)
                                int64_t rax_246 = sx.q(*(rcx_199 + 0x28))
                                
                                if (rax_246.d s> *(rcx_199 + 0x1c))
                                    result = (*(*(rcx_199 + 0x38) + 0x40))()
                                else
                                    result = rax_246 + *(rcx_199 + 0x20)
                                
                                *result_3 = result
                                break
                        else
                            char rax_241 = Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::IsValid(
                                &var_88)
                            int64_t rax_242
                            
                            if (rax_241 == 0)
                                rax_242, zmm0_1 = sub_142aea6a0(*(arg1 + 0x20))
                            
                            if (rax_241 == 0 && rax_242 s>= *(arg1 + 0x78))
                                *(arg1 + 0xa8) = 1
                            else
                                int32_t rax_243 = sub_142af4af0(&var_58, zmm0_1)
                                
                                if (sub_142af4af0(&var_88, zmm0_1) == rax_243)
                                    continue
                        
                        int64_t rdx_155 = sx.q(*(arg1 + 0x38))
                        void* r8_84 = *(arg1 + 0xb0)
                        int32_t temp69_1 = *(r8_84 + 8)
                        *(r8_84 + 8) -= rdx_155.d
                        int32_t rax_248 = *(r8_84 + 8)
                        
                        if (temp69_1 - rdx_155.d s< 0)
                            rax_248 = 0
                        
                        *(r8_84 + 8) = rax_248
                        result_3 = &(*(r8_84 + 0x18))[sx.q(rax_248) - rdx_155]
                        break
                    
                    goto label_142a76d78
                case 0x2a762c1
                    result_3[rbp_2 + 2] = *result_3
                    goto label_142a76d78
                case 0x2a762cf
                    int64_t rax_249 = sx.q(result_3[1].d)
                    result_3[1] += 1
                    
                    if (result_3[(zx.q(*(r13_1 + (rax_249 << 3))) & 0xffffff) + 2] s>= *result_3)
                        goto label_142a749b9
                    
                    goto label_142a762f5
                case 0x2a762f3
                label_142a762f5:
                    result_3[1] = zx.q(rbp_2.d)
                    goto label_142a76d78
                case 0x2a762ff
                    *(*(arg1 + 0xc0) + (rbp_2 << 3)) = sx.q(*(*(arg1 + 0xb0) + 8))
                    *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 1).d) << 3)) = *result_3
                    *(arg1 + 0x70) = *(arg1 + 0x60)
                    *(arg1 + 0x78) = *(arg1 + 0x68)
                    goto label_142a76d78
                case 0x2a7633c
                    int64_t r9_32 = sx.q(*(*(arg1 + 0xc0) + (rbp_2 << 3)))
                    void* r8_85 = *(arg1 + 0xb0)
                    
                    if (*(r8_85 + 8) s> r9_32.d)
                        int64_t rdx_158 = sx.q(*(arg1 + 0x38))
                        int64_t* result_11 = *(r8_85 + 0x18) + ((r9_32 - rdx_158) << 3)
                        int32_t i_3 = 0
                        
                        if (rdx_158.d s> 0)
                            int64_t* result_13 = result_11
                            
                            do
                                *result_13 = *(result_3 - result_11 + result_13)
                                i_3 += 1
                                result_13 = &result_13[1]
                            while (i_3 s< *(arg1 + 0x38))
                        
                        result_3 = result_11
                        zmm0_1 = sub_142aeb430(*(arg1 + 0xb0), r9_32.d)
                    
                    *result_3 = *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 1).d) << 3))
                    *(arg1 + 0x70) = *(arg1 + 0x40)
                    *(arg1 + 0x78) = *(arg1 + 0x48)
                    goto label_142a76d78
                case 0x2a763d0
                    void* const r8_86 = *result_3
                    
                    if (r8_86 s>= *(arg1 + 0x78))
                        goto label_142a752a4
                    
                    void* rcx_210 = *(arg1 + 0x20)
                    void* rdx_161 = r8_86 - *(rcx_210 + 0x20)
                    
                    if (r8_86 - *(rcx_210 + 0x20) s< 0 || rdx_161 s>= sx.q(*(rcx_210 + 0x1c))
                            || *(*(rcx_210 + 0x30) + (rdx_161 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_210, r8_86)
                    else
                        *(rcx_210 + 0x28) = rdx_161.d
                    
                    void* rdx_163 = *(arg1 + 0x20)
                    int64_t r8_87 = sx.q(*(rdx_163 + 0x28))
                    int16_t r9_33
                    
                    if (r8_87.d s< *(rdx_163 + 0x2c))
                        r9_33 = *(*(rdx_163 + 0x30) + (r8_87 << 1))
                    
                    uint32_t rcx_211
                    
                    if (r8_87.d s>= *(rdx_163 + 0x2c) || r9_33 u>= 0xd800)
                        rcx_211 = sub_142aea870(rdx_163, zmm0_1)
                    else
                        rcx_211 = zx.d(r9_33)
                        *(rdx_163 + 0x28) = (r8_87 + 1).d
                    
                    if (j_sub_142a52cd0(rcx_211, 0) == rbp_2.d)
                        goto label_142a74a58
                    
                    goto label_142a749b9
                case 0x2a76457
                    void* r14_2 = rbx_1 + (rbp_2 << 1)
                    int64_t rsi_6 = 0
                    int64_t rax_266 = result_3[1]
                    int32_t rbx_20 = *(r13_1 + (rax_266 << 3))
                    result_3[1] = rax_266 + 1
                    int32_t rbx_21 = rbx_20 & 0xffffff
                    r15.b = 1
                    void* rcx_213 = *(arg1 + 0x20)
                    void* const r8_88 = *result_3
                    void* rdx_165 = r8_88 - *(rcx_213 + 0x20)
                    
                    if (r8_88 - *(rcx_213 + 0x20) s< 0 || rdx_165 s>= sx.q(*(rcx_213 + 0x1c))
                            || *(*(rcx_213 + 0x30) + (rdx_165 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_213, r8_88)
                    else
                        *(rcx_213 + 0x28) = rdx_165.d
                    
                    void var_70
                    sub_142af49a0(&var_70, *(arg1 + 0x20))
                    uint64_t rbp_5 = zx.q(rbx_21)
                    
                    if (rbx_21 != 0)
                        while (true)
                            char rax_270 = Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::IsValid(
                                &var_70)
                            int64_t rax_272
                            
                            if (rax_270 == 0)
                                void* rcx_216 = *(arg1 + 0x20)
                                int64_t rax_271 = sx.q(*(rcx_216 + 0x28))
                                
                                if (rax_271.d s> *(rcx_216 + 0x1c))
                                    rax_272 = (*(*(rcx_216 + 0x38) + 0x40))()
                                else
                                    rax_272 = rax_271 + *(rcx_216 + 0x20)
                            
                            if (rax_270 == 0 && rax_272 s>= *(arg1 + 0x78))
                                *(arg1 + 0xa8) = 1
                            else
                                uint32_t rbx_22 = zx.d(*(r14_2 + (rsi_6 << 1)))
                                rsi_6 += 1
                                
                                if ((rbx_22 & 0xfffffc00) == 0xd800 && rsi_6 != rbp_5)
                                    uint32_t rcx_217 = zx.d(*(r14_2 + (rsi_6 << 1)))
                                    
                                    if ((rcx_217 & 0xfffffc00) == 0xdc00)
                                        rsi_6 += 1
                                        rbx_22 = ((rbx_22 - 0xd7f7) << 0xa) + rcx_217
                                
                                if (sub_142af4af0(&var_70, zmm0_1) == rbx_22)
                                    if (rsi_6 s>= rbp_5)
                                        break
                                    
                                    continue
                            
                            r15.b = 0
                            break
                    
                    if (Microsoft::WRL::Wrappers::HandleT<struct x3b317021::HandleT::operator[]::HMODULETraits>::IsValid(
                            &var_70) != 0 || r15.b == 0)
                        int64_t rdx_168 = sx.q(*(arg1 + 0x38))
                        void* r8_89 = *(arg1 + 0xb0)
                        int32_t temp67_1 = *(r8_89 + 8)
                        *(r8_89 + 8) -= rdx_168.d
                        int32_t rax_282 = *(r8_89 + 8)
                        
                        if (temp67_1 - rdx_168.d s< 0)
                            rax_282 = 0
                        
                        *(r8_89 + 8) = rax_282
                        result_3 = &(*(r8_89 + 0x18))[sx.q(rax_282) - rdx_168]
                    else
                        void* rcx_220 = *(arg1 + 0x20)
                        int64_t rax_280 = sx.q(*(rcx_220 + 0x28))
                        
                        if (rax_280.d s> *(rcx_220 + 0x1c))
                            result = (*(*(rcx_220 + 0x38) + 0x40))()
                        else
                            result = rax_280 + *(rcx_220 + 0x20)
                        
                        *result_3 = result
                    
                    r15 = arg4
                    r14_1 = var_98_1
                    goto label_142a76d78
                case 0x2a765d0
                    *(*(arg1 + 0xc0) + (rbp_2 << 3)) = sx.q(*(*(arg1 + 0xb0) + 8))
                    *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 1).d) << 3)) = *result_3
                    *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 2).d) << 3)) = -1
                    *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 3).d) << 3)) = *(arg1 + 0x78)
                    *(arg1 + 0x78) = *result_3
                    goto label_142a76d78
                case 0x2a76629
                    int64_t rax_288 = result_3[1]
                    int64_t r9_34 = sx.q(*(r13_1 + (rax_288 << 3)))
                    result_3[1] = rax_288 + 1
                    uint64_t rsi_7 = zx.q(*(r13_1 + ((rax_288 + 1) << 3)))
                    result_3[1] = rax_288 + 2
                    void* r8_90 = *(arg1 + 0x20)
                    
                    if (*(*(r8_90 + 0x38) + 0x48) != 0)
                        rsi_7 = zx.q((rsi_7 * 3).d)
                    
                    int64_t* rbx_25 = *(arg1 + 0xc0) + (zx.q((rbp_2 + 2).d) << 3)
                    int64_t rdx_172 = *rbx_25
                    
                    if (rdx_172 s>= 0)
                        if (rdx_172 != 0)
                            int64_t rcx_229 = rdx_172 - *(r8_90 + 0x20)
                            
                            if (rdx_172 - *(r8_90 + 0x20) s< 0 || rcx_229 s>= sx.q(*(r8_90 + 0x1c))
                                    || *(*(r8_90 + 0x30) + (rcx_229 << 1)) u>= 0xdc00)
                                sub_142aeacd0(r8_90, rdx_172)
                            else
                                *(r8_90 + 0x28) = rcx_229.d
                            
                            void* rdx_175 = *(arg1 + 0x20)
                            int32_t rax_297 = *(rdx_175 + 0x28)
                            
                            if (rax_297 s<= 0
                                    || *(*(rdx_175 + 0x30) + (sx.q(rax_297 - 1) << 1)) u>= 0xd800)
                                sub_142aeabf0(rdx_175)
                            else
                                *(rdx_175 + 0x28) = rax_297 - 1
                            
                            goto label_142a7671b
                        
                        *rbx_25 = -1
                    label_142a76776:
                        int64_t rax_303 = sx.q(*(arg1 + 0x38))
                        void* rdx_177 = *(arg1 + 0xb0)
                        int32_t temp68_1 = *(rdx_177 + 8)
                        *(rdx_177 + 8) -= rax_303.d
                        int32_t rcx_237 = *(rdx_177 + 8)
                        
                        if (temp68_1 - rax_303.d s< 0)
                            rcx_237 = 0
                        
                        *(rdx_177 + 8) = rcx_237
                        result_3 = *(rdx_177 + 0x18) + ((sx.q(rcx_237) - rax_303) << 3)
                        *(arg1 + 0x78) = (*(arg1 + 0xc0))[zx.q((rbp_2 + 3).d)]
                    else
                        void* rdx_174 = *result_3 - r9_34
                        *rbx_25 = rdx_174
                        
                        if (rdx_174 s> 0)
                            void* rcx_227 = *(arg1 + 0x20)
                            void* r8_92 = rdx_174 - *(rcx_227 + 0x20)
                            
                            if (rdx_174 - *(rcx_227 + 0x20) s< 0
                                    || r8_92 s>= sx.q(*(rcx_227 + 0x1c))
                                    || *(*(rcx_227 + 0x30) + (r8_92 << 1)) u>= 0xdc00)
                                sub_142aeacd0(rcx_227, rdx_174)
                            else
                                *(rcx_227 + 0x28) = r8_92.d
                            
                        label_142a7671b:
                            void* rcx_233 = *(arg1 + 0x20)
                            int64_t rax_299 = sx.q(*(rcx_233 + 0x28))
                            int64_t rax_300
                            
                            if (rax_299.d s> *(rcx_233 + 0x1c))
                                rax_300 = (*(*(rcx_233 + 0x38) + 0x40))()
                            else
                                rax_300 = rax_299 + *(rcx_233 + 0x20)
                            
                            *rbx_25 = rax_300
                            goto label_142a7673b
                        
                    label_142a7673b:
                        
                        if (*rbx_25 s< 0 || *rbx_25 s< *result_3 - sx.q(rsi_7.d))
                            goto label_142a76776
                        
                        void** result_8
                        result_8, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1] - 3, r15)
                        result_3 = result_8
                        *result_3 = *rbx_25
                    
                    goto label_142a76d78
                case 0x2a767b3
                    if (*result_3 != *(arg1 + 0x78))
                        goto label_142a7504d
                    
                    *(arg1 + 0x78) = (*(arg1 + 0xc0))[zx.q((rbp_2 + 3).d)]
                    goto label_142a76d78
                case 0x2a767d8
                    int64_t rax_306 = result_3[1]
                    int64_t r9_36 = sx.q(*(r13_1 + (rax_306 << 3)))
                    result_3[1] = rax_306 + 1
                    uint64_t rsi_8 = zx.q(*(r13_1 + ((rax_306 + 1) << 3)))
                    result_3[1] = rax_306 + 2
                    
                    if (*(*(*(arg1 + 0x20) + 0x38) + 0x48) != 0)
                        rsi_8 = zx.q((rsi_8 * 3).d)
                    
                    int32_t r14_3 = *(r13_1 + ((rax_306 + 2) << 3))
                    result_3[1] = rax_306 + 3
                    int64_t* rbx_26 = *(arg1 + 0xc0) + (zx.q((rbp_2 + 2).d) << 3)
                    int64_t r8_96 = *rbx_26
                    
                    if (r8_96 s>= 0)
                        if (r8_96 != 0)
                            void* rcx_247 = *(arg1 + 0x20)
                            int64_t rdx_182 = r8_96 - *(rcx_247 + 0x20)
                            
                            if (r8_96 - *(rcx_247 + 0x20) s< 0
                                    || rdx_182 s>= sx.q(*(rcx_247 + 0x1c))
                                    || *(*(rcx_247 + 0x30) + (rdx_182 << 1)) u>= 0xdc00)
                                sub_142aeacd0(rcx_247, r8_96)
                            else
                                *(rcx_247 + 0x28) = rdx_182.d
                            
                            void* rdx_184 = *(arg1 + 0x20)
                            int32_t rax_315 = *(rdx_184 + 0x28)
                            
                            if (rax_315 s<= 0
                                    || *(*(rdx_184 + 0x30) + (sx.q(rax_315 - 1) << 1)) u>= 0xd800)
                                sub_142aeabf0(rdx_184)
                            else
                                *(rdx_184 + 0x28) = rax_315 - 1
                            
                            goto label_142a768e3
                        
                        *rbx_26 = -1
                    label_142a76951:
                        *(arg1 + 0x78) = *(*(arg1 + 0xc0) + (zx.q((rbp_2 + 3).d) << 3))
                        result_3[1] = zx.q(r14_3) & 0xffffff
                        r14_1 = var_98_1
                    else
                        void* rdx_180 = *result_3 - r9_36
                        *rbx_26 = rdx_180
                        
                        if (rdx_180 s> 0)
                            void* rcx_246 = *(arg1 + 0x20)
                            void* r8_98 = rdx_180 - *(rcx_246 + 0x20)
                            
                            if (rdx_180 - *(rcx_246 + 0x20) s< 0
                                    || r8_98 s>= sx.q(*(rcx_246 + 0x1c))
                                    || *(*(rcx_246 + 0x30) + (r8_98 << 1)) u>= 0xdc00)
                                sub_142aeacd0(rcx_246, rdx_180)
                            else
                                *(rcx_246 + 0x28) = r8_98.d
                            
                        label_142a768e3:
                            void* rcx_250 = *(arg1 + 0x20)
                            int64_t rax_317 = sx.q(*(rcx_250 + 0x28))
                            int64_t rax_318
                            
                            if (rax_317.d s> *(rcx_250 + 0x1c))
                                rax_318 = (*(*(rcx_250 + 0x38) + 0x40))()
                            else
                                rax_318 = rax_317 + *(rcx_250 + 0x20)
                            
                            *rbx_26 = rax_318
                            goto label_142a76903
                        
                    label_142a76903:
                        
                        if (*rbx_26 s< 0 || *rbx_26 s< *result_3 - sx.q(rsi_8.d))
                            goto label_142a76951
                        
                        void** result_9
                        result_9, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1] - 4, r15)
                        result_3 = result_9
                        *result_3 = *rbx_26
                        r14_1 = var_98_1
                    
                    goto label_142a76d78
                case 0x2a76967
                    if (*result_3 != *(arg1 + 0x78))
                        goto label_142a749b9
                    
                    int64_t rdx_186 = *(arg1 + 0xc0)
                    *(arg1 + 0x78) = *(rdx_186 + (zx.q((rbp_2 + 3).d) << 3))
                    zmm0_1 = sub_142aeb430(*(arg1 + 0xb0), *(rdx_186 + (rbp_2 << 3)))
                    rax_8 = sx.q(*(arg1 + 0x38))
                    rdx = *(arg1 + 0xb0)
                    int32_t temp51_1 = *(rdx + 8)
                    *(rdx + 8) -= rax_8.d
                    
                    if (temp51_1 - rax_8.d s< 0)
                        *(rdx + 8) = 0
                    
                    rcx_10 = sx.q(*(rdx + 8))
                    goto label_142a749d4
                case 0x2a769bb
                    int64_t rsi_11 = (zx.q(rbp_2.d) << 5) + *(*(arg1 + 8) + 0x70)
                    void* rax_326 = sub_142ae72d0(r14_1, rbp_2.d)
                    void* rbx_27 = *result_3
                    void* r8_102 = *(arg1 + 0x20)
                    void* rdx_190 = rbx_27 - *(r8_102 + 0x20)
                    
                    if (rbx_27 - *(r8_102 + 0x20) s< 0 || rdx_190 s>= sx.q(*(r8_102 + 0x1c))
                            || *(*(r8_102 + 0x30) + (rdx_190 << 1)) u>= 0xdc00)
                        sub_142aeacd0(r8_102, rbx_27)
                    else
                        *(r8_102 + 0x28) = rdx_190.d
                    
                    if (rbx_27 s>= *(arg1 + 0x78))
                    label_142a76ab4:
                        *(arg1 + 0xa8) = 1
                    else
                        while (true)
                            void* rdx_192 = *(arg1 + 0x20)
                            int64_t r9_38 = sx.q(*(rdx_192 + 0x28))
                            int16_t r8_103
                            
                            if (r9_38.d s< *(rdx_192 + 0x2c))
                                r8_103 = *(*(rdx_192 + 0x30) + (r9_38 << 1))
                            
                            uint32_t r8_104
                            
                            if (r9_38.d s>= *(rdx_192 + 0x2c) || r8_103 u>= 0xd800)
                                r8_104 = sub_142aea870(rdx_192, zmm0_1)
                            else
                                r8_104 = zx.d(r8_103)
                                *(rdx_192 + 0x28) = (r9_38 + 1).d
                            
                            if (r8_104 s>= 0x100)
                                result, zmm0_1 = sub_142a9f280(rax_326, zx.q(r8_104))
                                
                                if (result.b == 0)
                                    break
                            else if (not(test_bit(sx.d(*((sx.q(r8_104) s>> 3) + rsi_11)), 
                                    r8_104 & 7)))
                                break
                            
                            void* rcx_265 = *(arg1 + 0x20)
                            result = sx.q(*(rcx_265 + 0x28))
                            
                            if (result.d s> *(rcx_265 + 0x1c))
                                rbx_27 = (*(*(rcx_265 + 0x38) + 0x40))()
                            else
                                rbx_27 = result + *(rcx_265 + 0x20)
                            
                            if (rbx_27 s>= *(arg1 + 0x78))
                                goto label_142a76ab4
                    
                    void* const rdx_194 = *result_3
                    
                    if (rbx_27 == rdx_194)
                        result_3[1] += 1
                        goto label_142a76d78
                    
                    result_3[(zx.q(*(r13_1 + (result_3[1] << 3))) & 0xffffff) + 2] = rdx_194
                    *result_3 = rbx_27
                    result, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1], r15)
                    result[1] += 1
                label_142a76d6d:
                    result_3 = result
                    goto label_142a76d78
                case 0x2a76b03
                    void* i_4
                    
                    if ((rbp_2.b & 1) == 0)
                        i_4 = *result_3
                        void* rcx_269 = *(arg1 + 0x20)
                        void* rdx_197 = i_4 - *(rcx_269 + 0x20)
                        
                        if (i_4 - *(rcx_269 + 0x20) s< 0 || rdx_197 s>= sx.q(*(rcx_269 + 0x1c))
                                || *(*(rcx_269 + 0x30) + (rdx_197 << 1)) u>= 0xdc00)
                            sub_142aeacd0(rcx_269, i_4)
                        else
                            *(rcx_269 + 0x28) = rdx_197.d
                        
                        while (i_4 s< *(arg1 + 0x78))
                            void* rdx_199 = *(arg1 + 0x20)
                            int64_t r9_40 = sx.q(*(rdx_199 + 0x28))
                            int16_t r8_106
                            
                            if (r9_40.d s< *(rdx_199 + 0x2c))
                                r8_106 = *(*(rdx_199 + 0x30) + (r9_40 << 1))
                            
                            uint32_t r8_107
                            
                            if (r9_40.d s>= *(rdx_199 + 0x2c) || r8_106 u>= 0xd800)
                                r8_107 = sub_142aea870(rdx_199, zmm0_1).d
                            else
                                r8_107 = zx.d(r8_106)
                                *(rdx_199 + 0x28) = (r9_40 + 1).d
                            
                            if ((r8_107.b & 0x7f) u<= 0x29)
                                if (r8_107 == 0xa)
                                    goto label_142a76be8
                                
                                if ((rbp_2.b & 2) == 0 && sub_142a7b5d0(r8_107).b != 0)
                                    goto label_142a76be8
                            
                            void* rcx_274 = *(arg1 + 0x20)
                            result = sx.q(*(rcx_274 + 0x28))
                            
                            if (result.d s> *(rcx_274 + 0x1c))
                                i_4 = (*(*(rcx_274 + 0x38) + 0x40))()
                            else
                                i_4 = result + *(rcx_274 + 0x20)
                        
                        *(arg1 + 0xa8) = 1
                    else
                        i_4 = *(arg1 + 0x78)
                        *(arg1 + 0xa8) = 1
                    
                label_142a76be8:
                    void* const rdx_200 = *result_3
                    
                    if (i_4 != rdx_200)
                        result_3[(zx.q(*(r13_1 + (result_3[1] << 3))) & 0xffffff) + 2] = rdx_200
                        *result_3 = i_4
                        result, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1], r15)
                        result_3 = result
                        result[1] += 1
                    else
                        result_3[1] += 1
                    
                    goto label_142a76d78
                case 0x2a76c33
                    int64_t rsi_12 = result_3[rbp_2 + 2]
                    void* const r8_109 = *result_3
                    
                    if (rsi_12 == r8_109)
                        goto label_142a76d78
                    
                    void* rcx_278 = *(arg1 + 0x20)
                    void* rdx_203 = r8_109 - *(rcx_278 + 0x20)
                    
                    if (r8_109 - *(rcx_278 + 0x20) s< 0 || rdx_203 s>= sx.q(*(rcx_278 + 0x1c))
                            || *(*(rcx_278 + 0x30) + (rdx_203 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_278, r8_109)
                    else
                        *(rcx_278 + 0x28) = rdx_203.d
                    
                    void* rdx_205 = *(arg1 + 0x20)
                    int32_t r8_110 = *(rdx_205 + 0x28)
                    uint32_t rbx_30
                    
                    if (r8_110 s<= 0 || *(*(rdx_205 + 0x30) + (sx.q(r8_110 - 1) << 1)) u>= 0xd800)
                        rbx_30 = sub_142aeabf0(rdx_205)
                    else
                        *(rdx_205 + 0x28) = r8_110 - 1
                        rbx_30 = zx.d(*(*(*(arg1 + 0x20) + 0x30) + (sx.q(r8_110 - 1) << 1)))
                    
                    void* rcx_282 = *(arg1 + 0x20)
                    int64_t rdx_207 = sx.q(*(rcx_282 + 0x28))
                    void* rax_344
                    
                    if (rdx_207.d s> *(rcx_282 + 0x1c))
                        rax_344 = (*(*(rcx_282 + 0x38) + 0x40))()
                    else
                        rax_344 = rdx_207 + *(rcx_282 + 0x20)
                    
                    *result_3 = rax_344
                    void* rdx_208 = *(arg1 + 0x20)
                    int32_t r8_112 = *(rdx_208 + 0x28)
                    uint32_t rax_348
                    
                    if (r8_112 s<= 0 || *(*(rdx_208 + 0x30) + (sx.q(r8_112 - 1) << 1)) u>= 0xd800)
                        rax_348 = sub_142aeabf0(rdx_208)
                    else
                        *(rdx_208 + 0x28) = r8_112 - 1
                        rax_348 = zx.d(*(*(*(arg1 + 0x20) + 0x30) + (sx.q(r8_112 - 1) << 1)))
                    
                    if (rbx_30 == 0xa && *result_3 s> rsi_12 && rax_348 == 0xd
                            && (*(r13_1 + (result_3[1] << 3) - 0x10) & 0xff000000) == 0x34000000)
                        void* rcx_288 = *(arg1 + 0x20)
                        int64_t rax_350 = sx.q(*(rcx_288 + 0x28))
                        void* rax_351
                        
                        if (rax_350.d s> *(rcx_288 + 0x1c))
                            rax_351 = (*(*(rcx_288 + 0x38) + 0x40))()
                        else
                            rax_351 = rax_350 + *(rcx_288 + 0x20)
                        
                        *result_3 = rax_351
                    
                    result, zmm0_1 = sub_142a78ca0(arg1, result_3, result_3[1] - 1, r15)
                    goto label_142a76d6d
                case 0x2a76d78
                    goto label_142a76d78
                case 0x2a76db0
                label_142a76db0:
                    result.b = 0
                label_142a76db2:
                    *(arg1 + 0x82) = result.b
                    
                    if (result.b != 0)
                        *(arg1 + 0x98) = *(arg1 + 0x90)
                        *(arg1 + 0x88) = arg2
                        result = *result_3
                        *(arg1 + 0x90) = result
                    
                    *(arg1 + 0xb8) = result_3
                    break
                case 0x2a76ded
                    goto label_142a76ded
    else
        *r15 = rcx_2

return result
