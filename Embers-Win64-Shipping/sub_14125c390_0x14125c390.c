// 函数: sub_14125c390
// 地址: 0x14125c390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[4] = arg6
*arg1 = &data_142f51ea0
arg1[1] = arg2
arg1[2].d = arg3
arg1[3] = arg4
arg1[5] = *arg5
arg1[6] = arg5[1]
arg1[7].d = arg5[2].d
arg1[8] = arg5[3]
arg1[9] = arg5[4]
arg1[0xa] = arg5[5]
arg1[0xb] = arg5[6]
arg1[0xc].d = arg5[7].d
arg1[0xd].d = arg8
int32_t rax_8
rax_8.b = arg8 != 4
*(arg1 + 0x6c) = rax_8.b
int32_t rcx
rcx.b = arg7.b & 1
*(arg1 + 0x6e) = rcx.b
*(arg1 + 0x6d) = (arg7 u>> 1).b & 1
return arg1
