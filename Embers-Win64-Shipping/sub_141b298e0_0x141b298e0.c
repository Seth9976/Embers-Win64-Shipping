// 函数: sub_141b298e0
// 地址: 0x141b298e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t* rax = sub_140910250(arg2, &arg_8, arg1 + 0xf8)

if (*rax != 0xffffffff)
    sub_140910250(arg2, &arg_8, arg1 + 0xf8)
    rax = sx.q(arg_8)
    
    if (rax.d != 0xffffffff)
        int64_t rax_1 = *arg2
        *(arg1 + 0xf8) = *(rax_1 + rax * 0x28 + 0x10)
        return rax_1
    
    *(arg1 + 0xf8) = *0x10

return rax
