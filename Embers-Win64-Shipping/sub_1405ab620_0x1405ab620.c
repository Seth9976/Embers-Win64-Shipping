// 函数: sub_1405ab620
// 地址: 0x1405ab620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[5].q = arg2[5].q
*(arg1 + 0x58) = *(arg2 + 0x58)
arg1[6].q = 0
arg1[6].q = arg2[6].q
arg2[6].q = 0
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg2 + 0x68) = 0
arg1[7].d = arg2[7].d
*(arg1 + 0x74) = *(arg2 + 0x74)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x7c) ^= (*(arg1 + 0x7c) ^ *(arg2 + 0x7c)) & 1
char rcx = ((*(arg1 + 0x7c) ^ *(arg2 + 0x7c)) & 2) ^ *(arg1 + 0x7c)
*(arg1 + 0x7c) = rcx
char rax_9 = ((rcx ^ *(arg2 + 0x7c)) & 4) ^ rcx
*(arg1 + 0x7c) = rax_9
char rcx_1 = ((rax_9 ^ *(arg2 + 0x7c)) & 8) ^ rax_9
*(arg1 + 0x7c) = rcx_1
char rdx = ((rcx_1 ^ *(arg2 + 0x7c)) & 0x10) ^ rcx_1
*(arg1 + 0x7c) = rdx
*(arg1 + 0x7c) = ((rdx ^ *(arg2 + 0x7c)) & 0x20) ^ rdx
char rax_11 = (arg1[0xc].b & 0xfe) | 2
arg1[0xc].b = rax_11

if ((arg2[0xc].b & 1) != 0)
    arg1[0xc].b = rax_11 | 1
    arg2[0xc].b &= 0xfe
    arg1[0xc].b &= 0xfd
    arg1[0xc].b |= arg2[0xc].b & 2
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    arg1[0xa] = arg2[0xa]
    arg1[0xb] = arg2[0xb]

return arg1
