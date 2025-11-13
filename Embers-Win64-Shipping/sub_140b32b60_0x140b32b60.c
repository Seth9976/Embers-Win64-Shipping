// 函数: sub_140b32b60
// 地址: 0x140b32b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e782c0
int64_t* rcx = arg1[2]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx, 1)
    int64_t* rcx_1 = arg1[2]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x20))(rcx_1, 1)
    
    arg1[2] = 0

*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
