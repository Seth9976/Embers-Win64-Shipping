// 函数: sub_140bdda80
// 地址: 0x140bdda80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0x18, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rax_2 = *(arg1 + 0x18) + rax * 0x18
    
    if (rax_2 != 0)
        return *(rax_2 + 8)

return 0
