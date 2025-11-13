// 函数: sub_1429a2980
// 地址: 0x1429a2980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10
(*(*arg2 + 0x10))(arg2, &arg_10, 4)
*(arg1 + 8) = ((zx.d(arg5) << 8 | zx.d(arg4)) << 8 | zx.d(arg3)) << 8 | zx.d(arg_10)
(*(*arg2 + 0x10))(arg2, &arg_10, 4)
*(arg1 + 0xc) = ((zx.d(arg5) << 8 | zx.d(arg4)) << 8 | zx.d(arg3)) << 8 | zx.d(arg_10)
char arg_8
(*(*arg2 + 0x10))(arg2, &arg_8, 1)
uint32_t rcx_10 = zx.d(arg_8)
int32_t result = rcx_10 & 0xf
*(arg1 + 0x14) = rcx_10 u>> 4
*(arg1 + 0x10) = result
return result
