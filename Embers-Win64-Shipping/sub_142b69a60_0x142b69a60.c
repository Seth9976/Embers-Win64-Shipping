// 函数: sub_142b69a60
// 地址: 0x142b69a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    int16_t rax_1 = *(arg2 + 8)
    
    if ((rax_1.b & 0x11) == 0)
        void* r10_1 = arg2 + 0xa
        
        if ((rax_1.b & 2) == 0)
            r10_1 = *(arg2 + 0x18)
        
        if (r10_1 != 0)
            int32_t arg_18 = 1
            int32_t rcx_1
            
            if (rax_1 s< 0)
                rcx_1 = *(arg2 + 0xc)
            else
                rcx_1 = sx.d(rax_1) s>> 5
            
            sub_142b1b260(*(arg1 + 8), r10_1, r10_1 + (sx.q(rcx_1) << 1), *(arg1 + 0x10), &arg_18)
            return zx.q(arg_18)
    
    *arg3 = 1

return 2
