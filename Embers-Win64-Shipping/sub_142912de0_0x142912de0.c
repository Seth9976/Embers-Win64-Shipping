// 函数: sub_142912de0
// 地址: 0x142912de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (strcmp(arg2, "ec_paramgen_curve") == 0)
    int32_t rax_1 = sub_1428c0320(arg3)
    
    if (rax_1 == 0)
        rax_1 = sub_1428a9c80(arg3)
        
        if (rax_1 == 0)
            rax_1 = sub_1428a9380(arg3)
            
            if (rax_1 == 0)
                sub_1428a5670(rax_1 + 0x10, 0xc6, 0x8d, "crypto\ec\ec_pmeth.c", 0x169)
                return 0
    
    return sub_1428bcb30(arg1, 0x198, 6, 0x1001, rax_1, 0)

if (strcmp(arg2, "ec_param_enc") != 0)
    if (strcmp(arg2, "ecdh_kdf_md") == 0)
        int64_t rax_9 = sub_14289b970(arg3)
        
        if (rax_9 != 0)
            return sub_1428bcb30(arg1, 0x198, 0x400, 0x1005, 0, rax_9)
        
        sub_1428a5670((rax_9 + 0x10).d, 0xc6, 0x97, "crypto\ec\ec_pmeth.c", 0x179)
        return 0
    
    if (strcmp(arg2, "ecdh_cofactor_mode") == 0)
        return sub_1428bcb30(arg1, 0x198, 0x400, 0x1003, atoi(arg3), 0)
else
    int32_t rax_5 = strcmp(arg3, "explicit")
    
    if (rax_5 == 0)
        return sub_1428bcb30(arg1, 0x198, 6, 0x1002, rax_5, 0)
    
    if (strcmp(arg3, "named_curve") == 0)
        return sub_1428bcb30(arg1, 0x198, 6, 0x1002, 1, 0)

return 0xfffffffe
