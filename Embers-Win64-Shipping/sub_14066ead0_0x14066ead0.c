// 函数: sub_14066ead0
// 地址: 0x14066ead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t arg_8
sub_14062d6e0(arg1 + 0x148, &arg_8, arg3)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rcx_1 = *(arg1 + 0x148) + rax * 0x28
    int64_t* rdx_2 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rdx_2 = nullptr
    
    if (rdx_2 != 0)
        sub_140597df0(arg2, rdx_2)

return arg2
