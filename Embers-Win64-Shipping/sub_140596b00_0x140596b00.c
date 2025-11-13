// 函数: sub_140596b00
// 地址: 0x140596b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = *(arg2 + 8)
void* rax_1 = *(arg2 + 0x10)
*(arg1 + 0x10) = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[0x20] = 0

if (arg2[0x20] != 0)
    *(arg1 + 0x18) = *(arg2 + 0x18)
    arg1[0x20] = 1

*(arg1 + 0x28) = *(arg2 + 0x28)
void* rax_4 = *(arg2 + 0x30)
*(arg1 + 0x30) = rax_4

if (rax_4 != 0)
    *(rax_4 + 0xc) += 1

*(arg1 + 0x38) = *(arg2 + 0x38)
void* rax_6 = *(arg2 + 0x40)
*(arg1 + 0x40) = rax_6

if (rax_6 != 0)
    *(rax_6 + 0xc) += 1

*(arg1 + 0x48) = *(arg2 + 0x48)
void* rax_8 = *(arg2 + 0x50)
*(arg1 + 0x50) = rax_8

if (rax_8 != 0)
    *(rax_8 + 0xc) += 1

*(arg1 + 0x58) = *(arg2 + 0x58)
void* rax_10 = *(arg2 + 0x60)
*(arg1 + 0x60) = rax_10

if (rax_10 != 0)
    *(rax_10 + 0xc) += 1

*(arg1 + 0x68) = *(arg2 + 0x68)
void* rax_12 = *(arg2 + 0x70)
*(arg1 + 0x70) = rax_12

if (rax_12 != 0)
    *(rax_12 + 0xc) += 1

*(arg1 + 0x78) = *(arg2 + 0x78)
void* rax_14 = *(arg2 + 0x80)
*(arg1 + 0x80) = rax_14

if (rax_14 != 0)
    *(rax_14 + 0xc) += 1

*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x90) = *(arg2 + 0x90)
void* rax_17 = *(arg2 + 0x98)
*(arg1 + 0x98) = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1

*(arg1 + 0xa0) = *(arg2 + 0xa0)
void* rax_19 = *(arg2 + 0xa8)
*(arg1 + 0xa8) = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

arg1[0xb0] = arg2[0xb0]
arg1[0xb1] = arg2[0xb1]
arg1[0xb2] = arg2[0xb2]
arg1[0xb3] = arg2[0xb3]
*(arg1 + 0xb4) ^= (*(arg1 + 0xb4) ^ *(arg2 + 0xb4)) & 1
int32_t rax_27 = *(arg1 + 0xb4)
int32_t rcx_3 = ((*(arg2 + 0xb4) ^ rax_27) & 2) ^ rax_27
*(arg1 + 0xb4) = rcx_3
int32_t rax_31 = ((rcx_3 ^ *(arg2 + 0xb4)) & 4) ^ rcx_3
*(arg1 + 0xb4) = rax_31
int32_t rcx_7 = ((rax_31 ^ *(arg2 + 0xb4)) & 8) ^ rax_31
*(arg1 + 0xb4) = rcx_7
int32_t rax_35 = ((rcx_7 ^ *(arg2 + 0xb4)) & 0x10) ^ rcx_7
*(arg1 + 0xb4) = rax_35
int32_t rcx_11 = ((rax_35 ^ *(arg2 + 0xb4)) & 0x20) ^ rax_35
*(arg1 + 0xb4) = rcx_11
int32_t rdx_3 = ((rcx_11 ^ *(arg2 + 0xb4)) & 0x40) ^ rcx_11
*(arg1 + 0xb4) = rdx_3
*(arg1 + 0xb4) = ((rdx_3 ^ *(arg2 + 0xb4)) & 0x80) ^ rdx_3
return arg1
