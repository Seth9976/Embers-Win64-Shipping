// 函数: sub_142911590
// 地址: 0x142911590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (strcmp(arg2, "dh_paramgen_prime_len") == 0)
    return sub_1428bcb30(arg1, 0x1c, 2, 0x1001, atoi(arg3), 0)

if (strcmp(arg2, "dh_rfc5114") != 0)
    if (strcmp(arg2, "dh_param") != 0)
        if (strcmp(arg2, "dh_paramgen_generator") == 0)
            return sub_1428bcb30(arg1, 0x1c, 2, 0x1002, atoi(arg3), 0)
        
        if (strcmp(arg2, "dh_paramgen_subprime_len") == 0)
            return sub_1428bcb30(arg1, 0x1c, 2, 0x1004, atoi(arg3), 0)
        
        if (strcmp(arg2, "dh_paramgen_type") == 0)
            return sub_1428bcb30(arg1, 0x1c, 2, 0x1005, atoi(arg3), 0)
        
        int64_t rcx_17 = 0
        
        while (true)
            char rax_19 = arg2[rcx_17]
            rcx_17 += 1
            
            if (rax_19 != *(rcx_17 + 0x14351e9ab))
                break
            
            if (rcx_17 == 7)
                return sub_1428bcb30(arg1, 0x1c, 0x400, 0x1010, atoi(arg3), 0)
    else
        void* rbx_2 = arg1[5]
        int32_t rax_7 = sub_1428a9c80(arg3)
        
        if (rax_7 != 0)
            *(rbx_2 + 0x24) = rax_7
            return 1
        
        sub_1428a5670(rax_7 + 5, rax_7 + 0x78, rax_7 + 0x6e, "crypto\dh\dh_pmeth.c", 0xf4)
else
    void* rbx_1 = arg1[5]
    int32_t rax_4 = atoi(arg3)
    
    if (rax_4 u<= 3)
        *(rbx_1 + 0x20) = rax_4
        return 1

return 0xfffffffe
