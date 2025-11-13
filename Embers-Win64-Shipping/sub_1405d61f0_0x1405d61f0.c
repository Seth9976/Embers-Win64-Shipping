// 函数: sub_1405d61f0
// 地址: 0x1405d61f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x14]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x12]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

if (arg1[0xa] != 0)
    void* rax_1 = arg1[0xc]
    void* rcx_2 = &arg1[0xe]
    
    if (rax_1 != 0)
        rcx_2 = rax_1
    
    (*(*rcx_2 + 0x10))(rcx_2)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
