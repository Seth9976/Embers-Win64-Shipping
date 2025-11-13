// 函数: sub_14293b8e0
// 地址: 0x14293b8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t r15 = 0

if (arg3 != 0)
    char* const rbp_1 = &data_1437020ab
    
    if (sub_142890280(arg3) != 0)
        rbp_1 = &data_142d8bc68
    
    if (sub_14289a2c0(arg1, arg4, 0x80) == 0)
        return 0
    
    int32_t rax_4
    
    if (sub_142890300(arg3) == 0)
        if (sub_142890560(arg3) + 7 s>= 0x48)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(sub_142890560(arg3) + 7)
            uint64_t rax_16 = sx.q(((temp1_1 + (temp0_1 & 7)) s>> 3) + 1)
            void* rax_17 = sub_1428a6730(rax_16)
            void* r12_1 = rax_17
            
            if (rax_17 != 0)
                *rax_17 = 0
                *rbp_1
                
                if (sub_1428b6f70(arg1, "%s%s\n", arg2) s> 0)
                    int32_t rax_19 = sub_14288fba0(arg3, r12_1 + 1)
                    
                    if (*(r12_1 + 1) s>= 0)
                        r12_1 += 1
                    else
                        rax_19 += 1
                    
                    void* i = nullptr
                    
                    if (rax_19 != 0)
                        do
                            if (i == i u/ 0xf * 0xf)
                                if (i != 0 && sub_14289a750(arg1, &data_14370209c) s<= 0)
                                    goto label_14293bb2a
                                
                                if (sub_14289a2c0(arg1, arg4 + 4, 0x80) == 0)
                                    goto label_14293bb2a
                            
                            if (sub_1428b6f70(arg1, "%02x%s", zx.q(*(i + r12_1))) s<= 0)
                                goto label_14293bb2a
                            
                            i += 1
                        while (i u< sx.q(rax_19))
                    
                    if (sub_14289aa40(arg1, &data_14370209c, 1) s> 0)
                        r15 = 1
            
        label_14293bb2a:
            sub_1428a6890(rax_17, rax_16, "crypto\asn1\t_pkey.c", 0x5b)
            return zx.q(r15)
        
        int32_t var_48_1 = *sub_140687ad0(arg3)
        char* const var_50_1 = rbp_1
        int32_t var_58_1 = *sub_140687ad0(arg3)
        rax_4 = sub_1428b6f70(arg1, "%s %s%lu (%s0x%lx)\n", arg2)
    else
        rax_4 = sub_1428b6f70(arg1, "%s 0\n", arg2)
    
    if (rax_4 s<= 0)
        return 0

return 1
