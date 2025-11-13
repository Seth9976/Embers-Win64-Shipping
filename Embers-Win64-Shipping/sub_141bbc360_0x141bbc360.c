// 函数: sub_141bbc360
// 地址: 0x141bbc360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c128b0(arg1, *(arg2 + 0x408))
sub_141b939a0(arg1, arg2, 1)

if ((*(*(arg2 + 0x28) + 0x38))(arg2 + 0x28) == 0)
    int64_t rdi_1 = sx.q(arg1[0x32].d)
    int32_t rax_2 = (rdi_1 + 1).d
    arg1[0x32].d = rax_2
    
    if (rax_2 s> *(arg1 + 0x194))
        sub_1405a4d70(&arg1[0x31])
    
    *(arg1[0x31] + (rdi_1 << 3)) = arg2

return sub_141bf4410(arg1) __tailcall
