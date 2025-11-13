// 函数: sub_14290a010
// 地址: 0x14290a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t i = 0
int32_t r13 = 7
int64_t* r12
int64_t* r15

if (arg4 != 2)
    r15 = nullptr
    
    if (arg4 s<= 0)
        r12 = nullptr
    else
        r12 = *(arg2 + 0x20)
else
    r15 = *(arg2 + 0x28)
    r12 = *(arg2 + 0x20)

if (*(arg2 + 8) == 0)
label_14290a075:
labelid_2:
    sub_1428a5670(5, 0x64, 0x43, "crypto\dh\dh_ameth.c", 0x157)
else
    if (arg4 != 2)
        if (arg4 s> 0 && r12 == 0)
            goto label_14290a075
    else if (r15 == 0 || r12 == 0)
        goto label_14290a075
    
    char const* const r14_1
    
    if (arg4 != 2)
        r14_1 = "DH Public-Key"
        
        if (arg4 != 1)
            r14_1 = "DH Parameters"
    else
        r14_1 = "DH Private-Key"
    
    sub_14289a2c0(arg1, arg3, 0x80)
    sub_142890560(*(arg2 + 8))
    
    if (sub_1428b6f70(arg1, "%s: (%d bit)\n", r14_1) s<= 0)
    labelid_2:
        sub_1428a5670(5, 0x64, r13, "crypto\dh\dh_ameth.c", 0x157)
    else
        int32_t var_38_1 = arg3 + 4
        
        if (sub_14293b8e0(arg1, "private-key:", r15, 0) == 0)
        labelid_2:
            sub_1428a5670(5, 0x64, r13, "crypto\dh\dh_ameth.c", 0x157)
        else
            int32_t var_38_2 = arg3 + 4
            
            if (sub_14293b8e0(arg1, "public-key:", r12, 0) == 0)
            labelid_2:
                sub_1428a5670(5, 0x64, r13, "crypto\dh\dh_ameth.c", 0x157)
            else
                int32_t var_38_3 = arg3 + 4
                
                if (sub_14293b8e0(arg1, "prime:", *(arg2 + 8), 0) == 0)
                labelid_2:
                    sub_1428a5670(5, 0x64, r13, "crypto\dh\dh_ameth.c", 0x157)
                else
                    int32_t var_38_4 = arg3 + 4
                    
                    if (sub_14293b8e0(arg1, "generator:", *(arg2 + 0x10), 0) == 0)
                    labelid_2:
                        sub_1428a5670(5, 0x64, r13, "crypto\dh\dh_ameth.c", 0x157)
                    else
                        int64_t* r8_6 = *(arg2 + 0x40)
                        int32_t rax_8
                        
                        if (r8_6 != 0)
                            int32_t var_38_5 = arg3 + 4
                            rax_8 = sub_14293b8e0(arg1, "subgroup order:", r8_6, 0)
                        
                        if (r8_6 != 0 && rax_8 == 0)
                        labelid_2:
                            sub_1428a5670(5, 0x64, r13, "crypto\dh\dh_ameth.c", 0x157)
                        else
                            int64_t* r8_7 = *(arg2 + 0x48)
                            int32_t rax_9
                            
                            if (r8_7 != 0)
                                int32_t var_38_6 = arg3 + 4
                                rax_9 = sub_14293b8e0(arg1, "subgroup factor:", r8_7, 0)
                            
                            if (r8_7 != 0 && rax_9 == 0)
                            label_14290a095:
                                sub_1428a5670(5, 0x64, r13, "crypto\dh\dh_ameth.c", 0x157)
                            else
                                int32_t rax_16
                                
                                if (*(arg2 + 0x50) != 0)
                                    sub_14289a2c0(arg1, arg3 + 4, 0x80)
                                    sub_14289a750(arg1, "seed:")
                                    
                                    if (*(arg2 + 0x58) s> 0)
                                        int64_t r14_2 = 0
                                        
                                        do
                                            if (i == i s/ 0xf * 0xf)
                                                if (sub_14289a750(arg1, &data_14370209c) s<= 0)
                                                    goto label_14290a095_1
                                                
                                                if (sub_14289a2c0(arg1, arg3 + 8, 0x80) == 0)
                                                    goto label_14290a095_1
                                            
                                            i += 1
                                            *(arg2 + 0x58)
                                            
                                            if (sub_1428b6f70(arg1, "%02x%s", 
                                                    zx.q(*(*(arg2 + 0x50) + r14_2))) s<= 0)
                                                goto label_14290a095_1
                                            
                                            r14_2 += 1
                                        while (i s< *(arg2 + 0x58))
                                    
                                    rax_16 = sub_14289aa40(arg1, &data_14370209c, 1)
                                
                                if (*(arg2 + 0x50) == 0 || rax_16 s> 0)
                                    int64_t* r8_9 = *(arg2 + 0x60)
                                    int32_t rax_17
                                    
                                    if (r8_9 != 0)
                                        int32_t var_38_7 = arg3 + 4
                                        rax_17 = sub_14293b8e0(arg1, "counter:", r8_9, 0)
                                    
                                    if (r8_9 == 0 || rax_17 != 0)
                                        int32_t rax_18
                                        
                                        if (*(arg2 + 0x18) != 0)
                                            sub_14289a2c0(arg1, arg3 + 4, 0x80)
                                            rax_18 = sub_1428b6f70(arg1, 
                                                "recommended-private-length: %d bits\n", 
                                                zx.q(*(arg2 + 0x18)))
                                        
                                        if (*(arg2 + 0x18) == 0 || rax_18 s> 0)
                                            return 1
                                    
                                label_14290a095_1:
                                    sub_1428a5670(5, 0x64, r13, "crypto\dh\dh_ameth.c", 0x157)

return 0
