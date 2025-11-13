// 函数: sub_14060dce0
// 地址: 0x14060dce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d642d8
int64_t* rcx = arg1[1]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)

arg1[1] = 0
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
