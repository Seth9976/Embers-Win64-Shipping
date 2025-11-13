// 函数: sub_14288b730
// 地址: 0x14288b730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg4 != 0 || *(arg1 + 0x638) != 1)
    return 2

if (sub_142873b60(arg2, 5, 2) != 0 && sub_142873e80(arg2, 2) != 0 && sub_142873b60(arg2, 1, 1) != 0
        && sub_142873e80(arg2, 2) != 0)
    int32_t rdi = 0
    int32_t var_20_1
    void arg_20
    
    if (sub_142898c70(*(arg1 + 0x650)) s<= 0)
    label_14288b846:
        int32_t rax_10 = sub_1428736e0(arg2)
        int32_t rax_11
        
        if (rax_10 != 0)
            rax_11 = sub_142873e80(arg2, 2)
        
        if (rax_10 == 0 || rax_11 == 0)
            var_20_1 = 0x14a
        else
            int64_t rcx_12 = *(arg1 + 0x658)
            
            if (rcx_12 == 0)
            label_14288b8cf:
                
                if (sub_1428736e0(arg2) != 0 && sub_1428736e0(arg2) != 0)
                    return 1
                
                var_20_1 = 0x162
            else
                int32_t rax_12 = sub_1428ac6b0(rcx_12, nullptr)
                int64_t rdi_1 = sx.q(rax_12)
                
                if (rax_12 s>= 0)
                    int32_t rax_13 = sub_142873640(arg2, rdi_1, &arg_20)
                    int32_t rax_14
                    
                    if (rax_13 != 0)
                        rax_14 = sub_1428ac6b0(*(arg1 + 0x658), &arg_20)
                    
                    if (rax_13 != 0 && rax_14 == rdi_1.d)
                        goto label_14288b8cf
                    
                    var_20_1 = 0x15c
                else
                    var_20_1 = 0x154
    else
        while (true)
            int64_t rax_5 = sub_142898ea0(*(arg1 + 0x650), rdi)
            int32_t rax_6 = sub_1428af3b0(rax_5, nullptr)
            int64_t rbp_1 = sx.q(rax_6)
            
            if (rax_6 s> 0 && sub_142873ff0(arg2, rbp_1, &arg_20, 2) != 0
                    && sub_1428af3b0(rax_5, &arg_20) == rbp_1.d)
                rdi += 1
                
                if (rdi s>= sub_142898c70(*(arg1 + 0x650)))
                    goto label_14288b846
                
                continue
            
            var_20_1 = 0x143
            break
    sub_142856580(arg1, 0x50, 0x1df, 0x44, "ssl\statem\extensions_clnt.c", var_20_1)
    return 0

sub_142856580(arg1, 0x50, 0x1df, 0x44, "ssl\statem\extensions_clnt.c", 0x135)
return 0
