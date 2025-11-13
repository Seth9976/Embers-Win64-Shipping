// 函数: sub_1420342b0
// 地址: 0x1420342b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x84) = 0
memset(arg1, 0, 0x88)
*arg1 &= 0xfe
char rax = ((*arg1 | arg2) & 0xfd) | (arg3 * 2)
*(arg1 + 0xc) = arg5.d
*arg1 = rax
*(arg1 + 8) = arg4.d
int32_t rax_2 = arg6[1].d
*(arg1 + 0x10) = *arg6
*(arg1 + 0x18) = rax_2
int32_t rax_4 = arg7[1].d
*(arg1 + 0x1c) = *arg7
*(arg1 + 0x24) = rax_4
int32_t rax_6 = arg8[1].d
*(arg1 + 0x28) = *arg8
*(arg1 + 0x30) = rax_6
int32_t rax_8 = arg9[1].d
*(arg1 + 0x34) = *arg9
*(arg1 + 0x3c) = rax_8
sub_140d3a3a0(&arg1[0x60], arg10)
sub_140d3a3a0(&arg1[0x68], arg11)
sub_140d3a3a0(&arg1[0x70], arg12)
*(arg1 + 0x78) = arg13
*(arg1 + 0x5c) = arg14
int32_t rax_12 = arg16[1].d
*(arg1 + 0x40) = *arg16
*(arg1 + 0x48) = rax_12
int32_t rax_14 = arg17[1].d
*(arg1 + 0x4c) = *arg17
*(arg1 + 0x54) = rax_14
*(arg1 + 4) = arg15
return arg1
