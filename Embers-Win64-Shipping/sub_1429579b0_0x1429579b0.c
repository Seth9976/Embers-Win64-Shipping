// 函数: sub_1429579b0
// 地址: 0x1429579b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint32_t rcx_1 = zx.d(arg1[6]) << 8
uint32_t rdx_2 = zx.d(arg1[4]) << 0x18 | zx.d(arg1[5]) << 0x10
uint32_t arg_8 = zx.d(*arg1) << 0x18 | zx.d(arg1[1]) << 0x10 | zx.d(arg1[2]) << 8 | zx.d(arg1[3])
uint32_t rcx_3 = rcx_1 | zx.d(arg1[7]) | rdx_2
uint32_t* rcx_4 = &arg_8

if (arg4 == 0)
    sub_142957fa0(rcx_4, arg3)
else
    sub_142958440(rcx_4, arg3)

uint32_t rcx_5 = arg_8
*arg2 = (rcx_5 u>> 0x18).b
arg2[1] = (rcx_5 u>> 0x10).b
char rax_12 = arg_8.b
arg2[2] = (rcx_5 u>> 8).b
arg2[3] = rax_12
arg2[4] = (rcx_3 u>> 0x18).b
arg2[5] = (rcx_3 u>> 0x10).b
char result = rcx_3.b
arg2[6] = (rcx_3 u>> 8).b
arg2[7] = result
return result
