// 函数: sub_142952ff0
// 地址: 0x142952ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t* var_30 = nullptr
int32_t r14 = 0

if (sub_1428bf8a0(arg1, arg3) == 0)
    if (sub_1428bf8a0(arg1, arg4) == 0)
        int64_t* rsi_1 = arg5
        
        if (rsi_1 == 0)
            int64_t* rax_4 = sub_1428d8d60()
            var_30 = rax_4
            rsi_1 = rax_4
            
            if (rax_4 != 0)
                goto label_1429530a3
            
            return 0
        
    label_1429530a3:
        sub_1428d8e50(rsi_1)
        int64_t* rax_5 = sub_1428d8ba0(rsi_1)
        int64_t* rax_6 = sub_1428d8ba0(rsi_1)
        int64_t* rax_7 = sub_1428d8ba0(rsi_1)
        int64_t* rax_8 = sub_1428d8ba0(rsi_1)
        int64_t* rax_9 = sub_1428d8ba0(rsi_1)
        int64_t* rax_10 = sub_1428d8ba0(rsi_1)
        int64_t* rax_11 = sub_1428d8ba0(rsi_1)
        int64_t* rax_12 = sub_1428d8ba0(rsi_1)
        
        if (rax_12 != 0)
            bool cond:0_1
            
            if (arg3[5].d == 0)
                cond:0_1 = sub_1428bf6e0(arg1, arg3, rax_5, rax_6, rsi_1) == 0
            label_14295315f:
                
                if (not(cond:0_1))
                    int64_t* r13_1
                    
                    if (arg4[5].d == 0)
                        if (sub_1428bf6e0(arg1, arg4, rax_7, rax_8, rsi_1) != 0)
                            r13_1 = rax_8
                        label_1429531ce:
                            int64_t* r8_8
                            
                            if (sub_1428909a0(rax_5, rax_7) == 0)
                                int32_t rax_28 = sub_1428909a0(rax_6, r13_1)
                                int32_t rax_29
                                
                                if (rax_28 == 0)
                                    rax_29 = sub_142890300(rax_7)
                                
                                if (rax_28 != 0 || rax_29 != 0)
                                    int32_t rdx_28 = 0
                                    
                                    if (sub_1428bfd80(arg1, arg2) != 0)
                                        rdx_28 = 1
                                    
                                    r14 = rdx_28
                                else if ((*(*arg1 + 0x118))(arg1, rax_11, r13_1, rax_7, rsi_1) != 0
                                        && sub_142972660(rax_11, rax_11, rax_7) != 0
                                        && (*(*arg1 + 0x110))(arg1, rax_9, rax_11, rsi_1) != 0
                                        && sub_142972660(rax_9, rax_9, rax_11) != 0)
                                    r8_8 = arg1[0xc]
                                label_14295331f:
                                    
                                    if (sub_142972660(rax_9, rax_9, r8_8) != 0
                                            && sub_142972660(rax_10, rax_7, rax_9) != 0 &&
                                            (*(*arg1 + 0x108))(arg1, rax_10, rax_10, rax_11, rsi_1)
                                            != 0 && sub_142972660(rax_10, rax_10, rax_9) != 0
                                            && sub_142972660(rax_10, rax_10, r13_1) != 0)
                                        int64_t* var_68_6 = rsi_1
                                        
                                        if (sub_1428bfc10(arg1, arg2, rax_9) != 0)
                                            r14 = 1
                            else if (sub_142972660(rax_12, rax_5, rax_7) != 0
                                    && sub_142972660(rax_11, rax_6, r13_1) != 0
                                    && (*(*arg1 + 0x118))(arg1, rax_11, rax_11, rax_12, rsi_1) != 0
                                    && (*(*arg1 + 0x110))(arg1, rax_9, rax_11, rsi_1) != 0
                                    && sub_142972660(rax_9, rax_9, arg1[0xc]) != 0
                                    && sub_142972660(rax_9, rax_9, rax_11) != 0)
                                r8_8 = rax_12
                                goto label_14295331f
                    else if (sub_142890040(rax_7, arg4[2]) != 0)
                        r13_1 = rax_8
                        
                        if (sub_142890040(r13_1, arg4[3]) != 0)
                            goto label_1429531ce
            else if (sub_142890040(rax_5, arg3[2]) != 0)
                cond:0_1 = sub_142890040(rax_6, arg3[3]) == 0
                goto label_14295315f
        
        sub_1428d8a60(rsi_1)
        sub_1428d8ae0(var_30)
        return r14
    
    if (sub_1428bf580(arg2, arg3) == 0)
        return 0
else
    int32_t rax_1 = sub_1428bf580(arg2, arg4)
    
    if (rax_1 == 0)
        return rax_1

return 1
