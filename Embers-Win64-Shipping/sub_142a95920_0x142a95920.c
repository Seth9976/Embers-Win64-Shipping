// 函数: sub_142a95920
// 地址: 0x142a95920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2 & 0xfffffc00

if (result != 0xd800)
    return result

int32_t rdx_1 = (arg2 - 0xd7c0) << 0xa
return sub_142a95470(arg1, rdx_1, rdx_1 + 0x400, arg3, arg4, arg5)
