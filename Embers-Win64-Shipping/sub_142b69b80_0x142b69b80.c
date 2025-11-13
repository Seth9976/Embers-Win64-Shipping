// 函数: sub_142b69b80
// 地址: 0x142b69b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 0

int16_t rax_1 = *(arg2 + 8)

if ((rax_1.b & 0x11) == 0)
    void* rbx_1 = arg2 + 0xa
    
    if ((rax_1.b & 2) == 0)
        rbx_1 = *(arg2 + 0x18)
    
    if (rbx_1 != 0)
        int32_t rcx_1
        
        if (rax_1 s< 0)
            rcx_1 = *(arg2 + 0xc)
        else
            rcx_1 = sx.d(rax_1) s>> 5
        
        return ((*(*arg1 + 0x98))(arg1, rbx_1, rbx_1 + (sx.q(rcx_1) << 1)) - rbx_1) s>> 1

*arg3 = 1
return 0
