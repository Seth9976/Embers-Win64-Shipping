// 函数: sub_141db7370
// 地址: 0x141db7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
arg1[4] = 0

if (&arg2[2] != &arg1[2] && arg2[4] != 0)
    int64_t* rcx = *(arg2 + 8)
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx)

*(arg1 + 0x18) = 0
*(arg1 + 0x18) = *(arg2 + 0x18)
__builtin_memset(&arg2[6], 0, 0x30)
arg1[8] = arg2[8]
arg1[9] = arg2[9]
*(arg1 + 0x28) = 0
*(arg1 + 0x28) = *(arg2 + 0x28)
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
*(arg1 + 0x38) = 0
*(arg1 + 0x38) = *(arg2 + 0x38)
arg1[0x10] = arg2[0x10]
arg1[0x11] = arg2[0x11]
arg1[0x12] ^= (arg1[0x12] ^ arg2[0x12]) & 1
int32_t rcx_4 = ((arg2[0x12] ^ arg1[0x12]) & 2) ^ arg1[0x12]
arg1[0x12] = rcx_4
int32_t rax_18 = ((rcx_4 ^ arg2[0x12]) & 4) ^ rcx_4
arg1[0x12] = rax_18
int32_t rcx_8 = ((rax_18 ^ arg2[0x12]) & 8) ^ rax_18
arg1[0x12] = rcx_8
arg1[0x12] = ((rcx_8 ^ arg2[0x12]) & 0x10) ^ rcx_8
return arg1
