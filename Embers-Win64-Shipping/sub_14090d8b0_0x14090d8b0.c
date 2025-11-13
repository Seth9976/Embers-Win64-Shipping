// 函数: sub_14090d8b0
// 地址: 0x14090d8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142e1d368
arg1[3] = 0
arg1[4].d = 0
arg1[5].d = 0
int64_t rax = j_sub_140a82f30(0x18)

if (rax == 0)
    rax = 0
else
    __builtin_memset(rax, 0, 0x18)

arg1[9] = rax
arg1[8] = rax
sub_140b29d90(&arg1[0xa])
arg1[0xb] = *arg3
sub_140b214c0(&arg1[0xc])
__builtin_memset(&arg1[0xe], 0, 0x12)
*(arg1 + 0x84) = 0
arg1[0x11] = arg2
__builtin_memset(&arg1[0x12], 0, 0x19)
*(arg1 + 0xac) = arg4
__builtin_memset(&arg1[0x16], 0, 0x14)
InitializeCriticalSection(&arg1[0x19])
SetCriticalSectionSpinCount(&arg1[0x19], 0xfa0)
int64_t* rcx_4 = arg1[0x11]
int32_t arg_20 = 0
(*(*rcx_4 + 0x108))(rcx_4, 0x200000, &arg_20)
int64_t* rcx_5 = arg1[0x11]
(*(*rcx_5 + 0x100))(rcx_5, 0x200000, &arg_20)
return arg1
