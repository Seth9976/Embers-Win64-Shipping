// 函数: sub_140cafca0
// 地址: 0x140cafca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e9fd38
int64_t* rcx = arg1[0xf]

if (rcx != 0)
    (**rcx)(rcx, 1)

arg1[0xf] = 0
*arg1 = &data_142e9f810

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_140a74f90(arg1)
return arg1
