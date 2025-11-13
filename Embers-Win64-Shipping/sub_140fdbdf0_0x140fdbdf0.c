// 函数: sub_140fdbdf0
// 地址: 0x140fdbdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ef5a70
int64_t* rcx = arg1[5]

if (rcx != 0)
    arg1[5] = 0
    (*(*rcx + 0x10))(rcx)
    int64_t* rcx_1 = arg1[5]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
