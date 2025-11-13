// 函数: sub_142118dc0
// 地址: 0x142118dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rsi = *(arg2 + 0x28) u>> 7
void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"FShaderMapMemoryWriter", 1)
memset(arg1, 0, 0x90)
sub_140b4c2a0(arg1)
arg1[0x13] = &arg1[0x15]
*arg1 = &data_142d6ad48
arg1[0x12] = 0
arg1[0x14] = rbx
sub_140b552b0(arg1, 1)
(*arg1)[0x1b](arg1, zx.q(rsi))
void* rcx_5 = &arg1[0x1b]
*arg1 = &data_1432d56a0
arg1[0x15] = 0
arg1[0x16] = 0
__builtin_memset(&arg1[0x17], 0, 0x20)
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_2 = *(rcx_5 + 0x10)

if (rax_2 != 0)
    rcx_5 = rax_2

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x1f].d = 0xffffffff
*(arg1 + 0xfc) = 0
arg1[0x21] = 0
arg1[0x22].d = 0
arg1[0x23] = arg2
*(arg1 + 0x29) ^= (*(arg2 + 0x29) ^ *(arg1 + 0x29)) & 0x20
arg1[0xe] = *(arg2 + 0x70)
return arg1
