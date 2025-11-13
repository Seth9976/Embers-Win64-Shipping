// 函数: sub_142b98db0
// 地址: 0x142b98db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_10 = *(arg1 + 0x3c)

if (arg2 == 0)
    int32_t r8_4 = *(arg1 + 0x38)
    int32_t rdx_2 = *(arg1 + 0x30)
    *(arg1 + 0x44) &= 0xffffffc0
    *(arg1 + 0x48) &= 0xffffffc0
    int32_t r8_5 = r8_4 & 0xffffffc0
    int32_t rcx_6 = rax_10 - *(arg1 + 0x34)
    *(arg1 + 0x38) = r8_5
    int32_t rax_3 = (rax_10 + 0x3f) & 0xffffffc0
    *(arg1 + 0x3c) = rax_3
    *(arg1 + 0x30) = ((rdx_2 + 0x3f + r8_4) & 0xffffffc0) - r8_5
    *(arg1 + 0x34) = rax_3 - (rcx_6 & 0xffffffc0)
else
    int32_t r9_1 = *(arg1 + 0x44)
    int32_t rdx = *(arg1 + 0x48)
    *(arg1 + 0x38) &= 0xffffffc0
    *(arg1 + 0x3c) = (rax_10 + 0x3f) & 0xffffffc0
    int32_t r9_2 = r9_1 & 0xffffffc0
    int32_t r8_2 = (r9_1 + 0x3f + *(arg1 + 0x30)) & 0xffffffc0
    int32_t rcx_1 = *(arg1 + 0x34) + 0x3f
    *(arg1 + 0x44) = r9_2
    int32_t rdx_1 = rdx & 0xffffffc0
    *(arg1 + 0x30) = r8_2 - r9_2
    *(arg1 + 0x48) = rdx_1
    *(arg1 + 0x34) = ((rcx_1 + rdx) & 0xffffffc0) - rdx_1

*(arg1 + 0x40) = (*(arg1 + 0x40) + 0x20) & 0xffffffc0
int32_t result = (*(arg1 + 0x4c) + 0x20) & 0xffffffc0
*(arg1 + 0x4c) = result
return result
