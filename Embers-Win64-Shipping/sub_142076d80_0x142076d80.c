// 函数: sub_142076d80
// 地址: 0x142076d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
void* rax_3 = *(arg2 + 0x18)
*(arg1 + 0x18) = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

*(arg1 + 0x20) ^= (*(arg1 + 0x20) ^ *(arg2 + 0x20)) & 1
int32_t rcx_3 = ((*(arg1 + 0x20) ^ *(arg2 + 0x20)) & 2) ^ *(arg1 + 0x20)
*(arg1 + 0x20) = rcx_3
int32_t rdx_3 = ((rcx_3 ^ *(arg2 + 0x20)) & 4) ^ rcx_3
*(arg1 + 0x20) = rdx_3
*(arg1 + 0x20) = ((rdx_3 ^ *(arg2 + 0x20)) & 8) ^ rdx_3
*(arg1 + 0x28) = *(arg2 + 0x28)
void* rax_12 = *(arg2 + 0x30)
*(arg1 + 0x30) = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

*(arg1 + 0x38) = *(arg2 + 0x38)
void* rax_14 = *(arg2 + 0x40)
*(arg1 + 0x40) = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

*(arg1 + 0x48) = *(arg2 + 0x48)
void* rax_16 = *(arg2 + 0x50)
*(arg1 + 0x50) = rax_16

if (rax_16 != 0)
    *(rax_16 + 8) += 1

arg1[0x58] = arg2[0x58]
return arg1
