// 函数: sub_1428bd830
// 地址: 0x1428bd830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0 && *(rax_1 + 0x98) != 0)
        if (arg1[4].d != 0x100)
            sub_1428a5670(6, 0x69, 0x97, "crypto\evp\pmeth_fn.c", 0xa3)
            return 0xffffffff
        
        if ((*(rax_1 + 4) & 2) != 0)
            int32_t rax_3 = sub_142896de0(arg1[2])
            int64_t rcx_1 = sx.q(rax_3)
            
            if (rax_3 == 0)
                sub_1428a5670(rax_3 + 6, rax_3 + 0x69, rax_3 + 0xa3, "crypto\evp\pmeth_fn.c", 0xa6)
                return 0
            
            if (arg2 == 0)
                *arg3 = rcx_1
                return zx.q((arg2 + 1).d)
            
            if (*arg3 u< rcx_1)
                sub_1428a5670(6, 0x69, 0x9b, "crypto\evp\pmeth_fn.c", 0xa6)
                return 0
        
        int32_t var_18
        var_18.q = arg5
        return (*(*arg1 + 0x98))(arg1, arg2, arg3, arg4, var_18)

sub_1428a5670(6, 0x69, 0x96, "crypto\evp\pmeth_fn.c", 0x9f)
return 0xfffffffe
