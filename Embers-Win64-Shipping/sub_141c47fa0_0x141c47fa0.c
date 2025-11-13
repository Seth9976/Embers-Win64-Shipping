// 函数: sub_141c47fa0
// 地址: 0x141c47fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x54) |= 1
*arg1 = &data_143205dc8
int64_t* rcx = arg1[0xb]
(*(*rcx + 0x10))(rcx, 1)
int64_t* rcx_1 = arg1[0xb]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x20))(rcx_1, 1)

if (arg1[2] != 0)
    void* rax_2 = arg1[4]
    void* rcx_2 = &arg1[6]
    
    if (rax_2 != 0)
        rcx_2 = rax_2
    
    (*(*rcx_2 + 0x10))(rcx_2)

*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
