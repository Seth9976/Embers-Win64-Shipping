// 函数: sub_140bc2520
// 地址: 0x140bc2520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e86880
int64_t* rcx = arg1[0xf]

if (rcx != 0)
    sub_140a4fc50(rcx)
    arg1[0xf] = 0

int64_t rcx_1 = arg1[2]

if (rcx_1 != 0 && *(arg1 + 0x65) == 0)
    sub_140a74f90(rcx_1)

arg1[2] = 0
sub_140a3c4a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
