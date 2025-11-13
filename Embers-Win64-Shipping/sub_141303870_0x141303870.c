// 函数: sub_141303870
// 地址: 0x141303870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x18] != 0)
    void* rax_1 = arg1[0x1a]
    void* rcx = &arg1[0x1c]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

sub_141300080(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
