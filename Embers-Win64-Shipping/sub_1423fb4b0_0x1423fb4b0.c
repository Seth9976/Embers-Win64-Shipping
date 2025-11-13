// 函数: sub_1423fb4b0
// 地址: 0x1423fb4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg3
*arg1 = arg2
*(arg1 + 8) = *arg5
*(arg1 + 0x10) = arg5[1]
__builtin_memset(arg5, 0, 0x30)
*(arg1 + 0x18) = arg5[2]
*(arg1 + 0x20) = arg5[3]
*(arg1 + 0x28) = arg5[4]
*(arg1 + 0x30) = arg5[5]
arg1[0xe].b = arg5[6].b
*(arg1 + 0x40) = arg7
*(arg1 + 0x48) = *arg4
*(arg1 + 0x50) = arg4[1]
void* rax_10 = arg4[2]
*(arg1 + 0x58) = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

arg1[0x18] ^= (arg1[0x18] ^ arg4[3].d) & 1
int32_t rcx_3 = ((arg4[3].d ^ arg1[0x18]) & 2) ^ arg1[0x18]
arg1[0x18] = rcx_3
int32_t rdx_3 = ((arg4[3].d ^ rcx_3) & 4) ^ rcx_3
arg1[0x18] = rdx_3
arg1[0x18] = ((arg4[3].d ^ rdx_3) & 8) ^ rdx_3
arg1[0x1a].b = arg6
__builtin_memset(&arg1[0x1c], 0, 0x20)
__builtin_memset(&arg1[0x28], 0, 0x20)
sub_141b84450(arg5)
return arg1
