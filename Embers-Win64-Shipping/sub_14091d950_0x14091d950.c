// 函数: sub_14091d950
// 地址: 0x14091d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[3])
int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    int32_t rax_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_1 != 0)
        (*(*rcx_1 + 8))(rcx_1, 1)

*arg1 = &IDelegateInstance::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
