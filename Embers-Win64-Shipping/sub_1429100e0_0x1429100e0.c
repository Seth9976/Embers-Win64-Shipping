// 函数: sub_1429100e0
// 地址: 0x1429100e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    int64_t rax_1 = sub_14290f6d0(*arg1)
    *arg2 = rax_1
    
    if (rax_1 != 0)
        int64_t rax_2 = sub_14290f6d0(arg1[4])
        *arg3 = rax_2
        
        if (rax_2 != 0)
            int32_t* rcx_2 = arg1[2]
            int32_t var_18_1
            int32_t r8
            
            if (rcx_2 == 0)
                *arg4 = 0x14
            label_142910184:
                int32_t* rcx_3 = arg1[3]
                int32_t rax_5
                
                if (rcx_3 != 0)
                    rax_5 = sub_1428e4860(rcx_3)
                
                if (rcx_3 == 0 || rax_5 == 1)
                    return 1
                
                var_18_1 = 0x2cc
                r8 = 0x8b
            else
                int32_t rax_3 = sub_1428e4860(rcx_2)
                *arg4 = rax_3
                
                if (rax_3 s>= 0)
                    goto label_142910184
                
                var_18_1 = 0x2c0
                r8 = 0x96
            
            sub_1428a5670(4, 0x97, r8, "crypto\rsa\rsa_ameth.c", var_18_1)

return 0
