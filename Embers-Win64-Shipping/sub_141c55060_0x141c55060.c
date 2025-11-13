// 函数: sub_141c55060
// 地址: 0x141c55060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143209f08
void* rcx = arg1[1]

if (rcx != 0)
    sub_141c5c040(rcx, 1)
    int64_t* rcx_1 = arg1[1]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1, 1)

*arg1 = &data_1432099a8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
