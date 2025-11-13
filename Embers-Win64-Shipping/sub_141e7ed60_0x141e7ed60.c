// 函数: sub_141e7ed60
// 地址: 0x141e7ed60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0x160, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rax_2 = *(arg1 + 0x160) + rax * 0x18
    
    if (rax_2 != 0)
        return *(rax_2 + 8)

return 0
