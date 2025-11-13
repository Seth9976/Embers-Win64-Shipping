// 函数: sub_141f21af0
// 地址: 0x141f21af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f44c90(arg1)
void* rcx = arg1[0x3f]

if (rcx == 0)
    arg1[0x3e] = 0
    arg1[0x41] = 0
    int64_t arg_8 = 0
    return 0

sub_140d3a3a0(rcx + 0x160, arg1)
arg1[0x3e] = *(arg1[0x3f] + 0x10)
void* result = arg1[0x3f]
arg1[0x41] = *(result + 0x18)
return result
