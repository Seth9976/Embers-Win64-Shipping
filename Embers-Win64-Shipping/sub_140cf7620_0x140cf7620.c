// 函数: sub_140cf7620
// 地址: 0x140cf7620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_11
char* rdx_3

if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 2)) == 0)
    char arg_10
    
    if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 0x17)) == 0)
        if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 0x16)) == 0)
            if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 0x14)) == 0)
                if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 1)) == 0)
                    if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 0x1a)) == 0)
                        if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 0x19)) == 0)
                            if ((*(arg2 + 0xc) == 0 & sub_140b5b8a0(*(arg2 + 8), 0x18)) == 0)
                                return 0
                            
                            int64_t* r9_7 = *(*arg3 + 8)
                            int64_t* rcx_39 = r9_7[1]
                            int64_t* rdx_22 = *rcx_39
                            
                            if (&rdx_22[1] u> rcx_39[1])
                                int64_t* rdx_23 = &arg_10
                                
                                if ((*(r9_7 + 0x29) & 0x20) != 0)
                                    sub_140b540d0(r9_7, rdx_23, arg5)
                                else
                                    (*(*r9_7 + 0x150))(r9_7, rdx_23, 8)
                            else
                                arg_10.q = *rdx_22
                                int64_t* rax_85 = r9_7[1]
                                *rax_85 += 8
                            
                            char* rdx_25 = sx.q(*(arg1 + 0x4c)) + zx.q(*(arg1 + 0x79)) + arg4
                                + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c))
                            
                            if (arg_10.q != 0)
                                *rdx_25 = (not.b(*(arg1 + 0x7b)) & *rdx_25) | *(arg1 + 0x7a)
                                return 2
                            
                            *rdx_25 &= not.b(*(arg1 + 0x7b))
                            return 2
                        
                        int64_t* r9_6 = *(*arg3 + 8)
                        int64_t* rcx_34 = r9_6[1]
                        int32_t* rdx_19 = *rcx_34
                        int32_t var_28
                        
                        if (&rdx_19[1] u> rcx_34[1])
                            int32_t* rdx_20 = &var_28
                            
                            if ((*(r9_6 + 0x29) & 0x20) != 0)
                                sub_140b54070(r9_6, rdx_20, arg5)
                            else
                                (*(*r9_6 + 0x150))(r9_6, rdx_20, 4)
                        else
                            var_28 = *rdx_19
                            int64_t* rax_74 = r9_6[1]
                            *rax_74 += 4
                        
                        rdx_3 = sx.q(*(arg1 + 0x4c)) + zx.q(*(arg1 + 0x79)) + arg4
                            + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c))
                        rax_11 = not.b(*(arg1 + 0x7b)) & *rdx_3
                        
                        if (var_28 != 0)
                            rax_11 |= *(arg1 + 0x7a)
                    else
                        int64_t* r9_5 = *(*arg3 + 8)
                        int64_t* rcx_29 = r9_5[1]
                        int16_t* rdx_16 = *rcx_29
                        int16_t var_30
                        
                        if (&rdx_16[1] u> rcx_29[1])
                            int16_t* rdx_17 = &var_30
                            
                            if ((*(r9_5 + 0x29) & 0x20) != 0)
                                sub_140b54000(r9_5, rdx_17, arg5)
                            else
                                (*(*r9_5 + 0x150))(r9_5, rdx_17, 2)
                        else
                            var_30 = *rdx_16
                            int64_t* rax_63 = r9_5[1]
                            *rax_63 += 2
                        
                        rdx_3 = sx.q(*(arg1 + 0x4c)) + zx.q(*(arg1 + 0x79)) + arg4
                            + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c))
                        rax_11 = not.b(*(arg1 + 0x7b)) & *rdx_3
                        
                        if (var_30 != 0)
                            *rdx_3 = rax_11 | *(arg1 + 0x7a)
                            return 2
                else
                    if ((*(arg2 + 0x28) == 0 & sub_140b5b8a0(*(arg2 + 0x24), 0)) == 0)
                        return 0
                    
                    if (sub_140ceca60(arg1) != 0)
                        return 0
                    
                    int64_t* r9_4 = *(*arg3 + 8)
                    int64_t* rcx_24 = r9_4[1]
                    char* rdx_13 = *rcx_24
                    char var_38
                    
                    if (&rdx_13[1] u> rcx_24[1])
                        (*(*r9_4 + 0x150))(r9_4, &var_38, 1)
                    else
                        var_38 = *rdx_13
                        int64_t* rax_52 = r9_4[1]
                        *rax_52 += 1
                    
                    rdx_3 = sx.q(*(arg1 + 0x4c)) + zx.q(*(arg1 + 0x79)) + arg4
                        + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c))
                    rax_11 = not.b(*(arg1 + 0x7b)) & *rdx_3
                    
                    if (var_38 != 0)
                        *rdx_3 = rax_11 | *(arg1 + 0x7a)
                        return 2
            else
                int64_t* r9_3 = *(*arg3 + 8)
                int64_t* rcx_16 = r9_3[1]
                int64_t* rdx_10 = *rcx_16
                int64_t var_20
                
                if (&rdx_10[1] u> rcx_16[1])
                    int64_t* rdx_11 = &var_20
                    
                    if ((*(r9_3 + 0x29) & 0x20) != 0)
                        sub_140b540d0(r9_3, rdx_11, arg5)
                    else
                        (*(*r9_3 + 0x150))(r9_3, rdx_11, 8)
                else
                    var_20 = *rdx_10
                    int64_t* rax_39 = r9_3[1]
                    *rax_39 += 8
                
                rdx_3 = sx.q(*(arg1 + 0x4c)) + zx.q(*(arg1 + 0x79)) + arg4
                    + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c))
                rax_11 = not.b(*(arg1 + 0x7b)) & *rdx_3
                
                if (var_20 != 0)
                    *rdx_3 = rax_11 | *(arg1 + 0x7a)
                    return 2
        else
            int64_t* r9_2 = *(*arg3 + 8)
            int64_t* rcx_11 = r9_2[1]
            int16_t* rdx_7 = *rcx_11
            int16_t var_34
            
            if (&rdx_7[1] u> rcx_11[1])
                int16_t* rdx_8 = &var_34
                
                if ((*(r9_2 + 0x29) & 0x20) != 0)
                    sub_140b54000(r9_2, rdx_8, arg5)
                else
                    (*(*r9_2 + 0x150))(r9_2, rdx_8, 2)
            else
                var_34 = *rdx_7
                int64_t* rax_28 = r9_2[1]
                *rax_28 += 2
            
            rdx_3 = sx.q(*(arg1 + 0x4c)) + zx.q(*(arg1 + 0x79)) + arg4
                + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c))
            rax_11 = not.b(*(arg1 + 0x7b)) & *rdx_3
            
            if (var_34 != 0)
                *rdx_3 = rax_11 | *(arg1 + 0x7a)
                return 2
    else
        int64_t* r9_1 = *(*arg3 + 8)
        int64_t* rcx_6 = r9_1[1]
        char* rdx_4 = *rcx_6
        
        if (&rdx_4[1] u> rcx_6[1])
            (*(*r9_1 + 0x150))(r9_1, &arg_10, 1)
        else
            arg_10 = *rdx_4
            int64_t* rax_17 = r9_1[1]
            *rax_17 += 1
        
        rdx_3 = sx.q(*(arg1 + 0x4c)) + zx.q(*(arg1 + 0x79)) + arg4
            + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c))
        rax_11 = not.b(*(arg1 + 0x7b)) & *rdx_3
        
        if (arg_10 != 0)
            *rdx_3 = rax_11 | *(arg1 + 0x7a)
            return 2
else
    int64_t* r9 = *(*arg3 + 8)
    int64_t* rcx_1 = r9[1]
    int32_t* rdx = *rcx_1
    int32_t var_2c
    
    if (&rdx[1] u> rcx_1[1])
        int32_t* rdx_1 = &var_2c
        
        if ((*(r9 + 0x29) & 0x20) != 0)
            sub_140b54070(r9, rdx_1, arg5)
        else
            (*(*r9 + 0x150))(r9, rdx_1, 4)
    else
        var_2c = *rdx
        int64_t* rax_4 = r9[1]
        *rax_4 += 4
    
    rdx_3 =
        sx.q(*(arg1 + 0x4c)) + zx.q(*(arg1 + 0x79)) + arg4 + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c))
    rax_11 = not.b(*(arg1 + 0x7b)) & *rdx_3
    
    if (var_2c != 0)
        *rdx_3 = rax_11 | *(arg1 + 0x7a)
        return 2

*rdx_3 = rax_11
return 2
