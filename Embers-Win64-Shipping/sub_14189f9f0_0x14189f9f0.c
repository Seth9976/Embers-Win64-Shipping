// 函数: sub_14189f9f0
// 地址: 0x14189f9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) != 0)
    void* rax_1 = *(arg1 + 0x40)
    void* rcx = arg1 + 0x50
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

int64_t rcx_1 = *(arg1 + 0x20)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x10)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
