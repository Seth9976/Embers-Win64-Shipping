// 函数: sub_14104cd90
// 地址: 0x14104cd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = arg2
arg1[5] = arg3
*(arg1 + 0x3c) = *(*(arg2 + 0x20) + 0x44)
sub_141024c90(&arg1[0x604], arg2, arg3, data_1439b4aec, 0x800, arg5)

if (arg4 == 0)
    jump(*(*arg1 + 8))

memcpy(&arg1[8], arg4 + 0x40, 0x2fd8)
return sub_141049bf0(arg1) __tailcall
