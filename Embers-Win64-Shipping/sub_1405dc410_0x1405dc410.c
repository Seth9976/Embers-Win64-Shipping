// 函数: sub_1405dc410
// 地址: 0x1405dc410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x24] != 0)
    void* rax_1 = arg1[0x26]
    void* rcx = &arg1[0x28]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

int64_t rcx_1 = arg1[0x21]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405d58b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
