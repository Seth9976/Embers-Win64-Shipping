// 函数: sub_140844740
// 地址: 0x140844740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].b = arg2[1].b
int32_t rax_1 = *(arg1 + 0x24)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x24) ^= (rax_1 ^ *(arg2 + 0x24)) & 1
int32_t rcx_3 = ((*(arg1 + 0x24) ^ *(arg2 + 0x24)) & 2) ^ *(arg1 + 0x24)
*(arg1 + 0x24) = rcx_3
*(arg1 + 0x24) = ((rcx_3 ^ *(arg2 + 0x24)) & 4) ^ rcx_3
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x38) = 0
uint32_t count = arg2[4].d
int64_t rbp = *(arg2 + 0x38)
arg1[4].d = count

if (count != 0)
    sub_1405da9e0(arg1 + 0x38, count, 0)
    memcpy(*(arg1 + 0x38), rbp, count)
else
    *(arg1 + 0x44) = 0

return arg1
