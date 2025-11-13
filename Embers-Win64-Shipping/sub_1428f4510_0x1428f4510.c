// 函数: sub_1428f4510
// 地址: 0x1428f4510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax_1 = sub_1428f35e0(arg2, sub_14060aa60(arg1))

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 6).d, 0xb1, 0xa5, "crypto\evp\evp_cnf.c", 0x1c)
    return 0

int32_t rbx_1 = 0

if (sub_142898c70(rax_1) s> 0)
    int32_t rax_9
    
    do
        int64_t* rax_4 = sub_142898ea0(rax_1, rbx_1)
        
        if (strcmp(rax_4[1], "fips_mode") != 0)
            int32_t var_18_1 = 0x2c
            sub_1428a5670(6, 0xb1, 0xa9, "crypto\evp\evp_cnf.c", 0x2c)
            rax_4[1]
            var_18_1.q = rax_4[2]
            sub_1428a4880(4)
        else
            int32_t arg_18
            
            if (sub_1428e8de0(rax_4, &arg_18) == 0)
                sub_1428a5670(6, 0xb1, 0xa8, "crypto\evp\evp_cnf.c", 0x24)
                return 0
            
            if (arg_18 s> 0)
                sub_1428a5670(6, 0xb1, 0xa7, "crypto\evp\evp_cnf.c", 0x28)
                return 0
        
        rbx_1 += 1
        rax_9 = sub_142898c70(rax_1)
    while (rbx_1 s< rax_9)

return 1
