// 函数: sub_1429138d0
// 地址: 0x1429138d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (strcmp(arg2, "ec_paramgen_curve") == 0)
    int32_t rax_1 = sub_1428c0320(arg3)
    
    if (rax_1 == 0)
        rax_1 = sub_1428a9c80(arg3)
        
        if (rax_1 == 0)
            rax_1 = sub_1428a9380(arg3)
            
            if (rax_1 == 0)
                sub_1428a5670(rax_1 + 0x35, rax_1 + 0x6e, rax_1 + 0x6c, "crypto\sm2\sm2_pmeth.c", 
                    0xed)
                return 0
    
    return sub_1428bcb30(arg1, 0x198, 6, 0x1001, rax_1, 0)

if (strcmp(arg2, "ec_param_enc") == 0)
    int32_t rax_5 = strcmp(arg3, "explicit")
    
    if (rax_5 == 0)
        return sub_1428bcb30(arg1, 0x198, 6, 0x1002, rax_5, 0)
    
    if (strcmp(arg3, "named_curve") == 0)
        return sub_1428bcb30(arg1, 0x198, 6, 0x1002, 1, 0)

return 0xfffffffe
