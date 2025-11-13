// 函数: sub_14108b590
// 地址: 0x14108b590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14125c360(arg1, arg2, arg3, arg4, arg6)
*arg1 = &data_142f11a30
arg1[5] = *arg5
arg1[6] = arg5[1]
arg1[7].d = arg5[2].d
arg1[8] = arg5[3]
arg1[9] = arg5[4]
arg1[0xa] = arg5[5]
arg1[0xb] = arg5[6]
arg1[0xc].d = arg5[7].d
arg1[0xd].d = arg8
int32_t rax_9
rax_9.b = arg8 != 4
*(arg1 + 0x6c) = rax_9.b
*(arg1 + 0x6d) = arg7.b & 1
int32_t rax_11

if (arg2 == 0)
    rax_11 = 0
else
    rax_11 = *(arg2 + 0xf68)

arg1[0xe].d = rax_11
*(arg1 + 0x74) = (arg7 u>> 1).b & 1
return arg1
