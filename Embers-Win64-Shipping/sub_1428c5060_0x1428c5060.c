// 函数: sub_1428c5060
// 地址: 0x1428c5060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void* r13 = *(arg4 + 0x18)
int64_t* r11 = arg2

if (arg1 != 0)
    int64_t var_50
    int64_t r10_1
    
    if (r13 != 0)
        r10_1 = *(r13 + 0x18)
        var_50 = r10_1
    
    if (r13 == 0 || r10_1 == 0)
        r10_1 = 0
        var_50 = 0
    
    int32_t rdx_1 = arg9 + 1
    int32_t var_88_1
    int32_t r8
    
    if (rdx_1 s<= 0x1e)
        int64_t rax_2 = sx.q(*arg4)
        int32_t var_88
        int32_t var_80
        char var_78
        int32_t var_60
        int32_t arg_8
        int32_t arg_20
        char* rbx_5
        char* rbx_7
        int64_t* r13_1
        
        if (rax_2.d u<= 6)
            switch (rax_2)
                case 0
                    int32_t* r9 = *(arg4 + 8)
                    
                    if (r9 == 0)
                        return sub_1428c4620(arg1, r11, arg3, arg4, arg5, arg6, arg7, arg8)
                    
                    if (arg5 == 0xffffffff && arg7 == 0)
                        var_78.d = rdx_1
                        var_80.q = arg8
                        return sub_1428c5a30(arg1, r11, arg3, r9, 0, var_80, var_78)
                    
                    var_88_1 = 0xaf
                    r8 = 0xaa
                    goto label_1428c50e4
                case 1, 6
                    char* r10_2 = *r11
                    int32_t r9_7 = 0x10
                    int32_t r11_1 = 0
                    
                    if (arg5 != 0xffffffff)
                        r11_1 = arg6
                    
                    if (arg5 != 0xffffffff)
                        r9_7 = arg5
                    
                    var_60 = r11_1
                    char* var_58 = r10_2
                    char rcx_17
                    int32_t rdx_19
                    int32_t r8_9
                    int32_t r14_2
                    int32_t var_68
                    
                    if (arg8 == 0 || *arg8 == 0)
                        var_88 = arg3
                        int32_t rax_28 = sub_1428f2ef0(&var_58, &arg_8, &var_68, &arg_20, var_88)
                        r14_2 = arg_8
                        rcx_17 = rax_28.b
                        r8_9 = arg_20
                        rdx_19 = var_68
                        rbx_5 = var_58
                        
                        if (arg8 != 0)
                            *(arg8 + 4) = rax_28
                            int32_t rax_30 = rbx_5.d - r10_2.d
                            *(arg8 + 8) = r14_2
                            *(arg8 + 0x10) = r8_9
                            *(arg8 + 0xc) = rdx_19
                            *(arg8 + 0x14) = rax_30
                            *arg8 = 1
                            
                            if ((rcx_17 & 0x81) == 0 && rax_30 + r14_2 s> arg3)
                                sub_1428a5670(0xd, 0x68, 0x9b, "crypto\asn1\tasn_dec.c", 0x456)
                                *arg8 = 0
                                var_88_1 = 0x122
                                r8 = 0x3a
                                goto label_1428c50e4
                        
                        r11_1 = var_60
                    else
                        r14_2 = *(arg8 + 8)
                        rbx_5 = &r10_2[sx.q(*(arg8 + 0x14))]
                        r8_9 = *(arg8 + 0x10)
                        rdx_19 = *(arg8 + 0xc)
                        rcx_17 = (*(arg8 + 4)).b
                        var_58 = rbx_5
                        arg_8 = r14_2
                        arg_20 = r8_9
                        var_68 = rdx_19
                    
                    if (rcx_17 s< 0)
                        sub_1428a5670(0xd, 0x68, 0x66, "crypto\asn1\tasn_dec.c", 0x45e)
                        
                        if (arg8 == 0)
                        label_1428c56bb:
                            var_88_1 = 0x122
                            r8 = 0x3a
                            goto label_1428c50e4
                        
                        *arg8 = 0
                        var_88_1 = 0x122
                        r8 = 0x3a
                        goto label_1428c50e4
                    
                    if (r9_7 s>= 0)
                        if (r9_7 != rdx_19 || r11_1 != r8_9)
                            if (arg7 != 0)
                                return 0xffffffff
                            
                            if (arg8 != 0)
                                *arg8 = 0
                            
                            sub_1428a5670(0xd, 0x68, 0xa8, "crypto\asn1\tasn_dec.c", 0x46a)
                            goto label_1428c56bb
                        
                        if (arg8 != 0)
                            *arg8 = 0
                        
                        goto label_1428c5650
                    
                label_1428c5650:
                    
                    if ((rcx_17 & 1) != 0)
                        r14_2 = r10_2.d - rbx_5.d + arg3
                    
                    var_60.q = rbx_5
                    char rax_32 = rcx_17 & 1
                    arg_8.b = rax_32
                    
                    if (r13 == 0 || (*(r13 + 8) & 4) == 0)
                        arg_20.b = rax_32
                    else
                        arg_20.b = 1
                        r14_2 = arg3 - rbx_5.d + *arg2
                    
                    if ((rcx_17 & 0x20) == 0)
                        var_88_1 = 0x12e
                        r8 = 0x95
                        goto label_1428c50e4
                    
                    int32_t rax_34
                    
                    if (*arg1 == 0)
                        rax_34 = sub_1428db510(arg1, arg4)
                    
                    if (*arg1 == 0 && rax_34 == 0)
                        var_88_1 = 0x133
                        r8 = 0x3a
                        goto label_1428c50e4
                    
                    int64_t rax_35 = var_50
                    int32_t rax_36
                    
                    if (rax_35 != 0)
                        rax_36 = rax_35(4, arg1, arg4, 0, var_88)
                    
                    if (rax_35 != 0 && rax_36 == 0)
                        goto label_1428c59b9
                    
                    int32_t rax_39 = *(arg4 + 0x10)
                    int32_t r12_1 = 0
                    int32_t* rsi_4 = *(arg4 + 8)
                    
                    if (rax_39 s> 0)
                        do
                            if ((*rsi_4 & 0x300) != 0)
                                int32_t* rax_37 = sub_14291bb90(arg1, rsi_4, 0)
                                
                                if (rax_37 != 0)
                                    sub_1428c4100(sub_14291bff0(arg1, rax_37), rax_37)
                            
                            rax_39 = *(arg4 + 0x10)
                            r12_1 += 1
                            rsi_4 = &rsi_4[8]
                        while (r12_1 s< rax_39)
                        
                        rsi_4 = *(arg4 + 8)
                    
                    int32_t i = 0
                    
                    if (rax_39 s> 0)
                        do
                            char* rax_40 = sub_14291bb90(arg1, rsi_4, 1)
                            
                            if (rax_40 == 0)
                                goto label_1428c50e9
                            
                            int64_t* rax_41 = sub_14291bff0(arg1, rax_40)
                            
                            if (r14_2 == 0)
                                break
                            
                            var_58 = rbx_5
                            int32_t rcx_25 = rbx_5.d
                            
                            if (r14_2 s>= 2 && *rbx_5 == 0 && rbx_5[1] == 0)
                                rbx_5 = &rbx_5[2]
                                
                                if (arg_8.b != 0)
                                    r14_2 += rcx_25 - rbx_5.d
                                    goto label_1428c5878
                                
                                var_88_1 = 0x155
                                r8 = 0x9f
                                goto label_1428c50e4
                            
                            uint32_t rax_43
                            
                            if (i != *(arg4 + 0x10) - 1)
                                rax_43.b = *rax_40 & 1
                            else
                                rax_43.b = 0
                            
                            var_78.d = rdx_1
                            var_80.q = arg8
                            var_88.b = rax_43.b
                            int32_t rax_44 = sub_1428c5a30(rax_41, &var_60, r14_2, rax_40, 
                                var_88.b, var_80, var_78)
                            
                            if (rax_44 == 0)
                                rbx_7 = rax_40
                                goto label_1428c59d6
                            
                            rbx_5 = var_60.q
                            
                            if (rax_44 != 0xffffffff)
                                r14_2 += var_58.d - rbx_5.d
                            else
                                sub_1428c4100(rax_41, rax_40)
                            
                            i += 1
                            rsi_4 = &rsi_4[8]
                        while (i s< *(arg4 + 0x10))
                    
                    if (arg_8.b != 0)
                        if (r14_2 s< 2 || *rbx_5 != 0 || rbx_5[1] != 0)
                            var_88_1 = 0x17d
                            r8 = 0x89
                            goto label_1428c50e4
                        
                        rbx_5 = &rbx_5[2]
                    
                label_1428c5878:
                    
                    if (arg_20.b == 0 && r14_2 != 0)
                        var_88_1 = 0x182
                        r8 = 0x94
                        goto label_1428c50e4
                    
                    if (i s>= *(arg4 + 0x10))
                    label_1428c5947:
                        r13_1 = arg2
                        
                        if (sub_14291bee0(arg1, *r13_1, rbx_5.d - *r13_1, arg4) == 0)
                            goto label_1428c59b9
                        
                        goto label_1428c5965
                    
                    while (true)
                        char* rax_47 = sub_14291bb90(arg1, rsi_4, 1)
                        
                        if (rax_47 == 0)
                            goto label_1428c50e9
                        
                        if ((*rax_47 & 1) == 0)
                            var_88 = 0x196
                            rbx_7 = rax_47
                            sub_1428a5670(0xd, 0x78, 0x79, "crypto\asn1\tasn_dec.c", 0x196)
                            break
                        
                        sub_1428c4100(sub_14291bff0(arg1, rax_47), rax_47)
                        rsi_4 = &rsi_4[8]
                        i += 1
                        
                        if (i s>= *(arg4 + 0x10))
                            goto label_1428c5947
                    
                    goto label_1428c59d6
                case 2
                    int32_t rax_20
                    
                    if (r10_1 != 0)
                        rax_20 = r10_1(4, arg1, arg4, 0)
                    
                    if (r10_1 == 0 || rax_20 != 0)
                        if (*arg1 == 0)
                            if (sub_1428db510(arg1, arg4) == 0)
                                var_88_1 = 0xe6
                                r8 = 0x3a
                                goto label_1428c50e4
                        else
                            int32_t rax_21 = sub_14291bfe0(arg1, arg4)
                            
                            if (rax_21 s>= 0 && rax_21 s< *(arg4 + 0x10))
                                int32_t* rbx_4 = (sx.q(rax_21) << 5) + *(arg4 + 8)
                                sub_1428c4100(sub_14291bff0(arg1, rbx_4), rbx_4)
                                sub_14291c000(arg1, 0xffffffff, arg4)
                        
                        r13_1 = arg2
                        int32_t rsi_2 = 0
                        char* r14_1 = *(arg4 + 8)
                        rbx_5 = *r13_1
                        var_60.q = rbx_5
                        int32_t temp0_1 = *(arg4 + 0x10)
                        bool cond:2_1 = 0 != temp0_1
                        
                        if (0 s>= temp0_1)
                            goto label_1428c5461
                        
                        int64_t* rax_23
                        int32_t rax_25
                        
                        while (true)
                            rax_23 = sub_14291bff0(arg1, r14_1)
                            var_78.d = rdx_1
                            var_80.q = arg8
                            var_88.b = 1
                            rax_25 = sub_1428c5a30(rax_23, &var_60, arg3, r14_1, 1, var_80, var_78)
                            
                            if (rax_25 != 0xffffffff)
                                break
                            
                            rsi_2 += 1
                            r14_1 = &r14_1[0x20]
                            
                            if (rsi_2 s>= *(arg4 + 0x10))
                                goto label_1428c5456
                        
                        if (rax_25 s<= 0)
                            sub_1428c4100(rax_23, r14_1)
                            var_88 = 0xfd
                            rbx_7 = r14_1
                            sub_1428a5670(0xd, 0x78, 0x3a, "crypto\asn1\tasn_dec.c", 0xfd)
                            goto label_1428c59d6
                        
                    label_1428c5456:
                        r13_1 = arg2
                        rbx_5 = var_60.q
                        cond:2_1 = rsi_2 != *(arg4 + 0x10)
                    label_1428c5461:
                        
                        if (not(cond:2_1))
                            if (arg7 == 0)
                                var_88_1 = 0x109
                                r8 = 0x8f
                                goto label_1428c50e4
                            
                            sub_1428c3d40(arg1, arg4)
                            return 0xffffffff
                        
                        sub_14291c000(arg1, rsi_2, arg4)
                    label_1428c5965:
                        int64_t rax_50 = var_50
                        int32_t rax_51
                        
                        if (rax_50 != 0)
                            rax_51 = rax_50(5, arg1, arg4, 0, var_88, var_80, var_78)
                        
                        if (rax_50 != 0 && rax_51 == 0)
                            goto label_1428c59b9
                        
                        *r13_1 = rbx_5
                        return 1
                    
                label_1428c59b9:
                    var_88 = 0x1a6
                    sub_1428a5670(0xd, 0x78, 0x64, "crypto\asn1\tasn_dec.c", 0x1a6)
                    rbx_7 = nullptr
                label_1428c59d6:
                    
                    if (rbx_7 == 0)
                        goto label_1428c50e9
                    
                    *(rbx_7 + 0x10)
                    var_88.q = *(arg4 + 0x28)
                    sub_1428a4880(4)
                case 4
                    return (*(r13 + 0x20))(arg1, r11, arg3, arg4, arg5, arg6, arg7, arg8)
                case 5
                    int64_t rsi_1 = *r11
                    var_50 = rsi_1
                    int32_t rcx_4
                    int32_t rdx_5
                    char r8_2
                    
                    if (arg8 == 0 || *arg8 == 0)
                        int32_t rax_11 = sub_1428f2ef0(&var_50, &var_60, &arg_20, &arg_8, arg3)
                        rdx_5 = arg_8
                        r8_2 = rax_11.b
                        rcx_4 = arg_20
                        
                        if (arg8 == 0)
                        label_1428c5267:
                            r11 = arg2
                            goto label_1428c5272
                        
                        int32_t r9_3 = var_60
                        *(arg8 + 4) = rax_11
                        int32_t rax_13 = var_50.d - rsi_1.d
                        *(arg8 + 8) = r9_3
                        *(arg8 + 0x10) = rdx_5
                        *(arg8 + 0xc) = rcx_4
                        *(arg8 + 0x14) = rax_13
                        *arg8 = 1
                        
                        if ((r8_2 & 0x81) != 0 || rax_13 + r9_3 s<= arg3)
                            goto label_1428c5267
                        
                        sub_1428a5670(0xd, 0x68, 0x9b, "crypto\asn1\tasn_dec.c", 0x456)
                        *arg8 = 0
                    else
                        rdx_5 = *(arg8 + 0x10)
                        rcx_4 = *(arg8 + 0xc)
                        r8_2 = (*(arg8 + 4)).b
                        var_60 = *(arg8 + 8)
                        int64_t rax_10 = sx.q(*(arg8 + 0x14)) + rsi_1
                        arg_8 = rdx_5
                        var_50 = rax_10
                        arg_20 = rcx_4
                    label_1428c5272:
                        
                        if (r8_2 s>= 0)
                            if (rdx_5.b != 0)
                                if (arg7 != 0)
                                    return 0xffffffff
                                
                                var_88_1 = 0xc7
                                r8 = 0x8b
                                goto label_1428c50e4
                            
                            int32_t rdx_7
                            
                            if (rcx_4 u> 0x1e)
                                rdx_7 = 0
                            else
                                rdx_7 = *((sx.q(rcx_4) << 2) + &data_14350f6d0)
                            
                            if ((*(arg4 + 4) & rdx_7) != 0)
                                return sub_1428c4620(arg1, r11, arg3, arg4, rcx_4, 0, 0, arg8)
                            
                            if (arg7 != 0)
                                return 0xffffffff
                            
                            var_88_1 = 0xcf
                            r8 = 0x8c
                            goto label_1428c50e4
                        
                        sub_1428a5670(0xd, 0x68, 0x66, "crypto\asn1\tasn_dec.c", 0x45e)
                        
                        if (arg8 != 0)
                            *arg8 = 0
                    var_88_1 = 0xbe
                    r8 = 0x3a
                    goto label_1428c50e4
    else
        var_88_1 = 0xa0
        r8 = 0xc9
    label_1428c50e4:
        sub_1428a5670(0xd, 0x78, r8, "crypto\asn1\tasn_dec.c", var_88_1)
    label_1428c50e9:
        *(arg4 + 0x28)
        sub_1428a4880(2)

return 0
