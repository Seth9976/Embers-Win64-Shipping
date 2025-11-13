// 函数: sub_14108cb90
// 地址: 0x14108cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
int64_t i_1 = 2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
*(arg1 + 0x30) = *(arg2 + 0x30)
arg1[0xe] = arg2[0xe]
*(arg1 + 0x40) = *(arg2 + 0x40)
arg1[0x12] = arg2[0x12]
*(arg1 + 0x50) = *(arg2 + 0x50)
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
arg1[0x18] = arg2[0x18]
*(arg1 + 0x68) = *(arg2 + 0x68)
arg1[0x1c] = arg2[0x1c]
void* rax_14 = &arg1[0x24]
*(arg1 + 0x80) = *(arg2 + 0x80)
void* rcx = &arg2[0x24]
int64_t i

do
    rax_14 += 0x80
    uint128_t zmm0 = *rcx
    rcx += 0x80
    *(rax_14 - 0x80) = zmm0
    *(rax_14 - 0x70) = *(rcx - 0x70)
    *(rax_14 - 0x60) = *(rcx - 0x60)
    *(rax_14 - 0x50) = *(rcx - 0x50)
    *(rax_14 - 0x40) = *(rcx - 0x40)
    *(rax_14 - 0x30) = *(rcx - 0x30)
    *(rax_14 - 0x20) = *(rcx - 0x20)
    *(rax_14 - 0x10) = *(rcx - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x190) = *(arg2 + 0x190)
*(arg1 + 0x1a0) = *(arg2 + 0x1a0)
*(arg1 + 0x1b0) = *(arg2 + 0x1b0)
*(arg1 + 0x1c0) = *(arg2 + 0x1c0)
*(arg1 + 0x1d0) = *(arg2 + 0x1d0)
arg1[0x78] = arg2[0x78]
arg1[0x79] = arg2[0x79]
arg1[0x7a] = arg2[0x7a]
arg1[0x7b] = arg2[0x7b]
*(arg1 + 0x1f0) = *(arg2 + 0x1f0)
*(arg1 + 0x200) = *(arg2 + 0x200)
*(arg1 + 0x210) = *(arg2 + 0x210)
*(arg1 + 0x220) = *(arg2 + 0x220)
*(arg1 + 0x230) = *(arg2 + 0x230)
*(arg1 + 0x240) = *(arg2 + 0x240)
*(arg1 + 0x248) = *(arg2 + 0x248)
*(arg1 + 0x250) = *(arg2 + 0x250)
*(arg1 + 0x258) = *(arg2 + 0x258)
*(arg1 + 0x260) = *(arg2 + 0x260)
*(arg1 + 0x268) = *(arg2 + 0x268)
*(arg1 + 0x270) = *(arg2 + 0x270)
*(arg1 + 0x278) = *(arg2 + 0x278)
return arg1
