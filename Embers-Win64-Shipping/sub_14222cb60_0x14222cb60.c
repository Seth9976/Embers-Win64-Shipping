// 函数: sub_14222cb60
// 地址: 0x14222cb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x30) = *(arg2 + 0x30)
arg1[0xe] = arg2[0xe]
*(arg1 + 0x3c) = *(arg2 + 0x3c)
arg1[0x11] = arg2[0x11]
*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[0x14] = arg2[0x14]
*(arg1 + 0x54) = *(arg2 + 0x54)
arg1[0x17] = arg2[0x17]
*(arg1 + 0x60) = *(arg2 + 0x60)
arg1[0x1a] = arg2[0x1a]
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg1[0x1d] = arg2[0x1d]
*(arg1 + 0x78) = *(arg2 + 0x78)
arg1[0x20] = arg2[0x20]
arg1[0x21] ^= (arg2[0x21] ^ arg1[0x21]) & 1
arg1[0x22] = arg2[0x22]
void* rax_16 = &arg2[0x23]
int64_t i_1 = 2
void* rcx = &arg1[0x23]
int64_t i

do
    rcx += 0x80
    uint128_t zmm0 = *rax_16
    rax_16 += 0x80
    *(rcx - 0x80) = zmm0
    *(rcx - 0x70) = *(rax_16 - 0x70)
    *(rcx - 0x60) = *(rax_16 - 0x60)
    *(rcx - 0x50) = *(rax_16 - 0x50)
    *(rcx - 0x40) = *(rax_16 - 0x40)
    *(rcx - 0x30) = *(rax_16 - 0x30)
    *(rcx - 0x20) = *(rax_16 - 0x20)
    *(rcx - 0x10) = *(rax_16 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
*rcx = *rax_16
*(arg1 + 0x190) = *(arg2 + 0x190)
arg1[0x68] = arg2[0x68]
return sub_1407473e0(&arg1[0x6a], &arg2[0x6a]) __tailcall
