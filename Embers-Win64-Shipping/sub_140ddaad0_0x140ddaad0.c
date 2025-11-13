// 函数: sub_140ddaad0
// 地址: 0x140ddaad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg3
arg1[1] = arg3[1]
arg1[2].q = 0
arg1[4].q = arg10
*(arg1 + 0x48) = arg11
*(arg1 + 0x5c) = arg12
arg1[6].d = arg13
*(arg1 + 0x78) = arg9
*(arg1 + 0x79) = arg8
*(arg1 + 0x7a) = arg6
*(arg1 + 0x7b) = arg5
*(arg1 + 0x7c) = arg7
char rax_9 = *(arg1 + 0x7d) & 0xfd
*(arg1 + 0x28) = 0
arg1[3].q = arg4
*(arg1 + 0x7d) = rax_9 | 1
*(arg1 + 0x38) = 0
arg1[5].q = 0
*(arg1 + 0x58) = arg2
*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0xffffffff
arg1[7].q = 0
return arg1
