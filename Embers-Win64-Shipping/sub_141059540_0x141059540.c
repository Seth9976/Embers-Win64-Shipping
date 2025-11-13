// 函数: sub_141059540
// 地址: 0x141059540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141059a80(arg2, arg4)
arg2[1].d = 0
__builtin_memset(&arg2[2], 0, 0x50)
*(arg2 + 0x61) = 0xff
memmove(arg2, arg3, 0x68)
arg2[1].d = 6
*arg2 = arg1
void* result = *(arg3 + 0x10)
*(result + 8) += 1
return result
