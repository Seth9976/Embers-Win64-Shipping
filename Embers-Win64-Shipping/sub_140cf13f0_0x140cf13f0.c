// 函数: sub_140cf13f0
// 地址: 0x140cf13f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ea9390
int64_t* rcx = arg1[0xf]

if (rcx != 0)
    (**rcx)(rcx, 1)

arg1[0xf] = 0
sub_140cad750(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_140a74f90(arg1)
return arg1
