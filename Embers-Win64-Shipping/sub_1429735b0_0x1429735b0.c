// 函数: sub_1429735b0
// 地址: 0x1429735b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t r13 = 0
int32_t arg_18 = 0

if (*arg3 == 0)
    sub_142890900(arg1, 0)
    return 1

sub_1428d8e50(arg4)
int64_t* rax_1 = sub_1428d8ba0(arg4)
int64_t* r14 = rax_1
int64_t* rax_2 = sub_1428d8ba0(arg4)
int64_t* rax_3 = sub_1428d8ba0(arg4)
int32_t r12_1

if (rax_3 == 0)
labelid_3:
    r12_1 = 0
else if (sub_142972740(r14, arg2, arg3) == 0)
labelid_3:
    r12_1 = 0
else if (sub_142890300(r14) != 0)
    sub_142890900(arg1, 0)
    r12_1 = 1
else
    int32_t var_58_1
    int32_t r8_10
    
    if ((*arg3 & 1) == 0)
        int64_t* rax_20 = sub_1428d8ba0(arg4)
        int64_t* rax_21 = sub_1428d8ba0(arg4)
        int64_t* rax_22 = sub_1428d8ba0(arg4)
        
        if (rax_22 != 0)
            int32_t i = 1
            
            while (true)
                if (sub_142919890(rax_20, *arg3, 0, 0) == 0)
                    goto label_142973878_1
                
                if (sub_142972740(rax_20, rax_20, arg3) == 0)
                    goto label_142973878_1
                
                sub_142890900(rax_2, 0)
                
                if (sub_142890040(rax_3, rax_20) == 0)
                    goto label_142973878_1
                
                if (*arg3 - 1 s>= 1)
                    do
                        if (sub_142973930(rax_2, rax_2, arg3, arg4) == 0)
                            goto label_142973878_1
                        
                        if (sub_142973930(rax_21, rax_3, arg3, arg4) == 0)
                            goto label_142973878_1
                        
                        int32_t var_58
                        var_58.q = arg4
                        
                        if (sub_142973270(rax_22, rax_21, rax_1, arg3, var_58) == 0)
                            goto label_142973878_1
                        
                        if (sub_142972660(rax_2, rax_2, rax_22) == 0)
                            goto label_142973878_1
                        
                        if (sub_142972660(rax_3, rax_21, rax_20) == 0)
                            goto label_142973878_1
                        
                        i += 1
                    while (i s<= *arg3 - 1)
                
                int32_t rsi_2 = arg_18 + 1
                arg_18 = rsi_2
                
                if (sub_142890300(rax_3) != 0)
                    i = 1
                    
                    if (rsi_2 s< 0x32)
                        continue
                
                if (sub_142890300(rax_3) == 0)
                    r14 = rax_1
                    r13 = 0
                    goto label_1429738be
                
                var_58_1 = 0x420
                r8_10 = 0x71
                break
            
            goto label_142973873
        
    labelid_3:
        r12_1 = 0
    else if (sub_142890040(rax_2, r14) == 0)
    labelid_3:
        r12_1 = 0
    else
        int32_t i_1 = 1
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(*arg3 - 1)
        
        if ((temp1_1 - temp0_1) s>> 1 s>= 1)
            int32_t temp2_1
            int32_t temp3_1
            
            do
                if (sub_142973930(rax_2, rax_2, arg3, arg4) == 0)
                    goto label_142973878_1
                
                if (sub_142973930(rax_2, rax_2, arg3, arg4) == 0)
                    goto label_142973878_1
                
                if (sub_142972660(rax_2, rax_2, r14) == 0)
                    goto label_142973878_1
                
                i_1 += 1
                temp2_1:temp3_1 = sx.q(*arg3 - 1)
            while (i_1 s<= (temp3_1 - temp2_1) s>> 1)
        
    label_1429738be:
        
        if (sub_142973930(rax_3, rax_2, arg3, arg4) == 0)
        labelid_3:
            r12_1 = 0
        else if (sub_142972660(rax_3, rax_2, rax_3) == 0)
        label_142973878:
            r12_1 = 0
        else if (sub_1428909a0(rax_3, r14) == 0)
            if (sub_142890040(arg1, rax_2) != 0)
                r13 = 1
            
            r12_1 = r13
        else
            var_58_1 = 0x42a
            r8_10 = 0x74
        label_142973873:
            sub_1428a5670(3, 0x87, r8_10, "crypto\bn\bn_gf2m.c", var_58_1)
        label_142973878_1:
            r12_1 = 0

sub_1428d8a60(arg4)
return zx.q(r12_1)
