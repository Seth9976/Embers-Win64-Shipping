// 函数: sub_140b32960
// 地址: 0x140b32960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e77b10
sub_140a4fc50(arg1[0x20b])
arg1[0x20b] = 0
int64_t rcx_1 = arg1[0x207]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x101]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142d5c278

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
