// 函数: sub_1423fb320
// 地址: 0x1423fb320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 8) = *(arg2 + 8)
void* rax_2 = *(arg2 + 0x10)
*(arg1 + 0x10) = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

*(arg1 + 0x18) = *(arg2 + 0x18)
void* rax_4 = *(arg2 + 0x20)
*(arg1 + 0x20) = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

*(arg1 + 0x28) = *(arg2 + 0x28)
void* rax_6 = *(arg2 + 0x30)
*(arg1 + 0x30) = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[0xe].b = arg2[0xe].b
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x50) = *(arg2 + 0x50)
void* rax_11 = *(arg2 + 0x58)
*(arg1 + 0x58) = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

arg1[0x18] ^= (arg1[0x18] ^ arg2[0x18]) & 1
int32_t rcx_3 = ((arg2[0x18] ^ arg1[0x18]) & 2) ^ arg1[0x18]
arg1[0x18] = rcx_3
int32_t rdx_3 = ((arg2[0x18] ^ rcx_3) & 4) ^ rcx_3
arg1[0x18] = rdx_3
arg1[0x18] = ((arg2[0x18] ^ rdx_3) & 8) ^ rdx_3
arg1[0x1a].b = arg2[0x1a].b
*(arg1 + 0x70) = *(arg2 + 0x70)
void* rax_21 = *(arg2 + 0x78)
*(arg1 + 0x78) = rax_21

if (rax_21 != 0)
    *(rax_21 + 8) += 1

*(arg1 + 0x80) = *(arg2 + 0x80)
void* rax_23 = *(arg2 + 0x88)
*(arg1 + 0x88) = rax_23

if (rax_23 != 0)
    *(rax_23 + 8) += 1

*(arg1 + 0x90) = *(arg2 + 0x90)
arg1[0x26] = arg2[0x26]
arg1[0x27] = arg2[0x27]
*(arg1 + 0xa0) = *(arg2 + 0xa0)
void* rax_27 = *(arg2 + 0xa8)
*(arg1 + 0xa8) = rax_27

if (rax_27 != 0)
    *(rax_27 + 8) += 1

*(arg1 + 0xb0) = *(arg2 + 0xb0)
void* rax_29 = *(arg2 + 0xb8)
*(arg1 + 0xb8) = rax_29

if (rax_29 != 0)
    *(rax_29 + 8) += 1

arg1[0x30] = arg2[0x30]
return arg1
