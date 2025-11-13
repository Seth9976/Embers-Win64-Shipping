// 函数: sub_1428fc780
// 地址: 0x1428fc780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint32_t rcx_1 = zx.d(arg1[7]) << 8
uint32_t rdx_1 = zx.d(arg1[4]) | zx.d(arg1[5]) << 8
uint32_t arg_8 = zx.d(*arg1) | zx.d(arg1[1]) << 8 | zx.d(arg1[2]) << 0x10 | zx.d(arg1[3]) << 0x18
uint32_t rcx_4 = (rcx_1 | zx.d(arg1[6])) << 0x10 | rdx_1
sub_1428f9590(&arg_8, arg3, arg4)
uint32_t rcx_6 = arg_8
*arg2 = arg_8.b
arg2[1] = (rcx_6 u>> 8).b
arg2[2] = (rcx_6 u>> 0x10).b
arg2[3] = (rcx_6 u>> 0x18).b
arg2[4] = rcx_4.b
arg2[5] = (rcx_4 u>> 8).b
uint8_t result = (rcx_4 u>> 0x10).b
arg2[6] = result
arg2[7] = (rcx_4 u>> 0x18).b
return result
