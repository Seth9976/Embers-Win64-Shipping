// 函数: sub_142884f90
// 地址: 0x142884f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
__chkstk(0x30)

if (arg2 != 0)
    if (sub_1428853d0(arg1, &arg_10) == 0)
        return 0xfffffffe
    
    void* rax_3 = sub_1428852f0(arg1, arg_10)
    
    if (rax_3 == 0)
        if ((*arg1 & 0x10) != 0)
            sub_1428a5670(0x14, 0x14e, 0x182, "ssl\ssl_conf.c", 0x339)
            sub_1428a4880(2)
        
        return 0xfffffffe
    
    if (*(rax_3 + 0x1a) != 4)
        if (arg3 == 0)
            return zx.q((arg3 - 3).d)
        
        int32_t rax_10 = (*rax_3)(arg1, arg3)
        
        if (rax_10 s> 0)
            return 2
        
        if (rax_10 == 0xfffffffe)
            return 0xfffffffe
        
        if ((*arg1 & 0x10) != 0)
            int32_t var_18 = 0x332
            sub_1428a5670(0x14, 0x14e, 0x180, "ssl\ssl_conf.c", 0x332)
            var_18.q = arg3
            sub_1428a4880(4)
    else
        int64_t rax_5 = (rax_3 - &data_1434e8180) s>> 5
        
        if (rax_5 u< 0x16)
            int32_t* rax_6 = *(arg1 + 0x28)
            int32_t rcx_1 = *(&data_1434e8780 + (rax_5 << 3))
            
            if (rax_6 != 0)
                int32_t rdx_3 = *((rax_5 << 3) + 0x1434e8784)
                int32_t r8_1 = rdx_3 & 1
                int32_t rdx_4 = rdx_3 & 0xf00
                
                if (rdx_4 == 0)
                    goto label_14288506c
                
                if (rdx_4 == 0x100)
                    rax_6 = *(arg1 + 0x78)
                label_14288506c:
                    int32_t rdx_5 = *rax_6
                    
                    if (r8_1 == 0)
                        *rax_6 = rdx_5 | rcx_1
                        return zx.q(r8_1 + 1)
                    
                    *rax_6 = not.d(rcx_1) & rdx_5
                else if (rdx_4 == 0x200)
                    rax_6 = *(arg1 + 0x80)
                    goto label_14288506c
            
            return 1
else
    sub_1428a5670(0x14, 0x14e, 0x181, "ssl\ssl_conf.c", 0x31c)

return 0
