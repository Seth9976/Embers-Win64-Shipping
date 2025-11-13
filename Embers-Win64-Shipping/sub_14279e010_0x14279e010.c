// 函数: sub_14279e010
// 地址: 0x14279e010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[8] != 0)
    void* rax_1 = arg1[0xa]
    void* rcx = &arg1[0xc]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
