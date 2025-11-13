// 函数: sub_142528410
// 地址: 0x142528410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa].b = arg2[0xa].b
*(arg1 + 0x29) = *(arg2 + 0x29)
*(arg1 + 0x2a) = *(arg2 + 0x2a)
*(arg1 + 0x2b) ^= (*(arg1 + 0x2b) ^ *(arg2 + 0x2b)) & 1
char rcx = ((*(arg2 + 0x2b) ^ *(arg1 + 0x2b)) & 2) ^ *(arg1 + 0x2b)
*(arg1 + 0x2b) = rcx
char rax_13 = ((*(arg2 + 0x2b) ^ rcx) & 4) ^ rcx
*(arg1 + 0x2b) = rax_13
char rcx_1 = ((*(arg2 + 0x2b) ^ rax_13) & 8) ^ rax_13
*(arg1 + 0x2b) = rcx_1
char rax_14 = ((*(arg2 + 0x2b) ^ rcx_1) & 0x10) ^ rcx_1
*(arg1 + 0x2b) = rax_14
char rdx = ((*(arg2 + 0x2b) ^ rax_14) & 0x20) ^ rax_14
*(arg1 + 0x2b) = rdx
char rcx_2 = ((*(arg2 + 0x2b) ^ rdx) & 0x40) ^ rdx
*(arg1 + 0x2b) = rcx_2
*(arg1 + 0x2b) = ((*(arg2 + 0x2b) ^ rcx_2) & 0x7f) ^ *(arg2 + 0x2b)
arg1[0xb].b ^= (arg1[0xb].b ^ arg2[0xb].b) & 1
char rcx_3 = ((arg1[0xb].b ^ arg2[0xb].b) & 2) ^ arg1[0xb].b
arg1[0xb].b = rcx_3
arg1[0xb].b = ((rcx_3 ^ arg2[0xb].b) & 4) ^ rcx_3
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe] = arg2[0xe]
arg1[0xf] = arg2[0xf]
arg1[0x10] = arg2[0x10]
arg1[0x11] = arg2[0x11]
arg1[0x12] = arg2[0x12]
arg1[0x13] = arg2[0x13]
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
arg1[0x18] = arg2[0x18]
arg1[0x19] = arg2[0x19]
arg1[0x1a] = arg2[0x1a]
arg1[0x1b] = arg2[0x1b]
arg1[0x1c] = arg2[0x1c]
arg1[0x1d] = arg2[0x1d]
arg1[0x1e] = arg2[0x1e]
arg1[0x1f] = arg2[0x1f]
arg1[0x20] = arg2[0x20]
arg1[0x21] = arg2[0x21]
return arg1
