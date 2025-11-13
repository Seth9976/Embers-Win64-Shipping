// 函数: sub_140cafc10
// 地址: 0x140cafc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ea01d0
int64_t* rcx = arg1[1]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)

int64_t* rcx_1 = arg1[3]
arg1[1] = 0
sub_140a4fc50(rcx_1)
sub_140a4fc50(arg1[4])
arg1[3] = 0
*arg1 = &data_142d565e8
arg1[4] = 0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
